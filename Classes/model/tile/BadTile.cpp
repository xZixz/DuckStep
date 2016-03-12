/*
 * BadTile.cpp
 *
 *  Created on: Mar 12, 2016
 *      Author: KienDu
 */

#include "BadTile.h"

BadTile* BadTile::create() {
	BadTile* badTile = new BadTile();
	if (badTile && badTile->init()) {
		badTile->autorelease();
		return badTile;
	}
	CC_SAFE_DELETE(badTile);
	return nullptr;
}

BadTile::BadTile() {
	// TODO Auto-generated constructor stub

}

BadTile::~BadTile() {
	// TODO Auto-generated destructor stub
}

