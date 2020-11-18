//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentCredential.h>

@class NSString, PKPaymentPass;

@interface PKPaymentLocalPassCredential : PKPaymentCredential
{
    NSString *_serialNumber;
    NSString *_passTypeIdentifier;
    PKPaymentPass *_paymentPass;
}

@property (copy, nonatomic) NSString *passTypeIdentifier; // @synthesize passTypeIdentifier=_passTypeIdentifier;
@property (readonly, copy, nonatomic) PKPaymentPass *paymentPass; // @synthesize paymentPass=_paymentPass;
@property (copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;

- (void).cxx_destruct;
- (BOOL)_isEqualToCredential:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithPaymentPass:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

