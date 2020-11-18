//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchSchedulerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMBLocalZone, NSNotificationCenter, NSObject, NSString;
@protocol HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler, HMDNetworkRouterFirewallRuleManagerBackingStoreMirror, HMDNetworkRouterFirewallRuleManagerInternal, OS_dispatch_queue;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator : HMFObject <HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchSchedulerDelegate, HMFLogging, HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator>
{
    id<HMDNetworkRouterFirewallRuleManagerInternal> _firewallRuleManager;
    id<HMDNetworkRouterFirewallRuleManagerBackingStoreMirror> _mirror;
    NSNotificationCenter *_notificationCenter;
    id<HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler> _cloudFetchScheduler;
    NSObject<OS_dispatch_queue> *_ownerQueue;
    HMBLocalZone *_mirroredLocalZone;
}

@property (readonly, nonatomic) id<HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler> cloudFetchScheduler; // @synthesize cloudFetchScheduler=_cloudFetchScheduler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) id<HMDNetworkRouterFirewallRuleManagerInternal> firewallRuleManager; // @synthesize firewallRuleManager=_firewallRuleManager;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<HMDNetworkRouterFirewallRuleManagerBackingStoreMirror> mirror; // @synthesize mirror=_mirror;
@property (strong, nonatomic) HMBLocalZone *mirroredLocalZone; // @synthesize mirroredLocalZone=_mirroredLocalZone;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *ownerQueue; // @synthesize ownerQueue=_ownerQueue;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly) Class superclass;

+ (id)__createProcessingOptionsWithLabel:(id)arg1;
+ (id)__createProcessingOptionsWithLabel:(id)arg1 qualityOfService:(long long)arg2;
+ (id)__jsonFromDeclarations:(id)arg1 rawOutput:(BOOL)arg2 error:(id *)arg3;
+ (id)__jsonFromPairedMetadata:(id)arg1 rawOutput:(BOOL)arg2 error:(id *)arg3;
+ (id)__jsonFromRecords:(id)arg1 rawOutput:(BOOL)arg2 error:(id *)arg3;
+ (id)__jsonStringFromDictionary:(id)arg1 rawOutput:(BOOL)arg2 error:(id *)arg3;
+ (id)__jsonValueForCKRecordValue:(id)arg1;
+ (id)__networkDeclarationDataDictionaryFromOverrideObjectDictionary:(id)arg1;
+ (id)__networkDeclarationDataDictionaryFromRecordDictionary:(id)arg1;
+ (id)__networkDeclarationsFromRecord:(id)arg1 recordKey:(id)arg2 identifier:(id)arg3;
+ (id)__pairedMetadataDataDictionaryFromRecordDictionary:(id)arg1;
+ (id)__pairedMetadataDictionaryFromOverrideObjectDictionary:(id)arg1;
+ (id)__pairedMetadataFromRecord:(id)arg1 recordKey:(id)arg2 identifier:(id)arg3;
+ (long long)ckContainerEnvironment;
+ (id)ckContainerIdentifier;
+ (BOOL)ckUseAnonymousAccount;
+ (id)logCategory;
- (void).cxx_destruct;
- (void)__cloudFetchSchedulerFired:(CDUnknownBlockType)arg1;
- (void)__maybeStartOrStopCloudFetchScheduler;
- (void)__startupWithMirror:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)__startupWithMirroredLocalZone:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)__stopCloudFetchScheduler;
- (void)_dumpCloudRecordsForProductGroup:(id)arg1 productNumber:(id)arg2 rawOutput:(BOOL)arg3 verifySignatures:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_fetchAllDataForProductGroup:(id)arg1 productNumber:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)_fetchAllOverridesForProductGroup:(id)arg1 productNumber:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (void)_fetchCloudChangesIfNeededForRecordIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchCloudChangesWithQualityOfService:(long long)arg1 ignoreLastFetchedAccessories:(BOOL)arg2 forceChangeNotifications:(BOOL)arg3 requiredRecordIDs:(id)arg4 schedulerXpcActivity:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)_fetchNetworkDeclarationsForRecordIDs:(id)arg1 options:(id)arg2 ignoreOverrides:(BOOL)arg3 error:(id *)arg4;
- (id)_fetchPairedMetadataForAccessories:(id)arg1 options:(id)arg2 ignoreOverrides:(BOOL)arg3 error:(id *)arg4;
- (void)_listCloudRecordsForProductGroup:(id)arg1 rawOutput:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)addOverrides:(id)arg1 replace:(BOOL)arg2 error:(id *)arg3;
- (void)cloudFetchSchedulerFired:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dumpCloudRecordsForProductGroup:(id)arg1 productNumber:(id)arg2 rawOutput:(BOOL)arg3 listOnly:(BOOL)arg4 verifySignatures:(BOOL)arg5 completion:(CDUnknownBlockType)arg6;
- (id)dumpLocalRulesForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(BOOL)arg4 rawOutput:(BOOL)arg5 error:(id *)arg6;
- (id)dumpPairedMetadataForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(BOOL)arg4 rawOutput:(BOOL)arg5 error:(id *)arg6;
- (void)fetchCloudChangesWithQualityOfService:(long long)arg1 ignoreLastFetchedAccessories:(BOOL)arg2 forceChangeNotifications:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (id)fetchPairedMetadataVersionConfigurationsForAccessories:(id)arg1 qualityOfService:(long long)arg2 ignoreOverrides:(BOOL)arg3 error:(id *)arg4;
- (void)fetchRulesForAccessories:(id)arg1 qualityOfService:(long long)arg2 ignoreOverrides:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)firewallRuleManagerClientsDidChange;
- (id)initWithFirewallRuleManager:(id)arg1 notificationCenter:(id)arg2 cloudFetchInterval:(double)arg3 cloudFetchRetryInterval:(double)arg4 ownerQueue:(id)arg5;
- (id)initWithFirewallRuleManager:(id)arg1 notificationCenter:(id)arg2 cloudFetchScheduler:(id)arg3 ownerQueue:(id)arg4;
- (id)initWithFirewallRuleManager:(id)arg1 notificationCenter:(id)arg2 ownerQueue:(id)arg3;
- (id)pairedMetadataVersionConfigurationForAccessory:(id)arg1 pairedMetadata:(id)arg2;
- (BOOL)removeAllLocalRulesWithError:(id *)arg1;
- (BOOL)removeAllOverridesWithError:(id *)arg1;
- (BOOL)removeOverridesForProductGroup:(id)arg1 productNumber:(id)arg2 error:(id *)arg3;
- (id)ruleConfigurationForAccessory:(id)arg1 declarations:(id)arg2;
- (void)shutdownWithCompletion:(CDUnknownBlockType)arg1;
- (void)startupWithLocalDatabase:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
