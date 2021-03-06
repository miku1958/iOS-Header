//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSThread;
@protocol BKSAccelerometerDelegate;

@interface BKSAccelerometer : NSObject
{
    id<BKSAccelerometerDelegate> _delegate;
    struct __CFRunLoopSource *_accelerometerEventsSource;
    struct __CFRunLoop *_accelerometerEventsRunLoop;
    double _updateInterval;
    NSLock *_lock;
    int _orientationCheckToken;
    int _orientationNotificationsToken;
    NSThread *_orientationEventsThread;
    unsigned int _orientationPort;
    BOOL _passiveOrientationEvents;
    BOOL _orientationEventsEnabled;
    float _xThreshold;
    float _yThreshold;
    float _zThreshold;
}

@property (nonatomic) BOOL accelerometerEventsEnabled;
@property (weak, nonatomic) id<BKSAccelerometerDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) BOOL orientationEventsEnabled; // @synthesize orientationEventsEnabled=_orientationEventsEnabled;
@property (nonatomic) BOOL passiveOrientationEvents; // @synthesize passiveOrientationEvents=_passiveOrientationEvents;
@property (nonatomic) double updateInterval; // @synthesize updateInterval=_updateInterval;
@property (nonatomic) float xThreshold; // @synthesize xThreshold=_xThreshold;
@property (nonatomic) float yThreshold; // @synthesize yThreshold=_yThreshold;
@property (nonatomic) float zThreshold; // @synthesize zThreshold=_zThreshold;

- (void).cxx_destruct;
- (void)_checkIn;
- (void)_checkOut;
- (void)_orientationDidChange;
- (id)_orientationEventsThread;
- (void)_serverWasRestarted;
- (void)_updateOrientationServer;
- (long long)currentDeviceOrientation;
- (void)dealloc;
- (id)init;

@end

