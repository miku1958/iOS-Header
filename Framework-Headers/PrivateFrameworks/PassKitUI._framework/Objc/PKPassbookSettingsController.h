//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKPaymentDataProviderDelegate-Protocol.h>
#import <PassKitUI/PKPaymentPassTableCellDelegate-Protocol.h>
#import <PassKitUI/PKPaymentServiceDelegate-Protocol.h>

@class NSArray, NSString, PKPaymentPreference, PKPaymentPreferencesViewController, PKPaymentSetupAboutViewController, PSSpecifier;
@protocol PKPassLibraryDataProvider, PKPassbookSettingsDataSource, PKPassbookSettingsDelegate, PKPaymentDataProvider, PKPaymentOptionsProtocol;

@interface PKPassbookSettingsController : NSObject <PKPaymentServiceDelegate, PKPaymentDataProviderDelegate, PKPaymentPassTableCellDelegate>
{
    id<PKPassbookSettingsDataSource> _dataSource;
    id<PKPassLibraryDataProvider> _passLibraryDataProvider;
    id<PKPaymentDataProvider> _paymentDataProvider;
    id<PKPaymentOptionsProtocol> _optionsDelegate;
    long long _context;
    PKPaymentSetupAboutViewController *_privacyController;
    PKPaymentPreferencesViewController *_defaultCardsController;
    PKPaymentPreference *_availableCards;
    PKPaymentPreference *_unavailableCards;
    NSString *_defaultCardIdentifier;
    NSString *_provisioningPassIdentifier;
    NSArray *_passes;
    NSArray *_passSpecifiers;
    NSArray *_companionPasses;
    NSArray *_companionPassSpecifiers;
    NSArray *_lockscreenSwitchSpecifiers;
    NSArray *_handoffSwitchSpecifiers;
    PSSpecifier *_addCardButtonSpecifier;
    PSSpecifier *_cardsGroupSpecifier;
    PSSpecifier *_companionCardsGroupSpecifier;
    PSSpecifier *_defaultPaymentSpecifier;
    PSSpecifier *_defaultShippingAddressSpecifier;
    PSSpecifier *_defaultContactEmailSpecifier;
    PSSpecifier *_defaultContactPhoneSpecifier;
    NSArray *_expressFelicaTransitPasses;
    NSString *_defaultExpressFelicaTransitPassIdentifier;
    PSSpecifier *_defaultExpressFelicaTransitSpecifier;
    id<PKPassbookSettingsDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<PKPassbookSettingsDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addPaymentCard;
- (id)_bridgeSpecifiers;
- (void)_canTransferForPaymentPass:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_companionPassSpecifiers;
- (id)_currentDefaultPaymentPass;
- (id)_defaultContactEmailSpecifier;
- (id)_defaultContactPhoneSpecifier;
- (id)_defaultExpressFelicaTransitPassDescription;
- (id)_defaultExpressFelicaTransitSpecifier;
- (id)_defaultPaymentSpecifier;
- (id)_defaultShippingAddressSpecifier;
- (id)_defaultsGroupSpecifiers;
- (id)_displayableStringForLabeledValue:(id)arg1;
- (void)_finishDefaultExpressFelicaTransitUpdateWithContainer:(id)arg1 preference:(id)arg2;
- (id)_getDefaultContactEmail;
- (id)_getDefaultContactPhone;
- (id)_getDefaultPaymentCard;
- (id)_getDefaultShippingAddress;
- (void)_handleDefaultExpressFelicaTransitPassChangedTo:(id)arg1 withContainer:(id)arg2 preference:(id)arg3;
- (void)_handleDefaultPaymentPassChangedTo:(id)arg1 withSender:(id)arg2 optionsController:(id)arg3 canPrompt:(BOOL)arg4;
- (void)_handleProvisioningError:(id)arg1 viewController:(id)arg2;
- (id)_handoffSwitchGroupSpecifiers;
- (id)_handoffSwitchSettingForSpecifier:(id)arg1;
- (id)_lockscreenSwitchGroupSpecifiers;
- (id)_lockscreenSwitchSettingForSpecifier:(id)arg1;
- (void)_openPrivacyLink;
- (id)_passSpecifiers;
- (int)_paymentPreferencesStyle;
- (long long)_paymentSetupContextForSettingsContext:(long long)arg1;
- (void)_performPhoneToWatchProvisioningForPaymentPass:(id)arg1;
- (void)_presentCannotTransferAlert;
- (void)_presentProvisioningPaymentPassNavController:(id)arg1 paymentPass:(id)arg2;
- (void)_regionConfigurationDidChangeNotification;
- (void)_reloadPassData;
- (void)_requestDelegatePresentViewController:(id)arg1;
- (id)_restrictedModeSpecifier;
- (void)_setCardAddProvisioningButtonEnabled:(BOOL)arg1 forPaymentPass:(id)arg2;
- (void)_setHandoffSwitchSetting:(id)arg1 forSpecifier:(id)arg2;
- (void)_setLockscreenSwitchSetting:(id)arg1 forSpecifier:(id)arg2;
- (id)_settingsSpecifiers;
- (void)_showCardDetails:(id)arg1;
- (void)_showDefaultContactEmailOptions:(id)arg1;
- (void)_showDefaultContactPhoneOptions:(id)arg1;
- (void)_showDefaultPaymentOptions:(id)arg1;
- (void)_showDefaultShippingAddressOptions:(id)arg1;
- (void)_showExpressFelicaTransitOptions:(id)arg1;
- (id)_specifierForPassUniqueID:(id)arg1;
- (id)_transitDefaultsGroupSpecifiers;
- (void)_updateAddButtonSpecifier;
- (void)_updateCardsGroupSpecifier;
- (void)_updateCompanionGroupSpecifier;
- (void)_updateCompanionPassesAddButton;
- (void)_updateDefaultCardsPreferences;
- (void)addButtonPressedForPaymentPass:(id)arg1;
- (void)addCardTapped;
- (void)addCardTappedForPaymentPassWithUniqueID:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2 context:(long long)arg3;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithFelicaPassProperties:(id)arg2;
- (void)refreshDefaultCard;
- (void)refreshExpressFelicaTransitCard;
- (void)refreshPasses;
- (void)removeFooterForSpecifier:(id)arg1;
- (id)specifiers;

@end

