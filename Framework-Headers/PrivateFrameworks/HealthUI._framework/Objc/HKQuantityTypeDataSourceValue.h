//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKQuantity, HKQuantityType, NSDate, NSDateComponents;

@interface HKQuantityTypeDataSourceValue : NSObject
{
    HKQuantity *_sumQuantity;
    HKQuantity *_minQuantity;
    HKQuantity *_maxQuantity;
    HKQuantity *_averageQuantity;
    HKQuantity *_durationQuantity;
    HKQuantity *_mostRecentQuantity;
    HKQuantityType *_quantityType;
    long long _recordCount;
    NSDateComponents *_statisticsInterval;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (strong, nonatomic) HKQuantity *averageQuantity; // @synthesize averageQuantity=_averageQuantity;
@property (strong, nonatomic) HKQuantity *durationQuantity; // @synthesize durationQuantity=_durationQuantity;
@property (strong, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property (strong, nonatomic) HKQuantity *maxQuantity; // @synthesize maxQuantity=_maxQuantity;
@property (strong, nonatomic) HKQuantity *minQuantity; // @synthesize minQuantity=_minQuantity;
@property (strong, nonatomic) HKQuantity *mostRecentQuantity; // @synthesize mostRecentQuantity=_mostRecentQuantity;
@property (strong, nonatomic) HKQuantityType *quantityType; // @synthesize quantityType=_quantityType;
@property (nonatomic) long long recordCount; // @synthesize recordCount=_recordCount;
@property (strong, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property (strong, nonatomic) NSDateComponents *statisticsInterval; // @synthesize statisticsInterval=_statisticsInterval;
@property (strong, nonatomic) HKQuantity *sumQuantity; // @synthesize sumQuantity=_sumQuantity;

- (void).cxx_destruct;

@end

