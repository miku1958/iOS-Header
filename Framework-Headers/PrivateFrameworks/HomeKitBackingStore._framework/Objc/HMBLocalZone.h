//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitBackingStore/HMFLogging-Protocol.h>

@class HMBLocalDatabase, HMBLocalSQLContext, HMBModelContainer, HMFUnfairLock, NAFuture, NSHashTable, NSMutableDictionary, NSString;
@protocol HMBLocalZoneDelegate, HMBLocalZoneID, HMBMirrorProtocol;

@interface HMBLocalZone : HMFObject <HMFLogging>
{
    BOOL _hasStartedUp;
    HMBLocalDatabase *_localDatabase;
    HMBModelContainer *_modelContainer;
    id<HMBLocalZoneID> _zoneID;
    id<HMBMirrorProtocol> _mirror;
    id<HMBLocalZoneDelegate> _delegate;
    HMFUnfairLock *_propertyLock;
    NSHashTable *_observersForAllModels;
    NSMutableDictionary *_modelObserversByModelID;
    NSHashTable *_mirrorOutputObservers;
    unsigned long long _zoneRow;
    HMBLocalSQLContext *_sql;
    NAFuture *_shutdownFuture;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HMBLocalZoneDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasStartedUp; // @synthesize hasStartedUp=_hasStartedUp;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) HMBLocalDatabase *localDatabase; // @synthesize localDatabase=_localDatabase;
@property (readonly, nonatomic) id<HMBMirrorProtocol> mirror; // @synthesize mirror=_mirror;
@property (readonly, nonatomic) NSHashTable *mirrorOutputObservers; // @synthesize mirrorOutputObservers=_mirrorOutputObservers;
@property (readonly, nonatomic) HMBModelContainer *modelContainer; // @synthesize modelContainer=_modelContainer;
@property (readonly, nonatomic) NSMutableDictionary *modelObserversByModelID; // @synthesize modelObserversByModelID=_modelObserversByModelID;
@property (readonly, nonatomic) NSHashTable *observersForAllModels; // @synthesize observersForAllModels=_observersForAllModels;
@property (readonly, nonatomic) HMFUnfairLock *propertyLock; // @synthesize propertyLock=_propertyLock;
@property (strong, nonatomic) NAFuture *shutdownFuture; // @synthesize shutdownFuture=_shutdownFuture;
@property (readonly, nonatomic) HMBLocalSQLContext *sql; // @synthesize sql=_sql;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<HMBLocalZoneID> zoneID; // @synthesize zoneID=_zoneID;
@property (readonly, nonatomic) unsigned long long zoneRow; // @synthesize zoneRow=_zoneRow;

+ (id)logCategory;
+ (id)outputBlockRowForTuple:(id)arg1 activity:(id)arg2;
+ (id)outputModelFromUpdateModel:(id)arg1 mergedModel:(id)arg2;
+ (BOOL)shouldMirrorInputExternalData:(id)arg1 overwriteExistingExternalData:(id)arg2;
- (void).cxx_destruct;
- (BOOL)_insertDeletionItemsForModelsAndDescendantModelsWithBlockRow:(unsigned long long)arg1 context:(id)arg2 type:(unsigned long long)arg3 modelIDs:(id)arg4 currentDepth:(unsigned long long)arg5 maximumDepth:(unsigned long long)arg6 options:(id)arg7 error:(id *)arg8;
- (void)addMirrorOutputObserver:(id)arg1;
- (id)addModels:(id)arg1 andRemoveModelIDs:(id)arg2 options:(id)arg3;
- (id)addModels:(id)arg1 options:(id)arg2;
- (void)addObserver:(id)arg1 forModelWithID:(id)arg2;
- (void)addObserverForAllModels:(id)arg1;
- (id)allMirrorOutputObservers;
- (id)countModelsUsingQuery:(id)arg1 arguments:(id)arg2 error:(id *)arg3;
- (id)createInputBlockWithType:(unsigned long long)arg1 error:(id *)arg2;
- (id)createOutputBlockWithError:(id *)arg1;
- (void)dealloc;
- (BOOL)destroyWithError:(id *)arg1;
- (id)externalDataForExternalID:(id)arg1 error:(id *)arg2;
- (id)externalDataForModelID:(id)arg1 error:(id *)arg2;
- (id)externalIDForModelID:(id)arg1 error:(id *)arg2;
- (id)fetchAllModelsWithError:(id *)arg1;
- (id)fetchItemsInBlock:(id)arg1 error:(id *)arg2;
- (id)fetchModelWithModelID:(id)arg1 error:(id *)arg2;
- (id)fetchModelWithModelID:(id)arg1 ofType:(Class)arg2 error:(id *)arg3;
- (id)fetchModelWithModelID:(id)arg1 recordRow:(unsigned long long *)arg2 error:(id *)arg3;
- (id)fetchModelWithRecordRow:(unsigned long long)arg1 error:(id *)arg2;
- (id)fetchModels;
- (id)fetchModelsOfType:(Class)arg1 error:(id *)arg2;
- (id)fetchModelsWithParentModelID:(id)arg1 error:(id *)arg2;
- (id)fetchModelsWithParentModelID:(id)arg1 ofType:(Class)arg2 error:(id *)arg3;
- (id)fetchOptionsForOutputBlock:(unsigned long long)arg1 error:(id *)arg2;
- (id)fetchReadyBlocksWithType:(unsigned long long)arg1 error:(id *)arg2;
- (id)fetchRecordRowWithExternalID:(id)arg1 returning:(unsigned long long)arg2 error:(id *)arg3;
- (id)fetchRecordRowWithModelID:(id)arg1 returning:(unsigned long long)arg2 error:(id *)arg3;
- (id)fetchRecordRowsWithModelIDs:(id)arg1 error:(id *)arg2;
- (id)fetchRecordsForOutputBlock:(unsigned long long)arg1 error:(id *)arg2;
- (id)flush;
- (id)initWithLocalDatabase:(id)arg1 zoneID:(id)arg2 zoneRow:(unsigned long long)arg3 delegate:(id)arg4 modelContainer:(id)arg5 mirror:(id)arg6;
- (id)inputContext:(id *)arg1;
- (unsigned long long)insertBlockToRemoveAllModelsWithType:(unsigned long long)arg1 modelTypes:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (unsigned long long)insertBlockToRemoveModelsAndDescendantModelsWithType:(unsigned long long)arg1 modelIDs:(id)arg2 depth:(unsigned long long)arg3 options:(id)arg4 error:(id *)arg5;
- (unsigned long long)insertBlockToRemoveOrphanedModelsWithType:(unsigned long long)arg1 modelTypes:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (unsigned long long)insertBlockWithType:(unsigned long long)arg1 options:(id)arg2 items:(id)arg3 error:(id *)arg4;
- (id)logIdentifier;
- (id)markGroupAsSentWithOutputBlock:(unsigned long long)arg1 tuples:(id)arg2;
- (void)migrateUnsupportedModels;
- (id)modelIDForExternalID:(id)arg1 error:(id *)arg2;
- (id)objectFromData:(id)arg1 encoding:(unsigned long long)arg2 storageLocation:(unsigned long long)arg3 recordRowID:(unsigned long long)arg4 error:(id *)arg5;
- (id)observersForModelWithID:(id)arg1;
- (id)queryAllRowRecordsReturning:(unsigned long long)arg1;
- (id)queryModelsOfType:(Class)arg1;
- (id)queryModelsOfType:(Class)arg1 filter:(CDUnknownBlockType)arg2;
- (id)queryModelsOfType:(Class)arg1 predicate:(id)arg2;
- (id)queryModelsOfType:(Class)arg1 properties:(id)arg2 filter:(CDUnknownBlockType)arg3;
- (id)queryModelsRecursivelyStartingWithModelID:(id)arg1;
- (id)queryModelsUsingQuery:(id)arg1;
- (id)queryModelsUsingQuery:(id)arg1 arguments:(id)arg2;
- (id)queryModelsWithParentModelID:(id)arg1;
- (void)queueIncompleteProcesses;
- (void)rebuildIndexesIfNeeded;
- (id)remove:(id)arg1;
- (id)removeAllModelsOfTypes:(id)arg1 options:(id)arg2;
- (BOOL)removeAllRecordsWithError:(id *)arg1;
- (BOOL)removeBlockWithRow:(unsigned long long)arg1 error:(id *)arg2;
- (void)removeMirrorOutputObserver:(id)arg1;
- (id)removeModelIDs:(id)arg1 options:(id)arg2;
- (id)removeModelsAndDescendantModelsWithIDs:(id)arg1 depth:(unsigned long long)arg2 options:(id)arg3;
- (void)removeObserver:(id)arg1 forModelWithID:(id)arg2;
- (void)removeObserverForAllModels:(id)arg1;
- (id)removeOrphanedModelsOfTypes:(id)arg1 options:(id)arg2;
- (BOOL)removeOutputBlockWithRow:(unsigned long long)arg1 error:(id *)arg2;
- (id)setExternalData:(id)arg1 forExternalID:(id)arg2;
- (id)setExternalData:(id)arg1 forModelID:(id)arg2;
- (id)setExternalID:(id)arg1 externalData:(id)arg2 forRecordRow:(unsigned long long)arg3;
- (BOOL)shouldLogPrivateInformation;
- (id)shutdown;
- (void)startUp;
- (id)triggerProcessForBlockRow:(unsigned long long)arg1;
- (id)update:(id)arg1;
- (id)update:(id)arg1 remove:(id)arg2;
- (id)updateModels:(id)arg1 andRemoveModelIDs:(id)arg2 options:(id)arg3;
- (id)updateModels:(id)arg1 options:(id)arg2;

@end

