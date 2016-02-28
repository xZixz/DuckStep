/*
 * TouchState.h
 *
 *  Created on: Feb 28, 2016
 *      Author: KienDu
 */

#ifndef STATE_TOUCHSTATE_H_
#define STATE_TOUCHSTATE_H_

class MainScene;

class TouchState {
public:

	virtual void touchDown() = 0;
	virtual void touchUp() = 0;

	TouchState(MainScene* scene);
	TouchState();
	virtual ~TouchState();

	MainScene* mScene;
};

#endif /* STATE_TOUCHSTATE_H_ */
