//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMapTable, NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VNTrackerManager : NSObject
{
    NSDictionary *_trackerTypeToClassDictionary;
    NSMapTable *_trackerClassToNameMapTable;
    NSMutableDictionary *_liveTrackerCounter;
    NSObject<OS_dispatch_queue> *_trackingProcessingQueue;
    NSObject<OS_dispatch_queue> *_trackersCollectionManagementQueue;
    NSDictionary *_liveTrackerCounterLimit;
    NSMutableDictionary *_trackers;
}

+ (id)manager;
+ (void)releaseAllTrackers;
+ (void)releaseManager;
- (void).cxx_destruct;
- (id)_createTracker:(id)arg1 type:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)_getTracker:(id)arg1;
- (long long)_maximumTrackersOfType:(id)arg1;
- (id)init;
- (void)releaseTracker:(id)arg1;
- (id)trackerWithOptions:(id)arg1 error:(id *)arg2;

@end

