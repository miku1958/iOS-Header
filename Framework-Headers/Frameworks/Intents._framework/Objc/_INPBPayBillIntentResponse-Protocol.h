//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class _INPBBillDetailsValue, _INPBDateTimeRange, _INPBFinancialAccountValue, _INPBPaymentAmountValue, _INPBString;

@protocol _INPBPayBillIntentResponse <NSObject>

@property (strong, nonatomic) _INPBBillDetailsValue *billDetails;
@property (strong, nonatomic) _INPBFinancialAccountValue *fromAccount;
@property (readonly, nonatomic) BOOL hasBillDetails;
@property (readonly, nonatomic) BOOL hasFromAccount;
@property (readonly, nonatomic) BOOL hasTransactionAmount;
@property (readonly, nonatomic) BOOL hasTransactionNote;
@property (readonly, nonatomic) BOOL hasTransactionScheduledDate;
@property (strong, nonatomic) _INPBPaymentAmountValue *transactionAmount;
@property (strong, nonatomic) _INPBString *transactionNote;
@property (strong, nonatomic) _INPBDateTimeRange *transactionScheduledDate;

@end

