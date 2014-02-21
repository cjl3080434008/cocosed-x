#ifndef __GAME_LAYER_H__
#define __GAME_LAYER_H__

#include "cocos2d.h"
#include "MTGame.h"

using namespace cocos2d;

class GameMap;
class Hero;

// 对于游戏效果图层的图层控制类，用于显示攻击的特效等
class GameLayer : public CCLayer
{
public:
	GameLayer(void);
	~GameLayer(void);

	virtual bool init();

	void update(ccTime dt);
	void setSceneScrollPosition(CCPoint position);
	//显示tip
	void showTip(const char *tip, CCPoint position);

	LAYER_NODE_FUNC(GameLayer);
protected:
	GameMap *map;
	Hero *hero;
	void onShowTipDone(CCNode* pSender);
};

#endif