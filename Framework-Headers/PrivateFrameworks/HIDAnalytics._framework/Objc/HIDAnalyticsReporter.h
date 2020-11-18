//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HIDAnalyticsReporter : NSObject
{
    NSMutableSet *_events;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
}

- (void).cxx_destruct;
- (id)createBucketData:(id)arg1 fieldvalue:(id)arg2 fieldDescription:(id)arg3;
- (void)dealloc;
- (void)dispatchAnalyticsForEvent:(id)arg1;
- (id)init;
- (void)logAnalyticsEvent:(id)arg1;
- (void)logAnalyticsEvent:(id)arg1 eventDescription:(id)arg2 eventValue:(id)arg3;
- (void)registerEvent:(id)arg1;
- (void)start;
- (void)stop;
- (void)unregisterEvent:(id)arg1;

@end
