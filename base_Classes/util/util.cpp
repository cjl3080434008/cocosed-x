#include "util/util.h"

namespace util{
CCPoint tileCoordForPosition(CCTMXTiledMap *map, CCPoint position)
{
	int x = position.x / map->getTileSize().width;
	int y = (((map->getMapSize().height - 1) * map->getTileSize().height) - position.y) / map->getTileSize().height;
	return ccp(x, y);
}

CCPoint positionForTileCoord(CCTMXTiledMap *map, CCPoint tileCoord)
{
	CCPoint pos =  ccp((tileCoord.x * map->getTileSize().width),
		((map->getMapSize().height - tileCoord.y - 1) * map->getTileSize().height));
	return pos;
}

}