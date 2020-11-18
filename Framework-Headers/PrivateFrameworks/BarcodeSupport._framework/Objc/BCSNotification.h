//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BBBulletinRequest, BCSAction, BCSNotificationIcon, NSMutableDictionary, NSString;

@interface BCSNotification : NSObject
{
    BCSAction *_action;
    NSString *_identifier;
    BCSNotificationIcon *_attachmentIcon;
    NSMutableDictionary *_localActions;
    int _requestingProcessID;
}

@property (readonly, nonatomic) BBBulletinRequest *bulletinRequest;
@property (readonly, nonatomic) BOOL canHandleActionLocally;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) int requestingProcessID; // @synthesize requestingProcessID=_requestingProcessID;

+ (id)notificationForAction:(id)arg1;
+ (id)tempVCardFileURL;
- (void).cxx_destruct;
- (id)_actionDescriptionString;
- (id)_actionTypeString;
- (id)_bbActionFromActionPickerItem:(id)arg1;
- (BOOL)_contentIsPreviewable;
- (id)_defaultURL;
- (id)_fbOptionsHandlingUnlockIfNecessary;
- (void)_handleCalendarEventWithICSString:(id)arg1;
- (void)_handleContactInfo:(id)arg1;
- (id)_initWithAction:(id)arg1;
- (id)_orderAppLinkActionsByRecency:(id)arg1;
- (void)_performActionAfterUnlock:(CDUnknownBlockType)arg1;
- (id)_pickerLabelForURLActionPickerItem:(id)arg1;
- (id)_previewableData;
- (BOOL)_shouldHandleActionPickerItemLocally:(id)arg1;
- (BOOL)_shouldManuallyRequireAuthenticationForURL:(id)arg1;
- (BOOL)_shouldRequireUserToPickTargetApp;
- (BOOL)_shouldScheduleBackgroundActionForLaunchBundleID:(id)arg1;
- (void)_showAppPickerAlertWithFBOptions:(id)arg1;
- (id)_supplementActions;
- (id)_title;
- (id)attachmentDataForConstraints:(id)arg1;
- (void)didHandleBulletinActionWithIdentifier:(id)arg1;
- (void)handleActionWithIdentifier:(id)arg1 notificationResponseOriginID:(id)arg2;
- (BOOL)shouldHandleBulletinActionWithIdentifier:(id)arg1;

@end

