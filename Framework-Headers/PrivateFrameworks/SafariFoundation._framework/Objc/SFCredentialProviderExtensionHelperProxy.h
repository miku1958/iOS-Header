//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariFoundation/SFCredentialProviderExtensionHelperProtocol-Protocol.h>

@class NSXPCConnection;

@interface SFCredentialProviderExtensionHelperProxy : NSObject <SFCredentialProviderExtensionHelperProtocol>
{
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
- (id)_proxyObject;
- (void)dealloc;
- (void)fetchCredentialIdentitiesMatchingDomains:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getCredentialProviderExtensionStateWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (void)invalidate;
- (void)removeAllCredentialIdentitiesWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeCredentialIdentities:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeCredentialIdentityStoreForApplication:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)replaceCredentialIdentitiesWithIdentities:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveCredentialIdentities:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
