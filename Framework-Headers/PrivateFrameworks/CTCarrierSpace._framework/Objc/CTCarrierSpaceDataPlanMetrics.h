//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CTCarrierSpace/NSSecureCoding-Protocol.h>

@class CTCarrierSpaceDataPlanMetricsItem, NSDate, NSNumber;

@interface CTCarrierSpaceDataPlanMetrics : NSObject <NSSecureCoding>
{
    NSDate *_billingCycleEndDate;
    CTCarrierSpaceDataPlanMetricsItem *_domestic;
    long long _regStatus;
    NSNumber *_domesticCapacity;
}

@property (strong, nonatomic) NSDate *billingCycleEndDate; // @synthesize billingCycleEndDate=_billingCycleEndDate;
@property (strong, nonatomic) CTCarrierSpaceDataPlanMetricsItem *domestic; // @synthesize domestic=_domestic;
@property (strong, nonatomic) NSNumber *domesticCapacity; // @synthesize domesticCapacity=_domesticCapacity;
@property (nonatomic) long long regStatus; // @synthesize regStatus=_regStatus;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
