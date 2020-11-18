//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSSet;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface PLChangeNode : NSObject
{
    NSObject<OS_xpc_object> *_hubConnection;
    Class _changeHubClass;
    unsigned char _nodeUUID[16];
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    unsigned long long _lastKnownChangeHubEventIndex;
    BOOL _isObservingOrderKeys;
    NSSet *_observedRelationships;
    NSMutableDictionary *_updatedOrderKeyObjectIDs;
}

+ (id)_descriptionForEvent:(id)arg1;
+ (id)localChangeEventFromChangeHubEvent:(id)arg1;
+ (id)sharedNode;
- (BOOL)_inq_registerForStoreOrderKeyUpdateNotificationFromManagedObjectContext:(id)arg1;
- (void)_processCloudFeedUpdateDataFromChangeHubEvent:(id)arg1 transaction:(id)arg2;
- (void)_processDelayedAlbumCountUpdates:(id)arg1 transaction:(id)arg2;
- (void)_processDelayedAlbumCountUpdatesFromChangeHubEvent:(id)arg1 transaction:(id)arg2;
- (void)_processDelayedAssetsForAnalysis:(id)arg1 transaction:(id)arg2;
- (void)_processDelayedAssetsForFileSystemPersistencyFromChangeHubEvent:(id)arg1 transaction:(id)arg2;
- (void)_processDelayedDupeAnalysisFromChangeHubEvent:(id)arg1 transaction:(id)arg2;
- (void)_processDelayedSearchIndexUpdates:(id)arg1 transaction:(id)arg2;
- (void)_processDelayedSearchIndexUpdatesFromChangeHubEvent:(id)arg1 transaction:(id)arg2;
- (void)_processDeletionsFromChangeHubEvent:(id)arg1 transaction:(id)arg2;
- (void)connectManagedObjectContext:(id)arg1;
- (id)createXPCObjectFromDidSaveNotification:(id)arg1 updatedAttributesByObjectID:(id)arg2 updatedRelationshipsByObjectID:(id)arg3 updatedOrderKeys:(id)arg4;
- (void)dealloc;
- (void)disconnectManagedObjectContext:(id)arg1;
- (void)distributeRemoteChangeHubEvent:(id)arg1 withGroup:(id)arg2 transaction:(id)arg3;
- (void)distributeRemoteContextDidSaveEvent:(id)arg1 withGroup:(id)arg2 transaction:(id)arg3;
- (void)fetchNewEventsFromChangeHub;
- (void)forceUserInterfaceReload;
- (id)getAndClearUpdatedOrderKeys;
- (void)handleRemoteChangeHubRequest:(id)arg1;
- (id)init;
- (BOOL)isEventOriginatingFromHere:(id)arg1;
- (void)persistentStoreDidUpdateOrderKeys:(id)arg1;
- (void)printChangeStore;
- (void)processDelayedAssetsForFileSystemPersistency:(id)arg1 transaction:(id)arg2;
- (void)processDelayedCloudFeedAlbumUpdates:(id)arg1 assetInserts:(id)arg2 assetUpdates:(id)arg3 commentInserts:(id)arg4 invitationRecordUpdates:(id)arg5 deletionEntries:(id)arg6 transaction:(id)arg7;
- (void)processDelayedDupeAnalysisNormalInserts:(id)arg1 cloudInserts:(id)arg2 transaction:(id)arg3;
- (void)processDelayedMomentChangesWithTransaction:(id)arg1;
- (void)processRemoteEvents:(id)arg1;
- (void)sendChangeHubEventForDidSaveNotification:(id)arg1;
- (id)sendEventToChangeHub:(id)arg1 transaction:(id)arg2;
- (void)setupHubConnection;

@end

