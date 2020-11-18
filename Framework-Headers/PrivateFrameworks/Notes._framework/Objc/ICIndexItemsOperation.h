//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class CSSearchableIndex, NSArray, NSError;

@interface ICIndexItemsOperation : NSOperation
{
    CSSearchableIndex *_searchableIndex;
    NSArray *_dataSources;
    unsigned long long _maxBytesPerBatch;
    NSError *_error;
}

@property (copy, nonatomic) NSArray *dataSources; // @synthesize dataSources=_dataSources;
@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (nonatomic) unsigned long long maxBytesPerBatch; // @synthesize maxBytesPerBatch=_maxBytesPerBatch;
@property (strong, nonatomic) CSSearchableIndex *searchableIndex; // @synthesize searchableIndex=_searchableIndex;

- (void).cxx_destruct;
- (void)deleteAllItems;
- (void)deleteItems;
- (void)indexItems;
- (id)init;
- (id)initWithSearchableIndex:(id)arg1 dataSources:(id)arg2;
- (void)main;
- (id)objectIDsToIndexFromDataSource:(id)arg1;
- (id)searchableItemIdentifiersToDeleteFromDataSource:(id)arg1;
- (BOOL)shouldDeleteAllItemsBeforeIndexing;

@end

