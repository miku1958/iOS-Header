//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDAccessory.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDMediaAccessoryAdvertisement, HMDMediaProfile, NSString;

@interface HMDMediaAccessory : HMDAccessory <HMFLogging>
{
    HMDMediaAccessoryAdvertisement *_advertisement;
    HMDMediaProfile *_mediaProfile;
}

@property (readonly, copy) HMDMediaAccessoryAdvertisement *advertisement; // @synthesize advertisement=_advertisement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMDMediaProfile *mediaProfile; // @synthesize mediaProfile=_mediaProfile;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_createMediaProfile;
- (void)_registerForMessages;
- (BOOL)_shouldFilterAccessoryProfile:(id)arg1;
- (void)addAdvertisement:(id)arg1;
- (id)assistantObject;
- (void)configureWithHome:(id)arg1 msgDispatcher:(id)arg2 configurationTracker:(id)arg3 initialConfiguration:(BOOL)arg4;
- (id)dumpSimpleState;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (void)handleRoomChanged:(id)arg1;
- (void)handleRoomNameChanged:(id)arg1;
- (void)handleUpdatedAdvertisement:(id)arg1;
- (void)handleUpdatedMinimumUserPrivilege:(long long)arg1;
- (void)handleUpdatedPassword:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransaction:(id)arg1 home:(id)arg2;
- (id)name;
- (void)notifyConnectivityChangedWithReachabilityState:(BOOL)arg1;
- (BOOL)providesHashRouteID;
- (long long)reachableTransports;
- (void)removeAdvertisement:(id)arg1;
- (void)setAdvertisement:(id)arg1;
- (void)setRemotelyReachable:(BOOL)arg1;
- (unsigned long long)supportedTransports;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;
- (id)urlString;

@end

