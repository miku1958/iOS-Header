//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKOverlayableWebServiceRequest.h>

@protocol PKPeerPaymentWebServiceTargetDeviceProtocol;

@interface PKPeerPaymentWebServiceRequest : PKOverlayableWebServiceRequest
{
    id<PKPeerPaymentWebServiceTargetDeviceProtocol> _targetDevice;
}

@property (strong, nonatomic) id<PKPeerPaymentWebServiceTargetDeviceProtocol> targetDevice; // @synthesize targetDevice=_targetDevice;

- (void).cxx_destruct;
- (id)_murlRequestWithServiceURL:(id)arg1 endpointComponents:(id)arg2 queryParameters:(id)arg3 account:(id)arg4;
- (id)_murlRequestWithURL:(id)arg1;
- (id)_urlRequestWithServiceURL:(id)arg1 account:(id)arg2;
- (id)_urlRequestWithServiceURL:(id)arg1 account:(id)arg2 deviceIdentifier:(id)arg3;
- (id)_urlRequestWithServiceURL:(id)arg1 account:(id)arg2 deviceIdentifier:(id)arg3 deviceScore:(id)arg4;

@end

