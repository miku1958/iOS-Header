//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSData, NSString, PKPaymentPass;

@interface PKPaymentSubmitVerificationRequest : PKPaymentWebServiceRequest
{
    PKPaymentPass *_pass;
    NSString *_verificationCode;
    NSData *_verificationData;
}

@property (strong, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
@property (copy, nonatomic) NSString *verificationCode; // @synthesize verificationCode=_verificationCode;
@property (copy, nonatomic) NSData *verificationData; // @synthesize verificationData=_verificationData;

- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 account:(id)arg3;
- (void)dealloc;

@end

