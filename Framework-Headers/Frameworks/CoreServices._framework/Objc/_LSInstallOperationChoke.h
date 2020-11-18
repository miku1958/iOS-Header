//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface _LSInstallOperationChoke : NSObject
{
    unsigned long long _numConcurrentOperations;
    struct os_unfair_lock_s _lock;
    NSMutableDictionary *_queuedWork;
    unsigned long long _activeInstallers;
    unsigned long long _activeUninstallers;
    NSObject<OS_dispatch_semaphore> *_backpressureSemaphore;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
}

+ (long long)_bufferedRequestSlop;
- (void).cxx_destruct;
- (id)availableOperationOfType:(long long)arg1;
- (BOOL)becomeInstaller;
- (BOOL)becomeUninstaller;
- (id)claimOperationOfType:(long long)arg1;
- (void)enqueueInstallationOperation:(id)arg1;
- (id)initWithWidth:(long long)arg1;
- (void)performOperationForBundleIdentifier:(id)arg1 installType:(long long)arg2 block:(CDUnknownBlockType)arg3;
- (void)retireFromInstaller;
- (void)retireFromUninstaller;
- (void)retireOperation:(id)arg1;

@end
