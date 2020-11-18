//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoard/BSDescriptionProviding-Protocol.h>

@class NSString;

@interface FBServiceClientAuthenticator : NSObject <BSDescriptionProviding>
{
    NSString *_entitlement;
    unsigned long long _credentials;
}

@property (readonly, nonatomic) unsigned long long credentials; // @synthesize credentials=_credentials;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *entitlement; // @synthesize entitlement=_entitlement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_errorForCode:(long long)arg1 process:(id)arg2 failedEntitlement:(id)arg3;
+ (BOOL)authenticateAuditToken:(CDStruct_6ad76789)arg1 forEntitlement:(id)arg2 error:(out id *)arg3;
+ (id)sharedForegroundUIAppClientAuthenticator;
+ (id)sharedSystemClientAuthenticator;
+ (id)sharedUIAppClientAuthenticator;
- (void).cxx_destruct;
- (int)_authenticateProcessHandle:(id)arg1 entitlement:(id)arg2 error:(out id *)arg3 withResult:(CDUnknownBlockType)arg4;
- (BOOL)authenticateAuditToken:(id)arg1;
- (BOOL)authenticateAuditToken:(id)arg1 error:(out id *)arg2;
- (int)authenticateAuditToken:(CDStruct_6ad76789 *)arg1 forEntitlement:(id)arg2 withResult:(CDUnknownBlockType)arg3;
- (int)authenticateAuditToken:(CDStruct_6ad76789 *)arg1 withResult:(CDUnknownBlockType)arg2;
- (BOOL)authenticateClient:(id)arg1;
- (BOOL)authenticateClient:(id)arg1 error:(out id *)arg2;
- (int)authenticateClient:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (id)initWithCredentials:(unsigned long long)arg1;
- (id)initWithEntitlement:(id)arg1;
- (id)initWithEntitlement:(id)arg1 additionalCredentials:(unsigned long long)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

