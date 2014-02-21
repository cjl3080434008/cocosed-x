#ifndef  _UTIL_H_
#define  _UTIL_H_
#include "cocos2d.h"
using namespace cocos2d;

namespace util{

//从cocos2d-x坐标转换为Tilemap坐标
CCPoint tileCoordForPosition(CCTMXTiledMap *map, CCPoint position);
//从Tilemap坐标转换为cocos2d-x坐标
CCPoint positionForTileCoord(CCTMXTiledMap *map, CCPoint tileCoord);
}

#endif