//
//  GameLayer.h
//  Score
//
//  Created by Mobile-X on 13. 6. 27..
//  Copyright 2013년 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"

// 메세지노드 추가
// 메세지노드 : 메시지노드에 메세지들이 나타 났다 사라지는 액션을 지정해놓고
// 안보이다가 특정조건에서 메세지노드에 있는 메세지가 나타나는 메서드를 실행시키면
// 화면에 메시지가 나타났다가 사라짐(콤보 등에 사용)

#import "MessageNode.h"//추가된 코드
#import "SimpleAudioEngine.h"

@interface GameLayer : CCLayer {
    int bulletCount;
    int score;//점수 저장위한 변수
    
    CCAnimate *sitAnimate;
    CCAnimate *smokeAnimate;
    CCAnimate *tailAnimate;
    CCSprite *gunSmoke;
    CCArray *birdArray;
    CCArray *sitPositions;
    
    CCSprite *ptBulletSprite;
    CCSprite *ptReloadSprite;
    CCProgressTimer *ptReload;
    CCProgressTimer *ptBullet;
    
    CCLabelTTF *lblScore;//화면에 점수를 나타낼 label
    
    MessageNode *message;//메세지노드
}

@property(nonatomic, retain) MessageNode *message;

+(CCScene *) scene;
-(CGPoint)getStartPosition;
@end

