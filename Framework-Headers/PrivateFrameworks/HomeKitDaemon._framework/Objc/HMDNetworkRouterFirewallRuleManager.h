//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDNetworkRouterFirewallRuleManager-Protocol.h>
#import <HomeKitDaemon/HMDNetworkRouterFirewallRuleManagerDebug-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMFUnfairLock, NSCountedSet, NSMutableArray, NSNotificationCenter, NSObject, NSSet, NSString;
@protocol HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator, HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinatorFactory, OS_dispatch_queue;

@interface HMDNetworkRouterFirewallRuleManager : HMFObject <HMFLogging, HMDNetworkRouterFirewallRuleManager, HMDNetworkRouterFirewallRuleManagerDebug>
{
    id<HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator> _coordinator;
    NSMutableArray *_startupCompletions;
    NSMutableArray *_shutdownCompletions;
    NSCountedSet *_interestedAccessoriesSet;
    unsigned long long _operationsInProgressCount;
    NSNotificationCenter *_notificationCenter;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    id<HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinatorFactory> _coordinatorFactory;
    HMFUnfairLock *_propertyLock;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property (strong, nonatomic) id<HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator> coordinator; // @synthesize coordinator=_coordinator;
@property (readonly, nonatomic) id<HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinatorFactory> coordinatorFactory; // @synthesize coordinatorFactory=_coordinatorFactory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSSet *interestedAccessories;
@property (readonly, nonatomic) NSCountedSet *interestedAccessoriesSet; // @synthesize interestedAccessoriesSet=_interestedAccessoriesSet;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property (nonatomic) unsigned long long operationsInProgressCount; // @synthesize operationsInProgressCount=_operationsInProgressCount;
@property (readonly, nonatomic) HMFUnfairLock *propertyLock; // @synthesize propertyLock=_propertyLock;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (strong, nonatomic) NSMutableArray *shutdownCompletions; // @synthesize shutdownCompletions=_shutdownCompletions;
@property (strong, nonatomic) NSMutableArray *startupCompletions; // @synthesize startupCompletions=_startupCompletions;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (double)_intervalPreferenceForKey:(id)arg1 defaultValue:(double)arg2;
+ (double)defaultCloudFetchInterval;
+ (double)defaultCloudFetchRetryInterval;
+ (id)logCategory;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)__beginOperationWithBlock:(CDUnknownBlockType)arg1;
- (void)__dispatchCompletionsWithError:(id)arg1 isStartup:(BOOL)arg2;
- (void)__dispatchShutdownCompletionsWithError:(id)arg1;
- (void)__dispatchStartupCompletionsWithError:(id)arg1;
- (void)__finishOperationWithCallbackBlock:(CDUnknownBlockType)arg1;
- (void)__operationFinished;
- (void)__operationStarted;
- (void)__shutdown;
- (void)__startup;
- (void)_addOverridesWithData:(id)arg1 replace:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_dumpCloudRecordsForProductGroup:(id)arg1 productNumber:(id)arg2 rawOutput:(BOOL)arg3 listOnly:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_dumpLocalRuleConfigurationsForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(BOOL)arg4 rawOutput:(BOOL)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_fetchCloudChangesIgnoringLastFetchedAccessories:(BOOL)arg1 forceChangeNotifications:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchRulesForAccessories:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_removeOverridesForProductGroup:(id)arg1 productNumber:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_shutdownWithCompletion:(CDUnknownBlockType)arg1;
- (void)_startupWithCompletion:(CDUnknownBlockType)arg1;
- (void)addInterestedAccessories:(id)arg1;
- (void)addOverrides:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)dumpAllLocalRulesIgnoringOverrides:(BOOL)arg1 rawOutput:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dumpCloudRecordsForProductGroup:(id)arg1 productNumber:(id)arg2 rawOutput:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dumpLocalRulesForProductGroup:(id)arg1 ignoreOverrides:(BOOL)arg2 rawOutput:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dumpLocalRulesForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(BOOL)arg4 rawOutput:(BOOL)arg5 completion:(CDUnknownBlockType)arg6;
- (void)fetchCloudChangesWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchRulesForAccessories:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)forceFetchCloudChangesAndForceChangeNotifications:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithNotificationCenter:(id)arg1 workQueue:(id)arg2 coordinatorFactory:(id)arg3;
- (void)listCloudRecordsForProductGroup:(id)arg1 rawOutput:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeAllLocalRulesWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeAllOverridesWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeInterestedAccessories:(id)arg1;
- (void)removeOverridesForProductGroup:(id)arg1 productNumber:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setOverrides:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)shutdownWithCompletion:(CDUnknownBlockType)arg1;
- (void)startupWithCompletion:(CDUnknownBlockType)arg1;

@end
