//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityRingsUI/ARUIRingGroupAnimationDelegate-Protocol.h>

@class CAMediaTimingFunction, NSMutableSet, NSString;

@interface ARUIRingGroupAnimationState : NSObject <ARUIRingGroupAnimationDelegate>
{
    double _duration;
    CAMediaTimingFunction *_timingFunction;
    CDUnknownBlockType _completion;
    ARUIRingGroupAnimationState *_nextAnimationState;
    NSMutableSet *_trackedAnimations;
}

@property (copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) ARUIRingGroupAnimationState *nextAnimationState; // @synthesize nextAnimationState=_nextAnimationState;
@property (readonly) Class superclass;
@property (strong, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
@property (strong, nonatomic) NSMutableSet *trackedAnimations; // @synthesize trackedAnimations=_trackedAnimations;

+ (id)currentAnimationState;
+ (void)popAnimationState;
+ (void)pushAnimationState:(id)arg1;
- (void).cxx_destruct;
- (void)addAnimation:(id)arg1;
- (void)animationDidComplete:(id)arg1;
- (id)init;

@end
