//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TrialServer/TRIBaseTask.h>

#import <TrialServer/TRIMetricsProviding-Protocol.h>
#import <TrialServer/TRIRetryableTask-Protocol.h>

@class NSArray, NSDate, NSMutableArray, NSSet, NSString;
@protocol TRITaskAttributing, TRITaskQueueStateProviding;

@interface TRIFetchMultipleExperimentNotificationsTask : TRIBaseTask <TRIRetryableTask, TRIMetricsProviding>
{
    NSMutableArray *_metrics;
    NSMutableArray *_nextTasks;
    NSDate *_startingFetchDateOverride;
    BOOL _rollbacksOnly;
    id<TRITaskAttributing> _taskAttributing;
    NSSet *_namespaceNames;
    int retryCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int retryCount; // @synthesize retryCount;
@property (copy, nonatomic) NSDate *startTime;
@property (weak, nonatomic) id<TRITaskQueueStateProviding> stateProvider;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *tags;
@property (readonly, nonatomic) NSString *taskName;
@property (readonly, nonatomic) int taskType;

+ (id)parseFromData:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)taskWithStartingFetchDateOverride:(id)arg1 namespaceNames:(id)arg2 taskAttributing:(id)arg3 rollbacksOnly:(BOOL)arg4;
- (void).cxx_destruct;
- (void)_addMetric:(id)arg1;
- (void)_addNextTask:(id)arg1;
- (id)_asPersistedTask;
- (BOOL)_checkIfAnyTreatmentPresent:(id)arg1 usingContext:(id)arg2;
- (id)_getNextTaskForExperiment:(id)arg1 database:(id)arg2 taskQueue:(id)arg3;
- (id)_nameForNotificationType:(int)arg1;
- (BOOL)_processExperiment:(id)arg1 experimentDatabase:(id)arg2 namespaceDatabase:(id)arg3 taskQueue:(id)arg4 paths:(id)arg5;
- (id)dimensions;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartingFetchDateOverride:(id)arg1 container:(int)arg2 team:(id)arg3 rollbacksOnly:(BOOL)arg4 withNamespaceNames:(id)arg5;
- (id)initWithStartingFetchDateOverride:(id)arg1 namespaceNames:(id)arg2 taskAttributing:(id)arg3 rollbacksOnly:(BOOL)arg4;
- (BOOL)isEqual:(id)arg1;
- (id)metrics;
- (long long)nextTaskCount;
- (unsigned long long)requiredCapabilities;
- (id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2;
- (id)serialize;
- (void)updateStatusForNamespacesWithContext:(id)arg1;

@end

