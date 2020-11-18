//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SFCredentialStore;

@interface _SFKeychainManager : NSObject
{
    id _keychainManagerInternal;
}

@property (readonly) SFCredentialStore *credentialStore;

+ (id)defaultManager;
- (void).cxx_destruct;
- (struct __CFDictionary *)_certificateAttributesForIdentityIdentifier:(id)arg1 accessPolicy:(id)arg2;
- (struct __CFDictionary *)_commonKeyAttributesForIdentityIdentifier:(id)arg1 accessPolicy:(id)arg2 key:(id)arg3;
- (id)_init;
- (struct __CFDictionary *)_privateKeyAttributesForIdentityIdentifier:(id)arg1 accessPolicy:(id)arg2 key:(id)arg3;
- (struct __CFDictionary *)_publicKeyAttributesForIdentityIdentifier:(id)arg1 accessPolicy:(id)arg2 key:(id)arg3;
- (id)_symmetricKeyAttributesForIdentifier:(id)arg1 accessPolicy:(id)arg2 key:(id)arg3;
- (void)dataForIdentifier:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)identitiesFilteredBy:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)identityForIdentifier:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)keyForIdentifier:(id)arg1 specifier:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)keysFilteredBy:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)removeItemWithIdentifier:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)setData:(id)arg1 forIdentifier:(id)arg2 accessPolicy:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (void)setIdentity:(id)arg1 forIdentifier:(id)arg2 accessPolicy:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (void)setKey:(id)arg1 forIdentifier:(id)arg2 accessPolicy:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;

@end
