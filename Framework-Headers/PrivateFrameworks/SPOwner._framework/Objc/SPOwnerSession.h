//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SPOwner/SPOwnerSessionPrivateProtocol-Protocol.h>
#import <SPOwner/SPPersistentConnectionProtocol-Protocol.h>
#import <SPOwner/SPTagSeparationProtocol-Protocol.h>
#import <SPOwner/SPTrackingAvoidanceServiceProtocol-Protocol.h>

@class FMXPCServiceDescription, FMXPCSession, NSDate, NSDictionary, NSMutableDictionary, NSOperationQueue, NSSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source, SPOwnerSessionXPCProtocol;

@interface SPOwnerSession : NSObject <SPPersistentConnectionProtocol, SPTrackingAvoidanceServiceProtocol, SPTagSeparationProtocol, SPOwnerSessionPrivateProtocol>
{
    CDUnknownBlockType beaconAddedBlock;
    CDUnknownBlockType beaconRemovedBlock;
    CDUnknownBlockType beaconsChangedBlock;
    CDUnknownBlockType latestLocationsUpdatedBlock;
    NSSet *_locationSources;
    FMXPCServiceDescription *_serviceDescription;
    FMXPCSession *_session;
    id<SPOwnerSessionXPCProtocol> _proxy;
    id<SPOwnerSessionXPCProtocol> _userAgentProxy;
    NSSet *_allBeaconsCache;
    NSSet *_clientObservedBeacons;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_notificationQueue;
    id _beaconsChangedNotificationToken;
    id _tagSeparationBeaconsChangedNotificationToken;
    id _persistentConnectionBeaconsChangedNotificationToken;
    id _beaconEstimatedLocationChangedNotificationToken;
    NSDictionary *_locationCache;
    NSObject<OS_dispatch_source> *_locationFetchDispatchTimer;
    NSObject<OS_dispatch_source> *_connectionExpiryDispatchTimer;
    NSDate *_fetchLimit;
    NSMutableDictionary *_batteryStatusCache;
    NSObject<OS_dispatch_source> *_registerIntentDispatchTimer;
}

@property (readonly, copy, nonatomic) NSSet *allBeacons;
@property (strong, nonatomic) NSSet *allBeaconsCache; // @synthesize allBeaconsCache=_allBeaconsCache;
@property (strong, nonatomic) NSMutableDictionary *batteryStatusCache; // @synthesize batteryStatusCache=_batteryStatusCache;
@property (copy, nonatomic) CDUnknownBlockType beaconAddedBlock; // @synthesize beaconAddedBlock;
@property (weak, nonatomic) id beaconEstimatedLocationChangedNotificationToken; // @synthesize beaconEstimatedLocationChangedNotificationToken=_beaconEstimatedLocationChangedNotificationToken;
@property (copy, nonatomic) CDUnknownBlockType beaconRemovedBlock; // @synthesize beaconRemovedBlock;
@property (copy, nonatomic) CDUnknownBlockType beaconsChangedBlock; // @synthesize beaconsChangedBlock;
@property (weak, nonatomic) id beaconsChangedNotificationToken; // @synthesize beaconsChangedNotificationToken=_beaconsChangedNotificationToken;
@property (strong, nonatomic) NSSet *clientObservedBeacons; // @synthesize clientObservedBeacons=_clientObservedBeacons;
@property (strong, nonatomic) NSObject<OS_dispatch_source> *connectionExpiryDispatchTimer; // @synthesize connectionExpiryDispatchTimer=_connectionExpiryDispatchTimer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDate *fetchLimit; // @synthesize fetchLimit=_fetchLimit;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) CDUnknownBlockType latestLocationsUpdatedBlock; // @synthesize latestLocationsUpdatedBlock;
@property (strong, nonatomic) NSDictionary *locationCache; // @synthesize locationCache=_locationCache;
@property (strong, nonatomic) NSObject<OS_dispatch_source> *locationFetchDispatchTimer; // @synthesize locationFetchDispatchTimer=_locationFetchDispatchTimer;
@property (copy, nonatomic) NSSet *locationSources; // @synthesize locationSources=_locationSources;
@property (strong, nonatomic) NSOperationQueue *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
@property (weak, nonatomic) id persistentConnectionBeaconsChangedNotificationToken; // @synthesize persistentConnectionBeaconsChangedNotificationToken=_persistentConnectionBeaconsChangedNotificationToken;
@property (strong, nonatomic) id<SPOwnerSessionXPCProtocol> proxy; // @synthesize proxy=_proxy;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) NSObject<OS_dispatch_source> *registerIntentDispatchTimer; // @synthesize registerIntentDispatchTimer=_registerIntentDispatchTimer;
@property (strong, nonatomic) FMXPCServiceDescription *serviceDescription; // @synthesize serviceDescription=_serviceDescription;
@property (strong, nonatomic) FMXPCSession *session; // @synthesize session=_session;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (weak, nonatomic) id tagSeparationBeaconsChangedNotificationToken; // @synthesize tagSeparationBeaconsChangedNotificationToken=_tagSeparationBeaconsChangedNotificationToken;
@property (strong, nonatomic) id<SPOwnerSessionXPCProtocol> userAgentProxy; // @synthesize userAgentProxy=_userAgentProxy;

- (void).cxx_destruct;
- (void)_cacheBatteryStatus:(unsigned char)arg1 beaconUUID:(id)arg2;
- (void)_invalidate;
- (void)_updateBatteryStatus:(unsigned char)arg1 beaconUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)acceptUTForBeaconUUID:(id)arg1;
- (void)addBeaconChangedListener:(id)arg1 beaconUUID:(id)arg2 taskName:(id)arg3 commandIdentifier:(id)arg4 commandIssueDate:(id)arg5;
- (void)allBeaconsWithCompletion:(CDUnknownBlockType)arg1;
- (oneway void)beaconForUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beaconStoreStatusWithCompletion:(CDUnknownBlockType)arg1;
- (id)beaconsToLeash;
- (void)beaconsToMaintainPersistentConnection:(CDUnknownBlockType)arg1;
- (void)connectionExpiryTimerFired;
- (void)dealloc;
- (void)didDetectUnauthorizedTrackingWithCompletion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didUpdateUnauthorizedTrackingWithCompletion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didWithdrawUnauthorizedTrackingWithCompletion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)disableUTAppAlert:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (id)executeCommand:(id)arg1;
- (void)executeCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)executeUTPlaySoundCommand:(id)arg1;
- (oneway void)fakeClassicPairingWithMACAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchUnauthorizedEncryptedPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)finishBeaconFuture:(id)arg1 beaconUUID:(id)arg2;
- (oneway void)forceDistributeKeysWithCompletion:(CDUnknownBlockType)arg1;
- (oneway void)forceKeySyncForBeaconUUID:(id)arg1 lastObservationDate:(id)arg2 lastObservationIndex:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (oneway void)forceUpdateKeyAlignmentRecordForUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)forceUpdateKeyMapsForUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)ignoreBeaconByAdvertisement:(id)arg1 until:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)ignoreBeaconByUUID:(id)arg1 until:(unsigned long long)arg2;
- (void)ignoreBeaconByUUID:(id)arg1 until:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)ignoreBeaconByUUID:(id)arg1 untilDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)ignoringUnauthorizedTrackingWithCompletion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (void)invalidateRegisterIntentDispatchTimer;
- (void)isUTAppAlertDisabled:(CDUnknownBlockType)arg1;
- (void)locationFetchTimerFired;
- (void)locationsForBeacons:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)playUnauthorizedSoundOnBeaconByUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)rawSearchResultsForBeacon:(id)arg1 dateInterval:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)registerIntentTimerFired;
- (id)remoteInterface;
- (void)removeBeacon:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendRegisterIntentWithCompletion:(CDUnknownBlockType)arg1;
- (void)sendUnregisterIntentWithCompletion:(CDUnknownBlockType)arg1;
- (void)setConnectionExpiryDispatchTimerWithInterval:(double)arg1;
- (void)setLocationFetchDispatchTimerWithInterval:(double)arg1;
- (void)setRegisterIntentDispatchTimerWithInterval:(double)arg1;
- (void)shareBeacon:(id)arg1 handles:(id)arg2 expiration:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)startRefreshing;
- (void)startRefreshingBeacons:(id)arg1;
- (void)startRefreshingPersistentConnectionWithBlock:(CDUnknownBlockType)arg1;
- (void)startRefreshingTagSeparationWithBlock:(CDUnknownBlockType)arg1;
- (void)stopRefreshing;
- (void)stopRefreshingPersistentConnection;
- (void)stopRefreshingTagSeparation;
- (void)tagSeparationStateChanged:(id)arg1 beaconUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)tagSeparationStateChanged:(id)arg1 beaconUUID:(id)arg2 location:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)unacceptedBeaconsWithCompletion:(CDUnknownBlockType)arg1;
- (void)unauthorizedTrackingTypeWithCompletion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unknownBeaconsForUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateAllBeaconLocations;
- (void)updateAllBeacons;
- (void)updateBatteryStatus:(unsigned char)arg1 beaconUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateBeaconObservations:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateConnectionExpiryDispatchTimerWithBeacons:(id)arg1;
- (void)waitForBeaconStoreAvailableWithCompletion:(CDUnknownBlockType)arg1;

@end

