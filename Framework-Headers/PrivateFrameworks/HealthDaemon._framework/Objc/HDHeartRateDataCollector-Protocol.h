//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDDataCollector-Protocol.h>

@class HDHeartRateSensorDatum, HKDevice, HKSource;
@protocol HDDataCollector;

@protocol HDHeartRateDataCollector <HDDataCollector>

@optional
- (void)dataCollector:(id<HDDataCollector>)arg1 didCollectHeartRate:(HDHeartRateSensorDatum *)arg2 device:(HKDevice *)arg3 source:(HKSource *)arg4;
@end

