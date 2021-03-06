//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SleepDaemon/HDSPActivityScheduler-Protocol.h>

@class NSString;
@protocol NAScheduler;

__attribute__((visibility("hidden")))
@interface HDSPXPCActivityScheduler : NSObject <HDSPActivityScheduler>
{
    NSString *_eventName;
    id<NAScheduler> _callbackScheduler;
}

@property (readonly, nonatomic) id<NAScheduler> callbackScheduler; // @synthesize callbackScheduler=_callbackScheduler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithEventName:(id)arg1 callbackScheduler:(id)arg2;
- (void)scheduleActivity:(id)arg1 options:(unsigned long long)arg2 activityHandler:(CDUnknownBlockType)arg3;
- (void)scheduleActivityWithCriteria:(id)arg1 options:(unsigned long long)arg2 activityHandler:(CDUnknownBlockType)arg3;
- (void)unschedule;

@end

