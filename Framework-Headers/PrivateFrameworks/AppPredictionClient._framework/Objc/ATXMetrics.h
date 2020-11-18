//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PETScalarEventTracker;
@protocol OS_dispatch_queue;

@interface ATXMetrics : NSObject
{
    NSObject<OS_dispatch_queue> *_loggingQueue;
    PETScalarEventTracker *_viewTracker;
    PETScalarEventTracker *_executeTracker;
    PETScalarEventTracker *_errorTracker;
}

+ (id)_sharedInstance;
+ (void)logActionExecuteForType:(long long)arg1 inContext:(long long)arg2;
+ (void)logActionViewForType:(long long)arg1 inContext:(long long)arg2;
+ (void)logError:(long long)arg1 inContext:(long long)arg2;
- (void).cxx_destruct;
- (void)_logActionExecuteForType:(long long)arg1 inContext:(long long)arg2;
- (void)_logActionViewForType:(long long)arg1 inContext:(long long)arg2;
- (void)_logError:(long long)arg1 inContext:(long long)arg2;
- (id)init;

@end

