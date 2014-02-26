#pragma once
#include "cocos2d.h"
class game_scene_mgr;

class LayerSwap:public cocos2d::CCLayer
{
public:
	virtual bool init();  

	CREATE_FUNC(LayerSwap);
	void set_scene_mgr(game_scene_mgr *scene_mgr){ _scene_mgr = scene_mgr; }
private:
	game_scene_mgr *_scene_mgr;
};