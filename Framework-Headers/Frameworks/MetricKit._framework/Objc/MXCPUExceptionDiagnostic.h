//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricKit/MXDiagnostic.h>

@class MXCallStackTree, NSMeasurement;

@interface MXCPUExceptionDiagnostic : MXDiagnostic
{
    MXCallStackTree *_callStackTree;
    NSMeasurement *_totalCPUTime;
    NSMeasurement *_totalSampledTime;
}

@property (readonly) MXCallStackTree *callStackTree; // @synthesize callStackTree=_callStackTree;
@property (readonly) NSMeasurement *totalCPUTime; // @synthesize totalCPUTime=_totalCPUTime;
@property (readonly) NSMeasurement *totalSampledTime; // @synthesize totalSampledTime=_totalSampledTime;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMetaData:(id)arg1 applicationVersion:(id)arg2 callStack:(id)arg3 totalCpuTime:(id)arg4 totalSampledTime:(id)arg5;
- (id)toDictionary;

@end
