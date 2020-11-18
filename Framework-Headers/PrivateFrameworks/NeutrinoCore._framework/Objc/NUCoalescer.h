//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NUCoalescer : NSObject
{
    NSObject<OS_dispatch_source> *_timer;
    double _delay;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) double delay; // @synthesize delay=_delay;
@property (readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

- (void).cxx_destruct;
- (void)coalesceBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDelay:(double)arg1;
- (id)initWithDelay:(double)arg1 queue:(id)arg2;

@end

