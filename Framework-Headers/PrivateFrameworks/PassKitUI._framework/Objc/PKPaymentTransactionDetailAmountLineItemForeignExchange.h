//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKPaymentTransactionDetailAmountLineItem-Protocol.h>

@class NSString;

@interface PKPaymentTransactionDetailAmountLineItemForeignExchange : NSObject <PKPaymentTransactionDetailAmountLineItem>
{
    NSString *_label;
    NSString *_value;
    BOOL _hasTrailingLineSeperator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasTrailingLineSeperator; // @synthesize hasTrailingLineSeperator=_hasTrailingLineSeperator;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isEmphasized;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) unsigned long long lineItemType;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *value;

- (void).cxx_destruct;
- (id)initWithForeignExchangeInformation:(id)arg1 type:(unsigned long long)arg2;

@end

