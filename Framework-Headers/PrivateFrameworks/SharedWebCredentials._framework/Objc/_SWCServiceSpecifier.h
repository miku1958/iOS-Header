//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SharedWebCredentials/NSCopying-Protocol.h>
#import <SharedWebCredentials/NSSecureCoding-Protocol.h>
#import <SharedWebCredentials/SWCRedactedDescription-Protocol.h>

@class NSNumber, NSString, _SWCApplicationIdentifier, _SWCDomain;

@interface _SWCServiceSpecifier : NSObject <SWCRedactedDescription, NSSecureCoding, NSCopying>
{
    _SWCApplicationIdentifier *_applicationIdentifier;
    _SWCDomain *_domain;
    NSString *_serviceType;
}

@property (readonly) _SWCApplicationIdentifier *SWCApplicationIdentifier; // @synthesize SWCApplicationIdentifier=_applicationIdentifier;
@property (readonly) _SWCDomain *SWCDomain; // @synthesize SWCDomain=_domain;
@property (readonly) NSString *applicationIdentifier; // @dynamic applicationIdentifier;
@property (readonly) NSString *applicationIdentifierPrefix;
@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSString *domain; // @dynamic domain;
@property (readonly) NSString *domainHost;
@property (readonly) BOOL domainModeOfOperation;
@property (readonly) NSNumber *domainPort;
@property (readonly, getter=isDomainWildcard) BOOL domainWildcard;
@property (readonly, getter=isFullySpecified) BOOL fullySpecified;
@property (readonly) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property (readonly, getter=isValid) BOOL valid;

+ (id)_serviceSpecifiersWithEntitlementValue:(id)arg1 serviceType:(id)arg2 error:(id *)arg3;
+ (id)serviceSpecifiersWithEntitlementValue:(id)arg1 error:(id *)arg2;
+ (id)serviceSpecifiersWithEntitlementValue:(id)arg1 serviceType:(id)arg2 error:(id *)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_initWithServiceType:(id)arg1 applicationIdentifier:(id)arg2 domain:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (id)description;
- (BOOL)domainEncompassesDomain:(id)arg1;
- (BOOL)domainEncompassesDomainOfServiceSpecifier:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithServiceType:(id)arg1 applicationIdentifier:(id)arg2 domain:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)redactedDescription;

@end

