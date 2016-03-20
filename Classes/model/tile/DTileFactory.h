/*
 * DTileFactory.h
 *
 *  Created on: Mar 20, 2016
 *      Author: KienDu
 */

#ifndef MODEL_TILE_DTILEFACTORY_H_
#define MODEL_TILE_DTILEFACTORY_H_

#include "DTile.h"

class DTileFactory {
public:

	static const std::vector<std::vector<DTile::TileType>> s2tileSets;

	static DTile* createTile(DTile::TileType tileType);
	static std::vector<DTile::TileType> generateTileSet(int setSize);

	DTileFactory();
	virtual ~DTileFactory();
};

#endif /* MODEL_TILE_DTILEFACTORY_H_ */
