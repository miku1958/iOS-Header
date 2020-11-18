//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface CNAuthorizationContext : NSObject
{
    NSNumber *_number_isFirstParty;
    BOOL _hasAuditToken;
    Class _entitlementVerifierClass;
    CDStruct_4c969caf _auditToken;
}

@property (readonly, nonatomic) CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
@property (readonly, nonatomic) Class entitlementVerifierClass; // @synthesize entitlementVerifierClass=_entitlementVerifierClass;
@property (readonly, nonatomic) BOOL hasAuditToken; // @synthesize hasAuditToken=_hasAuditToken;
@property (readonly, nonatomic) BOOL isValidatingFirstPartyClient;

- (void).cxx_destruct;
- (struct NSNumber *)_isFirstParty;
- (id)initWithAuditToken:(CDStruct_4c969caf)arg1;
- (id)initWithEntitlementVerifier:(Class)arg1 isFirstParty:(BOOL)arg2;

@end
