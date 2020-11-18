//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSArray, NSString, NSURL, SFSafariViewControllerConfiguration, UIColor;

@protocol SFServiceViewControllerProtocol <NSObject>
- (void)decideCookieSharingForURL:(NSURL *)arg1 callbackURLScheme:(NSString *)arg2;
- (void)didDetectRemoteViewControllerViewIsHidden;
- (void)didDetectUserInteractionFromHostApp;
- (void)didFetchCustomActivities:(NSArray *)arg1 excludedActivityTypes:(NSArray *)arg2;
- (void)loadURL:(NSURL *)arg1;
- (void)openCurrentURLInSafari;
- (void)repostNotificationInViewService:(NSString *)arg1;
- (void)setConfiguration:(SFSafariViewControllerConfiguration *)arg1;
- (void)setDismissButtonStyle:(long long)arg1;
- (void)setDisplayMode:(long long)arg1;
- (void)setIsBeingUsedForLinkPreview:(BOOL)arg1;
- (void)setIsRunningTransitionAnimation:(BOOL)arg1;
- (void)setPreferredBarTintColor:(UIColor *)arg1;
- (void)setPreferredControlTintColor:(UIColor *)arg1;
- (void)updateScrollViewIndicatorVerticalInsets:(struct UIEdgeInsets)arg1 horizontalInsets:(struct UIEdgeInsets)arg2;
@end

