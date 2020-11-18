//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKFaceCollection.h>

#import <NanoTimeKitCompanion/NTKCollectionClient-Protocol.h>
#import <NanoTimeKitCompanion/NTKFaceObserver-Protocol.h>

@class NSArray, NSMutableArray, NSNumber, NSString, NSUUID, NSXPCConnection;

@interface NTKPersistentFaceCollection : NTKFaceCollection <NTKFaceObserver, NTKCollectionClient>
{
    BOOL _hasLoaded;
    NSXPCConnection *_connection;
    BOOL _registrationNeeded;
    NSNumber *_seqId;
    NSArray *_referenceOrderedUUIDs;
    NSUUID *_referenceSelectedUUID;
    BOOL _suppressingFaceObserverCallbacks;
    BOOL _updatesFromDaemonSuspended;
    NSMutableArray *_updatesFromDaemonEnqueuedWhileSuspended;
    NSString *_updateSuspensionIdentifier;
    BOOL _isLibraryCollection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didAddFace:(id)arg1 withUUID:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)_didMoveFace:(id)arg1 withUUID:(id)arg2 toIndex:(unsigned long long)arg3;
- (void)_didRemoveFace:(id)arg1 withUUID:(id)arg2;
- (void)_didSelectFaceUUID:(id)arg1;
- (void)_fromDaemon_addFace:(id)arg1 forUUID:(id)arg2;
- (void)_fromDaemon_computeSelectedUUIDFromReferenceAndNotifySelected;
- (void)_fromDaemon_removeFaceForUUID:(id)arg1;
- (void)_fromDaemon_updateFaceForUUID:(id)arg1 withConfiguration:(id)arg2;
- (void)_fromDaemon_updateFaceForUUID:(id)arg1 withResourceDirectory:(id)arg2;
- (void)_handleConnectionInterrupted;
- (void)_handleFlushCompleteForIdentifier:(id)arg1;
- (void)_notifyLoaded;
- (void)_performOrEnqueueUpdateOfType:(long long)arg1 forFaceUUID:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)_performSuppressingFaceObserverCallbacks:(CDUnknownBlockType)arg1;
- (void)_pruneEnqueuedUpdatesMadeObsoleteByNewUpdate:(id)arg1;
- (void)_registerIfNeeded;
- (void)_sendToDaemonAddedFace:(id)arg1 forUUID:(id)arg2;
- (void)_sendToDaemonFlushWithIdentifier:(id)arg1;
- (void)_sendToDaemonOrderedUUIDs;
- (void)_sendToDaemonRemovedFaceForUUID:(id)arg1;
- (void)_sendToDaemonReset;
- (void)_sendToDaemonSelectedUUID;
- (void)_sendToDaemonUpdatedConfigurationForFace:(id)arg1 withUUID:(id)arg2;
- (void)_sendToDaemonUpdatedResourceDirectoryForFace:(id)arg1 withUUID:(id)arg2;
- (id)_serverProxy;
- (void)addFace:(id)arg1 forUUID:(id)arg2 seqId:(id)arg3;
- (void)dealloc;
- (void)faceConfigurationDidChange:(id)arg1;
- (void)faceResourceDirectoryDidChange:(id)arg1;
- (void)flushCompleteForIdentifier:(id)arg1;
- (BOOL)hasLoaded;
- (id)initWithCollectionIdentifier:(id)arg1 deviceUUID:(id)arg2;
- (void)loadFullCollectionWithOrderedUUIDs:(id)arg1 selectedUUID:(id)arg2 facesByUUID:(id)arg3 seqId:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)removeFaceForUUID:(id)arg1 seqId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reset;
- (void)resumeUpdatesFromDaemon;
- (void)suspendUpdatesFromDaemon;
- (void)updateFaceForUUID:(id)arg1 withConfiguration:(id)arg2 seqId:(id)arg3;
- (void)updateFaceForUUID:(id)arg1 withResourceDirectory:(id)arg2 seqId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateOrderedFaceUUIDs:(id)arg1 seqId:(id)arg2;
- (void)updateSelectedFaceUUID:(id)arg1 seqId:(id)arg2;

@end

