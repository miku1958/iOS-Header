//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface HDFitnessMachineStateTimer : NSObject
{
    NSString *_name;
    unsigned long long _duration;
    NSObject<OS_dispatch_source> *_timer;
    CDUnknownBlockType _handler;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property (readonly, copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;

+ (id)_timerWithDuration:(long long)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)begin;
- (void)cancel;
- (void)dealloc;
- (id)initWithName:(id)arg1 duration:(unsigned long long)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (BOOL)isValid;

@end

