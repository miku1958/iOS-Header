//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTNotifier.h>

#import <coreroutine/RTPersistenceContextDelegate-Protocol.h>
#import <coreroutine/RTPersistenceModelProvider-Protocol.h>

@class NSArray, NSManagedObjectModel, NSMutableArray, NSPointerArray, NSRecursiveLock, NSString, NSURL, RTPersistenceContainer, RTPersistenceStore;
@protocol RTPersistenceDelegate, RTPersistenceMirroringDelegate;

@interface RTPersistenceManager : RTNotifier <RTPersistenceModelProvider, RTPersistenceContextDelegate>
{
    NSURL *_modelsDirectory;
    NSURL *_storesDirectory;
    NSArray *_sortedModelNames;
    RTPersistenceStore *_stores[3];
    RTPersistenceContainer *_container;
    NSManagedObjectModel *_latestModel;
    NSRecursiveLock *_pointerArrayLock;
    NSRecursiveLock *_storesArrayLock;
    NSPointerArray *_outstandingContexts;
    NSMutableArray *_remoteServers;
    unsigned long long _availability;
    id<RTPersistenceDelegate> _delegate;
    id<RTPersistenceMirroringDelegate> _mirroringDelegate;
}

@property unsigned long long availability; // @synthesize availability=_availability;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<RTPersistenceDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<RTPersistenceMirroringDelegate> mirroringDelegate; // @synthesize mirroringDelegate=_mirroringDelegate;
@property (readonly) Class superclass;

+ (id)defaultModelsDirectory;
+ (id)defaultStoresDirectory;
- (void).cxx_destruct;
- (id)URLForStoreType:(unsigned long long)arg1;
- (void)_onCoreDataResetSync:(id)arg1;
- (BOOL)_setupPersistenceContainers;
- (void)_setupRemoteStoreServers;
- (void)_updateStoreAvailability:(unsigned long long)arg1;
- (unsigned long long)countOfPersistenceStores;
- (void)createManagedObjectContext:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)historyTokenForStoreType:(unsigned long long)arg1;
- (id)init;
- (id)initWithModelsDirectory:(id)arg1 storesDirectory:(id)arg2;
- (BOOL)initializeContainer;
- (BOOL)initializePersistenceStores;
- (void)internalAddObserver:(id)arg1 name:(id)arg2;
- (id)latestModel;
- (id)managedObjectContext;
- (void)mirroringDelegateSetupState:(CDUnknownBlockType)arg1;
- (long long)mirroringDelegateStateForStoreType:(unsigned long long)arg1;
- (id)modelFollowingModel:(id)arg1;
- (id)modelNamed:(id)arg1;
- (void)onCoreDataResetSync:(id)arg1;
- (id)outstandingContexts;
- (void)performExportMirroringRequest:(CDUnknownBlockType)arg1;
- (void)performExportMirroringRequestWithQualityOfService:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)performImportMirroringRequest:(CDUnknownBlockType)arg1;
- (void)performImportMirroringRequestWithQualityOfService:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)performMirroringRequestOfType:(long long)arg1 qualityOfService:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)performZoneResetMirroringRequest:(CDUnknownBlockType)arg1;
- (void)performZoneResetMirroringRequestWithQualityOfService:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)persistenceContext:(id)arg1 encounteredError:(id)arg2;
- (BOOL)persistenceContextPerformedSave:(id)arg1 error:(id *)arg2;
- (BOOL)persistenceContextShouldExecute:(id)arg1;
- (id)persistenceContextWithOptions:(long long)arg1;
- (id)persistenceStoreConfigurations;
- (id)persistenceStoreForType:(unsigned long long)arg1;
- (void)setContainer:(id)arg1;
- (void)setupPersistenceContainers:(CDUnknownBlockType)arg1;
- (id)sortedModelNames;
- (id)storeDescriptionForStoreWithType:(unsigned long long)arg1;
- (unsigned long long)storeTypeForURL:(id)arg1;
- (void)tearDownPersistenceStack:(CDUnknownBlockType)arg1;
- (void)trackContext:(id)arg1;
- (void)updateStoreAvailability:(unsigned long long)arg1;
- (id)urlForModelWithName:(id)arg1;
- (id)waitForPersistenceContext;

@end
