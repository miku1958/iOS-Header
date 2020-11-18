//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _CDXPCCodecs : NSObject
{
}

+ (BOOL)addDeviceIDs:(id)arg1 toDictionary:(id)arg2 error:(id *)arg3;
+ (void)addError:(id)arg1 toReply:(id)arg2;
+ (BOOL)addKeyPaths:(id)arg1 toDictionary:(id)arg2 error:(id *)arg3;
+ (BOOL)addRegistration:(id)arg1 toDictionary:(id)arg2 error:(id *)arg3;
+ (id)commonContextValueNotificationsEventWithType:(const char *)arg1 registration:(id)arg2 deviceIDs:(id)arg3 error:(id *)arg4;
+ (id)deviceIDsFromDictionary:(id)arg1 error:(id *)arg2;
+ (id)errorFromReply:(id)arg1;
+ (long long)eventTypeWithEvent:(id)arg1;
+ (id)fetchPropertiesEventWithRemoteKeyPaths:(id)arg1 error:(id *)arg2;
+ (id)fetchPropertiesReplyWithEvent:(id)arg1 error:(id)arg2;
+ (id)fetchProxySourceDeviceUUIDEvent;
+ (id)fetchProxySourceDeviceUUIDReplyWithEvent:(id)arg1 sourceDeviceUUID:(id)arg2 error:(id)arg3;
+ (id)keepAliveEventWithKeepAlive:(BOOL)arg1 error:(id *)arg2;
+ (BOOL)keepAliveFromKeepAliveEvent:(id)arg1 error:(id *)arg2;
+ (id)keepAliveReplyWithEvent:(id)arg1 error:(id)arg2;
+ (id)keyPathsFromDictionary:(id)arg1 error:(id *)arg2;
+ (id)keyPathsFromFetchPropertiesEvent:(id)arg1 error:(id *)arg2;
+ (id)messageTypeFromEvent:(id)arg1;
+ (id)notificationEventWithRegistrationIdentifier:(id)arg1 info:(id)arg2 error:(id *)arg3;
+ (BOOL)parseNotificationEvent:(id)arg1 registrationIdentifier:(id *)arg2 info:(id *)arg3 error:(id *)arg4;
+ (id)parseProxySourceDeviceUUIDEvent:(id)arg1 error:(id *)arg2;
+ (BOOL)parseSubscribeToContextValueNotificationsEvent:(id)arg1 registration:(id *)arg2 deviceIDs:(id *)arg3 error:(id *)arg4;
+ (BOOL)parseUnsubscribeFromContextValueNotificationsEvent:(id)arg1 registration:(id *)arg2 deviceIDs:(id *)arg3 error:(id *)arg4;
+ (id)registrationFromDictionary:(id)arg1 error:(id *)arg2;
+ (id)requestActivateDevicesEvent;
+ (id)requestActivateDevicesReplyWithEvent:(id)arg1 error:(id)arg2;
+ (id)subscribeToContextValueNotificationsEventWithRegistration:(id)arg1 deviceIDs:(id)arg2 error:(id *)arg3;
+ (id)subscribeToContextValueNotificationsReplyWithEvent:(id)arg1 error:(id)arg2;
+ (id)unsubscribeFromContextValueNotificationsEventWithRegistration:(id)arg1 deviceIDs:(id)arg2 error:(id *)arg3;
+ (id)unsubscribeFromContextValueNotificationsReplyWithEvent:(id)arg1 error:(id)arg2;

@end
