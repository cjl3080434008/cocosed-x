/*

void GameLayer::ccTouchesBegan(CCSet* pTouches, CCEvent* event) {

	CCSetIterator i;
	CCTouch* touch;
	CCPoint tap;
	GameSprite * player;

	//loop through all beginning touches
	for( i = pTouches->begin(); i != pTouches->end(); i++) {
		touch = (CCTouch*) (*i);

		if(touch) {
			//get location in OpenGL view
			tap = touch->getLocation();

			//loop through players and check to see if touch is landing on one of them
			for (int p = 0; p < 2; p++) {
				player = (GameSprite *) _players->objectAtIndex(p);

				if (player->boundingBox().containsPoint(tap)) {
					//store player's touch 
					player->setTouch(touch);
				}
			}
		}
	}
}

void GameLayer::ccTouchesMoved(CCSet* pTouches, CCEvent* event) {

	CCSetIterator i;
	CCTouch* touch;
	CCPoint tap;
	GameSprite * player;

	//loop through all moving touches
	for( i = pTouches->begin(); i != pTouches->end(); i++) {
		touch = (CCTouch*) (*i);

		if(touch) {
			tap = touch->getLocation();

			for (int p = 0; p < _players->count(); p++) {

				player = (GameSprite *) _players->objectAtIndex(p);
				//if touch belongs to player
				if (player->getTouch() != NULL && player->getTouch() == touch) {
					CCPoint nextPosition = tap;

					//keep player inside screen
					if (nextPosition.x < player->radius())
						nextPosition.x = player->radius();
					if (nextPosition.x > _screenSize.width - player->radius())
						nextPosition.x = _screenSize.width - player->radius();
					if (nextPosition.y < player->radius())
						nextPosition.y  = player->radius();
					if (nextPosition.y > _screenSize.height - player->radius())
						nextPosition.y = _screenSize.height - player->radius();

					//keep player inside its court
					if (player->getPositionY() < _screenSize.height * 0.5f) {
						if (nextPosition.y > _screenSize.height * 0.5 - player->radius()) {
							nextPosition.y = _screenSize.height * 0.5 - player->radius();
						}
					} else {
						if (nextPosition.y < _screenSize.height * 0.5 + player->radius()) {
							nextPosition.y = _screenSize.height * 0.5 + player->radius();
						}
					}

					player->setNextPosition(nextPosition);
					player->setVector(ccp(tap.x - player->getPositionX(), tap.y - player->getPositionY()));
				}	 
			}
		}
	}
}

void GameLayer::ccTouchesEnded(CCSet* pTouches, CCEvent* event) {

	CCSetIterator i;
	CCTouch* touch;
	GameSprite * player;

	//loop through all ending touches
	for( i = pTouches->begin(); i != pTouches->end(); i++) {
		touch = (CCTouch*) (*i);

		if(touch) {
			for (int p = 0; p < _players->count(); p++) {
				player = (GameSprite *) _players->objectAtIndex(p);
				if (player->getTouch() != NULL && player->getTouch() == touch) {
					//if touch ending belongs to this player, clear it
					player->setTouch(NULL);
					player->setVector(CCPointZero);
				}
			}
		}
	}

}


*/