//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PETEventTracker2, SGServiceContext, SGSqlEntityStore;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source, SGXPCActivityManagerProtocol;

@interface SGDManagerForCTS : NSObject
{
    SGSqlEntityStore *_harvestStore;
    SGServiceContext *_context;
    NSObject<OS_dispatch_queue> *_harvestQueue;
    NSObject<OS_dispatch_queue> *_frontfillQueue;
    NSObject<OS_dispatch_source> *_frontfillSource;
    NSObject<OS_dispatch_semaphore> *_frontfillSemaphoreForTesting;
    struct SGDSuggestManagerCTSCriteriaState _ctsCriteriaState;
    struct _opaque_pthread_mutex_t _geocodeLock;
    struct _opaque_pthread_mutex_t _verificationLock;
    double _lastFrontfillFinishTime;
    PETEventTracker2 *_pet2tracker;
    id<SGXPCActivityManagerProtocol> _xpcActivityManager;
    NSObject<OS_dispatch_source> *_adjustActivitySource;
}

+ (void)_logCallInteractions:(id)arg1;
+ (id)defaultInstance;
+ (id)sharedSingletonInstance;
- (void).cxx_destruct;
- (BOOL)_attemptToProcessSearchableItemWithoutDissection:(id)arg1;
- (void)_doAdjustCriteriaForCTS;
- (void)_doFrontfillHarvestOnFrontfillQueue;
- (void)_performCollectWeeklyStats:(id)arg1;
- (void)_performHarvestActivity:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)_performIdentityAnalysisActivity:(id)arg1;
- (void)_performMobileAssetMetadataDownloadActivity:(id)arg1;
- (void)_performProcessPendingGeocodesActivity:(id)arg1;
- (void)_performProcessPendingVerificationActivity:(id)arg1 overrideVerificationStatus:(id)arg2;
- (void)_performSendRTCActivity;
- (void)_performTrimActivity:(id)arg1;
- (void)_performVacuumActivity;
- (void)_registerForCTSHarvestActivity;
- (void)_registerForCTSIdentityAnalysisActivity;
- (void)_registerForCTSSendRTCActivity;
- (void)_registerForCTSTrimActivity;
- (void)_registerForCTSVacuumActivity;
- (void)_registerForCollectWeeklyStats;
- (void)_registerForContactDetailCacheRebuildActivity;
- (void)_registerMobileAssetMetadataDownloadActivity;
- (void)_registerProcessPendingGeocodesActivity;
- (void)_registerProcessPendingVerificationActivity;
- (void)adjustCriteriaForCTS;
- (void)dealloc;
- (void)drainDefaultQueueCompletely;
- (void)drainDefaultQueueWithStructuredEventsCandidatesPriorityOption;
- (BOOL)drainHarvestQueue:(id)arg1 priorityOption:(unsigned char)arg2 continuingWhile:(CDUnknownBlockType)arg3;
- (BOOL)hasAlreadyHarvestedSearchableItem:(id)arg1;
- (id)initWithHarvestStore:(id)arg1 xpcActivityManager:(id)arg2;
- (void)performContactDetailCacheRebuildActivity:(id)arg1;
- (BOOL)processSearchableItem:(id)arg1 pipeline:(id)arg2 context:(id)arg3;
- (BOOL)processSearchableItemForTesting:(id)arg1;
- (void)registerForCTS;
- (void)resetLastFrontfillFinishTimeForTesting;
- (void)resumeFrontfillForTesting;
- (void)suspendFrontfillForTesting;
- (void)triggerFrontfillHarvest;
- (void)waitForXpcActivityQueue;
- (void)waitUntilFrontfillFinishedForTesting;

@end
