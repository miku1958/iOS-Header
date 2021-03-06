//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CompanionSync/SYStore.h>

#import <CompanionSync/IDSServiceDelegate-Protocol.h>
#import <CompanionSync/NMSMessageCenterDelegate-Protocol.h>

@class NMSMessageCenter, NSError, NSMutableDictionary, NSMutableIndexSet, NSObject, NSString, NSUUID, SYPersistentStore, SYRetryTimer, SYVectorClock;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface SYLegacyStore : SYStore <IDSServiceDelegate, NMSMessageCenterDelegate>
{
    unsigned long long _batchCounter;
    NSMutableIndexSet *_batchChunkUnackedIndices;
    BOOL _tracksChanges;
    NSMutableDictionary *_sendSignals;
    SYRetryTimer *_syncRetryTimer;
    NSObject<OS_dispatch_source> *_overflowRetryTimer;
    NSError *_overflowRetryError;
    BOOL _deferredFullSync;
    NSObject<OS_os_transaction> *_transaction;
    BOOL _encryptPayloads;
    BOOL _alwaysWins;
    BOOL _registeredNotificationHandlers;
    BOOL _fullSyncWasRequestedBySlave;
    long long _priority;
    SYPersistentStore *_persistentStore;
    NSString *_service;
    NSString *_databaseFileName;
    NSObject<OS_dispatch_queue> *_queue;
    struct __CFString *_loggingFacility;
    NSUUID *_pairedDeviceID;
    NMSMessageCenter *_messageCenter;
    SYVectorClock *_vectorClock;
    CDUnknownBlockType _nextBatchStep;
}

@property (nonatomic) BOOL alwaysWins; // @synthesize alwaysWins=_alwaysWins;
@property (strong, nonatomic) NSString *databaseFileName; // @synthesize databaseFileName=_databaseFileName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL encryptPayloads; // @synthesize encryptPayloads=_encryptPayloads;
@property (nonatomic) BOOL fullSyncWasRequestedBySlave; // @synthesize fullSyncWasRequestedBySlave=_fullSyncWasRequestedBySlave;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct __CFString *loggingFacility; // @synthesize loggingFacility=_loggingFacility;
@property (strong, nonatomic) NMSMessageCenter *messageCenter; // @synthesize messageCenter=_messageCenter;
@property (copy, nonatomic) CDUnknownBlockType nextBatchStep; // @synthesize nextBatchStep=_nextBatchStep;
@property (strong, nonatomic) NSUUID *pairedDeviceID; // @synthesize pairedDeviceID=_pairedDeviceID;
@property (strong, nonatomic) SYPersistentStore *persistentStore; // @synthesize persistentStore=_persistentStore;
@property (nonatomic) long long priority; // @synthesize priority=_priority;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (nonatomic) BOOL registeredNotificationHandlers; // @synthesize registeredNotificationHandlers=_registeredNotificationHandlers;
@property (strong, nonatomic) NSString *service; // @synthesize service=_service;
@property (readonly) Class superclass;
@property (strong, nonatomic) SYVectorClock *vectorClock; // @synthesize vectorClock=_vectorClock;

+ (id)fullSyncActivityDictionary;
- (void).cxx_destruct;
- (BOOL)_allowDeltaSyncWithContext:(id)arg1 error:(id *)arg2;
- (id)_batchChunkUnackedIndices;
- (BOOL)_checkMessageHeader:(id)arg1 messageID:(id)arg2;
- (void)_copyPeerClockFromMessageHeaderIfNecessary:(id)arg1;
- (void)_devicePaired:(id)arg1;
- (void)_deviceUnpaired:(id)arg1;
- (id)_getPairedDeviceID;
- (id)_getPairingStorePath;
- (void)_handleIDSOverflowWithError:(id)arg1;
- (void)_handleObjectChanges:(id)arg1 contextInfo:(id)arg2 idsOptions:(id)arg3 blockUntilSent:(BOOL)arg4 reportError:(CDUnknownBlockType)arg5 notifyingTransaction:(id)arg6;
- (BOOL)_isPairedWithDevice:(id)arg1;
- (BOOL)_isUsingGenericCache;
- (void)_listenForPrefsChangeNotifications;
- (id)_pathForMessageCenterCache;
- (void)_postBatchEndMessageWithState:(id)arg1 error:(id)arg2 then:(CDUnknownBlockType)arg3;
- (void)_postBatchStartMessageWithState:(id)arg1 then:(CDUnknownBlockType)arg2;
- (void)_postVersionRejectedForMessageID:(id)arg1;
- (void)_prefsChanged;
- (void)_recordLastSeqNo:(id)arg1;
- (void)_restartBatchSyncWithState:(id)arg1 then:(CDUnknownBlockType)arg2;
- (void)_retrySync;
- (void)_sendBatchChunk:(id)arg1 withState:(id)arg2 then:(CDUnknownBlockType)arg3;
- (void)_setupMessageCenter_LOCKED;
- (BOOL)_shouldIgnoreSyncID:(id)arg1;
- (BOOL)_shouldSkipNonSyncMessages;
- (void)_syncEndedWithSyncID:(id)arg1;
- (void)_transaction:(CDUnknownBlockType)arg1 context:(id)arg2 idsOptions:(id)arg3 blockUntilSent:(BOOL)arg4 reportError:(CDUnknownBlockType)arg5;
- (void)_updateMessageCenterPrefs:(id)arg1;
- (void)_vectorClockUpdated;
- (BOOL)addObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 error:(id *)arg4;
- (void)dealloc;
- (BOOL)deleteObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 error:(id *)arg4;
- (void)didEndDeltaSync;
- (void)handleBatchSyncChunk:(id)arg1 response:(id)arg2;
- (void)handleBatchSyncEnd:(id)arg1 response:(id)arg2;
- (void)handleBatchSyncStart:(id)arg1;
- (void)handleChangeMessage:(id)arg1;
- (void)handleFullSyncRequest:(id)arg1 response:(id)arg2;
- (void)handleObjectChanges:(id)arg1 contextInfo:(id)arg2 idsOptions:(id)arg3 blockUntilSent:(BOOL)arg4 reportError:(CDUnknownBlockType)arg5;
- (void)handleSyncAllObjects:(id)arg1 response:(id)arg2;
- (BOOL)hasCompletedFullSync;
- (BOOL)inDeltaSync;
- (BOOL)inFullSync;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 isGStore:(BOOL)arg2 highPriority:(BOOL)arg3;
- (id)initWithService:(id)arg1;
- (id)initWithService:(id)arg1 isGStore:(BOOL)arg2 highPriority:(BOOL)arg3;
- (id)initWithService:(id)arg1 isGStore:(BOOL)arg2 highPriority:(BOOL)arg3 isMasterStore:(BOOL)arg4;
- (id)initWithService:(id)arg1 isGStore:(BOOL)arg2 highPriority:(BOOL)arg3 isMasterStore:(BOOL)arg4 tracksChanges:(BOOL)arg5;
- (id)initWithService:(id)arg1 isGStore:(BOOL)arg2 priority:(long long)arg3 isMasterStore:(BOOL)arg4;
- (id)initWithService:(id)arg1 isGStore:(BOOL)arg2 priority:(long long)arg3 isMasterStore:(BOOL)arg4 tracksChanges:(BOOL)arg5;
- (BOOL)isPaired;
- (void)logChanges:(id)arg1;
- (long long)maxBytesInFlight;
- (void)messageCenter:(id)arg1 didReceiveUnknownRequest:(id)arg2;
- (void)messageCenter:(id)arg1 didResolveIDSIdentifier:(id)arg2 forResponse:(id)arg3;
- (void)messageCenter:(id)arg1 didResolveIDSIdentifierForRequest:(id)arg2;
- (void)messageCenter:(id)arg1 didSuccessfullyDeliverRequestWithIdentifier:(id)arg2 userInfo:(id)arg3;
- (void)messageCenter:(id)arg1 didSuccessfullySendRequestWithIdentifier:(id)arg2 userInfo:(id)arg3;
- (id)newFullSyncContext;
- (id)newMessageHeader;
- (BOOL)objectChanged:(id)arg1 sinceVersion:(unsigned long long)arg2;
- (BOOL)peerState:(id)arg1 fromPeer:(id)arg2 matchesExpectationForChangeCount:(unsigned long long)arg3 offsetAmount:(unsigned long long *)arg4;
- (BOOL)performBatchedSyncToCurrentDBVersion;
- (void)performFullSync;
- (void)performFullSyncIfNecessary;
- (void)performFullSyncIfNecessaryAskingDelegate:(BOOL)arg1;
- (void)performFullSyncToCurrentDBVersion;
- (void)postUserNotification:(id)arg1 message:(id)arg2;
- (void)processBatchChunkAck:(unsigned int)arg1;
- (BOOL)processBatchChunkAtIndex:(unsigned int)arg1 encodedObjects:(id)arg2 error:(id *)arg3;
- (void)processBatchSyncEnd:(unsigned long long)arg1;
- (void)processBatchSyncStart;
- (void)remoteStoreAllObjects:(id)arg1 fromPeer:(id)arg2 clock:(id)arg3;
- (void)remoteStoreRequestFullSync;
- (void)sendChanges:(id)arg1 context:(id)arg2 options:(id)arg3 sentSignal:(id)arg4;
- (void)sendMessage:(id)arg1 ofType:(unsigned short)arg2 respondingTo:(id)arg3 userInfo:(id)arg4 idsOptions:(id)arg5;
- (void)setDelegate:(id)arg1;
- (void)setDeliveryQOS:(unsigned int)arg1;
- (void)setMaxBytesInFlight:(long long)arg1;
- (void)setNeedsFullSyncWithContext:(id)arg1 idsOptions:(id)arg2;
- (void)setTimeToLive:(double)arg1;
- (void)setTracksChanges:(BOOL)arg1;
- (void)setupDatabase;
- (void)setupMessageCenter;
- (void)setupPairingNotifications;
- (long long)state;
- (double)timeToLive;
- (BOOL)tracksChanges;
- (BOOL)updateObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 error:(id *)arg4;
- (void)willBeginDeltaSync;
- (id)wrapMessage:(id)arg1 ofType:(unsigned short)arg2 respondingTo:(id)arg3 userInfo:(id)arg4;

@end

