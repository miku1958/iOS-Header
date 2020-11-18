//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSCloudTabDeviceProvider-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSString, WBSCloudTabDevice;
@protocol OS_dispatch_queue, WBSCloudTabStoreDelegate;

@interface WBSCloudTabStore : NSObject <WBSCloudTabDeviceProvider>
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableArray *_syncedCloudTabDevicesFromKVS;
    NSMutableDictionary *_deviceUUIDsToCloseRequestsFromKVS;
    BOOL _hasAttemptedToRemoveCurrentDeviceFromKVS;
    BOOL _isFetchingDataFromCloudKit;
    BOOL _hasAttemptedToFetchDevicesAtLeastOnce;
    NSMutableArray *_syncedCloudTabDevicesFromCloudKit;
    WBSCloudTabDevice *_currentDevice;
    NSMutableDictionary *_deviceUUIDsToCloseRequestsFromCloudKit;
    NSError *_lastFetchError;
    BOOL _syncAgentIsAvailable;
    id<WBSCloudTabStoreDelegate> _wbsDelegate;
}

@property (readonly, nonatomic) BOOL atLeastOneOtherActiveDeviceIsRegistered;
@property (readonly, nonatomic) BOOL currentDeviceIsRegisteredInCloudKit;
@property (readonly, copy, nonatomic) NSDate *dateOfLastCloudTabDevicesUpdate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentationOfCurrentDeviceInCloudKit;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSError *lastFetchError;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL syncAgentIsAvailable; // @synthesize syncAgentIsAvailable=_syncAgentIsAvailable;
@property (readonly, copy, nonatomic) NSArray *syncedCloudTabDevices;
@property (readonly, nonatomic) long long uniqueDeviceMultiplicity;
@property (weak, nonatomic) id<WBSCloudTabStoreDelegate> wbsDelegate; // @synthesize wbsDelegate=_wbsDelegate;

+ (id)_debugErrorMessageForCode:(long long)arg1;
+ (id)errorWithCode:(long long)arg1;
- (void).cxx_destruct;
- (void)_addCloseRequestDictionary:(id)arg1 toDeviceUUIDsToCloseRequestsDictionary:(id)arg2 requestUUID:(id)arg3;
- (void)_addDeviceDictionaryFromKVS:(id)arg1 deviceUUID:(id)arg2;
- (void)_closeRequestedTabIfPossible:(id)arg1;
- (BOOL)_closeTabs:(id)arg1 onDevice:(id)arg2;
- (id)_currentDeviceUUID;
- (BOOL)_deviceIsStoredInCloudKit:(id)arg1;
- (id)_deviceWithTabsWithOutstandingCloseRequestsRemoved:(id)arg1 closeRequestsForDevice:(id)arg2;
- (id)_devicesByRemovingDevicesFromKVSWithOutstandingCloseRequests:(id)arg1;
- (id)_devicesByRemovingThisDeviceAndDevicesWithNoTabs:(id)arg1;
- (void)_didFetchDeviceDictionariesFromCloudKit:(id)arg1 fetchedCloseRequests:(id)arg2 error:(id)arg3;
- (void)_didFetchDeviceDictionariesFromCloudKit:(id)arg1 fetchedCloseRequests:(id)arg2 fetchedDevicesBySyncing:(BOOL)arg3 error:(id)arg4;
- (unsigned long long)_indexOfDevice:(id)arg1 inSyncedCloudTabDevices:(id)arg2;
- (id)_keyValueStoreDictionaryRepresentation:(long long)arg1;
- (void)_pruneOrphanedCloseRequestsFromKVS;
- (void)_removeObjectFromKeyValueStore:(long long)arg1 forKey:(id)arg2;
- (void)_setDictionaryInKeyValueStore:(long long)arg1 dictionary:(id)arg2 forKey:(id)arg3;
- (void)_syncAgentProxyConnectionWasInvalidated:(id)arg1;
- (void)_tabWasClosed:(id)arg1 onDevice:(id)arg2 deviceIsStoredInCloudKit:(BOOL)arg3 syncedCloudTabDevices:(id)arg4;
- (void)_tabsWereClosed:(id)arg1 onDevice:(id)arg2 deviceIsStoredInCloudKit:(BOOL)arg3 syncedCloudTabDevices:(id)arg4;
- (BOOL)_writeCloseRequestForTab:(id)arg1 onDevice:(id)arg2 deviceIsStoredInCloudKit:(BOOL)arg3;
- (void)clearTabsForFirstDuplicateDeviceInCloudKitWithName:(id)arg1;
- (void)clearTabsForFirstDuplicateDeviceInCloudKitWithName:(id)arg1 passingTest:(CDUnknownBlockType)arg2;
- (BOOL)closeAllTabsOnDevice:(id)arg1;
- (BOOL)closeTab:(id)arg1 onDevice:(id)arg2;
- (BOOL)closeTabs:(id)arg1 onDevice:(id)arg2;
- (void)createSyncedCloudTabDevicesAndCloseRequestsFromKVS;
- (void)deleteAllDevicesFromCloudKit;
- (void)fetchSyncedCloudTabDevicesAndCloseRequestsFromCloudKit;
- (void)handleCloseTabRequestsFromCloudKit;
- (void)handleCloseTabRequestsFromKVS;
- (id)init;
- (void)pruneExpiredDevicesFromCloudKit;
- (void)pruneExpiredDevicesFromKVS;
- (void)resetSyncedCloudTabDevicesAndCloseRequestsFromCloudKit;
- (void)resetSyncedCloudTabDevicesAndCloseRequestsFromKVS;
- (void)saveCurrentCloudTabDeviceDictionaryToCloudKit:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)synchronizeCloudTabDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
