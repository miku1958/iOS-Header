//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SFCredentialProviderExtensionHelperProxy;

@interface ASCredentialIdentityStore : NSObject
{
    SFCredentialProviderExtensionHelperProxy *_helperProxy;
}

+ (id)sharedStore;
- (void).cxx_destruct;
- (id)_initCredentialIdentityStore;
- (void)getCredentialIdentityStoreStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeAllCredentialIdentitiesWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeCredentialIdentities:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)replaceCredentialIdentitiesWithIdentities:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveCredentialIdentities:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

