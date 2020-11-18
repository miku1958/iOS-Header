//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class RBSProcessHandle;

@interface FBProcessCPUStatistics : NSObject
{
    RBSProcessHandle *_handle;
    struct FBProcessTimes _times;
    struct os_unfair_lock_s _lock;
}

@property (readonly, nonatomic) double totalElapsedIdleTime;
@property (readonly, nonatomic) double totalElapsedSystemTime;
@property (readonly, nonatomic) double totalElapsedTime;
@property (readonly, nonatomic) double totalElapsedUserTime;

- (void).cxx_destruct;
- (void)_hostwideUserElapsedCPUTime:(out double *)arg1 systemElapsedCPUTime:(out double *)arg2 idleElapsedCPUTime:(out double *)arg3;
- (void)_lock_getApplicationCPUTimesForUser:(out double *)arg1 system:(out double *)arg2 idle:(out double *)arg3;
- (id)descriptionForCrashReport;
- (id)initWithProcessHandle:(id)arg1;
- (void)reset;

@end
