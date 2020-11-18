//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CSSearchableIndex, HKHealthRecordsStore, HKHealthStore, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HKMedicalRecordIndexController : NSObject
{
    BOOL _indexStarted;
    CDUnknownBlockType _observerBlock;
    NSMutableDictionary *_activeAnchoredQueries;
    NSObject<OS_dispatch_source> *_anchorCommitTimer;
    NSObject<OS_dispatch_queue> *_clientQueue;
    HKHealthStore *_healthStore;
    HKHealthRecordsStore *_healthRecordsStore;
    NSMutableDictionary *_lastIndexedAnchor;
    CSSearchableIndex *_spotlightIndex;
}

@property (strong, nonatomic) NSMutableDictionary *activeAnchoredQueries; // @synthesize activeAnchoredQueries=_activeAnchoredQueries;
@property (strong, nonatomic) NSObject<OS_dispatch_source> *anchorCommitTimer; // @synthesize anchorCommitTimer=_anchorCommitTimer;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property (strong, nonatomic) HKHealthRecordsStore *healthRecordsStore; // @synthesize healthRecordsStore=_healthRecordsStore;
@property (strong, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property (nonatomic) BOOL indexStarted; // @synthesize indexStarted=_indexStarted;
@property (strong, nonatomic) NSMutableDictionary *lastIndexedAnchor; // @synthesize lastIndexedAnchor=_lastIndexedAnchor;
@property (copy, nonatomic) CDUnknownBlockType observerBlock; // @synthesize observerBlock=_observerBlock;
@property (strong, nonatomic) CSSearchableIndex *spotlightIndex; // @synthesize spotlightIndex=_spotlightIndex;

+ (id)indexedSampleTypes;
- (void).cxx_destruct;
- (void)_deleteIndexForObjects:(id)arg1 type:(id)arg2 anchor:(id)arg3;
- (void)_queue_commitAnchorUpdates;
- (void)_queue_readLastIndexedAnchorWithCompletion:(CDUnknownBlockType)arg1;
- (id)_searchableItemAttributeSetWithRecord:(id)arg1 concept:(id)arg2;
- (void)_startIndexingMedicalRecordSamples;
- (void)_updateAnchor:(id)arg1 forType:(id)arg2;
- (void)_updateOrInsertIndexForSamples:(id)arg1 type:(id)arg2 anchor:(id)arg3;
- (void)deleteAllIndexesWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithHealthStore:(id)arg1 healthRecordsStore:(id)arg2;
- (void)startIndexing;
- (void)stopIndexing;

@end
