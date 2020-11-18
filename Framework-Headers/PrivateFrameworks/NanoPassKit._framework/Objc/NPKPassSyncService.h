//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoPassKit/IDSServiceDelegate-Protocol.h>
#import <NanoPassKit/NPKPassSyncEngineDataSource-Protocol.h>
#import <NanoPassKit/NPKPassSyncEngineDelegate-Protocol.h>

@class IDSService, NPKPassSyncEngine, NPKPassSyncServiceSyncStatus, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NPKPassSyncService : NSObject <IDSServiceDelegate, NPKPassSyncEngineDelegate, NPKPassSyncEngineDataSource>
{
    BOOL _dropAllMessages;
    NPKPassSyncEngine *_passSyncEngine;
    IDSService *_passSyncService;
    NSObject<OS_dispatch_queue> *_passSyncQueue;
    NSObject<OS_dispatch_source> *_passSyncEngineArchiveTimer;
    NSObject<OS_dispatch_source> *_passSyncEngineSyncTimer;
    NPKPassSyncServiceSyncStatus *_passSyncStatus;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dropAllMessages; // @synthesize dropAllMessages=_dropAllMessages;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NPKPassSyncEngine *passSyncEngine; // @synthesize passSyncEngine=_passSyncEngine;
@property (strong, nonatomic) NSObject<OS_dispatch_source> *passSyncEngineArchiveTimer; // @synthesize passSyncEngineArchiveTimer=_passSyncEngineArchiveTimer;
@property (strong, nonatomic) NSObject<OS_dispatch_source> *passSyncEngineSyncTimer; // @synthesize passSyncEngineSyncTimer=_passSyncEngineSyncTimer;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *passSyncQueue; // @synthesize passSyncQueue=_passSyncQueue;
@property (strong, nonatomic) IDSService *passSyncService; // @synthesize passSyncService=_passSyncService;
@property (strong, nonatomic) NPKPassSyncServiceSyncStatus *passSyncStatus; // @synthesize passSyncStatus=_passSyncStatus;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_archiveTimerFired;
- (id)_archivedPassSyncEngine;
- (void)_ensureSyncTimerIsSet;
- (void)_provideUpdatedLibraryStateToSyncEngineAndSyncIfNecessary:(BOOL)arg1;
- (void)_syncNow;
- (void)_syncTimerFired;
- (void)_syncWhenAppropriate;
- (void)catalogChanged:(id)arg1;
- (id)companionCatalogToSendWithStateChange;
- (id)currentLibraryPassSyncStateWithReconciledState:(id)arg1;
- (void)handleCatalogChangeWithCompanionCatalog:(id)arg1 watchCatalog:(id)arg2;
- (void)handleIncomingCompanionCatalog:(id)arg1 watchCatalog:(id)arg2;
- (void)handleIncomingPassSettings:(unsigned long long)arg1 forPassWithUniqueID:(id)arg2;
- (void)handlePassLibraryChanged;
- (void)handleSettingsChanged:(unsigned long long)arg1 forPassWithUniqueID:(id)arg2;
- (id)initWithPassSyncEngineRole:(unsigned long long)arg1;
- (void)passSettingsChanged:(id)arg1;
- (id)passSyncEngine:(id)arg1 dataForPassWithUniqueID:(id)arg2;
- (void)passSyncEngine:(id)arg1 finishedProcessingChange:(id)arg2;
- (id)passSyncEngine:(id)arg1 partialDataForPassWithUniqueID:(id)arg2 baseManifest:(id)arg3 outRemoteAssets:(id *)arg4;
- (void)passSyncEngine:(id)arg1 receivedStateChangeProcessed:(id)arg2 changeAccepted:(BOOL)arg3;
- (void)passSyncEngine:(id)arg1 requestsAddPassData:(id)arg2 forSyncStateItem:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)passSyncEngine:(id)arg1 requestsRemovePassWithUniqueID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)passSyncEngine:(id)arg1 requestsUpdatePassData:(id)arg2 forSyncStateItem:(id)arg3 baseManifestHashForPartialUpdate:(id)arg4 remoteAssetsForPartialUpdate:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)passSyncEngine:(id)arg1 sendProposedReconciledState:(id)arg2;
- (void)passSyncEngine:(id)arg1 sendReconciledStateAcceptedWithHash:(id)arg2;
- (void)passSyncEngine:(id)arg1 sendReconciledStateUnrecognizedWithHash:(id)arg2 currentPassSyncState:(id)arg3;
- (void)passSyncEngine:(id)arg1 sendStateChange:(id)arg2;
- (void)passSyncEngine:(id)arg1 sendStateChangeProcessedWithUUID:(id)arg2 changeAccepted:(BOOL)arg3 fullPassRequired:(BOOL)arg4;
- (void)passSyncEngineStateChanged:(id)arg1;
- (void)proposedReconciledState:(id)arg1;
- (void)reconciledStateAccepted:(id)arg1;
- (void)reconciledStateUnrecognized:(id)arg1;
- (unsigned long long)settingsForPassWithUniqueID:(id)arg1;
- (void)start;
- (void)suggestSync;
- (void)syncStateChangeProcessed:(id)arg1;
- (void)syncStateChanged:(id)arg1;
- (id)watchCatalogToSendWithStateChange;

@end
