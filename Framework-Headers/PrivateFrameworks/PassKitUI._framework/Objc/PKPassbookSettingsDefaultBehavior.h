//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKPassbookSettingsDataSource-Protocol.h>

@class NSString, PKPassLibraryDefaultDataProvider, PKPassbookPeerPaymentSettingsDefaultBehavior, PKPaymentDefaultDataProvider, PKPaymentOptionsDefaults;

@interface PKPassbookSettingsDefaultBehavior : NSObject <PKPassbookSettingsDataSource>
{
    PKPassLibraryDefaultDataProvider *_passLibraryDataProvider;
    PKPaymentDefaultDataProvider *_paymentDataProvider;
    PKPaymentOptionsDefaults *_options;
    PKPassbookPeerPaymentSettingsDefaultBehavior *_peerPaymentDefaultBehavior;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)canRegisterForPeerPayment;
- (void)dealloc;
- (BOOL)deviceInRestrictedMode;
- (id)deviceName;
- (BOOL)deviceSupportsInAppPayments;
- (BOOL)hasFelicaSecureElement;
- (id)init;
- (id)optionsDelegate;
- (id)passLibraryDataProvider;
- (id)paymentDataProvider;
- (id)peerPaymentDataSource;
- (id)peerPaymentDelegate;
- (id)secureElementID;
- (BOOL)secureElementIsProductionSigned;
- (id)setupDelegate;
- (BOOL)supportsCredentialType:(long long)arg1;

@end

