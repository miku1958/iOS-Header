//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SUClientDispatch : NSObject
{
}

+ (id)clientInterface;
+ (void)composeEmailWithSubject:(id)arg1 body:(id)arg2;
+ (BOOL)composeReviewWithViewController:(id)arg1 animated:(BOOL)arg2;
+ (void)dismissOverlayBackgroundViewController;
+ (BOOL)enterAccountFlowWithViewController:(id)arg1 animated:(BOOL)arg2;
+ (id)exitStoreButtonTitle;
+ (BOOL)hidePreviewOverlayAnimated:(BOOL)arg1;
+ (id)imageCache;
+ (id)imagePool;
+ (BOOL)isTabBarControllerLoaded;
+ (BOOL)matchesClientApplication:(id)arg1;
+ (id)newScriptInterface;
+ (id)overlayBackgroundViewController;
+ (id)overlayConfigurationForStorePage:(id)arg1;
+ (BOOL)presentOverlayBackgroundViewController:(id)arg1;
+ (id)previewOverlayViewController;
+ (id)scriptExecutionContext;
+ (BOOL)sendActionForDialog:(id)arg1 button:(id)arg2;
+ (void)setClientBridge:(id)arg1;
+ (BOOL)showPreviewOverlayAnimated:(BOOL)arg1;
+ (id)tabBarController;
+ (BOOL)wasLaunchedFromLibrary;

@end

