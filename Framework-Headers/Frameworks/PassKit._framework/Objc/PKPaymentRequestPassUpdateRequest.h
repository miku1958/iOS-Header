//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKPassUpgradeRequest, PKPaymentPass;

@interface PKPaymentRequestPassUpdateRequest : PKPaymentWebServiceRequest
{
    PKPaymentPass *_pass;
    PKPassUpgradeRequest *_request;
}

@property (readonly, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
@property (readonly, nonatomic) PKPassUpgradeRequest *request; // @synthesize request=_request;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;
- (id)initWithPaymentPass:(id)arg1 updateRequest:(id)arg2;

@end
