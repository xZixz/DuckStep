/*
 * SingleTouchState.h
 *
 *  Created on: Feb 28, 2016
 *      Author: KienDu
 */

#ifndef STATE_SINGLETOUCHSTATE_H_
#define STATE_SINGLETOUCHSTATE_H_

#include "TouchState.h"

class SingleTouchState : public TouchState {
public:

	virtual void touchDown();
	virtual void touchUp();

	SingleTouchState(MainScene* scene);
	virtual ~SingleTouchState();
};

#endif /* STATE_SINGLETOUCHSTATE_H_ */
