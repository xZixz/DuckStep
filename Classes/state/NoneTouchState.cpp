/*
 * NoneTouchState.cpp
 *
 *  Created on: Feb 28, 2016
 *      Author: KienDu
 */

#include "NoneTouchState.h"

#include "../scene/MainScene.h"
#include "SingleTouchState.h"

void NoneTouchState::touchDown() {
	mScene->setTouchState(new SingleTouchState(mScene));
	delete this;
}

void NoneTouchState::touchUp() {
	// nothing to do here
}

NoneTouchState::NoneTouchState(MainScene* scene):
TouchState(scene)
{
	// TODO Auto-generated constructor stub

}

NoneTouchState::~NoneTouchState() {
	// TODO Auto-generated destructor stub
}

