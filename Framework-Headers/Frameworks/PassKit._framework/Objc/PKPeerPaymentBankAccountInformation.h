//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKBankAccountInformation.h>

@interface PKPeerPaymentBankAccountInformation : PKBankAccountInformation
{
}

- (id)_bankAccountInformationInKeychain;
- (id)_wrapperWithType:(unsigned long long)arg1;
- (void)_writeBankAccountInformationToKeychain;
- (void)deleteAllBankInformation;
- (void)deleteAllLocalBankInformation;
- (id)init;
- (void)setAccountNumber:(id)arg1;
- (void)setBankName:(id)arg1;
- (void)setRoutingNumber:(id)arg1;
- (void)updateToLatestKeychainData;

@end

