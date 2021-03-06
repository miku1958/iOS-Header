//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RemoteManagement/RMExtensionConfigurationSubscriberRequestHandling-Protocol.h>

@class NSArray, NSConditionLock, NSString, RMAssetResolver, RMConfigurationSubscriberClient, RMPolicyStore;
@protocol RMExtensionConfigurationApplicator;

@interface RMExtensionConfigurationSubscriber : NSObject <RMExtensionConfigurationSubscriberRequestHandling>
{
    NSConditionLock *_configurationSubscriberClientLock;
    RMConfigurationSubscriberClient *_configurationSubscriberClient;
    RMAssetResolver *_assetResolver;
    RMPolicyStore *_policyStore;
    id<RMExtensionConfigurationApplicator> _applicator;
    NSArray *_configurationTypes;
}

@property (readonly, nonatomic) id<RMExtensionConfigurationApplicator> applicator; // @synthesize applicator=_applicator;
@property (strong, nonatomic) RMAssetResolver *assetResolver; // @synthesize assetResolver=_assetResolver;
@property (strong, nonatomic) RMConfigurationSubscriberClient *configurationSubscriberClient; // @synthesize configurationSubscriberClient=_configurationSubscriberClient;
@property (readonly, nonatomic) NSArray *configurationTypes; // @synthesize configurationTypes=_configurationTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) RMPolicyStore *policyStore; // @synthesize policyStore=_policyStore;
@property (readonly) Class superclass;

+ (id)sharedSubscriber;
- (void).cxx_destruct;
- (void)fetchThenApplyConfigurationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithConfigurationSubscriberClient:(id)arg1 assetResolver:(id)arg2 policyStore:(id)arg3 applicator:(id)arg4 configurationTypes:(id)arg5;

@end

