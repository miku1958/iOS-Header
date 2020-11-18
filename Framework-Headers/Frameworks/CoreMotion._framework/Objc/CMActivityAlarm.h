//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CMActivityAlarm : NSObject
{
    BOOL fIsValid;
    struct __CFRunLoop *fRunLoop;
    NSObject<OS_dispatch_queue> *fQueue;
    CDUnknownBlockType fHandler;
    unsigned int _trigger;
    double _duration;
}

@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (nonatomic) unsigned int trigger; // @synthesize trigger=_trigger;

+ (BOOL)activityAlarmAvailable;
+ (id)activityAlarmInfo;
- (void)dealloc;
- (void)fire;
- (id)initWithTrigger:(unsigned int)arg1 duration:(double)arg2 onQueue:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
- (id)initWithTrigger:(unsigned int)arg1 duration:(double)arg2 onRunLoop:(struct __CFRunLoop *)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)invalidate;
- (BOOL)isValid;

@end

