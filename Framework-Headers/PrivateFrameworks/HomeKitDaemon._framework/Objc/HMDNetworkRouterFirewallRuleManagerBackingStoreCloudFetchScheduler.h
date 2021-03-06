//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSObject, NSString;
@protocol HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchSchedulerDelegate, OS_xpc_object;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler : HMFObject <HMFLogging, HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler>
{
    BOOL _running;
    NSString *_identifier;
    double _interval;
    double _retryInterval;
    id<HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchSchedulerDelegate> _delegate;
    NSObject<OS_xpc_object> *_runningActivity;
    NSObject<OS_xpc_object> *_overrideCriteria;
    double _currentInterval;
}

@property (readonly, nonatomic) double currentInterval; // @synthesize currentInterval=_currentInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchSchedulerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) double interval; // @synthesize interval=_interval;
@property (strong, nonatomic) NSObject<OS_xpc_object> *overrideCriteria; // @synthesize overrideCriteria=_overrideCriteria;
@property (readonly, nonatomic) double retryInterval; // @synthesize retryInterval=_retryInterval;
@property (nonatomic, getter=isRunning) BOOL running; // @synthesize running=_running;
@property (strong, nonatomic) NSObject<OS_xpc_object> *runningActivity; // @synthesize runningActivity=_runningActivity;
@property (readonly) Class superclass;

+ (void)__unregisterActivity:(id)arg1;
+ (id)logCategory;
- (void).cxx_destruct;
- (void)__checkInActivity:(id)arg1;
- (id)__initialCriteria;
- (void)__registerActivity;
- (void)__runActivity:(id)arg1;
- (void)__transitionActivity:(id)arg1 state:(long long)arg2;
- (void)__unregisterActivity;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 interval:(double)arg2 retryInterval:(double)arg3 delegate:(id)arg4;
- (void)start;
- (void)stop;

@end

