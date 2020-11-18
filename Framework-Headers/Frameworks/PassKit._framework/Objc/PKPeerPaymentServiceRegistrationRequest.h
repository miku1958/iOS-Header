//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSString, PKPeerPaymentDeviceRegistrationData;

@interface PKPeerPaymentServiceRegistrationRequest : PKPeerPaymentWebServiceRequest
{
    NSString *_pushToken;
    PKPeerPaymentDeviceRegistrationData *_deviceData;
}

@property (strong, nonatomic) PKPeerPaymentDeviceRegistrationData *deviceData; // @synthesize deviceData=_deviceData;
@property (copy, nonatomic) NSString *pushToken; // @synthesize pushToken=_pushToken;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 account:(id)arg2 deviceIdentifier:(id)arg3 deviceScore:(id)arg4;

@end

