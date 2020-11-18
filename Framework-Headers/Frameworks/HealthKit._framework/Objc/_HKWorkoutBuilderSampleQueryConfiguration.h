//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKQueryServerConfiguration.h>

@class NSUUID;

@interface _HKWorkoutBuilderSampleQueryConfiguration : HKQueryServerConfiguration
{
    BOOL _needsHistoricalData;
    NSUUID *_workoutBuilderIdentifier;
}

@property (nonatomic) BOOL needsHistoricalData; // @synthesize needsHistoricalData=_needsHistoricalData;
@property (copy, nonatomic) NSUUID *workoutBuilderIdentifier; // @synthesize workoutBuilderIdentifier=_workoutBuilderIdentifier;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
