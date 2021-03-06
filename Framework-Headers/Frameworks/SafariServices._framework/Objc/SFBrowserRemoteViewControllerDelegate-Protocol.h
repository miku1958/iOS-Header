//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class LSAppLink, NSError, NSNumber, NSString, NSURL, SFBrowserRemoteViewController;

@protocol SFBrowserRemoteViewControllerDelegate <NSObject>
- (void)remoteViewController:(SFBrowserRemoteViewController *)arg1 didFinishInitialLoad:(BOOL)arg2;
- (void)remoteViewController:(SFBrowserRemoteViewController *)arg1 executeCustomActivityProxyID:(NSNumber *)arg2;
- (void)remoteViewController:(SFBrowserRemoteViewController *)arg1 fetchActivityViewControllerInfoForURL:(NSURL *)arg2 title:(NSString *)arg3;
- (void)remoteViewController:(SFBrowserRemoteViewController *)arg1 hostApplicationOpenURL:(NSURL *)arg2;
- (void)remoteViewController:(SFBrowserRemoteViewController *)arg1 initialLoadDidRedirectToURL:(NSURL *)arg2;
- (void)remoteViewController:(SFBrowserRemoteViewController *)arg1 setSwipeGestureEnabled:(BOOL)arg2;
- (void)remoteViewController:(SFBrowserRemoteViewController *)arg1 viewServiceDidTerminateWithError:(NSError *)arg2;
- (void)remoteViewControllerDidLoadWebView:(SFBrowserRemoteViewController *)arg1;
- (void)remoteViewControllerWillDismiss:(SFBrowserRemoteViewController *)arg1;

@optional
- (void)remoteViewController:(SFBrowserRemoteViewController *)arg1 didDecideCookieSharingForURL:(NSURL *)arg2 shouldCancel:(BOOL)arg3;
- (void)remoteViewController:(SFBrowserRemoteViewController *)arg1 didDecideShouldShowLinkPreviews:(BOOL)arg2;
- (void)remoteViewController:(SFBrowserRemoteViewController *)arg1 didResolveRedirectionWithURL:(NSURL *)arg2 appLink:(LSAppLink *)arg3;
- (void)remoteViewControllerWillOpenCurrentPageInBrowser:(SFBrowserRemoteViewController *)arg1;
@end

