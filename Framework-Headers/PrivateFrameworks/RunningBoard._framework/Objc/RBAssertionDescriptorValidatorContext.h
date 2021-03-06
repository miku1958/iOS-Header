//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/NSCopying-Protocol.h>

@class RBAssertionAcquisitionContext, RBAssertionDescriptorValidator, RBConcreteTarget, RBProcess, RBProcessState, RBSAssertionDescriptor, RBSProcessIdentifier, RBSProcessIdentity;
@protocol RBBundleProperties, RBBundlePropertiesManaging, RBDomainAttributeManaging, RBEntitlementManaging, RBEntitlementPossessing;

@interface RBAssertionDescriptorValidatorContext : NSObject <NSCopying>
{
    id<RBBundleProperties> _targetProperties;
    id<RBEntitlementPossessing> _originatorEntitlements;
    id<RBEntitlementPossessing> _targetEntitlements;
    unsigned long long _ignoreRestrictions;
    BOOL _targetIsSystem;
    RBAssertionDescriptorValidator *_assertionDescriptionValidator;
    RBSAssertionDescriptor *_assertionDescriptor;
    RBProcess *_originatorProcess;
    RBProcessState *_originatorState;
    RBConcreteTarget *_target;
    RBProcess *_targetProcess;
    RBSProcessIdentity *_targetIdentity;
    RBSProcessIdentifier *_targetIdentifier;
    RBProcessState *_targetState;
    RBAssertionAcquisitionContext *_acquisitionContext;
    id<RBEntitlementManaging> _entitlementManager;
    id<RBBundlePropertiesManaging> _bundlePropertiesManager;
    id<RBDomainAttributeManaging> _domainAttributeManager;
}

@property (strong, nonatomic) RBAssertionAcquisitionContext *acquisitionContext; // @synthesize acquisitionContext=_acquisitionContext;
@property (strong, nonatomic) RBAssertionDescriptorValidator *assertionDescriptionValidator; // @synthesize assertionDescriptionValidator=_assertionDescriptionValidator;
@property (strong, nonatomic) RBSAssertionDescriptor *assertionDescriptor; // @synthesize assertionDescriptor=_assertionDescriptor;
@property (strong, nonatomic) id<RBBundlePropertiesManaging> bundlePropertiesManager; // @synthesize bundlePropertiesManager=_bundlePropertiesManager;
@property (strong, nonatomic) id<RBDomainAttributeManaging> domainAttributeManager; // @synthesize domainAttributeManager=_domainAttributeManager;
@property (strong, nonatomic) id<RBEntitlementManaging> entitlementManager; // @synthesize entitlementManager=_entitlementManager;
@property (readonly, nonatomic) BOOL ignoreRestrictions;
@property (readonly, nonatomic) id<RBEntitlementPossessing> originatorEntitlements;
@property (readonly, nonatomic) RBSProcessIdentity *originatorIdentity;
@property (strong, nonatomic) RBProcess *originatorProcess; // @synthesize originatorProcess=_originatorProcess;
@property (strong, nonatomic) RBProcessState *originatorState; // @synthesize originatorState=_originatorState;
@property (strong, nonatomic) RBConcreteTarget *target; // @synthesize target=_target;
@property (readonly, nonatomic) id<RBEntitlementPossessing> targetEntitlements;
@property (strong, nonatomic) RBSProcessIdentifier *targetIdentifier; // @synthesize targetIdentifier=_targetIdentifier;
@property (strong, nonatomic) RBSProcessIdentity *targetIdentity; // @synthesize targetIdentity=_targetIdentity;
@property (readonly, nonatomic) BOOL targetIsSystem; // @synthesize targetIsSystem=_targetIsSystem;
@property (strong, nonatomic) RBProcess *targetProcess; // @synthesize targetProcess=_targetProcess;
@property (readonly, nonatomic) id<RBBundleProperties> targetProperties;
@property (strong, nonatomic) RBProcessState *targetState; // @synthesize targetState=_targetState;

+ (id)context;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)popIgnoreRestrictions;
- (void)pushIgnoreRestrictions;

@end

