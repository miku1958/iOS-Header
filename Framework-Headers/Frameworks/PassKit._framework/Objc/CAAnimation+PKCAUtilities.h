//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CAAnimation.h>

@interface CAAnimation (PKCAUtilities)
+ (id)pkui_shakeAnimation;
+ (id)pkui_shakeAnimationWithInitalOffest:(double)arg1 springStiffness:(double)arg2 springDamping:(double)arg3;
+ (id)pkui_smallShakeAnimation;
- (CDUnknownBlockType)pkui_completionHandler;
- (CDUnknownBlockType)pkui_didStartHandler;
- (void)pkui_setCompletionHandler:(CDUnknownBlockType)arg1;
- (void)pkui_setDidStartHandler:(CDUnknownBlockType)arg1;
@end
