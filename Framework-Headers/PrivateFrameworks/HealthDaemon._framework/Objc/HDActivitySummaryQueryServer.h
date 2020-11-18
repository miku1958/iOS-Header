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
    BOOL _shouldIncludePrivateProperties;
}

- (void).cxx_destruct;
- (void)_queue_deliverActivitySummariesToClient:(id)arg1;
- (void)_queue_deliverErrorToClient:(id)arg1;
- (void)_queue_deliverResultsWithActivitySummaries:(id)arg1 error:(id)arg2;
- (void)_queue_start;
- (void)_queue_stop;
- (void)_setUpInitialQueryHelper;
- (id)initWithQueryUUID:(id)arg1 dataObject:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 healthDaemon:(id)arg6;

@end

