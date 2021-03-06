//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLSilo;
@protocol CLTimerScheduler;

@interface CLTimer : NSObject
{
    double _delaySetAtTime;
    double _nextFireDelay;
    CLSilo *_silo;
    id<CLTimerScheduler> _scheduler;
    CDUnknownBlockType _handler;
    double _fireInterval;
}

@property (nonatomic) double fireInterval; // @synthesize fireInterval=_fireInterval;
@property (copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property (nonatomic) double nextFireDelay; // @synthesize nextFireDelay=_nextFireDelay;
@property (nonatomic) double nextFireTime; // @dynamic nextFireTime;

- (void).cxx_destruct;
- (void)dbgAssertInside;
- (id)initInSilo:(id)arg1 withScheduler:(id)arg2;
- (void)invalidate;
- (double)nextFireDelayRaw;
- (void)setNextFireDelay:(double)arg1 interval:(double)arg2;
- (void)setNextFireTime:(double)arg1 interval:(double)arg2;
- (void)shouldFire;
- (void)updateScheduler;

@end

