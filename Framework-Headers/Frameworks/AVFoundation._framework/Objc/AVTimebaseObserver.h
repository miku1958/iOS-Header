//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVWeakReference;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AVTimebaseObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_timerQueue;
    AVWeakReference *_weakReference;
    NSObject<OS_dispatch_source> *_timerSource;
    struct OpaqueCMTimebase *_timebase;
    double _lastRate;
    double _currentRate;
    BOOL _invalid;
}

@property (readonly, nonatomic) BOOL invalidated;
@property (readonly) struct OpaqueCMTimebase *timebase;
@property (readonly, nonatomic, getter=_weakReference) AVWeakReference *weakReference; // @synthesize weakReference=_weakReference;

- (void)_attachTimerSourceToTimebase;
- (void)_effectiveRateChanged;
- (void)_finishInitialization;
- (void)_handleTimeDiscontinuity;
- (void)_reallyInvalidate;
- (void)_removeTimebaseFromTimerSource;
- (void)_resetNextFireTime;
- (void)_startObservingTimebaseNotifications;
- (void)_stopObservingTimebaseNotifications;
- (void)dealloc;
- (void)finalize;
- (id)initWithTimebase:(struct OpaqueCMTimebase *)arg1 queue:(id)arg2;
- (void)invalidate;

@end

