//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKObjectType.h>

@interface HKSampleType : HKObjectType
{
}

@property (readonly, nonatomic) BOOL isMaximumDurationRestricted;
@property (readonly, nonatomic) BOOL isMinimumDurationRestricted;
@property (readonly, nonatomic) double maximumAllowedDuration;
@property (readonly, nonatomic) double minimumAllowedDuration;

+ (id)_sampleTypeWithCode:(long long)arg1;
+ (id)medicalRecordTypes;
+ (id)medicalRecordTypesWithOptions:(unsigned long long)arg1;
- (id)_earliestAllowedStartDateForSampleOverlappingDate:(id)arg1;
- (double)_maximumAllowedDuration;
- (double)_minimumAllowedDuration;
- (BOOL)_validateMetadata:(id)arg1 sample:(id)arg2 error:(id *)arg3;
- (BOOL)_validateStartDate:(double)arg1 endDate:(double)arg2 error:(id *)arg3;

@end

