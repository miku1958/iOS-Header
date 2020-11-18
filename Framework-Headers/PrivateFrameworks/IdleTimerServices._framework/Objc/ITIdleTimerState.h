//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ITIdleTimerStateModel;
@protocol ITIdleTimerStateRequestHandling;

@interface ITIdleTimerState : NSObject
{
    struct os_unfair_lock_s _accessLock;
    ITIdleTimerStateModel *_model;
    id<ITIdleTimerStateRequestHandling> _requestHandler;
}

+ (BOOL)isIdleTimerServiceAvailable;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_init;
- (id)_initWithModel:(id)arg1;
- (BOOL)isIdleTimerServiceAvailable;
- (id)newAssertionToDisableIdleTimerForReason:(id)arg1;
- (id)newIdleTimerAssertionWithConfiguration:(id)arg1 forReason:(id)arg2;

@end
