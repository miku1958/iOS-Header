//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/__UIScrollViewAccessibility_super.h>

@interface UIScrollViewAccessibility : __UIScrollViewAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (BOOL)_accessibilityCanHandleContentPullDown;
- (struct CGRect)_accessibilityContentFrame;
- (struct UIEdgeInsets)_accessibilityContentInset;
- (struct CGPoint)_accessibilityContentOffset;
- (BOOL)_accessibilityContentOffsetForScrollDirection:(int)arg1 newContentOffset:(struct CGPoint *)arg2 distanceMultiplier:(double)arg3;
- (void)_accessibilityCurrentPage:(long long *)arg1 totalPages:(long long *)arg2;
- (void)_accessibilityCurrentPage:(long long *)arg1 totalPages:(long long *)arg2 type:(int)arg3;
- (id)_accessibilityDelegateScrollStatus;
- (id)_accessibilityFindRefreshControl;
- (id)_accessibilityFirstLastOpaqueElement:(BOOL)arg1;
- (id)_accessibilityFirstOpaqueElement;
- (BOOL)_accessibilityIsScannerGroup;
- (BOOL)_accessibilityIsScrollAncestor;
- (id)_accessibilityLastOpaqueElement;
- (struct UIEdgeInsets)_accessibilityNavigationControllerInset;
- (long long)_accessibilityPageCount;
- (long long)_accessibilityPageIndex;
- (id)_accessibilityRetrieveDelegate;
- (double)_accessibilityScrollAnimationDurationDelay;
- (double)_accessibilityScrollHeightDistance;
- (BOOL)_accessibilityScrollPageInDirection:(int)arg1;
- (id)_accessibilityScrollStatus;
- (id)_accessibilityScrollStatusFormatString;
- (BOOL)_accessibilityScrollStatusPrefersVertical;
- (BOOL)_accessibilityScrollToFrame:(struct CGRect)arg1 forView:(id)arg2;
- (void)_accessibilityScrollToTopWithAnnouncement:(BOOL)arg1 touchLocation:(struct CGPoint)arg2 originalHandler:(CDUnknownBlockType)arg3;
- (struct CGRect)_accessibilityScrollViewVisibleFrame;
- (double)_accessibilityScrollWidthDistance;
- (BOOL)_accessibilityScrollingEnabled;
- (void)_accessibilitySendScrollStatus;
- (void)_accessibilitySetNavigationControllerInset:(struct UIEdgeInsets)arg1;
- (void)_accessibilitySetScrollStatus:(id)arg1;
- (void)_accessibilitySetStoredVisibleContentInset:(id)arg1;
- (void)_accessibilitySetVisibleContentInset:(struct UIEdgeInsets)arg1;
- (BOOL)_accessibilityShouldAnimateScroll;
- (BOOL)_accessibilityShouldAnimateScrollToVisible;
- (id)_accessibilityStoredVisibleContentInset;
- (id)_accessibilitySubviews;
- (struct CGRect)_accessibilityUIViewAccessibilityFrame;
- (BOOL)_accessibilityUseContentInset;
- (id)_accessibilityUserTestingChildren;
- (struct UIEdgeInsets)_accessibilityVisibleContentInset;
- (struct CGPoint)_accessibilityVisibleScrollArea:(BOOL)arg1;
- (void)_accessibilityZoomAtPoint:(struct CGPoint)arg1 zoomIn:(BOOL)arg2;
- (double)_accessibilityZoomScale;
- (void)_announceDelayedStatus;
- (BOOL)_axShouldScrollToAlignWithPage;
- (void)_handleScrollViewPullDown;
- (void)_manipulateWithRefreshControl:(id)arg1;
- (void)_notifyDidScroll;
- (void)_scrollToTopFromTouchAtScreenLocation:(struct CGPoint)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)_scrollViewAnimationEnded:(id)arg1 finished:(BOOL)arg2;
- (id)_staticScrollBar;
- (void)accessibilityApplyScrollContent:(struct CGPoint)arg1 sendScrollStatus:(BOOL)arg2 animated:(BOOL)arg3;
- (struct CGRect)accessibilityFrame;
- (BOOL)accessibilityScrollDownPage;
- (BOOL)accessibilityScrollDownPageSupported;
- (BOOL)accessibilityScrollLeftPage;
- (BOOL)accessibilityScrollLeftPageSupported;
- (BOOL)accessibilityScrollRightPage;
- (BOOL)accessibilityScrollRightPageSupported;
- (BOOL)accessibilityScrollUpPage;
- (BOOL)accessibilityScrollUpPageSupported;
- (struct CGPoint)accessibilityValidateScrollContentOffset:(struct CGPoint)arg1;
- (void)accessibilityZoomInAtPoint:(struct CGPoint)arg1;
- (void)accessibilityZoomOutAtPoint:(struct CGPoint)arg1;

@end

