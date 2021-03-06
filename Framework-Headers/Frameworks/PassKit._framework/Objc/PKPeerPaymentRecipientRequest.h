//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSString;

@interface PKPeerPaymentRecipientRequest : PKPeerPaymentWebServiceRequest
{
    NSString *_recipientAddress;
    NSString *_senderAddress;
    unsigned long long _recipientAddressSource;
}

@property (copy, nonatomic) NSString *recipientAddress; // @synthesize recipientAddress=_recipientAddress;
@property (nonatomic) unsigned long long recipientAddressSource; // @synthesize recipientAddressSource=_recipientAddressSource;
@property (copy, nonatomic) NSString *senderAddress; // @synthesize senderAddress=_senderAddress;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 deviceIdentifier:(id)arg3;

@end

