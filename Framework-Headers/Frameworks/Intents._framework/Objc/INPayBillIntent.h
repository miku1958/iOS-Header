//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INPayBillIntentExport-Protocol.h>

@class INBillPayee, INDateComponentsRange, INPaymentAccount, INPaymentAmount, NSString;

@interface INPayBillIntent : INIntent <INPayBillIntentExport>
{
}

@property (readonly, copy, nonatomic) INBillPayee *billPayee;
@property (readonly, nonatomic) long long billType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) INDateComponentsRange *dueDate;
@property (readonly, copy, nonatomic) INPaymentAccount *fromAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) INPaymentAmount *transactionAmount;
@property (readonly, copy, nonatomic) NSString *transactionNote;
@property (readonly, copy, nonatomic) INDateComponentsRange *transactionScheduledDate;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1;
- (id)_typedBackingStore;
- (id)domain;
- (id)initWithBillPayee:(id)arg1 fromAccount:(id)arg2 transactionAmount:(id)arg3 transactionScheduledDate:(id)arg4 transactionNote:(id)arg5 billType:(long long)arg6 dueDate:(id)arg7;
- (id)parametersByName;
- (void)setBillPayee:(id)arg1;
- (void)setBillType:(long long)arg1;
- (void)setDomain:(id)arg1;
- (void)setDueDate:(id)arg1;
- (void)setFromAccount:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setTransactionAmount:(id)arg1;
- (void)setTransactionNote:(id)arg1;
- (void)setTransactionScheduledDate:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end

