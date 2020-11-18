//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Notes/ICPropertyListSerializable-Protocol.h>

@class ICSearchIndexTransactionInfo, ICSearchIndexableMutableIdentifiers, ICSelectorDelayer, NSCountedSet, NSMutableArray, NSOperationQueue;
@protocol ICSearchIndexingBatchQueueDelegate;

@interface ICSearchIndexingBatchQueue : NSObject <ICPropertyListSerializable>
{
    BOOL _shouldAddAllObjects;
    id<ICSearchIndexingBatchQueueDelegate> _delegate;
    ICSearchIndexableMutableIdentifiers *_unprocessedIdentifiers;
    ICSearchIndexableMutableIdentifiers *_immediateProcessingIdentifiers;
    ICSearchIndexableMutableIdentifiers *_currentProcessingIdentifiers;
    ICSearchIndexableMutableIdentifiers *_additionalProcessingIdentifiers;
    ICSearchIndexableMutableIdentifiers *_failedIdentifiers;
    NSMutableArray *_documentActionsQueue;
    NSMutableArray *_immediateDocumentActionsQueue;
    NSMutableArray *_batchHistory;
    NSCountedSet *_identifierRetryCounts;
    ICSearchIndexTransactionInfo *_currentTransactionInfo;
    ICSelectorDelayer *_saveSelectorDelayer;
    NSOperationQueue *_saveOperationQueue;
}

@property (strong, nonatomic) ICSearchIndexableMutableIdentifiers *additionalProcessingIdentifiers; // @synthesize additionalProcessingIdentifiers=_additionalProcessingIdentifiers;
@property (strong, nonatomic) NSMutableArray *batchHistory; // @synthesize batchHistory=_batchHistory;
@property (strong, nonatomic) ICSearchIndexableMutableIdentifiers *currentProcessingIdentifiers; // @synthesize currentProcessingIdentifiers=_currentProcessingIdentifiers;
@property (copy, nonatomic) ICSearchIndexTransactionInfo *currentTransactionInfo; // @synthesize currentTransactionInfo=_currentTransactionInfo;
@property (weak, nonatomic) id<ICSearchIndexingBatchQueueDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSMutableArray *documentActionsQueue; // @synthesize documentActionsQueue=_documentActionsQueue;
@property (strong, nonatomic) ICSearchIndexableMutableIdentifiers *failedIdentifiers; // @synthesize failedIdentifiers=_failedIdentifiers;
@property (strong, nonatomic) NSCountedSet *identifierRetryCounts; // @synthesize identifierRetryCounts=_identifierRetryCounts;
@property (strong, nonatomic) NSMutableArray *immediateDocumentActionsQueue; // @synthesize immediateDocumentActionsQueue=_immediateDocumentActionsQueue;
@property (strong, nonatomic) ICSearchIndexableMutableIdentifiers *immediateProcessingIdentifiers; // @synthesize immediateProcessingIdentifiers=_immediateProcessingIdentifiers;
@property (strong, nonatomic) NSOperationQueue *saveOperationQueue; // @synthesize saveOperationQueue=_saveOperationQueue;
@property (strong, nonatomic) ICSelectorDelayer *saveSelectorDelayer; // @synthesize saveSelectorDelayer=_saveSelectorDelayer;
@property (nonatomic) BOOL shouldAddAllObjects; // @synthesize shouldAddAllObjects=_shouldAddAllObjects;
@property (strong, nonatomic) ICSearchIndexableMutableIdentifiers *unprocessedIdentifiers; // @synthesize unprocessedIdentifiers=_unprocessedIdentifiers;

+ (id)loadFromData;
+ (id)userDefaults;
- (void).cxx_destruct;
- (void)addAdditionalProcessingIdentifier:(id)arg1;
- (void)addCurrentProcessingIdentifiers:(id)arg1;
- (void)addDocumentAction:(id)arg1;
- (void)addImmediateProcessingIdentifiers:(id)arg1;
- (void)addSearchIndexableIdentifiers:(id)arg1;
- (BOOL)additionalProcessingIdentifierCount;
- (void)batchDidIndexWithTransactionID:(id)arg1 name:(id)arg2;
- (id)batchForTransactionID:(id)arg1 name:(id)arg2;
- (void)beginBatch;
- (BOOL)canRestoreWithIndexPersisttedTransactionInfo:(id)arg1;
- (void)cancelAllOperations;
- (void)commonInit;
- (void)dealloc;
- (void)delete;
- (unsigned long long)documentActionsQueueCount;
- (id)earliestTransactionInfo;
- (void)endBatchWithTransactionInfo:(id)arg1;
- (id)firstBatchTransactionInfo;
- (BOOL)hasIdentifiersForProcessing;
- (BOOL)hasRemainingIdentifiers;
- (unsigned long long)immediateIdentifiersCount;
- (id)init;
- (id)initWithPropertyListObjectRepresentation:(id)arg1 version:(long long)arg2;
- (id)nextDocumentAction;
- (id)nextSearchIndexableIdentifier;
- (id)propertyListObjectRepresentation;
- (void)removeAdditionalProcessingIdentifier:(id)arg1;
- (void)reprocessAllAdditionalProcessingIdentifiers;
- (void)reprocessIdentifiersFromBatchWithTransactionID:(id)arg1 name:(id)arg2;
- (BOOL)restoreWithIndexPersistedTransactionInfo:(id)arg1;
- (void)save;
- (void)savePropertyListObjectRepresentation:(id)arg1 forKey:(id)arg2;
- (void)scheduleSave;
- (BOOL)shouldSaveBatchQueue;
- (unsigned long long)unprocessedIdentifierCount;
- (void)wrapUpSave;

@end
