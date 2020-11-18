//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CompanionSync/SYStateLoggable-Protocol.h>
#import <CompanionSync/SYSyncEngineResponder-Protocol.h>

@class NSDictionary, NSMutableArray, NSMutableSet, NSString, PBCodable, SYDevice, SYPersistentStore, SYSession, SYSyncEngine, SYVectorClock, _SYMultiSuspendableQueue, _SYQueuedStartSession;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_activity, SYServiceDelegate;

@interface SYService : NSObject <SYSyncEngineResponder, SYStateLoggable>
{
    NSString *_serviceName;
    long long _defaultPriority;
    struct NSDictionary *_defaultOptions;
    NSDictionary *_customIDSOptions;
    SYSession *_currentSession;
    id<SYServiceDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_incomingIOQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    _SYMultiSuspendableQueue *_sessionQueue;
    NSObject<OS_dispatch_source> *_processSignalSource;
    SYPersistentStore *_persistentStore;
    SYSyncEngine *_syncEngine;
    SYVectorClock *_vectorClock;
    NSMutableSet *_rejectingV1SyncSessions;
    NSString *_inFlightSyncRequestIdentifier;
    _SYQueuedStartSession *_queuedStartSession;
    SYDevice *_targetedDevice;
    NSMutableArray *_onSessionEnd;
    NSObject<OS_os_activity> *_serviceActivity;
    unsigned long long _stateHandle;
    struct os_unfair_lock_s _flagLock;
    struct {
        unsigned int isMaster:1;
        unsigned int hasChanges:1;
        unsigned int needsReset:1;
        unsigned int hasPairingStore:1;
        unsigned int isRunning:1;
        unsigned int registeredForPairingNotifications:1;
        unsigned int remoteProtocolVersion:3;
        unsigned int remoteDeviceIsWatch:1;
        unsigned int isObservingRemoteDeviceProperties:1;
        unsigned int requestedEngineType:3;
        unsigned int assignedEngineType:3;
        unsigned int suspendedForQWS:1;
    } _flags;
    NSString *_peerID;
    double _defaultMessageTimeout;
    double _sessionStalenessInterval;
    long long _engineType;
    NSString *_generationID;
}

@property (readonly) SYSession *currentSession;
@property (copy, nonatomic) NSDictionary *customIDSOptions;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double defaultMessageTimeout; // @synthesize defaultMessageTimeout=_defaultMessageTimeout;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long engineType; // @synthesize engineType=_engineType;
@property (readonly, nonatomic) NSDictionary *extraTransportOptions;
@property (readonly, nonatomic) NSString *generationID; // @synthesize generationID=_generationID;
@property (readonly, nonatomic) BOOL hasPairingStore;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isMasterStore;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_serviceName;
@property (strong, nonatomic) NSDictionary *options; // @synthesize options=_defaultOptions;
@property (readonly, nonatomic) NSString *peerID; // @synthesize peerID=_peerID;
@property (readonly, nonatomic) SYPersistentStore *persistentStore; // @synthesize persistentStore=_persistentStore;
@property (nonatomic) long long priority; // @synthesize priority=_defaultPriority;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly, nonatomic) NSObject<OS_os_activity> *serviceActivity; // @synthesize serviceActivity=_serviceActivity;
@property (readonly, nonatomic) _SYMultiSuspendableQueue *sessionQueue; // @synthesize sessionQueue=_sessionQueue;
@property (nonatomic) double sessionStalenessInterval; // @synthesize sessionStalenessInterval=_sessionStalenessInterval;
@property (readonly, nonatomic) PBCodable *stateForLogging;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SYSyncEngine *syncEngine; // @synthesize syncEngine=_syncEngine;
@property (readonly, nonatomic) BOOL targetIsInProximity;

- (void).cxx_destruct;
- (id)_chooseBetweenCollidingSessions:(id)arg1:(id)arg2;
- (id)_claimOwnershipOfFileAtURL:(id)arg1 error:(id *)arg2;
- (void)_copyPeerClockFromMessageHeaderIfNecessary:(id)arg1;
- (void)_dealWithPotentiallyStallingCurrentSession;
- (void)_deviceOSInfoChanged:(id)arg1;
- (void)_deviceRemoved:(id)arg1;
- (void)_deviceTargetabilityChanged:(id)arg1;
- (void)_downgradeEngineForVersion:(int)arg1;
- (void)_enqueueIncomingStartSessionRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_handleEndSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_handleEndSessionResponse:(id)arg1 error:(id *)arg2;
- (void)_handleError:(id)arg1;
- (void)_handleResetRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_handleResetResponse:(id)arg1 error:(id *)arg2;
- (void)_handleRestartSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_handleRestartSessionResponse:(id)arg1 error:(id *)arg2;
- (void)_handleStartSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_handleStartSessionResponse:(id)arg1 error:(id *)arg2;
- (void)_handleSyncBatch:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_handleSyncBatchResponse:(id)arg1 error:(id *)arg2;
- (void)_ifDelegateImplements:(SEL)arg1 do:(CDUnknownBlockType)arg2 then:(CDUnknownBlockType)arg3;
- (BOOL)_initializeMessaging:(id *)arg1;
- (BOOL)_initializeServiceDB:(id *)arg1;
- (id)_makeSessionForDeltaSync:(BOOL)arg1;
- (id)_makeSyncEngineOfType:(long long)arg1;
- (id)_newMessageHeader;
- (id)_pathForDataStore;
- (void)_peerRejectedVersion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_postVersionRejectionMessageForMessageWithID:(id)arg1;
- (void)_processPendingChanges;
- (BOOL)_protocolVersion:(int)arg1 supportsEngineType:(long long)arg2;
- (void)_removePairingStoreDevice;
- (BOOL)_request:(id)arg1 hasValidSessionIDForSession:(id)arg2 response:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_sendResetRequest;
- (id)_sessionFromIncomingStartRequest:(id)arg1;
- (void)_setProtocolVersionForRemoteOSVersion:(id)arg1 build:(id)arg2 remoteIsWatch:(BOOL)arg3 switchingEngines:(BOOL)arg4;
- (void)_setupPairingNotifications;
- (void)_setupPairingStoreWithDevice:(id)arg1;
- (BOOL)_shouldSession:(id)arg1 fromPeer:(id)arg2 supercedeSession:(id)arg3 ofAge:(double)arg4 collisionDetected:(BOOL *)arg5;
- (void)_signalPairingStoreAvailable;
- (void)_signalPairingStoreUnavailable;
- (void)_suspend;
- (void)_swapEngineTo:(long long)arg1;
- (void)_swapSessionForVersionChange;
- (void)_switchToNewTargetedDevice:(id)arg1;
- (void)_updateMetaProtocolInfoForDevice:(id)arg1;
- (void)_upgradeEngineTo:(long long)arg1;
- (BOOL)_v1_handleBatchChunkAck:(id)arg1 error:(id *)arg2;
- (BOOL)_v1_handleBatchEndResponse:(id)arg1 error:(id *)arg2;
- (void)_v1_handleBatchSyncChunk:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_v1_handleBatchSyncEnd:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_v1_handleBatchSyncStart:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_v1_handleChangeMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_v1_handleFullSyncRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_v1_handleFullSyncRequestAck:(id)arg1 error:(id *)arg2;
- (void)_v1_handleSyncAllObjects:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_vectorClockUpdated;
- (void)_whenSessionEnds:(CDUnknownBlockType)arg1;
- (void)_wrapUpCurrentSession:(id)arg1;
- (void)currentDeviceProximityChanged:(BOOL)arg1;
- (void)dataStreamWithMetadata:(id)arg1 options:(struct NSDictionary *)arg2 completion:(CDUnknownBlockType)arg3;
- (id)dataStreamWithMetadata:(id)arg1 options:(struct NSDictionary *)arg2 identifier:(id *)arg3 error:(id *)arg4;
- (void)dealloc;
- (void)deliveredMessageWithID:(id)arg1 context:(id)arg2;
- (void)enqueuedMessageWithID:(id)arg1 context:(id)arg2;
- (void)handleFileTransfer:(id)arg1 metadata:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleOutOfBandData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleSyncError:(id)arg1 forMessageWithIdentifier:(id)arg2;
- (void)handleSyncRequest:(id)arg1 ofType:(unsigned short)arg2 response:(CDUnknownBlockType)arg3;
- (void)handleSyncResponse:(id)arg1 ofType:(unsigned short)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;
- (id)initWithService:(id)arg1 priority:(long long)arg2 asMasterStore:(BOOL)arg3 options:(struct NSDictionary *)arg4;
- (BOOL)resume:(id *)arg1;
- (void)sendData:(id)arg1 options:(struct NSDictionary *)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)sendData:(id)arg1 options:(struct NSDictionary *)arg2 identifier:(id *)arg3 error:(id *)arg4;
- (void)sentMessageWithID:(id)arg1 context:(id)arg2;
- (void)serializeForIncomingSession:(CDUnknownBlockType)arg1;
- (void)sessionDidEnd:(id)arg1 withError:(id)arg2;
- (void)sessionFailedToCancelMessageUUIDs:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setHasChangesAvailable;
- (void)setNeedsResetSync;
- (void)suspend;
- (BOOL)willAcceptMessageWithHeader:(id)arg1 messageID:(id)arg2;

@end

