//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/CAAnimationDelegate-Protocol.h>

@class CAMediaTimingFunction, NSMutableArray, NSString, NSUUID, UIView, UIViewPropertyAnimator;
@protocol _UIBasicAnimationFactory;

__attribute__((visibility("hidden")))
@interface UIViewAnimationState : NSObject <CAAnimationDelegate>
{
    UIViewAnimationState *_nextState;
    NSString *_animationID;
    void *_context;
    id _delegate;
    double _duration;
    double _delay;
    double _frameInterval;
    double _start;
    long long _curve;
    float _repeatCount;
    long long _transition;
    UIView *_transitionView;
    int _filter;
    UIView *_filterView;
    float _filterValue;
    SEL _willStartSelector;
    SEL _didEndSelector;
    int _didEndCount;
    struct CGPoint _position;
    unsigned int _willStartSent:1;
    unsigned int _useCurrentLayerState:1;
    unsigned int _cacheTransition:1;
    unsigned int _autoreverses:1;
    unsigned int _roundsToInteger:1;
    unsigned int _preventsAdditive:1;
    unsigned int _layoutSubviews:1;
    unsigned int _hasOuterAnimator:1;
    unsigned int _hasOuterTrackingAnimator:1;
    unsigned int _disallowCaptureWithinPropertyAnimator:1;
    NSMutableArray *_trackedAnimations;
    NSUUID *_uuid;
    id<_UIBasicAnimationFactory> _animationFactory;
    CAMediaTimingFunction *_customCurve;
    BOOL _animationFactoryMakesPerAnimationCustomCurves;
    BOOL _disallowAdditiveAnimations;
    CDUnknownBlockType _alongsideAnimations;
    NSMutableArray *_addedCompletions;
    BOOL _animationDidStopSent;
    BOOL _animationDidStopForced;
    BOOL _allowUserInteractionToCutOffEndOfAnimation;
    BOOL _allowsHitTesting;
    UIViewAnimationState *_retainedSelf;
    NSMutableArray *_viewsPendingConstraintBasedAnimation;
    UIViewPropertyAnimator *_propertyAnimator;
}

@property (readonly, nonatomic) BOOL _allowsUserInteraction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_addConstraintPendingAnimation:(id)arg1 container:(id)arg2;
+ (void)_addSystemPostAnimationAction:(CDUnknownBlockType)arg1;
+ (void)_addViewForConstraintBasedAnimation:(id)arg1;
+ (id)originalAnimationForKeyPath:(id)arg1 inLayer:(id)arg2;
+ (void)popAnimationState;
+ (void)pushViewAnimationState:(id)arg1 context:(void *)arg2;
- (void).cxx_destruct;
- (void)_acceptEarlyAnimationCutoff:(id)arg1;
- (void)_addAnimationStateForTracking:(id)arg1;
- (BOOL)_addCompletion:(CDUnknownBlockType)arg1;
- (BOOL)_allowsHitTesting;
- (BOOL)_allowsUserInteractionToCutOffEndOfAnimation;
- (id)_canonicalTrackedLayerAnimationInLayer:(id *)arg1;
- (double)_canonicalTrackedUnpacedFractionComplete;
- (id)_defaultAnimationForKey:(id)arg1;
- (id)_outerPropertyAnimator:(BOOL)arg1;
- (void)_prepareForViewAnimationAfterPush;
- (void)_removeAnimationStateFromTrackingMap:(BOOL)arg1;
- (void)_removeAnimationStateFromTrackingMap:(BOOL)arg1 disableTrackingIfNeeded:(BOOL)arg2;
- (void)_removeLastCompletion;
- (void)_runAlongsideAnimations;
- (void)_runConstraintBasedLayoutAnimations;
- (void)_setAlongsideAnimations:(CDUnknownBlockType)arg1;
- (void)_setCustomCurve:(id)arg1;
- (BOOL)_shouldAnimateAdditivelyForKey:(id)arg1 onLayer:(id)arg2 forView:(id)arg3;
- (BOOL)_shouldStartFromCurrentStateForLayer:(id)arg1 key:(id)arg2 forView:(id)arg3;
- (void)_trackAnimation:(id)arg1 nonAdditiveAnimation:(id)arg2 withAnimationKey:(id)arg3 forKeyPath:(id)arg4 inLayer:(id)arg5;
- (void)_trackAnimation:(id)arg1 withAnimationKey:(id)arg2 forKeyPath:(id)arg3 inLayer:(id)arg4;
- (void)_trackObject:(id)arg1 withAnimationPropertyName:(id)arg2 inLayer:(id)arg3;
- (id)_trackedAnimations;
- (void)_transformIntoAdditiveAnimationAndNoteOriginal:(id)arg1 inLayer:(id)arg2 animationKey:(id)arg3;
- (double)_unpacedFractionCompleteForAnimation:(id)arg1 inLayer:(id)arg2 duration:(double)arg3;
- (void)_untrackAnimationsWithIdentifier:(id)arg1 keyPath:(id)arg2 inLayer:(id)arg3 removeFromLayer:(BOOL)arg4;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)animationForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3;
- (void)configureAnimation:(id)arg1 forLayer:(id)arg2 forKey:(id)arg3;
- (id)init;
- (void)pop;
- (void)pushWithViewAnimationID:(id)arg1 context:(void *)arg2;
- (void)sendDelegateAnimationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)sendDelegateDidStopManually;
- (void)setAnimationAttributes:(id)arg1;
- (void)setAnimationAttributes:(id)arg1 correctZeroDuration:(BOOL)arg2 skipDelegateAssignment:(BOOL)arg3;
- (void)setAnimationAttributes:(id)arg1 correctZeroDuration:(BOOL)arg2 skipDelegateAssignment:(BOOL)arg3 customCurve:(id)arg4;
- (void)setupCustomTimingCurve;
- (void)setupWithDuration:(double)arg1 delay:(double)arg2 view:(id)arg3 options:(unsigned long long)arg4 factory:(id)arg5 parentState:(id)arg6 start:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;

@end

