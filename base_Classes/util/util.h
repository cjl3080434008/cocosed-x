#ifndef  _UTIL_H_
#define  _UTIL_H_
#include "cocos2d.h"
using namespace cocos2d;

namespace util{

//��cocos2d-x����ת��ΪTilemap����
CCPoint tileCoordForPosition(CCTMXTiledMap *map, CCPoint position);
//��Tilemap����ת��Ϊcocos2d-x����
CCPoint positionForTileCoord(CCTMXTiledMap *map, CCPoint tileCoord);
}

#endif