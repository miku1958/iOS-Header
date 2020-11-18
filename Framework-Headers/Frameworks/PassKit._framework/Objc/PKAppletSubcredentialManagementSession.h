//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKDASession.h>

@interface PKAppletSubcredentialManagementSession : PKDASession
{
}

+ (id)createSessionWithDelegate:(id)arg1;
- (void)decryptData:(id)arg1 withCredential:(id)arg2 ephemeralPublicKey:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)immobilizerTokensCountForCredential:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)listCredentialsWithCompletion:(CDUnknownBlockType)arg1;
- (void)listReceivedSharingInvitationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)listSharingInvitationsForKeyIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)removeSharedCredentialsWithIdentifiers:(id)arg1 credential:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)rescindInvitations:(id)arg1 onCredential:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)revokeCredential:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)revokeSharedCredentials:(id)arg1 onCredential:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)signData:(id)arg1 auth:(id)arg2 bundleIdentifier:(id)arg3 nonce:(id)arg4 credential:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)trackSubcredential:(id)arg1 withReceipt:(id)arg2;

@end
