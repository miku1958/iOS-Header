//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, UIViewAnimationState;

__attribute__((visibility("hidden")))
@interface UIViewAnimationBlockDelegate : NSObject
{
    BOOL _didBeginBlockAnimation;
    BOOL _allowUserInteraction;
    BOOL _isZeroDuration;
    BOOL _allowsUserInteractionToCutOffEndOfAnimation;
    BOOL _allowsHitTesting;
    BOOL _animationDidStopSent;
    CDUnknownBlockType _start;
    CDUnknownBlockType _completion;
    NSMutableArray *_systemPostAnimationActions;
    BOOL __forcingImmediateCompletion;
    UIViewAnimationState *_animationState;
}

@property (readonly, nonatomic) BOOL _allowsUserInteraction; // @synthesize _allowsUserInteraction=_allowUserInteraction;
@property (weak, nonatomic) UIViewAnimationState *_animationState; // @synthesize _animationState;
@property (nonatomic, setter=_setForcingImmediateCompletion:) BOOL _forcingImmediateCompletion; // @synthesize _forcingImmediateCompletion=__forcingImmediateCompletion;

+ (id)animationBlockDelegateWithDuration:(double)arg1 options:(unsigned long long)arg2 start:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)setAnimationBlockDelegateWithDuration:(double)arg1 options:(unsigned long long)arg2 start:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
- (BOOL)_allowsHitTesting;
- (BOOL)_allowsUserInteractionToCutOffEndOfAnimation;
- (void)_didEndBlockAnimation:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_sendDeferredCompletion:(id)arg1;
- (void)_willBeginBlockAnimation:(id)arg1 context:(id)arg2;

@end

