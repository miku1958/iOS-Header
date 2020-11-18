//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsUIKit/NCAuxiliaryOptionsProviding-Protocol.h>

@class NCNotificationRequest, NSString;
@protocol NCNotificationManagementContentProviderDelegate;

@interface NCNotificationManagementContentProvider : NSObject <NCAuxiliaryOptionsProviding>
{
    NCNotificationRequest *_notificationRequest;
    id<NCNotificationManagementContentProviderDelegate> _managementDelegate;
}

@property (nonatomic) BOOL auxiliaryOptionsVisible;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<NCNotificationManagementContentProviderDelegate> managementDelegate; // @synthesize managementDelegate=_managementDelegate;
@property (strong, nonatomic) NCNotificationRequest *notificationRequest; // @synthesize notificationRequest=_notificationRequest;
@property (readonly, nonatomic) unsigned long long numberOfOptionButtons;
@property (readonly, copy, nonatomic) NSString *optionsSummaryText;
@property (readonly, copy, nonatomic) NSString *optionsSummaryTitle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)configureOptionButtons:(id)arg1;
- (void)handleManageAction:(id)arg1;
- (id)initWithNotificationRequest:(id)arg1 managementDelegate:(id)arg2;

@end
