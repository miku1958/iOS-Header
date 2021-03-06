//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/__UIPageControlAccessibility_super.h>

@interface UIPageControlAccessibility : __UIPageControlAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (unsigned long long)_accessibilityAutomationType;
- (void)_accessibilityCurrentPageDidChange;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (long long)_accessibilityPageCount;
- (long long)_accessibilityPageIndex;
- (BOOL)_accessibilityRetainsFocusOnScreenChange;
- (BOOL)_accessibilitySupportsActivateAction;
- (BOOL)accessibilityActivate;
- (void)accessibilityDecrement;
- (struct CGRect)accessibilityFrame;
- (void)accessibilityIncrement;
- (id)accessibilityPath;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityUserInputLabels;
- (id)accessibilityValue;
- (BOOL)canBecomeFocused;
- (BOOL)isAccessibilityElement;
- (void)setCurrentPage:(long long)arg1;

@end

