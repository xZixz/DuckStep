/*
 * GoodTile.cpp
 *
 *  Created on: Mar 12, 2016
 *      Author: KienDu
 */

#include "GoodTile.h"

GoodTile* GoodTile::create() {
	GoodTile* goodTile = new GoodTile();
	if (goodTile && goodTile->init()) {
		goodTile->autorelease();
		return goodTile;
	}
	CC_SAFE_DELETE(goodTile);
	return nullptr;
}

GoodTile::GoodTile() {
	// TODO Auto-generated constructor stub

}

GoodTile::~GoodTile() {
	// TODO Auto-generated destructor stub
}

