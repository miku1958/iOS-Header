//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Accounts/ACAccount.h>

@class CKDBackingFakeAccount;

__attribute__((visibility("hidden")))
@interface CKCredentialInterceptingAccount : ACAccount
{
    CKDBackingFakeAccount *_backingFakeAccount;
}

@property (weak, nonatomic) CKDBackingFakeAccount *backingFakeAccount; // @synthesize backingFakeAccount=_backingFakeAccount;

- (void).cxx_destruct;
- (BOOL)aa_updateTokensWithProvisioningResponse:(id)arg1;

@end

