//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCFairScheduler, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCFairSource : NSObject
{
    unsigned long long _schedulerBitIndex;
    NSString *_name;
    BRCFairScheduler *_scheduler;
    int _suspendCount;
    BOOL _cancelled;
    BOOL _signaled;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _eventHandler;
}

@property (copy, nonatomic) CDUnknownBlockType eventHandler; // @synthesize eventHandler=_eventHandler;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

- (void).cxx_destruct;
- (void)_runEventHandler;
- (void)cancel;
- (id)description;
- (id)initWithName:(id)arg1 scheduler:(id)arg2;
- (void)resume;
- (void)signal;
- (void)suspend;

@end

