/*
 * BadTile.cpp
 *
 *  Created on: Mar 12, 2016
 *      Author: KienDu
 */

#include "BadTile.h"

const std::string BAD_TILE_FILE_NAME = "bad_tile.png";

BadTile* BadTile::create() {
	BadTile* badTile = new BadTile();
	if (badTile && badTile->init()) {
		badTile->autorelease();
		return badTile;
	}
	CC_SAFE_DELETE(badTile);
	return nullptr;
}

bool BadTile::init() {
	if (Sprite::initWithFile(BAD_TILE_FILE_NAME)) {
		// TODO

		return true;
	}
	return false;
}

BadTile::BadTile() {
	// TODO Auto-generated constructor stub

}

BadTile::~BadTile() {
	// TODO Auto-generated destructor stub
}

