//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class PKApplePayTrustSignature;
@protocol PKAccountWebServiceApplePayTrustProtocol;

@interface PKAccountWebServiceApplePayTrustRequest : PKAccountWebServiceRequest
{
    id<PKAccountWebServiceApplePayTrustProtocol> _protocol;
    PKApplePayTrustSignature *_signature;
}

@property (strong, nonatomic) PKApplePayTrustSignature *signature; // @synthesize signature=_signature;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)endpointComponents;
- (id)initWithApplePayTrustProtocol:(id)arg1;
- (Class)responseClass;

@end

