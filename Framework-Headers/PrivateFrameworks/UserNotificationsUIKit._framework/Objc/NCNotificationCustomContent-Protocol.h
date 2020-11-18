//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class NCNotificationAction, NCNotificationRequest, NSDictionary, NSString;
@protocol NCNotificationCustomContentDelegate;

@protocol NCNotificationCustomContent <NSObject>

@property (readonly, nonatomic) NSString *contentExtensionIdentifier;
@property (weak, nonatomic) id<NCNotificationCustomContentDelegate> delegate;
@property (weak, nonatomic) NCNotificationAction *presentationSourceAction;
@property (readonly, copy, nonatomic) NSString *title;

- (BOOL)allowManualDismiss;
- (unsigned long long)customContentLocation;
- (BOOL)defaultContentHidden;
- (BOOL)didReceiveNotificationRequest:(NCNotificationRequest *)arg1;
- (BOOL)overridesDefaultTitle;
- (BOOL)performAction:(NCNotificationAction *)arg1 forNotification:(NCNotificationRequest *)arg2;
- (BOOL)performAction:(NCNotificationAction *)arg1 forNotification:(NCNotificationRequest *)arg2 withUserInfo:(NSDictionary *)arg3;
- (BOOL)userInteractionEnabled;

@optional
- (id)cancelTouches;
- (void)loadAudioAccessoryView;
- (void)playAudioMessage;
- (void)preserveInputViews;
- (BOOL)restoreInputViews;
@end

