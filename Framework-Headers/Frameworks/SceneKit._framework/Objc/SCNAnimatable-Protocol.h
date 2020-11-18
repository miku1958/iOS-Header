//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/NSObject-Protocol.h>

@class CAAnimation, NSArray, NSString;

@protocol SCNAnimatable <NSObject>

@property (readonly) NSArray *animationKeys;

- (void)addAnimation:(CAAnimation *)arg1 forKey:(NSString *)arg2;
- (CAAnimation *)animationForKey:(NSString *)arg1;
- (BOOL)isAnimationForKeyPaused:(NSString *)arg1;
- (void)pauseAnimationForKey:(NSString *)arg1;
- (void)removeAllAnimations;
- (void)removeAnimationForKey:(NSString *)arg1;
- (void)removeAnimationForKey:(NSString *)arg1 fadeOutDuration:(double)arg2;
- (void)resumeAnimationForKey:(NSString *)arg1;
- (void)setSpeed:(double)arg1 forAnimationKey:(NSString *)arg2;
@end
