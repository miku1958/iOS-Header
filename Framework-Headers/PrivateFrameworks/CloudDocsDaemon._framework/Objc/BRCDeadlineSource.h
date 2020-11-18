//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCDeadlineScheduler, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCDeadlineSource : NSObject
{
    long long _deadline;
    BRCDeadlineScheduler *_scheduler;
    int _suspendCount;
    BOOL _cancelled;
    BOOL _signaled;
    NSString *_name;
    CDUnknownBlockType _eventHandler;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy, nonatomic) CDUnknownBlockType eventHandler; // @synthesize eventHandler=_eventHandler;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

- (void).cxx_destruct;
- (void)cancel;
- (id)description;
- (id)initWithScheduler:(id)arg1 name:(id)arg2;
- (void)resume;
- (void)runEventHandler;
- (void)signal;
- (void)signalWithDeadline:(long long)arg1;
- (void)suspend;
- (BOOL)willRunEvenHandler;

@end

