#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"

class game_scene_mgr;

class HelloWorld : public cocos2d::CCLayer
{
public:
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();  

    // a selector callback
    void menuCloseCallback(CCObject* pSender);
    
    // implement the "static node()" method manually
    CREATE_FUNC(HelloWorld);

	void set_scene_mgr(game_scene_mgr *scene_mgr){ _scene_mgr = scene_mgr; }
private:
	game_scene_mgr *_scene_mgr;
};

#endif // __HELLOWORLD_SCENE_H__
