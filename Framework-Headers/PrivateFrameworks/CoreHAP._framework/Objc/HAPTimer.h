//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol HAPTimerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface HAPTimer : NSObject
{
    BOOL _running;
    id<HAPTimerDelegate> _delegate;
    double _timeInterval;
    NSDate *_fireDate;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _options;
}

@property (weak) id<HAPTimerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) NSDate *fireDate; // @synthesize fireDate=_fireDate;
@property (readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property (nonatomic, getter=isRunning) BOOL running; // @synthesize running=_running;
@property (readonly, nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

- (void).cxx_destruct;
- (void)_handleExpiration;
- (void)_kick;
- (void)_resume;
- (void)_suspend;
- (void)dealloc;
- (id)init;
- (id)initWithTimeInterval:(double)arg1 options:(unsigned long long)arg2;
- (void)kick;
- (void)resume;
- (void)suspend;

@end

