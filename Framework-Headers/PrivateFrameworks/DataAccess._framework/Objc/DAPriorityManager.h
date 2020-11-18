//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor, NSMapTable, NSMutableDictionary;

@interface DAPriorityManager : NSObject
{
    int _currentPriority;
    NSMapTable *_clientsToPriorityRequests;
    BKSApplicationStateMonitor *_appStateMonitor;
    NSMutableDictionary *_cachedAppState;
    long long _foregroundDataclasses;
}

@property (strong, nonatomic) BKSApplicationStateMonitor *appStateMonitor; // @synthesize appStateMonitor=_appStateMonitor;
@property (strong, nonatomic) NSMutableDictionary *cachedAppState; // @synthesize cachedAppState=_cachedAppState;
@property (strong, nonatomic) NSMapTable *clientsToPriorityRequests; // @synthesize clientsToPriorityRequests=_clientsToPriorityRequests;
@property (readonly, nonatomic) int currentPriority; // @synthesize currentPriority=_currentPriority;
@property (nonatomic) long long foregroundDataclasses; // @synthesize foregroundDataclasses=_foregroundDataclasses;

+ (id)sharedManager;
+ (void)vendPriorityManagers;
- (void).cxx_destruct;
- (void)_applicationStateChanged:(id)arg1;
- (int)_recalculatePriority;
- (void)_setForegroundDataclasses:(long long)arg1;
- (void)_setNewPriority;
- (void)_updateForegroundDataclasses;
- (id)appIDsToDataclasses;
- (void)bumpDataclassesToUIPriority:(long long)arg1;
- (void)dealloc;
- (id)init;
- (void)requestPriority:(int)arg1 forClient:(id)arg2 dataclasses:(long long)arg3;
- (id)stateString;

@end

