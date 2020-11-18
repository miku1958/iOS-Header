//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKSample, NSMutableArray;

@interface HDDataAggregationState : NSObject
{
    NSMutableArray *_unaggregatedSensorData;
    HKSample *_openSeries;
}

@property (readonly, nonatomic) HKSample *openSeries; // @synthesize openSeries=_openSeries;
@property (readonly, nonatomic) NSMutableArray *unaggregatedSensorData; // @synthesize unaggregatedSensorData=_unaggregatedSensorData;

- (void).cxx_destruct;
- (id)init;
- (id)initWithRemainingSensorData:(id)arg1;
- (id)initWithRemainingSensorData:(id)arg1 currentSeries:(id)arg2;

@end
