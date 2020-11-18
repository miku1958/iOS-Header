//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "__SBFluidSwitcherViewControllerAccessibility_super.h"

@interface SBFluidSwitcherViewControllerAccessibility : __SBFluidSwitcherViewControllerAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (id)_accessibilityAppLayoutAtCurrentContentOffset;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_accessibilityOnlyComparesByXAxis;
- (BOOL)_accessibilityServesAsContainingParentForOrdering;
- (void)_addVisibleItemContainerForAppLayout:(id)arg1;
- (unsigned long long)_axAdjustedIndex:(unsigned long long)arg1 forScrollDirection:(long long)arg2;
- (id)_axAppLayoutForAppIdentifier:(id)arg1;
- (id)_axAppLayouts;
- (id)_axContentView;
- (void)_axCreateAppElements;
- (unsigned long long)_axCurrentAppLayoutIndex;
- (long long)_axEnvironmentMode;
- (BOOL)_axHasMultirowLayout;
- (id)_axIdentifierOfAppInLayoutState:(id)arg1;
- (BOOL)_axIsInSwitcher;
- (unsigned long long)_axNumberOfPages;
- (unsigned long long)_axPageForIndex:(unsigned long long)arg1;
- (BOOL)_axPerformScrollToIndex:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_axScrollStatusForIndex:(unsigned long long)arg1;
- (void)_axScrollToAppLayout:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_axVisibleAppLayouts;
- (BOOL)_removeVisibleItemContainerForAppLayout:(id)arg1;
- (void)_setupContentAndTransientViews;
- (BOOL)accessibilityPerformEscape;
- (BOOL)accessibilityScroll:(long long)arg1;
- (void)performTransitionWithContext:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;

@end

