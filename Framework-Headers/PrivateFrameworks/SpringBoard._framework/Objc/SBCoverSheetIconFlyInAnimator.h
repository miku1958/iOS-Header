//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBCenterIconZoomAnimator.h>

#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>

@class CAMediaTimingFunction, NSString, UIPageControl, UIViewFloatAnimatableProperty;

@interface SBCoverSheetIconFlyInAnimator : SBCenterIconZoomAnimator <PTSettingsKeyObserver>
{
    double _baselineDistance;
    double _effectMultiplier;
    double _distanceExponent;
    UIViewFloatAnimatableProperty *_labelAlphaDrivingProgressAnimatableProperty;
    CAMediaTimingFunction *_timingFunction;
    UIPageControl *_pageControl;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIViewFloatAnimatableProperty *labelAlphaDrivingProgressAnimatableProperty; // @synthesize labelAlphaDrivingProgressAnimatableProperty=_labelAlphaDrivingProgressAnimatableProperty;
@property (strong, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property (readonly) Class superclass;
@property (strong, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;

- (void).cxx_destruct;
- (void)_cleanupAnimation;
- (void)_createAnimatableProperties;
- (double)_functionWithProgress:(double)arg1 distance:(double)arg2;
- (double)_labelAlphaForFraction:(double)arg1;
- (void)_prepareAnimation;
- (void)_setAnimationFraction:(double)arg1 withCenter:(struct CGPoint)arg2;
- (void)_updateDockForFraction:(double)arg1;
- (void)_updateLabelAlphaForPresentationValue:(BOOL)arg1;
- (void)_updateWithSettings:(id)arg1;
- (double)_zPositionForPoint:(struct CGPoint)arg1 center:(struct CGPoint)arg2 andFraction:(double)arg3;
- (double)_zPositionForView:(id)arg1 center:(struct CGPoint)arg2 andFraction:(double)arg3;
- (id)initWithFolderController:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;

@end

