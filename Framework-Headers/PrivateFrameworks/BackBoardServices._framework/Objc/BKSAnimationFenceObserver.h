//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMapTable;
@protocol OS_dispatch_queue;

@interface BKSAnimationFenceObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_fencePointerToTraceMap;
    NSMapTable *_fencePointerToTriggerPortMap;
    NSMapTable *_fencePointerToCAPortMap;
    NSHashTable *_reportableFencePointers;
    NSMapTable *_triggerPortToFencePointersMap;
    NSMapTable *_triggerPortToDeathWatcherMap;
    NSHashTable *_validDeathWatchersTable;
    unsigned long long _encodeCount;
}

+ (id)sharedInstance;
- (BOOL)addFence:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (unsigned long long)nextEncodeIdentifier;
- (void)removeFencePointer:(void *)arg1;

@end

