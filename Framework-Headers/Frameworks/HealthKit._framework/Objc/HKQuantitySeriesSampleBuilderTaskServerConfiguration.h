//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKTaskConfiguration.h>

@class HKDevice, HKQuantityType, NSDate;

@interface HKQuantitySeriesSampleBuilderTaskServerConfiguration : HKTaskConfiguration
{
    HKQuantityType *_quantityType;
    NSDate *_startDate;
    HKDevice *_device;
}

@property (copy, nonatomic) HKDevice *device; // @synthesize device=_device;
@property (copy, nonatomic) HKQuantityType *quantityType; // @synthesize quantityType=_quantityType;
@property (copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithQuantityType:(id)arg1 startDate:(id)arg2 device:(id)arg3;

@end

