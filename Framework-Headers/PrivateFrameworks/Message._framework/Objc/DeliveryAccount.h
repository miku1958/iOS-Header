//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/MFAccount.h>

#import <Message/EDDeliveryAccount-Protocol.h>

@class ACAccount, NSArray, NSString;

@interface DeliveryAccount : MFAccount <EDDeliveryAccount>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *emailAddressStrings;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *hostname;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long maximumMessageBytes;
@property (copy, nonatomic) NSString *password;
@property (readonly, nonatomic) BOOL primaryiCloudAccount;
@property (readonly, copy, nonatomic) NSString *statisticsKind;
@property (readonly) Class superclass;
@property (readonly, nonatomic) ACAccount *systemAccount;

+ (void)_postDeliveryAccountsHaveChanged;
+ (id)accountTypeIdentifier;
+ (id)accountWithHostname:(id)arg1 username:(id)arg2;
+ (id)accountWithHostname:(id)arg1 username:(id)arg2 lookForExistingAccounts:(BOOL)arg3;
+ (id)accountWithIdentifier:(id)arg1;
+ (id)accountWithUniqueId:(id)arg1;
+ (void)addDeliveryAccount:(id)arg1;
+ (id)carrierDeliveryAccount;
+ (id)deliveryAccounts;
+ (id)existingAccountForUniqueID:(id)arg1;
+ (id)existingAccountWithHostname:(id)arg1 username:(id)arg2;
+ (id)existingAccountWithIdentifier:(id)arg1;
+ (id)newDefaultInstance;
+ (void)reloadDeliveryAccounts;
+ (void)removeDeliveryAccount:(id)arg1;
- (void)_setAccountProperties:(id)arg1;
- (void)_updateAccountDescriptionWithUsername:(id)arg1 hostname:(id)arg2;
- (BOOL)canBeFallbackAccount;
- (Class)deliveryClass;
- (id)displayHostname;
- (BOOL)hasEnoughInformationForEasySetup;
- (BOOL)hasNoReferences;
- (id)mailAccountIfAvailable;
- (id)newDeliveryWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4;
- (id)newDeliveryWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3;
- (id)newDeliveryWithMessage:(id)arg1;
- (void)setMaximumMessageBytes:(unsigned long long)arg1;
- (void)setShouldUseAuthentication:(BOOL)arg1;
- (void)setUsername:(id)arg1;
- (BOOL)shouldUseAuthentication;
- (BOOL)shouldUseSaveSentForAccount:(id)arg1;
- (BOOL)supportsOutboxCopy;

@end

