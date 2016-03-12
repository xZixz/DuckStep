/*
 * DTile.cpp
 *
 *  Created on: Mar 12, 2016
 *      Author: KienDu
 */

#include "DTile.h"

#include "BadTile.h"
#include "GoodTile.h"

DTile* DTile::createTile(int tileType) {
	switch (tileType) {
	case BAD_TILE:
		return BadTile::create();
		break;
	case GOOD_TILE:
		return GoodTile::create();
		break;
	default:
		return nullptr;
		break;
	}
}

DTile::DTile() {
	// TODO Auto-generated constructor stub

}

DTile::~DTile() {
	// TODO Auto-generated destructor stub
}

