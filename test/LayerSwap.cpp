#include "LayerSwap.h"

using namespace cocos2d;

bool LayerSwap::init()
{
	if (!CCLayer::init())
	{
		return false;
	}

	CCSize p_visible_size = CCDirector::sharedDirector()->getVisibleSize();
	CCPoint p_origin_point = CCDirector::sharedDirector()->getVisibleOrigin();
	
	CCLabelTTF* pLabel = CCLabelTTF::create("SWAP Layer !!!! cjl", "Arial", 24);
	pLabel->setPosition(ccp(p_origin_point.x + p_visible_size.width/2,
		p_origin_point.y + p_visible_size.height - pLabel->getContentSize().height));
	this->addChild(pLabel, 1);
	
	CCSprite* pSprite = CCSprite::create("court.png");
	// position the sprite on the center of the screen
	pSprite->setPosition(ccp(p_visible_size.width/2 + p_origin_point.x, p_visible_size.height/2 + p_origin_point.y));
	// add the sprite as a child to this layer
	this->addChild(pSprite, 0);

	return true;
}