//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBFolderViewDelegate-Protocol.h>

@class NSMutableDictionary, SBRootFolderView, UIView;
@protocol UIViewImplicitlyAnimating;

@protocol SBRootFolderViewDelegate <SBFolderViewDelegate>

@optional
- (UIView *)backgroundViewForDockForRootFolderView:(SBRootFolderView *)arg1;
- (UIView *)backgroundViewForEditingDoneButtonForRootFolderView:(SBRootFolderView *)arg1;
- (double)distanceToTopOfSpotlightIconsForRootFolderView:(SBRootFolderView *)arg1;
- (double)externalDockHeightForRootFolderView:(SBRootFolderView *)arg1;
- (double)maxExternalDockHeightForRootFolderView:(SBRootFolderView *)arg1;
- (double)preferredExternalDockVerticalMarginForRootFolderView:(SBRootFolderView *)arg1;
- (void)rootFolderView:(SBRootFolderView *)arg1 didChangeEffectiveSidebarVisibilityProgress:(double)arg2;
- (void)rootFolderView:(SBRootFolderView *)arg1 didChangeSidebarVisibilityProgress:(double)arg2;
- (void)rootFolderView:(SBRootFolderView *)arg1 didDismissPageManagementWithContext:(NSMutableDictionary *)arg2;
- (void)rootFolderView:(SBRootFolderView *)arg1 didEndOverscrollOnFirstPageWithVelocity:(double)arg2 translation:(double)arg3;
- (void)rootFolderView:(SBRootFolderView *)arg1 didEndOverscrollOnLastPageWithVelocity:(double)arg2 translation:(double)arg3;
- (void)rootFolderView:(SBRootFolderView *)arg1 didEndSidebarVisibilityTransitionWithEffectiveProgress:(double)arg2;
- (void)rootFolderView:(SBRootFolderView *)arg1 didOverscrollOnFirstPageByAmount:(double)arg2;
- (void)rootFolderView:(SBRootFolderView *)arg1 didOverscrollOnLastPageByAmount:(double)arg2;
- (void)rootFolderView:(SBRootFolderView *)arg1 wantsToAdjustTodayContentForEdgeBounceForScrollOffset:(struct CGPoint)arg2;
- (void)rootFolderView:(SBRootFolderView *)arg1 willDismissPageManagementUsingAnimator:(id<UIViewImplicitlyAnimating>)arg2 context:(NSMutableDictionary *)arg3;
- (void)rootFolderView:(SBRootFolderView *)arg1 willPresentPageManagementUsingAnimator:(id<UIViewImplicitlyAnimating>)arg2 context:(NSMutableDictionary *)arg3;
- (void)rootFolderViewWantsToEndEditing:(SBRootFolderView *)arg1;
- (void)rootFolderViewWantsWidgetEditingViewControllerPresented:(SBRootFolderView *)arg1;
@end

