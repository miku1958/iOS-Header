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
- (void)_accessibilityAnnotateFakeBackButton;
- (id)_accessibilityFuzzyHitTestElements;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_canHandleStatusBarMouseEvents:(struct __GSEvent *)arg1;
- (void)_navBarButtonPressed:(id)arg1;
- (void)_setLeftViews:(id)arg1 rightViews:(id)arg2;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformEscape;
- (unsigned long long)accessibilityTraits;
- (void)layoutSubviews;
- (void)popNavigationItem;
- (id)popNavigationItemAnimated:(BOOL)arg1;
- (BOOL)shouldGroupAccessibilityChildren;

@end

