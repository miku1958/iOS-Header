//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

@class NSArray;
@protocol UIViewControllerTransitionCoordinator;

@interface NCBannerPresentationController : UIPresentationController
{
    id<UIViewControllerTransitionCoordinator> _activeTransitionCoordinator;
    long long _transitionState;
    struct CGSize _childPreferredContentSize;
    BOOL _wantsUseableContainerBounds;
    NSArray *_additionalBackgroundViews;
}

@property (strong, nonatomic) NSArray *additionalBackgroundViews; // @synthesize additionalBackgroundViews=_additionalBackgroundViews;
@property (nonatomic) BOOL wantsUseableContainerBounds; // @synthesize wantsUseableContainerBounds=_wantsUseableContainerBounds;

+ (struct CGRect)_presentedFrameForVisiblePortion:(BOOL)arg1 ofView:(id)arg2 inPresentationFrame:(struct CGRect)arg3;
+ (struct CGRect)useableContainerViewFrameInContainerViewWithBounds:(struct CGRect)arg1;
+ (struct CGRect)visiblePresentedFrameForView:(id)arg1 inPresentationFrame:(struct CGRect)arg2;
- (void).cxx_destruct;
- (struct CGRect)_frameForViewController:(id)arg1 beyondEdge:(unsigned long long)arg2;
- (struct CGRect)_presentedFrameForView:(id)arg1 inPresentationFrame:(struct CGRect)arg2;
- (BOOL)_shouldDisableInteractionDuringTransitions;
- (void)dismissalTransitionDidEnd:(BOOL)arg1;
- (void)dismissalTransitionWillBegin;
- (struct CGRect)frameOfDismissedViewInContainerView;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)presentationTransitionDidEnd:(BOOL)arg1;
- (void)presentationTransitionWillBegin;
- (BOOL)shouldRemovePresentersView;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end
