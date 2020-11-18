//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FMF/FMFXPCInternalClientProtocol-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSOperationQueue, NSSet, NSString, NSXPCConnection;
@protocol FMFSessionDelegate, OS_dispatch_queue;

@interface FMFSession : NSObject <FMFXPCInternalClientProtocol>
{
    BOOL _isModelInitialized;
    id<FMFSessionDelegate> _delegate;
    NSOperationQueue *_delegateQueue;
    NSMutableSet *_internalHandles;
    NSXPCConnection *_connection;
    NSSet *_cachedGetHandlesSharingLocationsWithMe;
    NSSet *_cachedGetHandlesFollowingMyLocation;
    NSMutableDictionary *_cachedLocationForHandleByHandle;
    NSMutableDictionary *_cachedOfferExpirationForHandleByHandle;
    NSMutableDictionary *_cachedCanShareLocationWithHandleByHandle;
    NSObject<OS_dispatch_queue> *_connectionQueue;
}

@property (strong, nonatomic) NSMutableDictionary *cachedCanShareLocationWithHandleByHandle; // @synthesize cachedCanShareLocationWithHandleByHandle=_cachedCanShareLocationWithHandleByHandle;
@property (strong, nonatomic) NSSet *cachedGetHandlesFollowingMyLocation; // @synthesize cachedGetHandlesFollowingMyLocation=_cachedGetHandlesFollowingMyLocation;
@property (strong, nonatomic) NSSet *cachedGetHandlesSharingLocationsWithMe; // @synthesize cachedGetHandlesSharingLocationsWithMe=_cachedGetHandlesSharingLocationsWithMe;
@property (strong, nonatomic) NSMutableDictionary *cachedLocationForHandleByHandle; // @synthesize cachedLocationForHandleByHandle=_cachedLocationForHandleByHandle;
@property (strong, nonatomic) NSMutableDictionary *cachedOfferExpirationForHandleByHandle; // @synthesize cachedOfferExpirationForHandleByHandle=_cachedOfferExpirationForHandleByHandle;
@property (strong, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<FMFSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSOperationQueue *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSSet *handles;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableSet *internalHandles; // @synthesize internalHandles=_internalHandles;
@property (nonatomic) BOOL isModelInitialized; // @synthesize isModelInitialized=_isModelInitialized;
@property (readonly) Class superclass;

+ (BOOL)FMFAllowed;
+ (BOOL)FMFRestricted;
+ (BOOL)isProvisionedForLocationSharing;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)__connection;
- (void)_checkAndDisplayMeDeviceSwitchAlert;
- (void)_daemonDidLaunch;
- (BOOL)_isNoMappingPacketReturnedError:(id)arg1;
- (void)_registerForFMFDLaunchedNotification;
- (void)_sendAutoSwitchMeDevice;
- (void)_sendFriendshipOfferToHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (oneway void)abDidChange;
- (oneway void)abPreferencesDidChange;
- (void)addHandles:(id)arg1;
- (void)approveFriendshipRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)cachedLocationForHandle:(id)arg1;
- (BOOL)canGetLocationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3;
- (void)canGetLocationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)canOfferToHandles:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)canShareLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3;
- (void)canShareLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)contactForPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)crashDaemon;
- (void)dataForPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)declineFriendshipRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)decryptPayload:(id)arg1 withToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (oneway void)didAddFollowerHandle:(id)arg1;
- (oneway void)didChangeActiveLocationSharingDevice:(id)arg1;
- (void)didReceiveFriendshipRequest:(id)arg1;
- (oneway void)didReceiveServerError:(id)arg1;
- (oneway void)didRemoveFollowerHandle:(id)arg1;
- (oneway void)didStartFollowingHandle:(id)arg1;
- (oneway void)didStopFollowingHandle:(id)arg1;
- (oneway void)didUpdateActiveDeviceList:(id)arg1;
- (oneway void)didUpdateFavorites:(id)arg1;
- (oneway void)didUpdateFollowers:(id)arg1;
- (oneway void)didUpdateFollowing:(id)arg1;
- (oneway void)didUpdateHideFromFollowersStatus:(BOOL)arg1;
- (oneway void)didUpdateLocations:(id)arg1;
- (oneway void)didUpdatePendingOffersForHandles:(id)arg1;
- (void)dispatchOnDelegateQueue:(CDUnknownBlockType)arg1;
- (void)dumpStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)encryptPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)exit5XXGracePeriod;
- (void)extendFriendshipOfferToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (oneway void)failedToGetLocationForHandle:(id)arg1 error:(id)arg2;
- (void)favoritesForMaxCount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)forceRefresh;
- (void)getAbRecordIdForHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getActiveLocationSharingDevice;
- (void)getActiveLocationSharingDevice:(CDUnknownBlockType)arg1;
- (id)getAllDevices;
- (void)getAllDevices:(CDUnknownBlockType)arg1;
- (void)getAllLocations:(CDUnknownBlockType)arg1;
- (void)getDataForPerformanceRequest:(CDUnknownBlockType)arg1;
- (id)getFavoritesSharingLocationWithMe;
- (id)getHandlesFollowingMyLocation;
- (void)getHandlesFollowingMyLocation:(CDUnknownBlockType)arg1;
- (void)getHandlesFollowingMyLocationWithGroupId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getHandlesSharingLocationsWithMe;
- (void)getHandlesSharingLocationsWithMe:(CDUnknownBlockType)arg1;
- (void)getHandlesSharingLocationsWithMeWithGroupId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getHandlesWithPendingOffers;
- (void)getHandlesWithPendingOffers:(CDUnknownBlockType)arg1;
- (id)getOfferExpirationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3;
- (void)getOfferExpirationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getPendingFriendshipRequestsWithCompletion:(CDUnknownBlockType)arg1;
- (void)getPendingMappingPacketsForHandle:(id)arg1 groupId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getPrettyNameForHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleAndLocationForPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleIncomingAirDropURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)hasModelInitialized;
- (oneway void)iCloudAccountNameWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (id)internalConnection;
- (void)invalidate;
- (void)invalidateWithError:(id)arg1;
- (BOOL)is5XXError:(id)arg1;
- (void)isIn5XXGracePeriodWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)isMyLocationEnabled;
- (void)isMyLocationEnabled:(CDUnknownBlockType)arg1;
- (void)locatingInProgressChanged:(id)arg1;
- (void)locationForHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)mappingPacketSendFailed:(id)arg1 toHandle:(id)arg2 withError:(id)arg3;
- (double)maxLocatingInterval;
- (oneway void)modelDidLoad;
- (void)nearbyLocationsWithCompletion:(CDUnknownBlockType)arg1;
- (oneway void)networkReachabilityUpdated:(BOOL)arg1;
- (void)receivedMappingPacket:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshLocationForHandle:(id)arg1 callerId:(id)arg2 priority:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)refreshLocationForHandles:(id)arg1 callerId:(id)arg2 priority:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)reloadDataIfNotLoaded;
- (void)removeDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeHandles:(id)arg1;
- (void)sendFriendshipInviteToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)sendFriendshipOfferToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)sendFriendshipOfferToHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)sendIDSPacket:(id)arg1 toHandle:(id)arg2;
- (oneway void)sendMappingPacket:(id)arg1 toHandle:(id)arg2;
- (id)serverProxy;
- (void)sessionHandleReport:(CDUnknownBlockType)arg1;
- (void)setActiveDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setExpiredInitTimestamp;
- (void)setHideMyLocationEnabled:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)setLocations:(id)arg1;
- (BOOL)shouldHandleErrorInFWK:(id)arg1;
- (void)stopSharingMyLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)stopSharingMyLocationWithHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)verifyRestrictionsAndShowDialogIfRequired;

@end

