//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDActiveDataAggregator.h>

@class HKQuantityType;

@interface HDActiveQuantityDataAggregator : HDActiveDataAggregator
{
    HKQuantityType *_quantityType;
}

@property (readonly, copy, nonatomic) HKQuantityType *quantityType; // @synthesize quantityType=_quantityType;

- (void).cxx_destruct;
- (id)_aggregateForState:(id)arg1 collector:(id)arg2 device:(id)arg3 requestedAggregationDate:(id)arg4 mode:(long long)arg5 interval:(double)arg6;
- (id)aggregateForState:(id)arg1 collector:(id)arg2 device:(id)arg3 requestedAggregationDate:(id)arg4 mode:(long long)arg5 freezeSeries:(BOOL)arg6 error:(id *)arg7;
- (id)description;
- (id)initForQuantityType:(id)arg1 dataCollectionManager:(id)arg2;
- (id)objectType;
- (Class)sensorDatumClass;

@end
