//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDQueryServer.h>

@class HKWorkoutRoute;

@interface HDWorkoutRouteQueryServer : HDQueryServer
{
    unsigned long long _batchThreshold;
    HKWorkoutRoute *_locationSeries;
}

+ (Class)queryClass;
+ (id)requiredEntitlements;
- (void).cxx_destruct;
- (void)_queue_start;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (void)unitTest_setBatchThreshold:(unsigned long long)arg1;

@end
