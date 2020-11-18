//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CMPedometerProxy : NSObject
{
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSObject<OS_dispatch_queue> *fAppQueue;
    NSObject<OS_dispatch_source> *fWatchdogTimer;
    struct CLConnectionClient *fLocationdConnection;
    CDUnknownBlockType fHandler;
    long long fStepCountFromStart;
    long long fPushCountFromStart;
    long long fStepCountOffset;
    long long fPushCountOffset;
    double fDistanceFromStart;
    double fDistanceOffset;
    int fFloorAscendedStart;
    int fFloorAscendedOffset;
    int fFloorDescendedStart;
    int fFloorDescendedOffset;
    double fActiveTimeFromStart;
    double fActiveTimeOffset;
    double fValidStartDate;
    BOOL fStopUpdates;
    BOOL fFloorCountingAvailable;
    BOOL fPaceAndCadenceAvailable;
    CDUnknownBlockType fEventHandler;
    BOOL fStopEventUpdates;
    int fWorkoutType;
}

- (void)_handleQueryResponse:(shared_ptr_bdcc6d0f)arg1 onQueue:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)_handleRecordQueryResponse:(shared_ptr_bdcc6d0f)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_internalQueryPedometerDataFromDate:(id)arg1 toDate:(id)arg2 onQueue:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)_queryPedometerDataFromDate:(id)arg1 toDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)_queryPedometerDataSinceDataRecord:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_startPedometerEventUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)_startPedometerUpdatesFromDate:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_startWatchdogCheckins;
- (void)_stopPedometerEventUpdates;
- (void)_stopPedometerUpdates;
- (void)_stopWatchdogCheckins;
- (void)_teardown;
- (void)dealloc;
- (id)init;

@end

