//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BSDispatchSource;
@protocol OS_dispatch_queue;

@interface BSTimer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    CDUnknownBlockType _handler;
    BSDispatchSource *_source;
    double _startTime;
    double _fireInterval;
    double _repeatInterval;
    double _leewayInterval;
    unsigned long long _fireCount;
    BOOL _oneShot;
    BOOL _scheduled;
}

@property (readonly, nonatomic) unsigned long long fireCount; // @synthesize fireCount=_fireCount;
@property (readonly, nonatomic) double fireInterval; // @synthesize fireInterval=_fireInterval;
@property (readonly, nonatomic) double repeatInterval; // @synthesize repeatInterval=_repeatInterval;
@property (readonly, nonatomic, getter=isScheduled) BOOL scheduled; // @synthesize scheduled=_scheduled;
@property (readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;

+ (id)scheduledTimerWithFireInterval:(double)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_queue_cancel;
- (void)_queue_noteTimerFired;
- (void)cancel;
- (void)dealloc;
- (id)initWithFireInterval:(double)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)initWithFireInterval:(double)arg1 repeatInterval:(double)arg2 leewayInterval:(double)arg3 queue:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void)schedule;

@end

