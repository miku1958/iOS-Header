//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentDataItem.h>

@class CNContact, PKPaymentApplication, PKRemoteDevice, PKRemotePaymentInstrument;

@interface PKPaymentRemotePaymentInstrumentDataItem : PKPaymentDataItem
{
}

@property (readonly, nonatomic) CNContact *billingAddress;
@property (readonly, nonatomic) PKPaymentApplication *paymentApplication;
@property (readonly, nonatomic) PKRemoteDevice *remoteDevice;
@property (readonly, nonatomic) PKRemotePaymentInstrument *remotePaymentInstrument;
@property (readonly, nonatomic) BOOL requiresBillingAddress;

+ (long long)dataType;
- (id)errors;
- (BOOL)hasAssociatedPeerPaymentAccount;
- (BOOL)isValidWithError:(id *)arg1;
- (id)peerPaymentAccountBalance;
- (unsigned long long)peerPaymentAccountState;

@end

