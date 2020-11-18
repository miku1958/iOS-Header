//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBDeviceApplicationSceneOverlayViewProvider.h>

@class STBlockingViewController;

@interface SBDeviceApplicationScreenTimeLockoutViewProvider : SBDeviceApplicationSceneOverlayViewProvider
{
    STBlockingViewController *_blockingViewController;
    BOOL _isActive;
}

- (void).cxx_destruct;
- (void)_activateIfPossible;
- (void)_deactivateIfPossible;
- (void)_handleInstalledAppsChanged:(id)arg1;
- (id)_newBlockingViewControllerWithBundleIdentifier:(id)arg1;
- (id)_realOverlayViewController;
- (void)dealloc;
- (void)hideContentWithAnimation:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithSceneHandle:(id)arg1 delegate:(id)arg2;
- (long long)priority;
- (void)showContentWithAnimation:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
