//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

@interface RCBlockScheduler : NSObject
{
    NSMutableArray *_blocks;
    NSObject<OS_dispatch_group> *_group;
    NSObject<OS_dispatch_queue> *_schedulerQueue;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _start;
    CDUnknownBlockType _schedulerBlock;
    BOOL _suspended;
    double _interval;
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_date;
}

@property (readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property (nonatomic) double interval; // @synthesize interval=_interval;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

- (void).cxx_destruct;
- (id)init;
- (void)resume;
- (void)scheduleBlock:(CDUnknownBlockType)arg1;
- (void)suspend;

@end
