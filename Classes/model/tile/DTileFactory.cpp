/*
 * DTileFactory.cpp
 *
 *  Created on: Mar 20, 2016
 *      Author: KienDu
 */

#include "DTileFactory.h"

#include "BadTile.h"
#include "GoodTile.h"
#include "../../Constants.h"

#define ALL_BAD_ROW_MORE_CHANCE_NUM 3

const std::vector<std::vector<DTile::TileType>> DTileFactory::s2tileSets  = {
				{DTile::GOOD_TILE, DTile::GOOD_TILE},
				{DTile::GOOD_TILE, DTile::BAD_TILE},
				{DTile::BAD_TILE, DTile::GOOD_TILE},
				{DTile::BAD_TILE, DTile::BAD_TILE},
		};

DTile* DTileFactory::createTile(DTile::TileType tileType) {
	switch (tileType) {
	case DTile::BAD_TILE:
		return BadTile::create();
		break;
	case DTile::GOOD_TILE:
		return GoodTile::create();
		break;
	default:
		return nullptr;
		break;
	}
}

std::vector<DTile::TileType> DTileFactory::generateTileSet(int setSize) {
	std::vector<DTile::TileType> result;
	switch (setSize) {
	case -1:
		result = {DTile::BAD_TILE,DTile::GOOD_TILE,DTile::GOOD_TILE, DTile::BAD_TILE};
		break;
	default:
		int lastChosenIndex = -1;
		int rowNum = (setSize - 1)/COLUMN_NUM + 1;
		for (int i = 0; i < rowNum; i++) {
			int index;
			if (lastChosenIndex == s2tileSets.size() - 1 || i == 0) {
				index = rand() % (s2tileSets.size() - 1);
			} else {
				index = rand() % (s2tileSets.size() + ALL_BAD_ROW_MORE_CHANCE_NUM);
				if (index > s2tileSets.size() - 1) {
					index = s2tileSets.size() - 1;
				}
			}
			lastChosenIndex = index;
			for (DTile::TileType tileType : s2tileSets.at(index)) {
				result.push_back(tileType);
			}
		}
		break;
	}
	return result;
}

DTileFactory::DTileFactory() {
	// TODO Auto-generated constructor stub

}

DTileFactory::~DTileFactory() {
	// TODO Auto-generated destructor stub
}

