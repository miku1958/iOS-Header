//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SensorKit/NSObject-Protocol.h>

@class SRSensorWriter;

@protocol SRSensorWriterDelegate <NSObject>

@optional
- (void)sensorWriterDidStopMonitoring:(SRSensorWriter *)arg1;
- (void)sensorWriterWillStartMonitoring:(SRSensorWriter *)arg1;
@end

