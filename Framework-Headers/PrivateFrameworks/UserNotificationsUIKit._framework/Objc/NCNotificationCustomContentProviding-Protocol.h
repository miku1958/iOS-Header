//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class NCNotificationViewController, UIViewController;
@protocol NCNotificationCustomContent;

@protocol NCNotificationCustomContentProviding <NSObject>
- (UIViewController<NCNotificationCustomContent> *)longLookContentProvidingViewControllerForNotificationViewController:(NCNotificationViewController *)arg1;
@end
