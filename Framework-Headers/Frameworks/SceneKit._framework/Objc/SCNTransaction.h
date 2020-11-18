//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SCNTransaction : NSObject
{
}

+ (double)animationDuration;
+ (id)animationTimingFunction;
+ (void)begin;
+ (void)commit;
+ (void)commitImmediate;
+ (CDUnknownBlockType)completionBlock;
+ (unsigned int)currentState;
+ (BOOL)disableActions;
+ (void)flush;
+ (BOOL)immediateMode;
+ (void)lock;
+ (void)postCommandWithContext:(void *)arg1 object:(id)arg2 applyBlock:(CDUnknownBlockType)arg3;
+ (void)postCommandWithContext:(void *)arg1 object:(id)arg2 keyPath:(id)arg3 applyBlock:(CDUnknownBlockType)arg4;
+ (void)setAnimationDuration:(double)arg1;
+ (void)setAnimationTimingFunction:(id)arg1;
+ (void)setCompletionBlock:(CDUnknownBlockType)arg1;
+ (void)setDisableActions:(BOOL)arg1;
+ (void)setImmediateMode:(BOOL)arg1;
+ (void)setValue:(id)arg1 forKey:(id)arg2;
+ (void)unlock;
+ (id)valueForKey:(id)arg1;
- (double)animationDuration;
- (id)animationTimingFunction;
- (void)begin;
- (void)commit;
- (BOOL)disableActions;
- (void)flush;
- (void)lock;
- (void)setAnimationDuration:(double)arg1;
- (void)setAnimationTimingFunction:(id)arg1;
- (void)setDisableActions:(BOOL)arg1;
- (void)unlock;

@end
