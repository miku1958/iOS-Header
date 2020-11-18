//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface CFPrefsDaemon : NSObject
{
    NSObject<OS_xpc_object> *_listener;
    const char *_name;
    int _role;
    struct __CFSet *_sourceCache;
    struct os_unfair_lock_s _sourceCacheLock;
    BOOL _testMode;
    _Atomic unsigned int *_shmem;
}

- (void)_initializeShmemPage:(_Atomic unsigned int **)arg1;
- (void)checkIn;
- (void)flushDomain:(const char *)arg1 inAgentForUser:(struct __CFString *)arg2;
- (void)flushDomainInDaemon:(const char *)arg1;
- (void)getShmemName:(char *)arg1 bufLen:(unsigned long long)arg2;
- (void)handleAgentCheckInMessage:(id)arg1;
- (void)handleError:(id)arg1;
- (void)handleFlushManagedMessage:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)handleFlushSourceForDomainMessage:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)handleMessage:(id)arg1 fromPeer:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)handleMultiMessage:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)handleSimulateTimerSynchronizeForTesting;
- (void)handleSourceMessage:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)handleUserDeletedMessage:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (id)initWithRole:(int)arg1 testMode:(BOOL)arg2;
- (BOOL)isInTestMode;
- (id)listener;
- (void)logDomainInconsistencyForProcess:(int)arg1 message:(id)arg2 source:(id)arg3;
- (int)role;
- (_Atomic unsigned int *)shmem;
- (void)synchronousWithSourceCache:(CDUnknownBlockType)arg1;
- (unsigned int)userID;
- (void)withSourceForDomain:(struct __CFString *)arg1 inContainer:(struct __CFString *)arg2 user:(struct __CFString *)arg3 byHost:(BOOL)arg4 managed:(BOOL)arg5 managedUsesContainer:(BOOL)arg6 cloudStoreEntitlement:(id)arg7 cloudConfigurationPath:(struct __CFString *)arg8 performWithSourceLock:(CDUnknownBlockType)arg9 afterReleasingSourceLock:(CDUnknownBlockType)arg10;
- (void)withSources:(CDUnknownBlockType)arg1;

@end
