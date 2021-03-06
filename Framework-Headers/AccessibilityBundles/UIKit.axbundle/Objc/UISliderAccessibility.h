//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/__UISliderAccessibility_super.h>

@interface UISliderAccessibility : __UISliderAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (id)_accessibilityAbsoluteValue;
- (void)_accessibilityAnnounceNewValue;
- (unsigned long long)_accessibilityAutomationType;
- (void)_accessibilityBumpValue:(BOOL)arg1;
- (double)_accessibilityIncreaseAmount:(BOOL)arg1;
- (struct CGPoint)_accessibilityMaxScrubberPosition;
- (double)_accessibilityMaxValue;
- (struct CGPoint)_accessibilityMinScrubberPosition;
- (double)_accessibilityMinValue;
- (double)_accessibilityNumberValue;
- (void)_accessibilitySetValue:(id)arg1;
- (id)_viewToAddFocusLayer;
- (struct CGPoint)accessibilityActivationPoint;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)accessibilityPath;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)isAccessibilityElement;
- (void)layoutSubviews;

@end

