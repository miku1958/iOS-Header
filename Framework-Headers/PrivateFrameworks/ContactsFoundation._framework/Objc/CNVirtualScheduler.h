//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ContactsFoundation/CNScheduler-Protocol.h>

@class CNQueue, NSString;

@interface CNVirtualScheduler : NSObject <CNScheduler>
{
    unsigned long long _clock;
    unsigned long long _nextSchedulableTick;
    unsigned long long _stopTime;
    CNQueue *_queue;
    BOOL _isStarted;
    BOOL _isPerforming;
}

@property (readonly) unsigned long long clock; // @synthesize clock=_clock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)providerWithScheduler:(id)arg1;
+ (unsigned long long)timeWithDelay:(double)arg1 fromClock:(unsigned long long)arg2;
- (void).cxx_destruct;
- (unsigned long long)_nextSchedulableTick;
- (BOOL)_performJobs;
- (id)_scheduleBlock:(CDUnknownBlockType)arg1 atTime:(unsigned long long)arg2;
- (void)advanceBy:(unsigned long long)arg1;
- (void)advanceTo:(unsigned long long)arg1;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2 qualityOfService:(unsigned long long)arg3;
- (BOOL)hasJobsScheduled;
- (id)init;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;
- (void)start;
- (void)stop;
- (double)timestamp;

@end

