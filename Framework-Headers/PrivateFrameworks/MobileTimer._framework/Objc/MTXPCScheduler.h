//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTSchedulingDelegate-Protocol.h>

@class NSString;

@interface MTXPCScheduler : NSObject <MTSchedulingDelegate>
{
    NSString *_eventName;
}

@property (copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;

+ (id)xpcSchedulerWithEvent:(id)arg1;
- (void).cxx_destruct;
- (id)initWithEvent:(id)arg1;
- (void)scheduleActivityWithCriteria:(id)arg1 activityHandler:(CDUnknownBlockType)arg2;
- (void)scheduleActivityWithCriteria:(id)arg1 activityHandler:(CDUnknownBlockType)arg2 performImmediately:(BOOL)arg3;
- (void)scheduleTimerForSeconds:(double)arg1;
- (void)unscheduleActivity;
- (void)unscheduleTimer;

@end

