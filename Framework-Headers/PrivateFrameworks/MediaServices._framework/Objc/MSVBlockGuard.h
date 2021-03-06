//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSVTimer;
@protocol OS_dispatch_queue;

@interface MSVBlockGuard : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _disarmed;
    BOOL _didTimeout;
    MSVTimer *_timeoutTimer;
    CDUnknownBlockType _interruptionHandler;
}

- (void).cxx_destruct;
- (void)_interruptWithReason:(long long)arg1;
- (void)dealloc;
- (BOOL)disarm;
- (id)init;
- (id)initWithDeallocHandler:(CDUnknownBlockType)arg1;
- (id)initWithTimeout:(double)arg1;
- (id)initWithTimeout:(double)arg1 interruptionHandler:(CDUnknownBlockType)arg2;

@end

