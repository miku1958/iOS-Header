//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSData, NSDecimalNumber, NSString;

@interface PKPaymentPrepareTransactionDetailsResponse : PKPaymentWebServiceResponse
{
    NSDecimalNumber *_amount;
    NSString *_secureElementIdentifier;
    NSData *_instructions;
    NSData *_signature;
}

@property (readonly, nonatomic) NSDecimalNumber *amount; // @synthesize amount=_amount;
@property (readonly, nonatomic) NSData *instructions; // @synthesize instructions=_instructions;
@property (readonly, nonatomic) NSString *secureElementIdentifier; // @synthesize secureElementIdentifier=_secureElementIdentifier;
@property (readonly, nonatomic) NSData *signature; // @synthesize signature=_signature;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end

