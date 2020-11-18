//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSArray, NSString, NSURL, UIColor;

@protocol SFServiceViewControllerProtocol <NSObject>
- (void)didDetectRemoteViewControllerViewIsHidden;
- (void)didFetchHostAppCustomActivities:(NSArray *)arg1;
- (void)loadURL:(NSURL *)arg1;
- (void)repostNotificationInViewService:(NSString *)arg1;
- (void)setEntersReaderIfAvailable:(BOOL)arg1;
- (void)setIsRunningTransitionAnimation:(BOOL)arg1;
- (void)setPreferredBarTintColor:(UIColor *)arg1;
- (void)setPreferredControlTintColor:(UIColor *)arg1;
- (void)setShowingLinkPreview:(BOOL)arg1;
- (void)setTintColor:(UIColor *)arg1;
@end

