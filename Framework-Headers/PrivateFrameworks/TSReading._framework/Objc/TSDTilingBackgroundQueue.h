//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSKAccessController;
@protocol OS_dispatch_group, OS_dispatch_semaphore;

@interface TSDTilingBackgroundQueue : NSObject
{
    NSObject<OS_dispatch_semaphore> *mCanEnqueueReaders;
    NSObject<OS_dispatch_group> *mInFlightReaders;
    struct os_unfair_lock_s mReaderSpinLock;
    unsigned long long mReaderCount;
    NSObject<OS_dispatch_semaphore> *mReadLockSignal;
    long long mShutdownToken;
    BOOL mShuttingDown;
    TSKAccessController *mAccessController;
}

@property (getter=isShuttingDown) BOOL shuttingDown; // @synthesize shuttingDown=mShuttingDown;

+ (BOOL)isHoldingReadLockFromBackgroundQueue;
+ (id)p_sharedLimitedQueue;
- (void)dealloc;
- (void)drainAndPerformSync:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithAccessController:(id)arg1;
- (void)p_readLock;
- (void)p_readUnlock;
- (void)performAsync:(CDUnknownBlockType)arg1;
- (void)shutdown;

@end

