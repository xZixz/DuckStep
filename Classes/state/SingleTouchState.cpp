/*
 * SingleTouchState.cpp
 *
 *  Created on: Feb 28, 2016
 *      Author: KienDu
 */

#include "SingleTouchState.h"

#include "../scene/MainScene.h"
#include "DoubleTouchState.h"
#include "NoneTouchState.h"

void SingleTouchState::touchDown() {
	mScene->setTouchState(new DoubleTouchState(mScene));
	delete this;
}

void SingleTouchState::touchUp() {
	mScene->setTouchState(new NoneTouchState(mScene));
	mScene->onSingleTouch();
	delete this;
}

SingleTouchState::SingleTouchState(MainScene* scene):
TouchState(scene)
{
	// TODO Auto-generated constructor stub

}

SingleTouchState::~SingleTouchState() {
	// TODO Auto-generated destructor stub
}

