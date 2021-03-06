//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIGestureRecognizer.h>

#import <UIKitCore/_UIScrollEventRespondable-Protocol.h>

@class NSArray, NSMutableArray, NSString, UIPanGestureVelocitySample;

@interface UIPanGestureRecognizer : UIGestureRecognizer <_UIScrollEventRespondable>
{
    struct CGPoint _firstSceneReferenceLocation;
    struct CGPoint _lastSceneReferenceLocation;
    double _lastTouchTime;
    NSMutableArray *_touches;
    unsigned long long _lastTouchCount;
    unsigned long long _minimumNumberOfTouches;
    unsigned long long _maximumNumberOfTouches;
    double _hysteresis;
    double _allowableSeparation;
    struct CGPoint _lastUnadjustedSceneReferenceLocation;
    double _allowableTouchTimeSeparation;
    unsigned int _delegateImplementsShouldTryToBeginHorizontally:1;
    unsigned int _delegateImplementsShouldTryToBeginVertically:1;
    unsigned int _failsPastMaxTouches:1;
    unsigned int _failsPastHysteresisWithoutMinTouches:1;
    unsigned int _canPanHorizontally:1;
    unsigned int _canPanVertically:1;
    unsigned int _delegateAllowsPanHorizontally:1;
    unsigned int _delegateAllowsPanVertically:1;
    unsigned int _queriedDelegateAllowsPanHorizontally:1;
    unsigned int _queriedDelegateAllowsPanVertically:1;
    unsigned int _ignoresStationaryTouches:1;
    unsigned int _multitouchTimerOn:1;
    unsigned int _requiresImmediateMultipleTouches:1;
    NSMutableArray *_movingTouches;
    struct CGPoint _digitizerLocation;
    UIPanGestureVelocitySample *_velocitySample;
    UIPanGestureVelocitySample *_previousVelocitySample;
    BOOL _iOSMacUseNonacceleratedDelta;
    BOOL _iOSMacIgnoreScrollDirectionUserPreference;
    BOOL _iOSMacScrollingEnabled;
    long long _allowedScrollTypesMask;
}

@property (copy, nonatomic, getter=_allowedScrollTypes, setter=_setAllowedScrollTypes:) NSArray *allowedScrollTypes;
@property (nonatomic) long long allowedScrollTypesMask; // @synthesize allowedScrollTypesMask=_allowedScrollTypesMask;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL failsPastMaxTouches;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=_iOSMacIgnoreScrollDirectionUserPreference, setter=_setiOSMacIgnoreScrollDirectionUserPreference:) BOOL iOSMacIgnoreScrollDirectionUserPreference; // @synthesize iOSMacIgnoreScrollDirectionUserPreference=_iOSMacIgnoreScrollDirectionUserPreference;
@property (nonatomic, getter=_iOSMacScrollingEnabled, setter=_setiOSMacScrollingEnabled:) BOOL iOSMacScrollingEnabled; // @synthesize iOSMacScrollingEnabled=_iOSMacScrollingEnabled;
@property (nonatomic, getter=_iOSMacUseNonacceleratedDelta, setter=_setiOSMacUseNonacceleratedDelta:) BOOL iOSMacUseNonacceleratedDelta; // @synthesize iOSMacUseNonacceleratedDelta=_iOSMacUseNonacceleratedDelta;
@property (nonatomic) unsigned long long maximumNumberOfTouches; // @synthesize maximumNumberOfTouches=_maximumNumberOfTouches;
@property (nonatomic) unsigned long long minimumNumberOfTouches; // @synthesize minimumNumberOfTouches=_minimumNumberOfTouches;
@property (readonly) Class superclass;

+ (double)_defaultHysteresis;
+ (void)_setPanGestureRecognizersEnabled:(BOOL)arg1;
+ (BOOL)_shouldDefaultToTouches;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (struct CGPoint)_adjustSceneReferenceLocation:(struct CGPoint)arg1;
- (double)_allowableSeparation;
- (double)_allowableTouchTimeSeparation;
- (long long)_allowedScrollTypesMask;
- (BOOL)_canPanHorizontally;
- (BOOL)_canPanVertically;
- (void)_centroidMovedTo:(struct CGPoint)arg1 atTime:(double)arg2;
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 fromSceneReferenceCoordinatesToView:(id)arg2;
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 toSceneReferenceCoordinatesFromView:(id)arg2;
- (struct CGPoint)_convertVelocitySample:(id)arg1 fromSceneReferenceCoordinatesToView:(id)arg2;
- (BOOL)_failsPastHysteresisWithoutMinTouches;
- (void)_handleEndedTouches:(id)arg1 withFinalStateAdjustments:(CDUnknownBlockType)arg2;
- (double)_hysteresis;
- (void)_ignoreTouchForTouchIdentifier:(unsigned int)arg1;
- (BOOL)_isGestureType:(long long)arg1;
- (void)_processScrollPhaseChanged:(id)arg1;
- (void)_removeHysteresisFromTranslation;
- (BOOL)_requiresImmediateMultipleTouches;
- (void)_resetGestureRecognizer;
- (void)_scrollingChangedWithEvent:(id)arg1;
- (void)_setAllowableSeparation:(double)arg1;
- (void)_setAllowableTouchTimeSeparation:(double)arg1;
- (void)_setAllowedScrollTypesMask:(long long)arg1;
- (void)_setCanPanHorizontally:(BOOL)arg1;
- (void)_setCanPanVertically:(BOOL)arg1;
- (void)_setFailsPastHysteresisWithoutMinTouches:(BOOL)arg1;
- (void)_setHysteresis:(double)arg1;
- (void)_setRequiresImmediateMultipleTouches:(BOOL)arg1;
- (BOOL)_shouldBeginHorizontally:(BOOL)arg1 vertically:(BOOL)arg2 withEvent:(id)arg3;
- (BOOL)_shouldTryToBeginWithEvent:(id)arg1;
- (BOOL)_touchesExceedAllowableSeparation;
- (void)_touchesListChangedFrom:(id)arg1 to:(id)arg2;
- (BOOL)_updateMovingTouchesArraySavingOldArray:(id *)arg1;
- (void)_willBeginAfterSatisfyingFailureRequirements;
- (void)clearMultitouchTimer;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (BOOL)isIOSMacScrollingEnabled;
- (struct CGPoint)locationInView:(id)arg1;
- (struct CGPoint)locationOfTouch:(unsigned long long)arg1 inView:(id)arg2;
- (void)multitouchExpired:(id)arg1;
- (unsigned long long)numberOfTouches;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setTranslation:(struct CGPoint)arg1 inView:(id)arg2;
- (BOOL)shouldReceiveEvent:(id)arg1;
- (void)startMultitouchTimer:(double)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint)translationInView:(id)arg1;
- (struct CGPoint)velocityInView:(id)arg1;

@end

