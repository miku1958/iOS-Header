//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSHashTable, NSMapTable;
@protocol OS_dispatch_queue;

@interface BKSAnimationFenceObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_handleNameToTraceMap;
    NSMapTable *_handleNameToFenceNameMap;
    NSMapTable *_fenceNameToHandleNamesMap;
    NSMapTable *_fenceNameToDeathSentinelMap;
    NSHashTable *_validDeathSentinelsTable;
    unsigned int _lastHandleName;
    unsigned int _encodeCount;
}

+ (unsigned int)countFromEncodeIdentifier:(unsigned long long)arg1;
+ (int)pidFromEncodeIdentifier:(unsigned long long)arg1;
+ (id)sharedInstance;
- (unsigned long long)addHandle:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (unsigned long long)nextEncodeIdentifier;
- (void)removeHandleWithName:(unsigned long long)arg1;

@end
