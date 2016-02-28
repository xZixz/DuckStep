/*
 * DoubleTouchState.cpp
 *
 *  Created on: Feb 28, 2016
 *      Author: KienDu
 */

#include "DoubleTouchState.h"

#include "../scene/MainScene.h"
#include "MediateDoubleTouchReleaseState.h"

void DoubleTouchState::touchDown() {
	// nothing to do here
}

void DoubleTouchState::touchUp() {
	mScene->setTouchState(new MediateDoubleTouchReleaseState(mScene));
	delete this;
}

DoubleTouchState::DoubleTouchState(MainScene* scene):
TouchState(scene)
{
	// TODO Auto-generated constructor stub

}

DoubleTouchState::~DoubleTouchState() {
	// TODO Auto-generated destructor stub
}

