//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMFMessageDestination, HMHomeManager;

@interface HMNetworkRouterFirewallRuleManager : NSObject
{
    HMHomeManager *_homeManager;
    HMFMessageDestination *_messageDestination;
}

@property (readonly, weak, nonatomic) HMHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property (readonly, nonatomic) HMFMessageDestination *messageDestination; // @synthesize messageDestination=_messageDestination;

- (void).cxx_destruct;
- (void)__sendMessage:(id)arg1;
- (void)_addOverrides:(id)arg1 replace:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_dumpCloudRecordsForProductGroup:(id)arg1 productNumber:(id)arg2 rawOutput:(BOOL)arg3 listOnly:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_dumpLocalRulesForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(BOOL)arg4 rawOutput:(BOOL)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_fetchCloudChangesWithForceChangesFound:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_removeOverridesForProductGroup:(id)arg1 productNumber:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addOverrides:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dumpAllLocalRulesIgnoringOverrides:(BOOL)arg1 rawOutput:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dumpCloudRecordsForProductGroup:(id)arg1 productNumber:(id)arg2 rawOutput:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dumpLocalRulesForProductGroup:(id)arg1 ignoreOverrides:(BOOL)arg2 rawOutput:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dumpLocalRulesForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(BOOL)arg4 rawOutput:(BOOL)arg5 completion:(CDUnknownBlockType)arg6;
- (void)fetchCloudChangesAndForceChangesFoundWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchCloudChangesWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithHomeManager:(id)arg1;
- (void)listCloudRecordsForProductGroup:(id)arg1 rawOutput:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeAllLocalRulesWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeAllOverridesWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeOverridesForProductGroup:(id)arg1 productNumber:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setOverrides:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
