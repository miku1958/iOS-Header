//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSArray, NSString, UIViewController;
@protocol PKPassLibraryDataProvider, PKPassbookPeerPaymentSettingsDataSource, PKPassbookPeerPaymentSettingsDelegate, PKPaymentDataProvider, PKPaymentOptionsProtocol, PKPaymentSetupDelegate;

@protocol PKPassbookSettingsDataSource <NSObject>
- (BOOL)canRegisterForPeerPayment;
- (BOOL)deviceInRestrictedMode;
- (BOOL)deviceSupportsInAppPayments;
- (id<PKPaymentOptionsProtocol>)optionsDelegate;
- (id<PKPassLibraryDataProvider>)passLibraryDataProvider;
- (id<PKPaymentDataProvider>)paymentDataProvider;
- (id<PKPassbookPeerPaymentSettingsDataSource>)peerPaymentDataSource;
- (id<PKPassbookPeerPaymentSettingsDelegate>)peerPaymentDelegate;
- (NSString *)secureElementID;
- (BOOL)secureElementIsProductionSigned;
- (id<PKPaymentSetupDelegate>)setupDelegate;

@optional
- (NSString *)deviceName;
- (BOOL)hasFelicaSecureElement;
- (void)setDefaultExpressTransitPassIdentifier:(NSString *)arg1 visibleViewController:(UIViewController *)arg2 completion:(void (^)(BOOL, NSString *))arg3;
- (NSArray *)setupBrowsableProductTypesForDevice;
- (NSArray *)setupFeaturedNetworksForDevice;
- (BOOL)supportsCredentialType:(long long)arg1;
@end
