//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDQueryServer.h>

@class HDActivitySummaryQueryHelper, HDSQLitePredicate;

@interface HDActivitySummaryQueryServer : HDQueryServer
{
    BOOL _deliversUpdates;
    long long _lastProcessedAnchor;
    HDSQLitePredicate *_filterPredicate;
    HDActivitySummaryQueryHelper *_queryHelper;
    BOOL _hasSentInitialResults;
}

+ (Class)queryClass;
+ (id)requiredEntitlements;
- (void).cxx_destruct;
- (void)_queue_deliverActivitySummariesToClient:(id)arg1 isFinalBatch:(BOOL)arg2 clearPendingBatches:(BOOL)arg3;
- (void)_queue_deliverErrorToClient:(id)arg1;
- (void)_queue_deliverResultsWithActivitySummaries:(id)arg1 isFinalBatch:(BOOL)arg2 clearPendingBatches:(BOOL)arg3 error:(id)arg4;
- (void)_queue_start;
- (void)_queue_stop;
- (void)_setUpInitialQueryHelper;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;

@end

