//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SensorKit/SRSensorKitServiceClientWriting-Protocol.h>

@class SRSensorWriter;

__attribute__((visibility("hidden")))
@interface SRSensorWriterClient : NSObject <SRSensorKitServiceClientWriting>
{
    SRSensorWriter *_writer;
}

@property (weak) SRSensorWriter *writer; // @synthesize writer=_writer;

+ (id)sensorWriterClientWithWriter:(id)arg1;
- (void).cxx_destruct;
- (id)initWithWriter:(id)arg1;
- (void)resetDatastoreFiles:(id)arg1;
- (void)setMonitoring:(BOOL)arg1 withRequestedConfigurations:(id)arg2;

@end

