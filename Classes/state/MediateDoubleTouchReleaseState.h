/*
 * MediateDoubleTouchReleaseState.h
 *
 *  Created on: Feb 28, 2016
 *      Author: KienDu
 */

#ifndef STATE_MEDIATEDOUBLETOUCHRELEASESTATE_H_
#define STATE_MEDIATEDOUBLETOUCHRELEASESTATE_H_

#include "TouchState.h"

class MediateDoubleTouchReleaseState : public TouchState {
public:

	virtual void touchDown();
	virtual void touchUp();

	MediateDoubleTouchReleaseState(MainScene* scene);
	virtual ~MediateDoubleTouchReleaseState();
};

#endif /* STATE_MEDIATEDOUBLETOUCHRELEASESTATE_H_ */
