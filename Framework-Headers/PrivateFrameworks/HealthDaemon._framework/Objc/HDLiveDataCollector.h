//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDDataCollector.h>

@interface HDLiveDataCollector : HDDataCollector
{
}

- (void)_queue_beginStreaming;
- (void)_queue_handleSensorDatum:(id)arg1 context:(id)arg2;
- (void)beginUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (id)hkObjectsFromSensorDatum:(id)arg1 context:(id)arg2;

@end

