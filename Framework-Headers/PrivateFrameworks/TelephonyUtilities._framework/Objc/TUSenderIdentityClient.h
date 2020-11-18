//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, TUCoreTelephonyClient;

@interface TUSenderIdentityClient : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    id<TUCoreTelephonyClient> _client;
}

@property (strong, nonatomic) id<TUCoreTelephonyClient> client; // @synthesize client=_client;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

- (void).cxx_destruct;
- (BOOL)inEmergencyMode;
- (id)init;
- (BOOL)isEmergencyNumberForDigits:(id)arg1 senderIdentityUUID:(id)arg2;
- (BOOL)isEmergencyNumberForDigits:(id)arg1 senderIdentityUUID:(id)arg2 error:(id *)arg3;
- (BOOL)isRTTAvailableForSenderIdentityUUID:(id)arg1;
- (BOOL)isRTTSupportedForSenderIdentityUUID:(id)arg1;
- (BOOL)isTTYAvailableForSenderIdentityUUID:(id)arg1;
- (BOOL)isTTYEnabledForSenderIdentityUUID:(id)arg1;
- (BOOL)isTTYHardwareAvailableForSenderIdentityUUID:(id)arg1;
- (BOOL)isTTYHardwareEnabledForSenderIdentityUUID:(id)arg1;
- (BOOL)isTTYHardwareSupportedForSenderIdentityUUID:(id)arg1;
- (BOOL)isTTYSoftwareAvailableForSenderIdentityUUID:(id)arg1;
- (BOOL)isTTYSoftwareEnabledForSenderIdentityUUID:(id)arg1;
- (BOOL)isTTYSoftwareSupportedForSenderIdentityUUID:(id)arg1;
- (BOOL)isTTYSupportedForSenderIdentityUUID:(id)arg1;
- (BOOL)isWhitelistedEmergencyNumberForDigits:(id)arg1 senderIdentityUUID:(id)arg2;
- (BOOL)isWhitelistedEmergencyNumberForDigits:(id)arg1 senderIdentityUUID:(id)arg2 error:(id *)arg3;
- (BOOL)shouldShowEmergencyCallbackModeAlertForSenderIdentityUUID:(id)arg1;
- (BOOL)shouldShowEmergencyCallbackModeAlertForSenderIdentityUUID:(id)arg1 error:(id *)arg2;

@end
