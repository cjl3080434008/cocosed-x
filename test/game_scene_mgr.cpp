#include "game_scene_mgr.h"
#include "global_param.h"
#include "HelloWorldLayer.h"
#include "LayerSwap.h"
using namespace cocos2d;

bool game_scene_mgr::init()
{
	// new layers
	HelloWorld *bg_layer = HelloWorld::create();
	this->addChild(bg_layer, layer_z_order_bg, layer_tag_bg);
	bg_layer->set_scene_mgr(this);

	return true;
}

void game_scene_mgr::swap_scene()
{
	this->removeChildByTag(layer_tag_bg, true);
	LayerSwap *new_layer = LayerSwap::create();
	this->addChild(new_layer, layer_z_order_bg, layer_tag_bg);
	printf("swap");
	new_layer->set_scene_mgr(this);
}