/*
 * NoneTouchState.h
 *
 *  Created on: Feb 28, 2016
 *      Author: KienDu
 */

#ifndef STATE_NONETOUCHSTATE_H_
#define STATE_NONETOUCHSTATE_H_

#include "TouchState.h"

class NoneTouchState : public TouchState {
public:

	virtual void touchDown();
	virtual void touchUp();

	NoneTouchState(MainScene* scene);
	virtual ~NoneTouchState();
};

#endif /* STATE_NONETOUCHSTATE_H_ */
