//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSDevice, SFDeviceDiscovery;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PKProximityDetector : NSObject
{
    SFDeviceDiscovery *_sharingDiscovery;
    BOOL _detectingDeviceNearby;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_dispatch_queue> *_discoveryQueue;
    double _timeoutDuration;
    unsigned int _powerAssertionIdentifier;
    BOOL _isDetecting;
    IDSDevice *_detectingDevice;
    CDUnknownBlockType _handler;
}

@property (readonly, nonatomic) IDSDevice *detectingDevice; // @synthesize detectingDevice=_detectingDevice;
@property (copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property (readonly, nonatomic) BOOL isDetecting; // @synthesize isDetecting=_isDetecting;

- (void).cxx_destruct;
- (void)_createPowerAssertion;
- (void)_endPowerAssertion;
- (void)dealloc;
- (void)endDetecting;
- (id)initWithDevice:(id)arg1;
- (void)startDetectingForDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;

@end
