//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/__UINavigationBarAccessibility_super.h>

@interface UINavigationBarAccessibility : __UINavigationBarAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (BOOL)_accessibilityAllowOutOfBoundsHitTestAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (double)_accessibilityAllowedGeometryOverlap;
- (unsigned long long)_accessibilityAutomationType;
- (id)_accessibilityFauxBackButton;
- (id)_accessibilityFetchCachedNavBarElements;
- (BOOL)_accessibilityHasLeftRightButtonCountChanged;
- (BOOL)_accessibilityHasTitleViewChanged;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (id)_accessibilityLeftButtonElements;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilityNavBarElements;
- (id)_accessibilityRightButtonElements;
- (void)_accessibilitySetFauxBackButton:(id)arg1;
- (void)_accessibilitySetNavBarElements:(id)arg1;
- (void)_accessibility_navigationBarContentsDidChange;
- (long long)accessibilityContainerType;
- (id)accessibilityElements;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformEscape;
- (void)addSubview:(id)arg1;
- (void)insertSubview:(id)arg1 aboveSubview:(id)arg2;
- (void)insertSubview:(id)arg1 atIndex:(long long)arg2;
- (void)insertSubview:(id)arg1 belowSubview:(id)arg2;
- (BOOL)shouldGroupAccessibilityChildren;
- (void)willRemoveSubview:(id)arg1;

@end
