/*
 * MainScene.h
 *
 *  Created on: Feb 28, 2016
 *      Author: KienDu
 */

#ifndef SCENE_MAINSCENE_H_
#define SCENE_MAINSCENE_H_

#include "cocos2d.h"
#include "../state/TouchState.h"

USING_NS_CC;

class MainScene : public LayerColor {
public:

	static Scene* createScene();
	static MainScene* create();

	void enableTouches();
	virtual void onTouchesBegan(const std::vector<Touch*> touches, Event* event);
	virtual void onTouchesEnded(const std::vector<Touch*> touches, Event* event);

	virtual bool init();
	void setTouchState(TouchState* touchState);
	void onSingleTouch();
	void onDoubleTouch();

	void generateTiles();

	MainScene();
	virtual ~MainScene();

	TouchState* mTouchState;

private:

	Label* mTouchCountLabel;
	int mTouchCount;
	Size mScreenSize;
	Node* mBaseGameNode;
	int mLastTileCreatedIndex;
};

#endif /* SCENE_MAINSCENE_H_ */
