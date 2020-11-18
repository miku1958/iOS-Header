//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString, PKPaymentPass;

@interface PKPaymentVerificationOptionsRequest : PKPaymentWebServiceRequest
{
    NSString *_stepIdentifier;
    PKPaymentPass *_pass;
}

@property (strong, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
@property (copy, nonatomic) NSString *stepIdentifier; // @synthesize stepIdentifier=_stepIdentifier;

+ (id)requestWithPass:(id)arg1;
- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;

@end

