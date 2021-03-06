//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CAAnimation.h>

@class NSArray;

@interface CAAnimation (SceneKitAdditions)

@property (copy, nonatomic) NSArray *animationEvents;
@property double fadeInDuration;
@property double fadeOutDuration;
@property BOOL usesSceneTimeBase;

+ (id)animationWithSCNAnimation:(id)arg1;
- (BOOL)commitsOnCompletion;
- (void)setCommitsOnCompletion:(BOOL)arg1;
@end

