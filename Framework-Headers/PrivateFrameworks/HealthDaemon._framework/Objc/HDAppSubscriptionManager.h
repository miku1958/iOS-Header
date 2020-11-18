//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDatabaseProtectedDataObserver-Protocol.h>

@class HDDaemon, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface HDAppSubscriptionManager : NSObject <HDDatabaseProtectedDataObserver>
{
    BOOL _shouldScheduleLaunches;
    int _backgroundAppRefreshNotifyToken;
    HDDaemon *_healthDaemon;
    NSObject<OS_dispatch_queue> *_launchQueue;
    NSMutableSet *_pendingTypeCodes;
    NSMutableDictionary *_launchTimers;
    NSMutableDictionary *_launchTimerLaunchTimes;
    NSObject<OS_dispatch_queue> *_launchTimerQueue;
}

@property (nonatomic) int backgroundAppRefreshNotifyToken; // @synthesize backgroundAppRefreshNotifyToken=_backgroundAppRefreshNotifyToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) HDDaemon *healthDaemon; // @synthesize healthDaemon=_healthDaemon;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *launchQueue; // @synthesize launchQueue=_launchQueue;
@property (strong, nonatomic) NSMutableDictionary *launchTimerLaunchTimes; // @synthesize launchTimerLaunchTimes=_launchTimerLaunchTimes;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *launchTimerQueue; // @synthesize launchTimerQueue=_launchTimerQueue;
@property (strong, nonatomic) NSMutableDictionary *launchTimers; // @synthesize launchTimers=_launchTimers;
@property (strong, nonatomic) NSMutableSet *pendingTypeCodes; // @synthesize pendingTypeCodes=_pendingTypeCodes;
@property (nonatomic) BOOL shouldScheduleLaunches; // @synthesize shouldScheduleLaunches=_shouldScheduleLaunches;
@property (readonly) Class superclass;

+ (id)defaultManager;
- (void).cxx_destruct;
- (id)_activityNameForSubscription:(id)arg1;
- (void)_launchTimerFired:(id)arg1 code:(id)arg2;
- (void)_queue_ackForBundleID:(id)arg1 dataCode:(long long)arg2 anchor:(id)arg3 ackTime:(id)arg4;
- (void)_queue_launchSubscription:(id)arg1;
- (void)_queue_scheduleLaunchForSubscription:(id)arg1;
- (void)_queue_scheduleLaunches:(long long)arg1;
- (void)_queue_setAnchor:(id)arg1 forDataCode:(long long)arg2;
- (void)_queue_subscribeForBundleID:(id)arg1 dataCode:(long long)arg2 frequencyInSeconds:(unsigned long long)arg3;
- (id)_queue_subscriptionForActivityName:(id)arg1;
- (void)_queue_updateBundleID:(id)arg1 dataCode:(long long)arg2 launchTime:(id)arg3;
- (void)_removeBundleID:(id)arg1;
- (void)_removeLaunchForSubscription:(id)arg1;
- (void)_removeSubscriptionForBundleID:(id)arg1 dataCode:(long long)arg2;
- (void)ackForBundleID:(id)arg1 dataCode:(long long)arg2 anchor:(id)arg3 ackTime:(id)arg4;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithDaemon:(id)arg1;
- (void)removeBundleID:(id)arg1;
- (void)removeSubscriptionForBundleID:(id)arg1 dataCode:(long long)arg2;
- (void)setAnchor:(id)arg1 forDataCode:(long long)arg2;
- (void)subscribeForBundleID:(id)arg1 dataCode:(long long)arg2 frequencyInSeconds:(unsigned long long)arg3;
- (void)updateBundleID:(id)arg1 dataCode:(long long)arg2 launchTime:(id)arg3;

@end

