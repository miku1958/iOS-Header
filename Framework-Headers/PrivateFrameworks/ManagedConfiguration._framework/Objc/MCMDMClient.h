//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface MCMDMClient : NSObject
{
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_xpcConnectionSyncQueue;
}

@property (strong, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *xpcConnectionSyncQueue; // @synthesize xpcConnectionSyncQueue=_xpcConnectionSyncQueue;

+ (id)sharedClient;
- (void).cxx_destruct;
- (void)_destroyXPCConnectionAndInvalidate:(BOOL)arg1;
- (void)_queue_createAndStartMDMXPCConnection;
- (int)accessRights;
- (BOOL)authenticateWithCheckInURL:(id)arg1 identity:(struct __SecIdentity *)arg2 pinnedSecCertificateRefs:(id)arg3 pinningRevocationCheckRequired:(BOOL)arg4 topic:(id)arg5 useDevelopmentAPNS:(BOOL)arg6 signMessage:(BOOL)arg7 isUserEnrollment:(BOOL)arg8 enrollmentID:(id)arg9 outError:(id *)arg10;
- (BOOL)checkOutCheckInURL:(id)arg1 identity:(struct __SecIdentity *)arg2 pinnedSecCertificateRefs:(id)arg3 pinningRevocationCheckRequired:(BOOL)arg4 topic:(id)arg5 signMessage:(BOOL)arg6 isUserEnrollment:(BOOL)arg7 enrollmentID:(id)arg8 outError:(id *)arg9;
- (void)dealloc;
- (id)deviceEnrollmentAuthenticationDict;
- (void)getAssertionDescriptionsWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (BOOL)isActivationLockAllowedWhileSupervised;
- (BOOL)isManagedByMDM;
- (void)migrateMDMWithContext:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)notifyNewConfiguration;
- (void)processDeviceRequest:(id)arg1 encodeResponse:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)retryNotNowResponse;
- (void)scheduleTokenUpdate;
- (void)scheduleTokenUpdateIfNecessary;
- (void)simulatePush;
- (void)simulatePushIfNetworkTetheredWithCompletion:(CDUnknownBlockType)arg1;
- (void)uprootMDM;
- (id)userEnrollmentAuthenticationDictWithEnrollmentID:(id)arg1;

@end

