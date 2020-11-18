//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/CSSearchableIndexObserver-Protocol.h>
#import <CoreDuet/SpotlightReceiver-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction, _CDInteractionRecording><_CDInteractionDeleting, _DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeQuerying><_DKKnowledgeEventStreamDeleting;

@interface _CDSpotlightItemRecorder : NSObject <SpotlightReceiver, CSSearchableIndexObserver>
{
    NSObject<OS_dispatch_source> *_batchExecutionSource;
    NSObject<OS_dispatch_queue> *_batchExecutionSourceQueue;
    NSObject<OS_dispatch_queue> *_pendingOperationsQueue;
    NSMutableArray *_pendingOperations;
    NSObject<OS_os_transaction> *_pendingOperationsTransaction;
    NSObject<OS_dispatch_queue> *_activityRateLimiterQueue;
    NSMutableDictionary *_activityPerBundleRateLimit;
    id<_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeQuerying><_DKKnowledgeEventStreamDeleting> _knowledgeStore;
    NSObject<OS_dispatch_queue> *_knowledgeStoreDeletionQueue;
    id<_CDInteractionRecording><_CDInteractionDeleting> _recorder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<_CDInteractionRecording><_CDInteractionDeleting> recorder; // @synthesize recorder=_recorder;
@property (readonly) Class superclass;

+ (void)recordAggdReceiverAction:(long long)arg1 bundleID:(id)arg2 count:(unsigned long long)arg3;
+ (id)spotlightItemRecorder;
+ (id)spotlightItemRecorderWithInteractionRecorder:(id)arg1;
- (void).cxx_destruct;
- (void)addInteractions:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (void)addOrUpdateCoreDuetInteractions:(id)arg1 bundleID:(id)arg2;
- (void)addOrUpdateSearchableItems:(id)arg1;
- (void)addOrUpdateSearchableItems:(id)arg1 bundleID:(id)arg2;
- (void)addUserAction:(id)arg1 withItem:(id)arg2;
- (void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2;
- (void)deleteAllSearchableItemsWithBundleID:(id)arg1;
- (void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (void)deleteKnowledgeEventsMatchingPredicate:(id)arg1;
- (void)deleteKnowledgeEventsWithBundleID:(id)arg1;
- (void)deleteSearchableItemsSinceDate:(id)arg1 bundleID:(id)arg2;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2;
- (void)deleteSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2;
- (void)enqueueOperation:(id)arg1;
- (id)initWithInteractionRecorder:(id)arg1;
- (id)initWithInteractionRecorder:(id)arg1 knowledgeSaving:(id)arg2;
- (void)registerSpotlightRecorderWithServiceName:(id)arg1;
- (void)runOperation:(id)arg1;
- (id)supportedContentTypes;
- (id)supportedINIntentClassNames;
- (id)supportedUTIs;

@end

