//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class HFItem, HUAnimationSettings, HUApplier, HUQuickControlViewController, UIViewController;
@protocol HUQuickControlDetailsPresentationDelegateHost;

@protocol HUQuickControlViewControllerDelegate <NSObject>
- (UIViewController<HUQuickControlDetailsPresentationDelegateHost> *)detailsViewControllerForQuickControlViewController:(HUQuickControlViewController *)arg1 item:(HFItem *)arg2;
- (BOOL)hasDetailsActionForQuickControlViewController:(HUQuickControlViewController *)arg1 item:(HFItem *)arg2;
- (HUApplier *)quickControlViewController:(HUQuickControlViewController *)arg1 applierForSourceViewTransitionWithAnimationSettings:(HUAnimationSettings *)arg2 presenting:(BOOL)arg3;
- (double)quickControlViewController:(HUQuickControlViewController *)arg1 sourceViewInitialScaleForPresentation:(BOOL)arg2;
- (void)quickControlViewControllerWillDismissDetailsViewController:(HUQuickControlViewController *)arg1 shouldDismissQuickControl:(BOOL)arg2;
@end
