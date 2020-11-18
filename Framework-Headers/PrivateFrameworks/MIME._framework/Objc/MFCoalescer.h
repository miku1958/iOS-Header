//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MFCoalescer : NSObject
{
    CDUnknownBlockType _coalescerAction;
    int _lock;
    id _coalescedValue;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_coalescer;
}

- (void)_handleCoalesceEvent;
- (void)coalesceValue:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCoalescingAction:(CDUnknownBlockType)arg1;

@end
