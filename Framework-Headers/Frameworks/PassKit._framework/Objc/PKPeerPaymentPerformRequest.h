//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSData, NSDictionary, NSString;

@interface PKPeerPaymentPerformRequest : PKPeerPaymentWebServiceRequest
{
    NSString *_quoteIdentifier;
    NSData *_paymentData;
    NSDictionary *_certificates;
    NSString *_recipientPhoneOrEmail;
    NSString *_pushToken;
    NSData *_signedEnrollmentDataSignature;
}

@property (copy, nonatomic) NSDictionary *certificates; // @synthesize certificates=_certificates;
@property (copy, nonatomic) NSData *paymentData; // @synthesize paymentData=_paymentData;
@property (copy, nonatomic) NSString *pushToken; // @synthesize pushToken=_pushToken;
@property (copy, nonatomic) NSString *quoteIdentifier; // @synthesize quoteIdentifier=_quoteIdentifier;
@property (copy, nonatomic) NSString *recipientPhoneOrEmail; // @synthesize recipientPhoneOrEmail=_recipientPhoneOrEmail;
@property (copy, nonatomic) NSData *signedEnrollmentDataSignature; // @synthesize signedEnrollmentDataSignature=_signedEnrollmentDataSignature;

+ (id)requestWithAuthorizedPeerPaymentQuote:(id)arg1;
- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 account:(id)arg2 deviceIdentifier:(id)arg3 deviceScore:(id)arg4 deviceMetadata:(id)arg5;

@end

