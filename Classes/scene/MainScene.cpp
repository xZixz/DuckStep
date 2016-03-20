/*
 * MainScene.cpp
 *
 *  Created on: Feb 28, 2016
 *      Author: KienDu
 */

#include "MainScene.h"

#include "../model/tile/DTile.h"
#include "../model/tile/DTileFactory.h"
#include "../state/NoneTouchState.h"
#include "../Constants.h"
#include "../Utils.h"

#define TILE_HEIGHT 30
#define TILE_WIDTH 30

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
	if (LayerColor::initWithColor(Color4B(222,215,197,255))) {

		// initialization
		enableTouches();
		mScreenSize = Director::getInstance()->getWinSize();
		mBaseGameNode = Node::create();
		addChild(mBaseGameNode);

		mTouchCountLabel = Label::createWithTTF(DUtils::to_string(mTouchCount), "fonts/Marker Felt.ttf", 24);
		mTouchCountLabel->setPosition(mScreenSize / 2);
		addChild(mTouchCountLabel);

		srand(time(nullptr));

		// Initialize touch state
		mTouchState = new NoneTouchState(this);

		generateTiles();

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
	// 2 touches only
	if (touch->getID() < 2) {
		mTouchState->touchDown();
	}
}

void MainScene::onTouchesEnded(const std::vector<Touch*> touches, Event* event) {
	Touch* touch = touches.front();
	// 2 touches only
	if (touch->getID() < 2) {
		mTouchState->touchUp();
	}
}

void MainScene::setTouchState(TouchState* touchState) {
	mTouchState = touchState;
}

void MainScene::onSingleTouch() {
	// regenerate tiles

	mBaseGameNode->removeAllChildren();
	mLastTileCreatedIndex = 0;
	generateTiles();
	mTouchCount++;
	mTouchCountLabel->setString(DUtils::to_string(mTouchCount));

	log("SINGLE");
}

void MainScene::onDoubleTouch() {
	log("DOUBLE");
}

void MainScene::generateTiles() {
	// TODO
	std::vector<DTile::TileType> tileTypes = DTileFactory::generateTileSet(24);
	for (DTile::TileType tileType : tileTypes) {
		DTile* aTile = DTileFactory::createTile(tileType);
		Vec2 pos;
		pos.x = mScreenSize.width / 2 + ((mLastTileCreatedIndex % COLUMN_NUM) - (float)COLUMN_NUM / 2) * TILE_WIDTH;
		pos.y = (mLastTileCreatedIndex / COLUMN_NUM + 0.5f) * TILE_HEIGHT;
		aTile->setPosition(pos);
		mBaseGameNode->addChild(aTile);
		mLastTileCreatedIndex ++;
	}
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

