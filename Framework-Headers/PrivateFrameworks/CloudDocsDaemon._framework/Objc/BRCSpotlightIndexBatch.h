//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CSSearchableIndex, NSMutableOrderedSet, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCSpotlightIndexBatch : NSObject
{
    NSMutableOrderedSet *_toIndexDocuments;
    NSMutableOrderedSet *_deletedDocumentsIDs;
    NSObject<OS_dispatch_queue> *_queue;
    CSSearchableIndex *_index;
    NSString *_loggedInUserDisplayName;
}

- (void).cxx_destruct;
- (id)_authorDisplayNamesForDocument:(id)arg1;
- (id)_searchableItemForDocument:(id)arg1;
- (id)_searchableItemsForDocuments:(id)arg1;
- (void)addDeletionOfDocID:(unsigned long long)arg1;
- (void)addIndexOfDocument:(id)arg1;
- (id)description;
- (id)initWithIndex:(id)arg1 queue:(id)arg2 loggedInUserDisplayName:(id)arg3;
- (void)prepareAndSendIndexBatchForIndexToken:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

