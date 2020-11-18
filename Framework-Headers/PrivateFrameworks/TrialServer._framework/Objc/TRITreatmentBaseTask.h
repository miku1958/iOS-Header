//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TrialServer/TRIExperimentBaseTask.h>

@class NSString;
@protocol TRITaskAttributing;

@interface TRITreatmentBaseTask : TRIExperimentBaseTask
{
    NSString *_treatmentId;
    id<TRITaskAttributing> _taskAttributing;
}

@property (readonly, nonatomic) id<TRITaskAttributing> taskAttributing; // @synthesize taskAttributing=_taskAttributing;
@property (readonly, nonatomic) NSString *treatmentId; // @synthesize treatmentId=_treatmentId;

- (void).cxx_destruct;
- (id)description;
- (id)dimensions;
- (unsigned long long)hash;
- (id)initWithExperiment:(id)arg1 treatmentId:(id)arg2 taskAttributing:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)metrics;

@end
