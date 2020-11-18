//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSMutableArray, NSXPCConnection, REObserverStore, REUpNextScheduler;
@protocol OS_dispatch_queue;

@interface REPredictedActionServer : NSObject
{
    NSXPCConnection *_connection;
    REUpNextScheduler *_scheduler;
    NSArray *_predictions;
    NSArray *_counts;
    NSDate *_firstPerformedDate;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _fetchingData;
    NSDate *_lastFetchedDate;
    NSMutableArray *_fetchCompletionBlocks;
    REObserverStore *_observers;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_accessOrEnqueueDataRequest:(CDUnknownBlockType)arg1 error:(CDUnknownBlockType)arg2;
- (void)_clearConnection;
- (void)_finishProcessingData;
- (void)_invalidateConnection;
- (void)_notifyObservers;
- (void)_queue_fetchPredicitions;
- (void)_queue_setupConnection;
- (void)_requestPredictions:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (void)fetchFirstPerformedActionDate:(CDUnknownBlockType)arg1;
- (void)fetchPerformedTodayCountForActionWithBundleIdentifer:(id)arg1 actionIdentifier:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchPredictedActions:(CDUnknownBlockType)arg1;
- (id)init;
- (void)removeObserver:(id)arg1;

@end
