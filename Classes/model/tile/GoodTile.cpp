/*
 * GoodTile.cpp
 *
 *  Created on: Mar 12, 2016
 *      Author: KienDu
 */

#include "GoodTile.h"

const std::string GOOD_TILE_FILE_NAME = "good_tile.png";

GoodTile* GoodTile::create() {
	GoodTile* goodTile = new GoodTile();
	if (goodTile && goodTile->init()) {
		goodTile->autorelease();
		return goodTile;
	}
	CC_SAFE_DELETE(goodTile);
	return nullptr;
}

bool GoodTile::init(){
	if (Sprite::initWithFile(GOOD_TILE_FILE_NAME)){

		// TODO

		return true;
	}
	return false;
}

GoodTile::GoodTile() {
	// TODO Auto-generated constructor stub

}

GoodTile::~GoodTile() {
	// TODO Auto-generated destructor stub
}

