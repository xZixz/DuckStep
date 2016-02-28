/*
 * DoubleTouchState.h
 *
 *  Created on: Feb 28, 2016
 *      Author: KienDu
 */

#ifndef STATE_DOUBLETOUCHSTATE_H_
#define STATE_DOUBLETOUCHSTATE_H_

#include "TouchState.h"

class DoubleTouchState : public TouchState {
public:

	virtual void touchDown();
	virtual void touchUp();

	DoubleTouchState(MainScene* scene);
	virtual ~DoubleTouchState();
};

#endif /* STATE_DOUBLETOUCHSTATE_H_ */
