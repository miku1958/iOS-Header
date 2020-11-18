//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface ATXRecentActionEngagementCache : NSObject
{
    NSString *_recentEngagementCachePath;
    NSString *_recentMLEngagementCachePath;
    NSString *_recentHeuristicEngagementCachePath;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_addEngagedActionNoSync:(id)arg1 toCacheAtPath:(id)arg2;
- (void)_addEngagedActionSetNoSync:(id)arg1 toCacheAtPath:(id)arg2;
- (id)_getAllCachedActionsNoSync;
- (id)_recentActionsNoSyncForCacheAtPath:(id)arg1;
- (void)_serializeAndWriteNoSyncActionSet:(id)arg1 toCacheAtPath:(id)arg2;
- (void)addEngagedAction:(id)arg1;
- (void)clearRecentEngagements;
- (void)clearRecentEngagementsFromCacheAtPath:(id)arg1 withExceptionActions:(id)arg2;
- (void)clearRecentHeuristicEngagementsExceptForActions:(id)arg1;
- (void)clearRecentMLEngagementsExceptForActions:(id)arg1;
- (id)exceptionsFoundInCacheAtPath:(id)arg1 forCandidateExceptions:(id)arg2;
- (id)init;
- (id)initWithCacheDirectory:(id)arg1;
- (id)recentActions;

@end

