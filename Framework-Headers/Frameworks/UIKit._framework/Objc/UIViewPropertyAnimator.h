//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>
#import <UIKit/UIInteractionProgressObserver-Protocol.h>
#import <UIKit/UIViewAnimatingPrivate-Protocol.h>
#import <UIKit/UIViewImplicitlyAnimating-Protocol.h>
#import <UIKit/_UIBasicAnimationFactory-Protocol.h>

@class CAMediaTimingFunction, NSArray, NSMutableArray, NSMutableDictionary, NSString, NSUUID, UIViewAnimationState, _UICompoundObjectMap;
@protocol UITimingCurveProvider;

@interface UIViewPropertyAnimator : NSObject <_UIBasicAnimationFactory, UIInteractionProgressObserver, UIViewAnimatingPrivate, UIViewImplicitlyAnimating, NSCopying>
{
    long long _animationState;
    double _fractionComplete;
    double _fractionCompleteWhenContinued;
    double _drag;
    BOOL _running;
    BOOL _reversed;
    BOOL _pausedAsSpring;
    BOOL _optionsAreExplicit;
    BOOL _addedPacingAnimation;
    double _baseDuration;
    double _internalDuration;
    double _delay;
    UIViewPropertyAnimator *_outerAnimator;
    CAMediaTimingFunction *_timingFunctionWhenPaused;
    _UICompoundObjectMap *_originalToValueMap;
    _UICompoundObjectMap *_originalFromValueMap;
    _UICompoundObjectMap *_additiveOffsetsForAnimationKeysMap;
    BOOL _useCoreAnimation;
    BOOL _userInteractionEnabled;
    BOOL _manualHitTestingEnabled;
    BOOL _interruptible;
    BOOL _starting;
    BOOL _introspectable;
    UIViewAnimationState *_viewAnimationState;
    NSUUID *_trackingIdentifier;
    id<UITimingCurveProvider> _timingParameters;
    NSMutableArray *_animations;
    NSMutableArray *_completions;
    long long _finishingPosition;
    NSMutableDictionary *_animationDescriptionMap;
    unsigned long long _options;
}

@property (strong, nonatomic, getter=_animationDescriptionMap, setter=setAnimationDescriptionMap:) NSMutableDictionary *animationDescriptionMap; // @synthesize animationDescriptionMap=_animationDescriptionMap;
@property (readonly, nonatomic) NSArray *animationDescriptions;
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
@property (nonatomic, getter=isReversed) BOOL reversed; // @synthesize reversed=_reversed;
@property (readonly, nonatomic, getter=isRunning) BOOL running; // @synthesize running=_running;
@property (nonatomic, getter=_isStarting, setter=_setStarting:) BOOL starting; // @synthesize starting=_starting;
@property (readonly, nonatomic) long long state; // @synthesize state=_animationState;
@property (readonly) Class superclass;
@property (copy, nonatomic, setter=_setTimingParameters:) id<UITimingCurveProvider> timingParameters; // @synthesize timingParameters=_timingParameters;
@property (strong, nonatomic, getter=_trackingIdentifier, setter=_setTrackingIdentifier:) NSUUID *trackingIdentifier; // @synthesize trackingIdentifier=_trackingIdentifier;
@property (nonatomic) double unitDuration;
@property (readonly, nonatomic) BOOL useCoreAnimation; // @synthesize useCoreAnimation=_useCoreAnimation;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
@property (strong, nonatomic, getter=_viewAnimationState, setter=_setViewAnimationState:) UIViewAnimationState *viewAnimationState; // @synthesize viewAnimationState=_viewAnimationState;

+ (id)_currentPropertyAnimator;
+ (id)_getPropertyAnimationForState:(id)arg1;
+ (id)_originalFromValueForKey:(id)arg1 inLayer:(id)arg2 forAnimatorWithTrackingIdentifier:(id)arg3;
+ (id)_propertyAnimatorWithUUID:(id)arg1;
+ (void)_removeReferenceToPropertyAnimation:(id)arg1;
+ (void)_saveReferenceToPropertyAnimation:(id)arg1;
+ (void)animator:(id)arg1 isObserving:(id)arg2;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)observedsOfAnimatorWithTrackingId:(id)arg1;
+ (void)removeObserved:(id)arg1 forObservingAnimatorWithId:(id)arg2;
+ (id)runningPropertyAnimatorWithDuration:(double)arg1 delay:(double)arg2 options:(unsigned long long)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void).cxx_destruct;
- (BOOL)_addedPacingAnimation;
- (double)_additiveOffsetForKey:(id)arg1 inLayer:(id)arg2;
- (double)_adjustedFractionComplete:(double)arg1 withTimingFunction:(id)arg2;
- (id)_animationDescriptionForView:(id)arg1;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (void)_clearAnimationState;
- (double)_computeInverseOfFractionComplete:(double)arg1;
- (void)_continueOrReverseAnimations:(BOOL)arg1 timingParameters:(id)arg2 duration:(double)arg3;
- (double)_drag;
- (double)_dragAdjustedDuration;
- (void)_executeCompletionHandlerWithFinalPosition:(long long)arg1;
- (id)_explicitAnimationUpdateForProperty:(id)arg1 forView:(id)arg2 withValue:(id)arg3;
- (BOOL)_fractionComplete;
- (BOOL)_generatePointValueSpringAnimationsForKeyPath:(id)arg1;
- (BOOL)_isActive;
- (id)_newAnimationUpdateForProperty:(id)arg1 implicit:(BOOL)arg2 additive:(BOOL)arg3;
- (void)_notePropertyAnimationUpdate:(id)arg1 forView:(id)arg2;
- (unsigned long long)_optionsForNestedLegacyAnimation:(unsigned long long)arg1;
- (id)_originalFromValueForKey:(id)arg1 inLayer:(id)arg2;
- (id)_originalToValueForKey:(id)arg1 inLayer:(id)arg2;
- (double)_pauseAnimation:(id)arg1;
- (id)_previousAnimatorForKeyPath:(id)arg1 inLayer:(id)arg2 compoundKeys:(id *)arg3;
- (void)_runAnimations;
- (void)_runCompletions:(long long)arg1;
- (void)_setAddedPacingAnimation:(BOOL)arg1;
- (void)_setAdditiveOffset:(double)arg1 forKey:(id)arg2 inLayer:(id)arg3;
- (void)_setKVOCompliantReversed:(BOOL)arg1;
- (void)_setKVOCompliantRunning:(BOOL)arg1;
- (void)_setKVOCompliantState:(long long)arg1;
- (void)_setKVOCompliantState:(long long)arg1 fromState:(long long)arg2;
- (void)_setOriginalFromValue:(id)arg1 forKey:(id)arg2 inLayer:(id)arg3;
- (void)_setOriginalToValue:(id)arg1 forKey:(id)arg2 inLayer:(id)arg3;
- (void)_setupAnimationTracking:(CDUnknownBlockType)arg1;
- (void)_setupAssociatedViewAnimationState:(id)arg1;
- (void)_setupWithDuration:(double)arg1 timingParameters:(id)arg2 animations:(CDUnknownBlockType)arg3;
- (BOOL)_shouldAnimateAdditivelyForView:(id)arg1 withKeyPath:(id)arg2;
- (void)_springAnimationForXComponent:(id *)arg1 forYComponent:(id *)arg2;
- (id)_stateAsString;
- (void)_untrackPropertyAnimationsForKeys:(id *)arg1 inLayer:(id)arg2;
- (void)addAnimations:(CDUnknownBlockType)arg1;
- (void)addAnimations:(CDUnknownBlockType)arg1 delayFactor:(double)arg2;
- (void)addAnimations:(CDUnknownBlockType)arg1 delayFactor:(double)arg2 durationFactor:(double)arg3;
- (void)addCompletion:(CDUnknownBlockType)arg1;
- (double)adjustedPercentComplete;
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
- (void)reverseAnimation;
- (void)reverseAnimationWithTimingParameters:(id)arg1 durationFactor:(double)arg2;
- (void)startAnimation;
- (void)startAnimation:(CDUnknownBlockType)arg1;
- (void)startAnimationAfterDelay:(double)arg1;
- (void)stopAnimation:(BOOL)arg1;

@end
