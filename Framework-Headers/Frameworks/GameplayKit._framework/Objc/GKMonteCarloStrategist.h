//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameplayKit/GKStrategist-Protocol.h>

@class NSString;
@protocol GKGameModel, GKRandom;

@interface GKMonteCarloStrategist : NSObject <GKStrategist>
{
    struct GKCMonteCarloStrategist *_monteCarloStrategist;
}

@property (nonatomic) unsigned long long budget;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long explorationParameter;
@property (strong, nonatomic) id<GKGameModel> gameModel;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<GKRandom> randomSource;
@property (readonly) Class superclass;

- (id)bestMoveForActivePlayer;
- (void)dealloc;
- (id)init;
- (BOOL)validateGameModel:(id)arg1;
- (BOOL)validateRandomSource;

@end

