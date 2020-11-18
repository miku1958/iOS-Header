//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/BSDescriptionProviding-Protocol.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface RBDomainAttributeTemplate : NSObject <BSDescriptionProviding>
{
    NSString *_domain;
    NSString *_name;
    NSDictionary *_originatorEntitlements;
    NSDictionary *_targetBundleProperties;
    NSString *_endowmentNamespace;
    NSArray *_attributeGroups;
}

@property (strong, nonatomic) NSArray *attributeGroups; // @synthesize attributeGroups=_attributeGroups;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property (copy, nonatomic) NSString *endowmentNamespace; // @synthesize endowmentNamespace=_endowmentNamespace;
@property (readonly, copy, nonatomic) NSString *fullyQualifiedName;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (copy, nonatomic) NSDictionary *originatorEntitlements; // @synthesize originatorEntitlements=_originatorEntitlements;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDictionary *targetBundleProperties; // @synthesize targetBundleProperties=_targetBundleProperties;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
