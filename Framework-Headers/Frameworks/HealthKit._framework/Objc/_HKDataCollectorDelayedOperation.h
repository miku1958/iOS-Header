//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface _HKDataCollectorDelayedOperation : NSObject
{
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_queue> *_queue;
    int _pendingRunCount;
    double _lastExecution;
}

- (void).cxx_destruct;
- (void)executeWithDelay:(double)arg1;
- (id)initWithQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)invalidate;

@end
