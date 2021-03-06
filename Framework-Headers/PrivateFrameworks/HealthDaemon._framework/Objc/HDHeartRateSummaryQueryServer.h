//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDQueryServer.h>

#import <HealthDaemon/HDActivityCacheManagerObserver-Protocol.h>

@class HDActivityCacheManager, HKHeartRateSummary, NSString;

@interface HDHeartRateSummaryQueryServer : HDQueryServer <HDActivityCacheManagerObserver>
{
    HKHeartRateSummary *_latestSummary;
    HDActivityCacheManager *_activityCacheManager;
}

@property (weak, nonatomic) HDActivityCacheManager *activityCacheManager; // @synthesize activityCacheManager=_activityCacheManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id *)arg5;
+ (Class)queryClass;
- (void).cxx_destruct;
- (void)_queue_start;
- (void)_queue_stop;
- (BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
- (void)activityCacheManager:(id)arg1 changedHeartRateSummary:(id)arg2 isToday:(BOOL)arg3;
- (void)activityCacheManager:(id)arg1 changedTodayActivityCache:(id)arg2;
- (id)heartRateSummaryQueryClientProxy;

@end

