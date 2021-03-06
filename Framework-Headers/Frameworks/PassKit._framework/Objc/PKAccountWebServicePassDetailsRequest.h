//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSString, NSURL, PKPaymentDeviceMetadata;

@interface PKAccountWebServicePassDetailsRequest : PKAccountWebServiceRequest
{
    NSString *_accountIdentifier;
    NSURL *_baseURL;
    PKPaymentDeviceMetadata *_deviceMetadata;
}

@property (copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property (strong, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property (strong, nonatomic) PKPaymentDeviceMetadata *deviceMetadata; // @synthesize deviceMetadata=_deviceMetadata;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1 deviceIdentifier:(id)arg2;

@end

