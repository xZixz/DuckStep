/*
 * GoodTile.h
 *
 *  Created on: Mar 12, 2016
 *      Author: KienDu
 */

#ifndef SCENE_MODEL_TILE_GOODTILE_H_
#define SCENE_MODEL_TILE_GOODTILE_H_

#include "DTile.h"

class GoodTile : public DTile {
public:

	static GoodTile* create();
	virtual bool init();

	GoodTile();
	virtual ~GoodTile();
};

#endif /* SCENE_MODEL_TILE_GOODTILE_H_ */
