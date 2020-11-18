//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/ARSensor-Protocol.h>

@class ARAccelerometerData, ARGyroscopeData, NSString;
@protocol ARSensorDelegate, OS_dispatch_queue;

@interface ARIOMotionSensor : NSObject <ARSensor>
{
    struct __IOHIDEventSystemClient *_accelerometerSystemClient;
    struct __IOHIDServiceClient *_accelerometerService;
    struct __IOHIDEventSystemClient *_gyroSystemClient;
    struct __IOHIDServiceClient *_gyroService;
    NSObject<OS_dispatch_queue> *_imuDataQueue;
    ARGyroscopeData *_currentGyroData;
    ARAccelerometerData *_currentAccelerometerData;
    id<ARSensorDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ARSensorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long powerUsage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)accelerometerDidOutputEvent:(struct __IOHIDEvent *)arg1 timestamp:(double)arg2;
- (void)dealloc;
- (void)gyroscopeDidOutputEvent:(struct __IOHIDEvent *)arg1 timestamp:(double)arg2;
- (id)init;
- (long long)preferredSampleRate;
- (unsigned long long)providedDataTypes;
- (void)start;
- (void)stop;

@end

