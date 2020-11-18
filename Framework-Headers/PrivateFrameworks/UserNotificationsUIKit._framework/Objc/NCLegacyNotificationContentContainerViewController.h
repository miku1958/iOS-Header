//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <UserNotificationsUIKit/NCNotificationCustomContent-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationCustomContentDelegate-Protocol.h>

@class NCNotificationAction, NCNotificationRequest, NSString;
@protocol NCNotificationCustomContent, NCNotificationCustomContentDelegate;

@interface NCLegacyNotificationContentContainerViewController : UIViewController <NCNotificationCustomContentDelegate, NCNotificationCustomContent>
{
    BOOL _hasMinimalActions;
    id<NCNotificationCustomContentDelegate> _delegate;
    NCNotificationAction *_presentationSourceAction;
    UIViewController<NCNotificationCustomContent> *_contentViewController;
    NCNotificationRequest *_notificationRequest;
}

@property (readonly, nonatomic) NSString *contentExtensionIdentifier;
@property (strong, nonatomic) UIViewController<NCNotificationCustomContent> *contentViewController; // @synthesize contentViewController=_contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NCNotificationCustomContentDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasMinimalActions; // @synthesize hasMinimalActions=_hasMinimalActions;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NCNotificationRequest *notificationRequest; // @synthesize notificationRequest=_notificationRequest;
@property (weak, nonatomic) NCNotificationAction *presentationSourceAction; // @synthesize presentationSourceAction=_presentationSourceAction;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_contentView;
- (void)_loadContentViewControllerForNotificationRequest:(id)arg1;
- (BOOL)allowManualDismiss;
- (void)customContent:(id)arg1 didLoadAudioAccessoryView:(id)arg2;
- (void)customContent:(id)arg1 forwardAction:(id)arg2 forNotification:(id)arg3 withUserInfo:(id)arg4;
- (void)customContent:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotification:(id)arg3 withUserInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)customContentDidLoadExtension:(id)arg1;
- (unsigned long long)customContentLocation;
- (void)customContentRequestsDismiss:(id)arg1;
- (BOOL)defaultContentHidden;
- (void)didReceiveNotificationRequest:(id)arg1;
- (id)initWithNotificationRequest:(id)arg1;
- (void)loadAudioAccessoryView;
- (void)loadExtension;
- (void)loadView;
- (BOOL)performAction:(id)arg1 forNotification:(id)arg2;
- (BOOL)performAction:(id)arg1 forNotification:(id)arg2 withUserInfo:(id)arg3;
- (void)playAudioMessage;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;

@end

