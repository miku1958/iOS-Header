//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDStandardTaskServer.h>

#import <HealthDaemon/HKSecondaryDevicePairingAgentServerInterface-Protocol.h>

@class HDSecondaryDevicePairingRequest, NSObject;
@protocol OS_dispatch_source;

@interface HDSecondaryDevicePairingAgentTaskServer : HDStandardTaskServer <HKSecondaryDevicePairingAgentServerInterface>
{
    struct os_unfair_lock_s _lock;
    NSObject<OS_dispatch_source> *_timeoutSource;
    BOOL _taskDidTimeout;
    HDSecondaryDevicePairingRequest *_currentRequest;
    double _tinkerSharingSetupTimeout;
    CDUnknownBlockType _unitTest_timeoutTriggered;
}

@property (nonatomic) double tinkerSharingSetupTimeout; // @synthesize tinkerSharingSetupTimeout=_tinkerSharingSetupTimeout;
@property (copy, nonatomic) CDUnknownBlockType unitTest_timeoutTriggered; // @synthesize unitTest_timeoutTriggered=_unitTest_timeoutTriggered;

+ (id)taskIdentifier;
- (void).cxx_destruct;
- (void)_acceptSharingForRequest:(id)arg1 metadata:(id)arg2;
- (void)_cancelTaskTimeout;
- (void)_didTimeOutWithHandler:(CDUnknownBlockType)arg1;
- (id)_existingTinkerProfileForRequest:(id)arg1 metadata:(id)arg2 acceptedShares:(id)arg3 error:(id *)arg4;
- (void)_finishWithSuccess:(BOOL)arg1 error:(id)arg2;
- (id)_lookupOrCreateTinkerProfileForRequest:(id)arg1 metadata:(id)arg2 acceptedShares:(id)arg3 error:(id *)arg4;
- (void)_prepareGuardianForSharingForRequest:(id)arg1;
- (void)_presentFailedTeardownAlert;
- (void)_scheduleTaskTimeout:(double)arg1 timeoutHandler:(CDUnknownBlockType)arg2;
- (void)_sendSharingRequestToTinkerDevice:(id)arg1;
- (void)_setupTinkerProfileForRequest:(id)arg1 metadata:(id)arg2 acceptedShares:(id)arg3;
- (BOOL)_updateProfile:(id)arg1 withDateOfBirth:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 dsid:(id)arg5 error:(id *)arg6;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)remoteInterface;
- (void)remote_fetchSharingStatusForCurrentAppleIDWithOwnerEmailAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_fetchSharingStatusWithPairedGuardianWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_performEndToEndCloudSyncWithNRDeviceUUID:(id)arg1 syncParticipantFirst:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_requestTinkerSharingOptInWithGuardianDisplayName:(id)arg1 NRDeviceUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_setupHealthSharingForSecondaryPairedDeviceWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_tearDownHealthSharingWithPairedGuardianWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_tearDownHealthSharingWithTinkerDeviceWithNRUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removePrivacyAlerts;

@end

