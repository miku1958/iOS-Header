//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface TSDTilingLimitedQueue : NSObject
{
    NSObject<OS_dispatch_queue> *mManagerQueue;
    NSObject<OS_dispatch_queue> *mTargetQueue;
    unsigned long long mLimit;
    unsigned long long mReaderCount;
    struct os_unfair_lock_s mSpinLock;
}

- (void)dealloc;
- (id)init;
- (id)initWithLimit:(unsigned long long)arg1;
- (void)performAsync:(CDUnknownBlockType)arg1;

@end

