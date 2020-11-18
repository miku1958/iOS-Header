//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, PHAWorkerHealthMonitor, PHPhotoLibrary;

@interface PHAJobGenerator : NSObject
{
    PHPhotoLibrary *_library;
    PHAWorkerHealthMonitor *_healthMonitor;
    NSMutableDictionary *_workInfoReadersByMode;
    NSDictionary *_workersByType;
    long long _generatedJobCountGoal;
    NSMutableDictionary *_countOfJobsGeneratedByWorkerType;
}

@property (readonly, nonatomic) NSMutableDictionary *countOfJobsGeneratedByWorkerType; // @synthesize countOfJobsGeneratedByWorkerType=_countOfJobsGeneratedByWorkerType;
@property (nonatomic) long long generatedJobCountGoal; // @synthesize generatedJobCountGoal=_generatedJobCountGoal;
@property (readonly, nonatomic) PHAWorkerHealthMonitor *healthMonitor; // @synthesize healthMonitor=_healthMonitor;
@property (readonly, nonatomic) PHPhotoLibrary *library; // @synthesize library=_library;
@property (readonly, nonatomic) NSMutableDictionary *workInfoReadersByMode; // @synthesize workInfoReadersByMode=_workInfoReadersByMode;
@property (readonly, nonatomic) NSDictionary *workersByType; // @synthesize workersByType=_workersByType;

+ (long long)maxBatchSize;
- (void).cxx_destruct;
- (BOOL)_anyWorkerIsLoadBalanceSkipping;
- (void)_increaseGoalLevelIfNeeeded;
- (void)_incrementGeneratedJobCountForWorkerType:(short)arg1;
- (void)_jumpToGoalJobCountForWorkerType:(short)arg1;
- (id)_produceAcknowledgeDeletesJobForWorkerType:(short)arg1 scenario:(unsigned long long)arg2 defaultsDisabledKey:(id)arg3 failureReason:(id *)arg4;
- (id)_produceAssetAnalysisOrAdditionalJobWithForWorkerType:(short)arg1 workInfoReaderMode:(id)arg2 scenario:(unsigned long long)arg3 allowLoadBalanceSkip:(BOOL)arg4 additionalStatesToExclude:(id)arg5 askAboutAdditionalJobs:(BOOL)arg6 canUseNetwork:(BOOL)arg7 defaultsDisabledKey:(id)arg8 failureReason:(id *)arg9;
- (BOOL)_shouldLoadBalanceSkipForWorkerType:(short)arg1;
- (id)_transformWorkInfoByUUIDToWorkInfoByLocalIdentifier:(id)arg1;
- (id)_workerTypesEligibleForLoadBalanceSkipping;
- (BOOL)_workerUnavailableForWorkerType:(short)arg1 defaultsDisabledKey:(id)arg2 unavailableReason:(id *)arg3;
- (id)generateJobWithCurrentConstraints:(id)arg1;
- (id)initWithHealthMonitor:(id)arg1 library:(id)arg2 workersByType:(id)arg3;

@end

