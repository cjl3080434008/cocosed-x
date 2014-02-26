#pragma once
#include "cocos2d.h"

class game_scene_mgr: public cocos2d::CCScene
{
public:
	virtual bool init();

	CREATE_FUNC(game_scene_mgr);

	void swap_scene();
};