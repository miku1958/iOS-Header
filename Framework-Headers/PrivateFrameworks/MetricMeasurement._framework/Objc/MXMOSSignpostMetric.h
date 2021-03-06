//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricMeasurement/MXMMetric.h>

@class MXMInstrument, NSDate, NSString;

@interface MXMOSSignpostMetric : MXMMetric
{
    NSDate *_startDate;
    NSDate *_stopDate;
    unsigned long long _startMachContTime;
    unsigned long long _stopMachContTime;
}

@property (readonly, nonatomic) NSString *category;
@property (readonly, copy, nonatomic) MXMInstrument *instrument; // @dynamic instrument;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *subsystem;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_constructProbe;
- (unsigned long long)_sampleMode;
- (BOOL)_shouldAlwaysWrapInProxy;
- (BOOL)_shouldConstructProbe;
- (BOOL)_shouldNeverWrapInProxy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)didStartAtContinuousTime:(unsigned long long)arg1 absoluteTime:(unsigned long long)arg2 startDate:(id)arg3;
- (void)didStartAtTime:(unsigned long long)arg1 startDate:(id)arg2;
- (void)didStopAtContinuousTime:(unsigned long long)arg1 absoluteTime:(unsigned long long)arg2 stopDate:(id)arg3;
- (void)didStopAtTime:(unsigned long long)arg1 stopDate:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubsystem:(id)arg1;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2 name:(id)arg3;

@end

