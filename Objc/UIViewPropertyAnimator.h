//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/UIInteractionProgressObserver-Protocol.h>
#import <UIKitCore/UIViewAnimatingPrivate-Protocol.h>
#import <UIKitCore/UIViewImplicitlyAnimating-Protocol.h>
#import <UIKitCore/_UIBasicAnimationFactory-Protocol.h>

@class CAMediaTimingFunction, NSArray, NSMutableArray, NSMutableDictionary, NSString, NSUUID, UIViewAnimationState, UIViewPropertyAnimatorTrackingState, _UIAppCACommitFuture, _UICompoundObjectMap;
@protocol UITimingCurveProvider;

@interface UIViewPropertyAnimator : NSObject <_UIBasicAnimationFactory, UIInteractionProgressObserver, UIViewAnimatingPrivate, UIViewImplicitlyAnimating, NSCopying>
{
    UIViewPropertyAnimatorTrackingState *_trackingState;
    NSString *_trackingDescription;
    double _fractionComplete;
    double _fractionCompleteWhenContinued;
    double _drag;
    BOOL _running;
    BOOL _reversed;
    BOOL _pausedAsSpring;
    BOOL _optionsAreExplicit;
    BOOL _addedPacingAnimation;
    BOOL _hasFinalized;
    double _baseDuration;
    double _internalDuration;
    double _delay;
    UIViewPropertyAnimator *_outerAnimator;
    NSString *_pacingAnimationKey;
    CAMediaTimingFunction *_timingFunctionPriorToPause;
    CAMediaTimingFunction *_timingFunctionWhenPaused;
    id<UITimingCurveProvider> _timingProviderWhenContinued;
    _UICompoundObjectMap *_originalToValueMap;
    _UICompoundObjectMap *_originalFromValueMap;
    _UICompoundObjectMap *_additiveOffsetsForAnimationKeysMap;
    _UICompoundObjectMap *_continuedWithSpringForAnimationKeyMap;
    _UIAppCACommitFuture *_caContinuationCommitFuture;
    BOOL _useCoreAnimation;
    BOOL _pausesOnCompletion;
    BOOL _userInteractionEnabled;
    BOOL _manualHitTestingEnabled;
    BOOL _interruptible;
    BOOL _scrubsLinearly;
    BOOL _starting;
    BOOL _pausedOnCompletion;
    BOOL _shouldLayoutSubviews;
    BOOL _introspectable;
    UIViewAnimationState *_viewAnimationState;
    NSUUID *_trackingIdentifier;
    id<UITimingCurveProvider> _timingParameters;
    long long _animationState;
    NSMutableArray *_animations;
    NSMutableArray *_completions;
    long long _finishingPosition;
    NSMutableDictionary *_animationDescriptionMap;
    unsigned long long _options;
}

@property (strong, nonatomic, getter=_animationDescriptionMap, setter=setAnimationDescriptionMap:) NSMutableDictionary *animationDescriptionMap; // @synthesize animationDescriptionMap=_animationDescriptionMap;
@property (readonly, nonatomic) NSArray *animationDescriptions;
@property (nonatomic, getter=_animationState, setter=_setAnimationState:) long long animationState; // @synthesize animationState=_animationState;
@property (strong, nonatomic, getter=_animations, setter=_setAnimations:) NSMutableArray *animations; // @synthesize animations=_animations;
@property (strong, nonatomic, getter=_completions, setter=_setCompletions:) NSMutableArray *completions; // @synthesize completions=_completions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double delay;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) double duration;
@property (nonatomic, getter=_finishingPosition, setter=_setFinishingPosition:) long long finishingPosition; // @synthesize finishingPosition=_finishingPosition;
@property (nonatomic) double fractionComplete;
@property (readonly) unsigned long long hash;
@property (nonatomic) double internalDuration; // @synthesize internalDuration=_internalDuration;
@property (nonatomic, getter=isInterruptible) BOOL interruptible; // @synthesize interruptible=_interruptible;
@property (nonatomic, getter=isIntrospectable) BOOL introspectable; // @synthesize introspectable=_introspectable;
@property (nonatomic, getter=isManualHitTestingEnabled) BOOL manualHitTestingEnabled; // @synthesize manualHitTestingEnabled=_manualHitTestingEnabled;
@property (nonatomic, getter=_options, setter=_setOptions:) unsigned long long options; // @synthesize options=_options;
@property (nonatomic) double pacedFractionComplete;
@property (nonatomic, getter=_isPausedOnCompletion, setter=_setPausedOnCompletion:) BOOL pausedOnCompletion; // @synthesize pausedOnCompletion=_pausedOnCompletion;
@property (nonatomic) BOOL pausesOnCompletion; // @synthesize pausesOnCompletion=_pausesOnCompletion;
@property (nonatomic, getter=isReversed) BOOL reversed; // @synthesize reversed=_reversed;
@property (readonly, nonatomic, getter=isRunning) BOOL running; // @synthesize running=_running;
@property (nonatomic) BOOL scrubsLinearly; // @synthesize scrubsLinearly=_scrubsLinearly;
@property (nonatomic, setter=_setShouldLayoutSubviews:) BOOL shouldLayoutSubviews; // @synthesize shouldLayoutSubviews=_shouldLayoutSubviews;
@property (nonatomic, getter=_isStarting, setter=_setStarting:) BOOL starting; // @synthesize starting=_starting;
@property (readonly, nonatomic) long long state;
@property (readonly) Class superclass;
@property (copy, nonatomic, setter=_setTimingParameters:) id<UITimingCurveProvider> timingParameters; // @synthesize timingParameters=_timingParameters;
@property (strong, nonatomic, getter=_trackingIdentifier, setter=_setTrackingIdentifier:) NSUUID *trackingIdentifier; // @synthesize trackingIdentifier=_trackingIdentifier;
@property (nonatomic) double unitDuration;
@property (readonly, nonatomic) BOOL useCoreAnimation; // @synthesize useCoreAnimation=_useCoreAnimation;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
@property (strong, nonatomic, getter=_viewAnimationState, setter=_setViewAnimationState:) UIViewAnimationState *viewAnimationState; // @synthesize viewAnimationState=_viewAnimationState;

+ (CDUnknownBlockType)_animationBlockForTrackingAnimation:(id)arg1 animator:(id)arg2 trackingSetup:(CDUnknownBlockType)arg3;
+ (id)_animatorForTrackedAnimationsUUID:(id)arg1;
+ (id)_animatorWithTimingAttributesMatchingAnimation:(id)arg1 forLayer:(id)arg2 wasReused:(BOOL *)arg3;
+ (id)_animatorsForTrackedAnimationsUUID:(id)arg1;
+ (BOOL)_canEnableTrackingAnimationsWithAnimators;
+ (BOOL)_containsAnimatorForTrackedAnimationsUUID:(id)arg1;
+ (id)_currentPropertyAnimator;
+ (id)_currentTrackedAnimationsState;
+ (id)_currentTrackedAnimationsUUID;
+ (double)_delayForAnimation:(id)arg1 forLayer:(id)arg2;
+ (void)_finishTrackingAnimations;
+ (id)_getPropertyAnimationForState:(id)arg1;
+ (id)_originalFromValueForKey:(id)arg1 inLayer:(id)arg2 forAnimatorWithTrackingIdentifier:(id)arg3;
+ (id)_performWhileTrackingAnimations:(CDUnknownBlockType)arg1;
+ (id)_propertyAnimatorWithUUID:(id)arg1;
+ (void)_removeReferenceToActivePropertyAnimator:(id)arg1;
+ (void)_removeReferenceToPropertyAnimatorWithTrackingIdentifier:(id)arg1;
+ (void)_removeTrackingAnimator:(id)arg1 forUUID:(id)arg2 andDescription:(id)arg3;
+ (void)_saveReferenceToActivePropertyAnimator:(id)arg1;
+ (void)_saveReferenceToPropertyAnimator:(id)arg1;
+ (void)_saveTrackingAnimator:(id)arg1 forUUID:(id)arg2 andDescription:(id)arg3;
+ (void)_setTrackedAnimationsOptimizationsEnabled:(BOOL)arg1;
+ (void)_setTrackedAnimationsScrubLinearly:(BOOL)arg1;
+ (void)_setTrackedAnimationsStartPaused:(BOOL)arg1;
+ (void)_setTrackedAnimationsUserInteractionEnabled:(BOOL)arg1;
+ (id)_startTrackingAnimations;
+ (id)_trackAdditiveAnimationWithAnimator:(id)arg1 nonAdditiveAnimation:(id)arg2 withAnimationKey:(id)arg3 forKeyPath:(id)arg4 forLayer:(id)arg5;
+ (id)_trackAnimationWithAnimator:(id)arg1 forLayer:(id)arg2 forAnimationKey:(id)arg3 trackingSetup:(CDUnknownBlockType)arg4;
+ (id)_trackNonAdditiveAnimationWithAnimator:(id)arg1 forLayer:(id)arg2 forKey:(id)arg3;
+ (BOOL)_trackedAnimationsOptimizationsEnabled;
+ (BOOL)_trackedAnimationsScrubLinearly;
+ (BOOL)_trackedAnimationsStartPaused;
+ (BOOL)_trackedAnimationsUserInteractionEnabled;
+ (BOOL)_trackingAnimationsCurrentlyEnabled;
+ (void)animator:(id)arg1 isObserving:(id)arg2;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)observedsOfAnimatorWithTrackingId:(id)arg1;
+ (void)removeAllObservedForObservingAnimatorWithId:(id)arg1;
+ (void)removeObserved:(id)arg1 forObservingAnimatorWithId:(id)arg2;
+ (id)runningPropertyAnimatorWithDuration:(double)arg1 delay:(double)arg2 options:(unsigned long long)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void).cxx_destruct;
- (BOOL)_addedPacingAnimation;
- (double)_additiveOffsetForKey:(id)arg1 inLayer:(id)arg2;
- (id)_animationDescriptionForView:(id)arg1;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (void)_clearAnimationState;
- (BOOL)_computeDisplacementFractionComplete:(id)arg1 withKey:(id)arg2 inLayer:(id)arg3 fromValue:(id)arg4 toValue:(id)arg5 fractionComplete:(double *)arg6 displacement:(double *)arg7;
- (BOOL)_computeSmallestDisplacementFractionComplete:(double *)arg1;
- (void)_continueWithTimingParameters:(id)arg1 duration:(double)arg2;
- (id)_currentTimingFunction;
- (double)_drag;
- (double)_dragAdjustedDuration;
- (double)_effectiveAdditiveOffsetForKey:(id)arg1 inLayer:(id)arg2;
- (void)_executeCompletionHandlerWithFinalPosition:(long long)arg1;
- (id)_explicitAnimationUpdateForProperty:(id)arg1 forView:(id)arg2 withValue:(id)arg3;
- (BOOL)_generatePointValueSpringAnimationsForKeyPath:(id)arg1;
- (BOOL)_isActive;
- (id)_newAnimationUpdateForProperty:(id)arg1 implicit:(BOOL)arg2 additive:(BOOL)arg3;
- (void)_notePropertyAnimationUpdate:(id)arg1 forView:(id)arg2;
- (unsigned long long)_optionsForNestedLegacyAnimation:(unsigned long long)arg1;
- (id)_originalFromValueForKey:(id)arg1 inLayer:(id)arg2;
- (id)_originalToValueForKey:(id)arg1 inLayer:(id)arg2;
- (double)_pauseAnimation:(id)arg1;
- (BOOL)_pausesOnCompletion;
- (id)_previousAnimatorForKeyPath:(id)arg1 inLayer:(id)arg2 compoundKeys:(id *)arg3;
- (void)_restoreLayerValueIfReversed:(id)arg1 animation:(id)arg2 toValue:(id)arg3;
- (void)_runAnimations;
- (void)_runCompletions:(long long)arg1 finished:(BOOL)arg2;
- (void)_scheduleCACommitFuture;
- (void)_setAddedPacingAnimation:(BOOL)arg1 animationKey:(id)arg2;
- (void)_setAdditiveOffset:(double)arg1 forKey:(id)arg2 inLayer:(id)arg3;
- (BOOL)_setContinuedWithNewSpring:(BOOL)arg1 forAnimationKey:(id)arg2 forLayer:(id)arg3;
- (void)_setKVOCompliantReversed:(BOOL)arg1;
- (void)_setKVOCompliantRunning:(BOOL)arg1;
- (void)_setKVOCompliantState:(long long)arg1;
- (void)_setKVOCompliantState:(long long)arg1 fromState:(long long)arg2;
- (void)_setOriginalFromValue:(id)arg1 forKey:(id)arg2 inLayer:(id)arg3;
- (void)_setOriginalToValue:(id)arg1 forKey:(id)arg2 inLayer:(id)arg3;
- (void)_setPausesOnCompletion:(BOOL)arg1;
- (void)_setupAnimationTracking:(CDUnknownBlockType)arg1;
- (void)_setupAssociatedViewAnimationState:(id)arg1;
- (void)_setupWithDuration:(double)arg1 timingParameters:(id)arg2 animations:(CDUnknownBlockType)arg3;
- (BOOL)_shouldAnimateAdditivelyForView:(id)arg1 withKeyPath:(id)arg2;
- (void)_springAnimationForXComponent:(id *)arg1 forYComponent:(id *)arg2;
- (id)_stateAsString;
- (void)_untrackPropertyAnimationsForKeys:(id *)arg1 inLayer:(id)arg2;
- (BOOL)_wasContinuedWithNewSpringForAnimationKey:(id)arg1 forLayer:(id)arg2;
- (void)addAnimations:(CDUnknownBlockType)arg1;
- (void)addAnimations:(CDUnknownBlockType)arg1 delayFactor:(double)arg2;
- (void)addAnimations:(CDUnknownBlockType)arg1 delayFactor:(double)arg2 durationFactor:(double)arg3;
- (void)addCompletion:(CDUnknownBlockType)arg1;
- (id)animationsDescription;
- (void)clearAnimationDescriptions;
- (void)continueAnimation;
- (void)continueAnimationWithTimingParameters:(id)arg1 durationFactor:(double)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)finalizeStoppedAnimationWithPosition:(long long)arg1;
- (void)finishAnimationAtPosition:(long long)arg1;
- (id)init;
- (id)initWithDuration:(double)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3 animations:(CDUnknownBlockType)arg4;
- (id)initWithDuration:(double)arg1 curve:(long long)arg2 animations:(CDUnknownBlockType)arg3;
- (id)initWithDuration:(double)arg1 dampingRatio:(double)arg2 animations:(CDUnknownBlockType)arg3;
- (id)initWithDuration:(double)arg1 timingParameters:(id)arg2;
- (id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 initialVelocity:(struct CGVector)arg4 animations:(CDUnknownBlockType)arg5;
- (void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)pauseAnimation;
- (void)pauseAnimationTransiently;
- (void)startAnimation;
- (void)startAnimationAfterDelay:(double)arg1;
- (void)startAnimationAsPaused:(BOOL)arg1;
- (void)stopAnimation:(BOOL)arg1;
- (id)timingFunctionForPause;

@end

