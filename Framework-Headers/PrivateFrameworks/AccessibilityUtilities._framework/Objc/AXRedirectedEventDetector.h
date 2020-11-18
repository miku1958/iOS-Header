//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AXDispatchTimer, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AXRedirectedEventDetector : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_recentEvents;
    AXDispatchTimer *_flushEventsTimer;
}

@property (strong, nonatomic) AXDispatchTimer *flushEventsTimer; // @synthesize flushEventsTimer=_flushEventsTimer;
@property (strong, nonatomic) NSMutableArray *recentEvents; // @synthesize recentEvents=_recentEvents;

+ (void)setFlushEventsTimerDelay:(double)arg1;
- (void).cxx_destruct;
- (double)_elapsedTimeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (void)addEvent:(id)arg1;
- (id)init;
- (BOOL)isRedirectedEvent:(id)arg1;

@end

