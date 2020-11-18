//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSString;

@protocol SFCredentialProviderExtensionHelperProtocol
- (void)fetchCredentialIdentitiesMatchingDomains:(NSArray *)arg1 completion:(void (^)(SFCredentialProviderExtensionState *, NSArray *))arg2;
- (void)getCredentialProviderExtensionStateWithCompletion:(void (^)(SFCredentialProviderExtensionState *))arg1;
- (void)removeAllCredentialIdentitiesWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)removeCredentialIdentities:(NSArray *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)removeCredentialIdentityStoreForApplication:(NSString *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)replaceCredentialIdentitiesWithIdentities:(NSArray *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)saveCredentialIdentities:(NSArray *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
@end

