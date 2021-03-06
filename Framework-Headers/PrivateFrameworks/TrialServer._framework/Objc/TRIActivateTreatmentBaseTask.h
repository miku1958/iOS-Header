//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TrialServer/TRITreatmentBaseTask.h>

@class NSDate;

@interface TRIActivateTreatmentBaseTask : TRITreatmentBaseTask
{
    NSDate *_startTime;
    BOOL _requiresTreatmentInstallation;
    BOOL _testingIgnoreDependencies;
    NSDate *_endTime;
}

@property (strong, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property (readonly, nonatomic) BOOL requiresTreatmentInstallation; // @synthesize requiresTreatmentInstallation=_requiresTreatmentInstallation;
@property (nonatomic) BOOL testingIgnoreDependencies; // @synthesize testingIgnoreDependencies=_testingIgnoreDependencies;

- (void).cxx_destruct;
- (BOOL)_experimentRecord:(id)arg1 hasConflictWithExperimentsInDatabase:(id)arg2 conflictEndTime:(id *)arg3;
- (id)_nextTasksForRunStatus:(int)arg1;
- (BOOL)_writeNamespaceDescriptorsWithPaths:(id)arg1 toTreatmentLayer:(unsigned long long)arg2 forExperiment:(id)arg3 treatmentURLs:(id)arg4 context:(id)arg5;
- (id)dependencies;
- (unsigned long long)hash;
- (id)initWithExperiment:(id)arg1 treatmentId:(id)arg2 taskAttributing:(id)arg3 requiresTreatmentInstallation:(BOOL)arg4;
- (BOOL)isEqual:(id)arg1;
- (void)runDequeueHandlerUsingContext:(id)arg1;
- (void)runEnqueueHandlerUsingContext:(id)arg1;
- (id)runTaskUsingContext:(id)arg1;
- (id)runTaskUsingContext:(id)arg1 experiment:(id)arg2;
- (id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2;
- (void)setStartTime:(id)arg1;
- (id)startTime;
- (BOOL)updateLoggingWithExperimentRecord:(id)arg1 paths:(id)arg2 trackingId:(id)arg3 newLogTreatmentAddedOut:(id *)arg4;

@end

