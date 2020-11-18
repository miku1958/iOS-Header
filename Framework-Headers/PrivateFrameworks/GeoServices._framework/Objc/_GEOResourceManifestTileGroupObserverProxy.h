//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEOResourceManifestTileGroupObserverProxy : NSObject
{
    NSHashTable *_observers;
    struct os_unfair_lock_s _observersLock;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)description;
- (void)forEachObserver:(CDUnknownBlockType)arg1 finished:(CDUnknownBlockType)arg2;
- (id)init;
- (unsigned long long)observersCount;
- (void)removeObserver:(id)arg1;

@end
