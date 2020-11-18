//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotifications/_UNNotificationServiceExtensionContext.h>

#import <UserNotifications/_UNNotificationServiceExtensionRemoteXPCInterface-Protocol.h>

@class NSString, UNNotificationServiceExtension;

@interface _UNNotificationServiceExtensionRemoteContext : _UNNotificationServiceExtensionContext <_UNNotificationServiceExtensionRemoteXPCInterface>
{
    long long _replyOnceToken;
    UNNotificationServiceExtension *_extensionInstance;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UNNotificationServiceExtension *extensionInstance; // @synthesize extensionInstance=_extensionInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_stageAttachmentsForNotificationContent:(id)arg1;
- (void)didReceiveNotificationRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)serviceExtensionTimeWillExpire;

@end
