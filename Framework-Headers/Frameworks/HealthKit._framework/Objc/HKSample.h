//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKObject.h>

#import <HealthKit/NSCopying-Protocol.h>

@class HKSampleType, NSDate;

@interface HKSample : HKObject <NSCopying>
{
    HKSampleType *_sampleType;
    double _startTimestamp;
    double _endTimestamp;
}

@property (readonly) NSDate *endDate;
@property (nonatomic, getter=_endTimestamp, setter=_setEndTimestamp:) double endTimestamp; // @synthesize endTimestamp=_endTimestamp;
@property (readonly) HKSampleType *sampleType;
@property (readonly) NSDate *startDate;
@property (nonatomic, getter=_startTimestamp, setter=_setStartTimestamp:) double startTimestamp; // @synthesize startTimestamp=_startTimestamp;

+ (id)_newSampleWithType:(id)arg1 startDate:(double)arg2 endDate:(double)arg3 device:(id)arg4 metadata:(id)arg5 config:(CDUnknownBlockType)arg6;
+ (id)_sampleWithUUID:(id)arg1 metadata:(id)arg2 sourceBundleIdentifier:(id)arg3 creationDate:(double)arg4 sampleType:(id)arg5 startDate:(double)arg6 endDate:(double)arg7;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_enumerateTimePeriodsWithBlock:(CDUnknownBlockType)arg1;
- (void)_setSampleType:(id)arg1;
- (id)_validateConfiguration;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

