/*
 * MainScene.cpp
 *
 *  Created on: Feb 28, 2016
 *      Author: KienDu
 */

#include "MainScene.h"

#include "../state/NoneTouchState.h"

Scene* MainScene::createScene() {
	auto scene = Scene::create();
	auto layer = MainScene::create();
	scene->addChild(layer);
	return scene;
}

MainScene* MainScene::create() {
	auto mainScene = new MainScene();
	if (mainScene && mainScene->init()) {
		mainScene->autorelease();
		return mainScene;
	}
	return nullptr;
}

bool MainScene::init() {
	if (Layer::init()) {
		enableTouches();

		// Initialize touch state
		mTouchState = new NoneTouchState(this);

		return true;
	}
	return false;
}

void MainScene::enableTouches() {
	auto dispatcher = Director::getInstance()->getEventDispatcher();
	auto listener = EventListenerTouchAllAtOnce::create();
	listener->onTouchesBegan = CC_CALLBACK_2(MainScene::onTouchesBegan, this);
	listener->onTouchesEnded = CC_CALLBACK_2(MainScene::onTouchesEnded, this);
	dispatcher->addEventListenerWithSceneGraphPriority(listener, this);
}

void MainScene::onTouchesBegan(const std::vector<Touch*> touches, Event* event) {
	Touch* touch = touches.front();
	if (touch->getID() < 2) {
		mTouchState->touchDown();
	}
}

void MainScene::onTouchesEnded(const std::vector<Touch*> touches, Event* event) {
	Touch* touch = touches.front();
	if (touch->getID() < 2) {
		mTouchState->touchUp();
	}
}

void MainScene::setTouchState(TouchState* touchState) {
	mTouchState = touchState;
}

void MainScene::onSingleTouch() {
	log("SINGLE");
}

void MainScene::onDoubleTouch() {
	log("DOUBLE");
}

MainScene::MainScene():
mTouchState(nullptr)
{
	// TODO Auto-generated constructor stub

}

MainScene::~MainScene()
{
	// TODO Auto-generated destructor stub
}

