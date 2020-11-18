//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSError, NSNumber, NSString, NSURL, SFBrowserRemoteViewController;

@protocol SFBrowserRemoveViewControllerDelegate <NSObject>
- (void)remoteViewController:(SFBrowserRemoteViewController *)arg1 didFinishInitialLoad:(BOOL)arg2;
- (void)remoteViewController:(SFBrowserRemoteViewController *)arg1 executeCustomActivityProxyID:(NSNumber *)arg2;
- (void)remoteViewController:(SFBrowserRemoteViewController *)arg1 fetchHostAppCustomActivitiesForURL:(NSURL *)arg2 title:(NSString *)arg3;
- (void)remoteViewController:(SFBrowserRemoteViewController *)arg1 setSwipeGestureEnabled:(BOOL)arg2;
- (void)remoteViewController:(SFBrowserRemoteViewController *)arg1 viewServiceDidTerminateWithError:(NSError *)arg2;
- (void)remoteViewController:(SFBrowserRemoteViewController *)arg1 willUpdateStatusBarStyle:(long long)arg2;
- (void)remoteViewControllerDidLoadWebView:(SFBrowserRemoteViewController *)arg1;
- (void)remoteViewControllerWillDismiss:(SFBrowserRemoteViewController *)arg1;
@end

