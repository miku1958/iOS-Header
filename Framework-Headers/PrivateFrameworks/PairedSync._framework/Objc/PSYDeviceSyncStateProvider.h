//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface PSYDeviceSyncStateProvider : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_observers;
    unsigned long long _syncState;
    struct _opaque_pthread_mutex_t _syncStateLock;
    int _notifyToken;
    unsigned long long _notifyState;
}

+ (id)sharedSyncStateProvider;
- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)deviceSyncStateChangedRemotely;
- (void)enumerateObserversWithBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (void)removeObserver:(id)arg1;
- (unsigned long long)syncState;

@end

