//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INTransferMoneyIntentExport-Protocol.h>

@class INDateComponentsRange, INPaymentAccount, INPaymentAmount, NSString;

@interface INTransferMoneyIntent : INIntent <INTransferMoneyIntentExport>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) INPaymentAccount *fromAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) INPaymentAccount *toAccount;
@property (readonly, copy, nonatomic) INPaymentAmount *transactionAmount;
@property (readonly, copy, nonatomic) NSString *transactionNote;
@property (readonly, copy, nonatomic) INDateComponentsRange *transactionScheduledDate;

- (id)_dictionaryRepresentation;
- (BOOL)_isUserConfirmationRequired;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)domain;
- (id)initWithFromAccount:(id)arg1 toAccount:(id)arg2 transactionAmount:(id)arg3 transactionScheduledDate:(id)arg4 transactionNote:(id)arg5;
- (id)parametersByName;
- (void)setDomain:(id)arg1;
- (void)setFromAccount:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setToAccount:(id)arg1;
- (void)setTransactionAmount:(id)arg1;
- (void)setTransactionNote:(id)arg1;
- (void)setTransactionScheduledDate:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end

