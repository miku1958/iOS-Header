//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NSObject-Protocol.h>

@class CAAnimation;

@protocol CAAnimationDelegate <NSObject>

@optional
- (void)animationDidStart:(CAAnimation *)arg1;
- (void)animationDidStop:(CAAnimation *)arg1 finished:(BOOL)arg2;
@end

