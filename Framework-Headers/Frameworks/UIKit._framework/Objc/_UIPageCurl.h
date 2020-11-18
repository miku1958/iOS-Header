//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableSet, NSNumber, UIView, _UIPageCurlState;

@interface _UIPageCurl : NSObject
{
    long long _spineLocation;
    struct CGRect _contentRect;
    UIView *_contentView;
    _UIPageCurlState *_manualPageCurlState;
    NSMutableArray *_pendingStateQueue;
    NSMutableArray *_activeStateQueue;
    NSMutableSet *_completedStates;
    double _delayBetweenSuccessiveAnimations;
    double _pageDiagonalAngle;
    double _pageDiagonalLength;
    double _manualPageCurlMaxDAngle;
}

@property (readonly, nonatomic, getter=_isManualPageCurlInProgressAndUncommitted) BOOL _manualPageCurlInProgressAndUncommitted;
@property (nonatomic, setter=_setManualPageCurlMaxDAngle:) double _manualPageCurlMaxDAngle; // @synthesize _manualPageCurlMaxDAngle;
@property (readonly, nonatomic) long long _spineLocation; // @synthesize _spineLocation;
@property (readonly, nonatomic) NSNumber *_wrappedManualPageCurlDirection;

- (void).cxx_destruct;
- (void)_abortManualCurlAtLocation:(struct CGPoint)arg1 withSuggestedVelocity:(double)arg2;
- (id)_animationKeyPaths;
- (BOOL)_areAnimationsInFlightOrPending;
- (double)_baseAngleOffsetForState:(id)arg1;
- (void)_beginCurlWithState:(id)arg1 previousState:(id)arg2;
- (void)_cancelAllActiveTransitionsAndAbandonCallbacks:(BOOL)arg1;
- (void)_cancelTransitionWithState:(id)arg1 invalidatingPageCurl:(BOOL)arg2;
- (void)_cleanupState:(id)arg1;
- (void)_completeManualCurlAtLocation:(struct CGPoint)arg1 withSuggestedVelocity:(double)arg2;
- (double)_distanceToTravelWithCurrentSpineLocation;
- (double)_durationForManualCurlEndAnimationWithSuggestedVelocity:(double)arg1 shouldComplete:(BOOL)arg2;
- (void)_endManualCurlAtLocation:(struct CGPoint)arg1 withSuggestedVelocity:(double)arg2 shouldComplete:(BOOL)arg3;
- (void)_enqueueCurlOfType:(long long)arg1 fromLocation:(struct CGPoint)arg2 inDirection:(long long)arg3 withView:(id)arg4 revealingView:(id)arg5 completion:(CDUnknownBlockType)arg6 finally:(CDUnknownBlockType)arg7;
- (void)_ensureCurlFilterOnLayer:(id)arg1;
- (void)_forceCleanupState:(id)arg1 finished:(BOOL)arg2 completed:(BOOL)arg3;
- (void)_fromValue:(double *)arg1 toValue:(double *)arg2 fromState:(id)arg3 forAnimationWithKeyPath:(id)arg4;
- (double)_inputTimeForProgress:(double)arg1 distanceToTravel:(double)arg2 radius:(double *)arg3 minRadius:(double)arg4 angle:(double)arg5 dAngle:(double)arg6 touchLocation:(struct CGPoint)arg7 state:(id)arg8;
- (BOOL)_isPreviousCurlCompatibleWithCurlOfType:(long long)arg1 inDirection:(long long)arg2;
- (id)_newAnimationForState:(id)arg1 withKeyPath:(id)arg2 duration:(double)arg3 fromValue:(id)arg4;
- (id)_newCurlFilter;
- (void)_pageCurlAnimationDidStop:(id)arg1 withState:(id)arg2;
- (struct CGRect)_pageViewFrame:(BOOL)arg1;
- (BOOL)_populateFromValue:(double *)arg1 toValue:(double *)arg2 fromState:(id)arg3 forAnimationWithKeyPath:(id)arg4;
- (struct CGPoint)_referenceLocationForInitialLocation:(struct CGPoint)arg1 direction:(long long)arg2;
- (void)_setContentRect:(struct CGRect)arg1;
- (void)_updateCurlFromState:(id)arg1 withTime:(double)arg2 radius:(double)arg3 angle:(double)arg4 addingAnimations:(id)arg5;
- (void)_updateManualCurlToLocation:(struct CGPoint)arg1;
- (void)_updatedInputsFromState:(id)arg1 forLocation:(struct CGPoint)arg2 time:(double *)arg3 radius:(double *)arg4 angle:(double *)arg5;
- (long long)_validatedPageCurlTypeForPageCurlType:(long long)arg1 inDirection:(long long)arg2;
- (void)dealloc;
- (id)initWithSpineLocation:(long long)arg1 andContentRect:(struct CGRect)arg2 inContentView:(id)arg3;

@end
