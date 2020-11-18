//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoverSheet/BSUIScrollViewDelegate-Protocol.h>
#import <CoverSheet/PTSettingsKeyObserver-Protocol.h>

@class NSString, UIView;

@interface CSScrollModifier : NSObject <PTSettingsKeyObserver, BSUIScrollViewDelegate>
{
    UIView *_targetView;
    BOOL _hasDraggedSinceReset;
    BOOL _cancelled;
    struct CGPoint _firstLocation;
    struct CGPoint _lastLocation;
    double _minSwipePercentageOfScreen;
    double _inertialMultiplier;
    double _initialScrollViewOffsetX;
    double _accumulatedDrag;
    double _maxAccumulatedDragThreshold;
    BOOL _recognized;
    BOOL _cancelScrollingIfTooMuchDrag;
    double _maxScrollDistance;
    double _accumulatedDragThresholdPercentage;
    double _maxDragFromVerticalPerFrame;
    double _powerOfVerticalDirectionSine2;
    double _inertialMultiplierSigmoidBase;
    double _inertialMultiplierSigmoidRange;
    double _inertialMultiplierSigmoidPivot;
    double _inertialMultiplierSigmoidAlpha;
    double _minPercentageSigmoidBase;
    double _minPercentageSigmoidRange;
    double _minPercentageSigmoidPivot;
    double _minPercentageSigmoidAlpha;
}

@property (nonatomic) double accumulatedDragThresholdPercentage; // @synthesize accumulatedDragThresholdPercentage=_accumulatedDragThresholdPercentage;
@property (nonatomic) BOOL cancelScrollingIfTooMuchDrag; // @synthesize cancelScrollingIfTooMuchDrag=_cancelScrollingIfTooMuchDrag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double inertialMultiplierSigmoidAlpha; // @synthesize inertialMultiplierSigmoidAlpha=_inertialMultiplierSigmoidAlpha;
@property (nonatomic) double inertialMultiplierSigmoidBase; // @synthesize inertialMultiplierSigmoidBase=_inertialMultiplierSigmoidBase;
@property (nonatomic) double inertialMultiplierSigmoidPivot; // @synthesize inertialMultiplierSigmoidPivot=_inertialMultiplierSigmoidPivot;
@property (nonatomic) double inertialMultiplierSigmoidRange; // @synthesize inertialMultiplierSigmoidRange=_inertialMultiplierSigmoidRange;
@property (nonatomic) double maxDragFromVerticalPerFrame; // @synthesize maxDragFromVerticalPerFrame=_maxDragFromVerticalPerFrame;
@property (nonatomic) double maxScrollDistance; // @synthesize maxScrollDistance=_maxScrollDistance;
@property (nonatomic) double minPercentageSigmoidAlpha; // @synthesize minPercentageSigmoidAlpha=_minPercentageSigmoidAlpha;
@property (nonatomic) double minPercentageSigmoidBase; // @synthesize minPercentageSigmoidBase=_minPercentageSigmoidBase;
@property (nonatomic) double minPercentageSigmoidPivot; // @synthesize minPercentageSigmoidPivot=_minPercentageSigmoidPivot;
@property (nonatomic) double minPercentageSigmoidRange; // @synthesize minPercentageSigmoidRange=_minPercentageSigmoidRange;
@property (nonatomic) double powerOfVerticalDirectionSine2; // @synthesize powerOfVerticalDirectionSine2=_powerOfVerticalDirectionSine2;
@property (readonly, nonatomic) BOOL recognized; // @synthesize recognized=_recognized;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_horizontalProgressSubtractionFromVertical:(struct CGPoint)arg1;
- (void)_loadFromSettings:(id)arg1;
- (void)_updateScrollParameters;
- (void)dealloc;
- (id)initWithView:(id)arg1;
- (void)reset;
- (BOOL)scrollFromRightToLeft;
- (struct CGPoint)scrollView:(id)arg1 adjustedOffsetForOffset:(struct CGPoint)arg2 translation:(struct CGPoint)arg3 startPoint:(struct CGPoint)arg4 locationInView:(struct CGPoint)arg5 horizontalVelocity:(inout double *)arg6 verticalVelocity:(inout double *)arg7;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;

@end
