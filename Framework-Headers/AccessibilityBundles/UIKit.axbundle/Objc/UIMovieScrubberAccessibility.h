//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/__UIMovieScrubberAccessibility_super.h>

@interface UIMovieScrubberAccessibility : __UIMovieScrubberAccessibility_super
{
}

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)_accessibilityClearChildren;
- (void)_accessibilityDecrementMockSlider:(id)arg1 largeStep:(BOOL)arg2;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (void)_accessibilityIncrementMockSlider:(id)arg1 largeStep:(BOOL)arg2;
- (void)_accessibilityNotifyDelegateEditingEndValueDidChange:(double)arg1;
- (void)_accessibilityNotifyDelegateEditingStartValueDidChange:(double)arg1;
- (void)_accessibilityNotifyDelegateScrubberDidBeginScrubbingWithHandle:(int)arg1;
- (void)_accessibilityNotifyDelegateScrubberDidEndScrubbingWithHandle:(int)arg1;
- (void)_accessibilityNotifyDelegateWillBeginEditing;
- (double)_accessibilitySliderDeltaForFrame:(struct CGRect)arg1;
- (void)_initSubviews;
- (void)_setValue:(double)arg1 andSendAction:(BOOL)arg2;
- (void)_sliderAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_trimAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_updateThumbLocation;
- (id)accessibilityElements;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (BOOL)isAccessibilityElement;
- (void)movieScrubberTrackView:(id)arg1 clampedSizeWidthDelta:(double)arg2 actualSizeWidthDelta:(double)arg3 originXDelta:(double)arg4 minimumVisibleValue:(double)arg5 maximumVisibleValue:(double)arg6;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setThumbIsVisible:(BOOL)arg1;
- (void)setTrimEndValue:(double)arg1;
- (void)setTrimStartValue:(double)arg1;

@end

