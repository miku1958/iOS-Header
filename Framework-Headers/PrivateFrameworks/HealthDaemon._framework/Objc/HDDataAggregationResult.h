//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDDataAggregationState, NSArray;

@interface HDDataAggregationResult : NSObject
{
    HDDataAggregationState *_aggregationState;
    NSArray *_consumedSensorData;
    CDUnknownBlockType _persistenceHandler;
}

@property (readonly, copy, nonatomic) HDDataAggregationState *aggregationState; // @synthesize aggregationState=_aggregationState;
@property (readonly, copy, nonatomic) NSArray *consumedSensorData; // @synthesize consumedSensorData=_consumedSensorData;
@property (readonly, copy, nonatomic) CDUnknownBlockType persistenceHandler; // @synthesize persistenceHandler=_persistenceHandler;

- (void).cxx_destruct;
- (id)initWithResultingAggregationState:(id)arg1 consumedSensorData:(id)arg2 persistenceHandler:(CDUnknownBlockType)arg3;

@end

