//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKQuantity, NSArray, NSDate;

@interface _HKQuantityDistributionData : NSObject <NSSecureCoding, NSCopying>
{
    NSDate *_startDate;
    NSDate *_endDate;
    HKQuantity *_minimumBucketValue;
    HKQuantity *_minimumValue;
    HKQuantity *_maximumValue;
    HKQuantity *_averageValue;
    HKQuantity *_duration;
    NSArray *_histogramCounts;
}

@property (readonly, nonatomic) HKQuantity *averageValue; // @synthesize averageValue=_averageValue;
@property (readonly, nonatomic) HKQuantity *duration; // @synthesize duration=_duration;
@property (readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property (readonly, nonatomic) NSArray *histogramCounts; // @synthesize histogramCounts=_histogramCounts;
@property (readonly, nonatomic) HKQuantity *maximumValue; // @synthesize maximumValue=_maximumValue;
@property (readonly, nonatomic) HKQuantity *minimumBucketValue; // @synthesize minimumBucketValue=_minimumBucketValue;
@property (readonly, nonatomic) HKQuantity *minimumValue; // @synthesize minimumValue=_minimumValue;
@property (readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 minimumBucketValue:(id)arg3 minimumValue:(id)arg4 maximumValue:(id)arg5 averageValue:(id)arg6 duration:(id)arg7 histogramCounts:(id)arg8;

@end
