//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBAppLayout, SBFluidSwitcherPageContentViewProvider, SBTransientOverlayViewController, UIViewController;
@protocol SBAppSwitcherReusableSnapshotViewDelegate;

@protocol SBFluidSwitcherPageContentViewProviderDelegate <NSObject>
- (UIViewController *)containerViewControllerForPageViewFromProvider:(SBFluidSwitcherPageContentViewProvider *)arg1;
- (id<SBAppSwitcherReusableSnapshotViewDelegate>)delegateForForSnapshotPageViewFromProvider:(SBFluidSwitcherPageContentViewProvider *)arg1;
- (long long)orientationForPageViewFromProvider:(SBFluidSwitcherPageContentViewProvider *)arg1;
- (struct CGSize)sizeForAppLayout:(SBAppLayout *)arg1 fromProvider:(SBFluidSwitcherPageContentViewProvider *)arg2;
- (SBTransientOverlayViewController *)viewControllerForTransientOverlayAppLayout:(SBAppLayout *)arg1 fromProvider:(SBFluidSwitcherPageContentViewProvider *)arg2;
@end
