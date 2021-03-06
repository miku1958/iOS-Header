//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

@interface ACTimedExpirer : NSObject
{
    unsigned long long _invalidationInterval;
    NSObject<OS_dispatch_source> *_invalidationTimer;
    struct os_unfair_lock_s _invalidationTimerLock;
}

+ (id)expirerWithTimeout:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)_cancelTimer;
- (void)_unsafeCancelTimer;
- (void)dealloc;
- (id)init;
- (void)scheduleExpiration:(CDUnknownBlockType)arg1;

@end

