//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDCloudGroup, NSArray, NSMapTable, NSMutableArray;

@interface HMDCloudGroupChange : HMFObject
{
    BOOL _temporaryCache;
    BOOL _decryptionFailed;
    BOOL _encryptionFailed;
    BOOL _controllerIdentifierChanged;
    HMDCloudGroup *_cloudGroup;
    NSMutableArray *_cloudChanges;
    NSMapTable *_objectChangeMap;
    NSMapTable *_recordChangeMap;
    NSMutableArray *_processingCloudChanges;
    NSMutableArray *_processedCloudChanges;
}

@property (readonly, nonatomic) NSArray *allTransactionStoreRowIDs;
@property (strong, nonatomic) NSMutableArray *cloudChanges; // @synthesize cloudChanges=_cloudChanges;
@property (readonly, weak, nonatomic) HMDCloudGroup *cloudGroup; // @synthesize cloudGroup=_cloudGroup;
@property (nonatomic) BOOL controllerIdentifierChanged; // @synthesize controllerIdentifierChanged=_controllerIdentifierChanged;
@property (nonatomic) BOOL decryptionFailed; // @synthesize decryptionFailed=_decryptionFailed;
@property (nonatomic) BOOL encryptionFailed; // @synthesize encryptionFailed=_encryptionFailed;
@property (readonly, nonatomic) BOOL hasValidChanges;
@property (strong, nonatomic) NSMapTable *objectChangeMap; // @synthesize objectChangeMap=_objectChangeMap;
@property (readonly, nonatomic) NSArray *objectChanges;
@property (strong, nonatomic) NSMutableArray *processedCloudChanges; // @synthesize processedCloudChanges=_processedCloudChanges;
@property (readonly, nonatomic) NSArray *processedTransactionStoreRowIDs;
@property (strong, nonatomic) NSMutableArray *processingCloudChanges; // @synthesize processingCloudChanges=_processingCloudChanges;
@property (strong, nonatomic) NSMapTable *recordChangeMap; // @synthesize recordChangeMap=_recordChangeMap;
@property (readonly, nonatomic, getter=isRootRecordRequired) BOOL rootRecordRequired;
@property (readonly, nonatomic, getter=isTemporaryCache) BOOL temporaryCache; // @synthesize temporaryCache=_temporaryCache;

+ (id)shortDescription;
- (void).cxx_destruct;
- (void)_addChangeWithDeletedCloudRecord:(id)arg1;
- (void)_determineDeletesFromCache:(CDUnknownBlockType)arg1;
- (void)_removeChange:(id)arg1;
- (void)addChange:(id)arg1 setAsProcessing:(BOOL)arg2;
- (void)addChangeWithDeletedRecordID:(id)arg1;
- (void)addChangeWithObjectChange:(id)arg1;
- (void)addChangeWithRecord:(id)arg1;
- (void)addRootRecordChange;
- (id)cachedCloudRecordWithObjectID:(id)arg1;
- (id)changeWithObjectID:(id)arg1;
- (id)changeWithRecordName:(id)arg1;
- (id)cloudRecordWithName:(id)arg1;
- (id)cloudRecordWithObjectID:(id)arg1;
- (void)collectRecordsForBatch;
- (id)description;
- (void)fetchBatchToUpload:(CDUnknownBlockType)arg1;
- (void)flushAllChangesToCache;
- (id)init;
- (id)initWithGroup:(id)arg1 temporaryCache:(BOOL)arg2;
- (BOOL)isRootRecord:(id)arg1;
- (BOOL)isRootRecordName:(id)arg1;
- (void)loadCloudRecordsAndDetermineDeletesFromCache:(CDUnknownBlockType)arg1;
- (void)loadCloudRecordsFromCache:(CDUnknownBlockType)arg1;
- (BOOL)moreChangesToProcess;
- (void)removeChangeWithObjectID:(id)arg1;
- (id)rootRecordModelObject;
- (void)setAllChangedAsProcessed;
- (void)setAsProcessedChange:(id)arg1;
- (void)setDeleteAsProcessedWithRecordID:(id)arg1;
- (void)setSaveAsProcessedWithRecord:(id)arg1;
- (id)shortDescription;
- (id)transactionStoreRowIDsForObjectID:(id)arg1;

@end

