/*
 * MediateDoubleTouchReleaseState.cpp
 *
 *  Created on: Feb 28, 2016
 *      Author: KienDu
 */

#include "MediateDoubleTouchReleaseState.h"

#include "../scene/MainScene.h"
#include "DoubleTouchState.h"
#include "NoneTouchState.h"

void MediateDoubleTouchReleaseState::touchDown() {
	mScene->setTouchState(new DoubleTouchState(mScene));
	delete this;
}

void MediateDoubleTouchReleaseState::touchUp() {
	mScene->setTouchState(new NoneTouchState(mScene));
	mScene->onDoubleTouch();
	delete this;
}

MediateDoubleTouchReleaseState::MediateDoubleTouchReleaseState(MainScene* scene):
TouchState(scene)
{
	// TODO Auto-generated constructor stub

}

MediateDoubleTouchReleaseState::~MediateDoubleTouchReleaseState() {
	// TODO Auto-generated destructor stub
}

