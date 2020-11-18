//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCDeadlineScheduler;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRCDeadlineSource : NSObject
{
    long long _deadline;
    NSObject<OS_dispatch_source> *_latch;
    BRCDeadlineScheduler *_scheduler;
    _Atomic int _suspendCount;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (id)initWithScheduler:(id)arg1;
- (void)resume;
- (void)setBottomQueue:(id)arg1;
- (void)setEventHandler:(CDUnknownBlockType)arg1;
- (void)setTargetQueue:(id)arg1;
- (void)signal;
- (void)signalWithDeadline:(long long)arg1;
- (void)suspend;

@end
