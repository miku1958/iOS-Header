//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Notes/CSSearchableIndexDelegate-Protocol.h>
#import <Notes/ICSearchAsyncQueryable-Protocol.h>
#import <Notes/ICSearchIndex-Protocol.h>

@class CSSearchableIndex, NSString;
@protocol ICSearchIndexDelegate;

@interface ICCoreSpotlightSearchIndex : NSObject <CSSearchableIndexDelegate, ICSearchIndex, ICSearchAsyncQueryable>
{
    BOOL _isInBatch;
    id<ICSearchIndexDelegate> _delegate;
    CSSearchableIndex *_coreSpotlightIndex;
    long long _currentTransactionID;
}

@property (readonly, nonatomic) BOOL canStartNextBatch;
@property (strong, nonatomic) CSSearchableIndex *coreSpotlightIndex; // @synthesize coreSpotlightIndex=_coreSpotlightIndex;
@property (nonatomic) long long currentTransactionID; // @synthesize currentTransactionID=_currentTransactionID;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ICSearchIndexDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isInBatch; // @synthesize isInBatch=_isInBatch;
@property (readonly, nonatomic) NSString *name;
@property (readonly) Class superclass;

+ (BOOL)isIndexingAvailable;
- (void).cxx_destruct;
- (void)addDocumentForSearchIndexable:(id)arg1 content:(id)arg2;
- (void)beginIndexBatch;
- (void)cancelAsyncQuery:(id)arg1;
- (void)close;
- (void)delete;
- (id)endIndexBatch;
- (void)enterGroup;
- (void)fetchLastPersistedTransactionID:(CDUnknownBlockType)arg1;
- (id)initWithIndexCommunicationSupport:(BOOL)arg1;
- (id)newAsyncQueryWithSearchTerms:(id)arg1 delegate:(id)arg2;
- (void)open;
- (void)performDelegateCompletionIfPossibleByLeavingGroup:(BOOL)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)removeDocumentsForIdentifiers:(id)arg1;
- (void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(CDUnknownBlockType)arg2;
- (void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(CDUnknownBlockType)arg3;
- (void)updateFromFetchLastPersistedTransactionID:(id)arg1;

@end
