//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor, NSCountedSet, NSMutableArray, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface SFProcessDictionary : NSObject
{
    NSMutableDictionary *_pidToBundleIdentifierMap;
    NSMutableSet *_pidsPendingTermination;
    NSMutableArray *_recentlyReferencedPIDs;
    NSCountedSet *_references;
    BKSApplicationStateMonitor *_stateMonitor;
    NSMutableDictionary *_values;
    unsigned long long _cacheCapacity;
}

@property (readonly, nonatomic) unsigned long long cacheCapacity; // @synthesize cacheCapacity=_cacheCapacity;

- (void).cxx_destruct;
- (void)_handleApplicationStateUpdate:(id)arg1;
- (void)_handleProcessTermination:(int)arg1;
- (void)_removeUnreferencedObjectsIfNeeded;
- (void)_removeValueForPID:(id)arg1;
- (void)_updateInterestedApplications;
- (void)dealloc;
- (void)decrementReferenceForPID:(int)arg1;
- (id)incrementReferenceForPID:(int)arg1 bundleIdentifier:(id)arg2 valueCreationBlock:(CDUnknownBlockType)arg3;
- (id)init;
- (id)initWithCacheCapacity:(unsigned long long)arg1;

@end

