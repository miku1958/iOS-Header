//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface PGSetterThrottler : NSObject
{
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_queue> *_queue;
    id _value;
    NSObject<OS_dispatch_queue> *_throttleQueue;
    id _throttledValue;
    BOOL _busy;
    BOOL _pending;
}

@property (strong, nonatomic) id value;

- (void).cxx_destruct;
- (void)_setValue;
- (void)dealloc;
- (id)init;
- (id)initWithBlock:(CDUnknownBlockType)arg1 usingQueue:(id)arg2;

@end

