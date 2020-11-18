//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/__UITableViewAccessibility_super.h>

@interface UITableViewAccessibility : __UITableViewAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)_accessibilityClearChildren;
- (long long)_accessibilityDefaultTableViewCellScrollPosition;
- (id)_accessibilityFirstVisibleItem;
- (id)_accessibilityFooterElement;
- (id)_accessibilityFuzzyHitTest:(struct CGPoint *)arg1 withEvent:(id)arg2;
- (id)_accessibilityHeaderElement;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_accessibilityInitializeInternalData;
- (id)_accessibilityInternalData;
- (BOOL)_accessibilityIsScannerElement;
- (BOOL)_accessibilityIsScannerGroup;
- (BOOL)_accessibilityIsSearchTableVisible;
- (BOOL)_accessibilityNativeFocusPreferredElementIsValid;
- (void)_accessibilityOpaqueElementScrollCleanup;
- (BOOL)_accessibilityOpaqueElementScrollsContentIntoView;
- (id)_accessibilityOpaqueHeaderElementInDirection:(int)arg1 childElement:(id)arg2;
- (id)_accessibilityScannerGroupElements;
- (id)_accessibilityScrollStatus;
- (BOOL)_accessibilityScrollToFrame:(struct CGRect)arg1 forView:(id)arg2;
- (BOOL)_accessibilitySearchControllerDimmingViewVisible;
- (id)_accessibilitySearchResultsTableView;
- (BOOL)_accessibilitySearchTableViewVisible;
- (void)_accessibilitySetUseOpaqueElements:(id)arg1;
- (BOOL)_accessibilityShouldDisableCellReuse;
- (BOOL)_accessibilityShouldVerifyTableViewCellsAreVisibleByHitTesting;
- (id)_accessibilitySortedElementsWithin;
- (BOOL)_accessibilitySpeakThisShouldOnlyIncludeVisibleElements;
- (id)_accessibilitySubviews;
- (id)_accessibilitySupplementaryFooterViews;
- (id)_accessibilitySupplementaryHeaderViews;
- (id)_accessibilityTableViewCellElementForIndexPath:(id)arg1;
- (id)_accessibilityUIScrollViewScrollStatus;
- (id)_accessibilityUseOpaqueElements;
- (id)_accessibilityUserTestingChildren;
- (id)_accessibilityUserTestingVisibleCells;
- (id)_accessibilityUserTestingVisibleSections;
- (id)_accessibilityViewChildrenWithOptions:(id)arg1;
- (id)_accessibilityVisibleHeaderSections;
- (id)_axAttemptCreationOfViewType:(int)arg1 identifier:(id)arg2;
- (id)_axAttemptStoryboard:(id)arg1 viewType:(int)arg2;
- (id)_axFirstLastOpaqueHeaderElementFromSection:(long long)arg1 options:(id)arg2 direction:(int)arg3;
- (id)_axFirstLastOpaqueHeaderElementInDirection:(int)arg1 options:(id)arg2;
- (id)_axOffScreenOpaqueHeaderElementInDirection:(int)arg1 options:(id)arg2 childElement:(id)arg3;
- (id)_axOpaqueHeaderElementInDirection:(int)arg1 withinElements:(id)arg2 startIndex:(unsigned long long)arg3;
- (void)_axPostLayoutChange;
- (BOOL)_axSearchForSearchResultsView:(id)arg1;
- (void)_configureCellForDisplay:(id)arg1 forIndexPath:(id)arg2;
- (id)_delegateViewForFooterInSection:(long long)arg1;
- (id)_delegateViewForHeaderInSection:(long long)arg1;
- (void)_endReorderingForCell:(id)arg1 wasCancelled:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_handleDeviceOrientationChange:(id)arg1;
- (void)_reorderPositionChangedForCell:(id)arg1;
- (void)_setAccessibilitySearchControllerDimmingViewHidden;
- (void)_setAccessibilitySearchControllerDimmingViewVisible;
- (void)_setAccessibilitySearchTableViewHidden;
- (void)_setAccessibilitySearchTableViewVisible;
- (id)accessibilityCellForRowAtIndexPath:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (id)accessibilityElementForRow:(long long)arg1 andColumn:(long long)arg2;
- (BOOL)accessibilityElementsHidden;
- (void)accessibilityFindMockParentForTableViewCell:(id)arg1;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformEscape;
- (BOOL)accessibilityScrollLeftPageSupported;
- (BOOL)accessibilityScrollRightPageSupported;
- (id)accessibilityTableViewCellAccessibilityElementForTableViewCell:(id)arg1;
- (id)accessibilityTableViewCellElementAtGlobalRow:(long long)arg1;
- (id)accessibilityTableViewSectionElementAtSection:(long long)arg1 isHeader:(BOOL)arg2;
- (unsigned long long)accessibilityTraits;
- (void)dealloc;
- (void)deleteRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)deleteSections:(id)arg1 withRowAnimation:(long long)arg2;
- (id)dequeueReusableCellWithIdentifier:(id)arg1;
- (id)dequeueReusableCellWithIdentifier:(id)arg1 forIndexPath:(id)arg2;
- (id)dequeueReusableHeaderFooterViewWithIdentifier:(id)arg1;
- (id)description;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)indexPathsForRowsInRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (void)insertRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)insertSections:(id)arg1 withRowAnimation:(long long)arg2;
- (BOOL)isAccessibilityElement;
- (BOOL)isAccessibilityOpaqueElementProvider;
- (void)reloadData;
- (void)reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)reloadSections:(id)arg1 withRowAnimation:(long long)arg2;
- (void)setCountString:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setReusableCellsEnabled:(BOOL)arg1;
- (void)setTableHeaderViewShouldAutoHide:(BOOL)arg1;
- (BOOL)shouldGroupAccessibilityChildren;

@end

