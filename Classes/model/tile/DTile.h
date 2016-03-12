/*
 * DTile.h
 *
 *  Created on: Mar 12, 2016
 *      Author: KienDu
 */

#ifndef SCENE_MODEL_TILE_DTILE_H_
#define SCENE_MODEL_TILE_DTILE_H_

#include "cocos2d.h"

USING_NS_CC;

class DTile : public Sprite {
public:

	enum {
		BAD_TILE,
		GOOD_TILE
	};

	static DTile* createTile(int tileType);

	DTile();
	virtual ~DTile();
};

#endif /* SCENE_MODEL_TILE_DTILE_H_ */
