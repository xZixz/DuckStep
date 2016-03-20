/*
 * BadTile.h
 *
 *  Created on: Mar 12, 2016
 *      Author: KienDu
 */

#ifndef SCENE_MODEL_TILE_BADTILE_H_
#define SCENE_MODEL_TILE_BADTILE_H_

#include "DTile.h"

class BadTile : public DTile {
public:

	static BadTile* create();
	virtual bool init();

	BadTile();
	virtual ~BadTile();
};

#endif /* SCENE_MODEL_TILE_BADTILE_H_ */
