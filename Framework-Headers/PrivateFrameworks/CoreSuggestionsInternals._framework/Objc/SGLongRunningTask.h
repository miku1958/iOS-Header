//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, SGLongRunningTaskManager;

@interface SGLongRunningTask : NSObject
{
    SGLongRunningTaskManager *_manager;
    NSDate *_deadline;
    _Atomic BOOL _deferRequested;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithDeadline:(id)arg1 manager:(id)arg2;
- (void)markFinished;
- (void)requestDefer;
- (BOOL)shouldDefer;

@end
