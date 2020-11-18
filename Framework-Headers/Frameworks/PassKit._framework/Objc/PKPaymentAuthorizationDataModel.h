//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKPaymentValidating-Protocol.h>

@class CNContact, NSArray, NSDecimalNumber, NSMapTable, NSMutableArray, NSMutableDictionary, NSSet, NSString, PKDisbursementApplicationInformation, PKPassLibrary, PKPayment, PKPaymentApplication, PKPaymentInstructions, PKPaymentOptionsDefaults, PKPaymentOptionsRecents, PKPaymentPass, PKPaymentRequest, PKPaymentWebService, PKPeerPaymentQuote, PKPeerPaymentService, PKRemoteDevice, PKRemotePaymentInstrument, PKShippingMethod;

@interface PKPaymentAuthorizationDataModel : NSObject <PKPaymentValidating>
{
    NSMutableArray *_items;
    NSMutableDictionary *_typeToItemMap;
    unsigned long long _holdPendingUpdatesCount;
    BOOL _ignoreProximity;
    NSArray *_acceptedPasses;
    NSArray *_unavailablePasses;
    NSMapTable *_instrumentToDeviceMap;
    NSMutableDictionary *_remoteDeviceToAcceptedInstruments;
    NSArray *_allRemoteDevices;
    NSMutableDictionary *_statusForPass;
    NSMutableDictionary *_acceptedApplications;
    NSString *_paymentApplicationIdentifierForErrors;
    NSArray *_clientErrors;
    BOOL _shippingEditable;
    PKPaymentPass *_pass;
    PKRemoteDevice *_remoteDevice;
    long long _mode;
    PKPaymentRequest *_paymentRequest;
    NSArray *_paymentContentItems;
    NSString *_hostAppLocalizedName;
    NSString *_hostApplicationIdentifier;
    NSString *_bundleIdentifier;
    NSString *_teamIdentifier;
    CNContact *_shippingEmail;
    CNContact *_shippingPhone;
    CNContact *_shippingName;
    CNContact *_shippingAddress;
    PKShippingMethod *_shippingMethod;
    NSString *_shippingType;
    NSString *_shippingEditableMessage;
    CNContact *_billingAddress;
    NSArray *_paymentErrors;
    PKPayment *_payment;
    PKPaymentOptionsDefaults *_defaults;
    PKPaymentOptionsRecents *_recents;
    PKPassLibrary *_library;
    PKPaymentWebService *_paymentWebService;
    PKPeerPaymentService *_peerPaymentService;
    PKPaymentPass *_peerPaymentPass;
    NSArray *_pendingTransactions;
    CDUnknownBlockType _updateHandler;
    PKPeerPaymentQuote *_peerPaymentQuote;
    PKDisbursementApplicationInformation *_disbursementApplicationInformation;
    PKPaymentApplication *_paymentApplication;
    PKPaymentInstructions *_instructions;
    PKRemotePaymentInstrument *_remotePaymentInstrument;
    PKRemotePaymentInstrument *_initialRemotePaymentInstrument;
    NSSet *_allAcceptedRemotePaymentInstruments;
    NSSet *_allUnavailableRemotePaymentInstruments;
    CNContact *_cachedRecentAddress;
}

@property (readonly, nonatomic) NSArray *acceptedPasses;
@property (readonly, nonatomic) NSSet *allAcceptedRemotePaymentInstruments; // @synthesize allAcceptedRemotePaymentInstruments=_allAcceptedRemotePaymentInstruments;
@property (readonly, nonatomic) NSArray *allNearbyRemoteDevices;
@property (readonly, nonatomic) NSArray *allRemoteDevices; // @synthesize allRemoteDevices=_allRemoteDevices;
@property (readonly, nonatomic) NSSet *allUnavailableRemotePaymentInstruments; // @synthesize allUnavailableRemotePaymentInstruments=_allUnavailableRemotePaymentInstruments;
@property (strong, nonatomic) CNContact *billingAddress; // @synthesize billingAddress=_billingAddress;
@property (strong, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (strong, nonatomic) CNContact *cachedRecentAddress; // @synthesize cachedRecentAddress=_cachedRecentAddress;
@property (readonly, nonatomic) NSString *currencyCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *defaultPaymentPassUniqueIdentifier;
@property (strong, nonatomic) PKPaymentOptionsDefaults *defaults; // @synthesize defaults=_defaults;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) PKDisbursementApplicationInformation *disbursementApplicationInformation; // @synthesize disbursementApplicationInformation=_disbursementApplicationInformation;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *hostAppLocalizedName; // @synthesize hostAppLocalizedName=_hostAppLocalizedName;
@property (strong, nonatomic) NSString *hostApplicationIdentifier; // @synthesize hostApplicationIdentifier=_hostApplicationIdentifier;
@property (strong, nonatomic) PKRemotePaymentInstrument *initialRemotePaymentInstrument; // @synthesize initialRemotePaymentInstrument=_initialRemotePaymentInstrument;
@property (strong, nonatomic) PKPaymentInstructions *instructions; // @synthesize instructions=_instructions;
@property (readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property (strong, nonatomic) PKPassLibrary *library; // @synthesize library=_library;
@property (readonly, nonatomic) NSString *merchantName;
@property (readonly, nonatomic) long long mode; // @synthesize mode=_mode;
@property (strong, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
@property (strong, nonatomic) PKPayment *payment; // @synthesize payment=_payment;
@property (strong, nonatomic) PKPaymentApplication *paymentApplication; // @synthesize paymentApplication=_paymentApplication;
@property (strong, nonatomic) NSArray *paymentContentItems; // @synthesize paymentContentItems=_paymentContentItems;
@property (strong, nonatomic) NSArray *paymentErrors; // @synthesize paymentErrors=_paymentErrors;
@property (strong, nonatomic) PKPaymentRequest *paymentRequest; // @synthesize paymentRequest=_paymentRequest;
@property (strong, nonatomic) NSArray *paymentSummaryItems;
@property (strong, nonatomic) PKPaymentWebService *paymentWebService; // @synthesize paymentWebService=_paymentWebService;
@property (strong, nonatomic) PKPaymentPass *peerPaymentPass; // @synthesize peerPaymentPass=_peerPaymentPass;
@property (strong, nonatomic) PKPeerPaymentQuote *peerPaymentQuote; // @synthesize peerPaymentQuote=_peerPaymentQuote;
@property (strong, nonatomic) PKPeerPaymentService *peerPaymentService; // @synthesize peerPaymentService=_peerPaymentService;
@property (strong, nonatomic) NSArray *pendingTransactions; // @synthesize pendingTransactions=_pendingTransactions;
@property (readonly, nonatomic) BOOL pinRequired;
@property (strong, nonatomic) PKPaymentOptionsRecents *recents; // @synthesize recents=_recents;
@property (strong, nonatomic) PKRemoteDevice *remoteDevice; // @synthesize remoteDevice=_remoteDevice;
@property (readonly, nonatomic) NSArray *remoteDevices;
@property (strong, nonatomic) PKRemotePaymentInstrument *remotePaymentInstrument; // @synthesize remotePaymentInstrument=_remotePaymentInstrument;
@property (strong, nonatomic) CNContact *shippingAddress; // @synthesize shippingAddress=_shippingAddress;
@property (nonatomic, getter=isShippingEditable) BOOL shippingEditable; // @synthesize shippingEditable=_shippingEditable;
@property (strong, nonatomic) NSString *shippingEditableMessage; // @synthesize shippingEditableMessage=_shippingEditableMessage;
@property (strong, nonatomic) CNContact *shippingEmail; // @synthesize shippingEmail=_shippingEmail;
@property (strong, nonatomic) PKShippingMethod *shippingMethod; // @synthesize shippingMethod=_shippingMethod;
@property (strong, nonatomic) CNContact *shippingName; // @synthesize shippingName=_shippingName;
@property (strong, nonatomic) CNContact *shippingPhone; // @synthesize shippingPhone=_shippingPhone;
@property (strong, nonatomic) NSString *shippingType; // @synthesize shippingType=_shippingType;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSString *teamIdentifier; // @synthesize teamIdentifier=_teamIdentifier;
@property (readonly, nonatomic) NSDecimalNumber *transactionAmount;
@property (readonly, nonatomic) NSArray *unavailablePasses;
@property (copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
@property (readonly, nonatomic) BOOL wantsInstructions;

- (void).cxx_destruct;
- (id)_defaultSelectedPaymentApplicationForPaymentApplications:(id)arg1;
- (void)_ensureItemForClass:(Class)arg1;
- (void)_ensureItems;
- (void)_ensurePaymentContentItems;
- (void)_ensurePlaceholderItems;
- (id)_filterAndProcessPaymentApplicationsUsingConfiguration:(id)arg1 withPrimaryPaymentApplication:(id)arg2;
- (id)_filterAndProcessPaymentPassesUsingConfiguration:(id)arg1;
- (id)_inAppPaymentPassesForPaymentRequest:(id)arg1;
- (id)_inAppPrivateLabelPaymentPasses;
- (unsigned long long)_insertionIndexForItem:(id)arg1;
- (void)_notifyModelChanged;
- (void)_setDataItem:(id)arg1;
- (void)_setPaymentContentDataItems:(id)arg1;
- (void)_setStatus:(long long)arg1 forPass:(id)arg2;
- (id)_simulatorPasses;
- (long long)_statusForPass:(id)arg1;
- (void)_updatePeerPaymentPromotionAvailability;
- (id)acceptedPaymentApplicationsForPass:(id)arg1;
- (id)acceptedPaymentApplicationsForRemoteInstrument:(id)arg1;
- (id)acceptedRemotePaymentInstrumentsForRemoteDevice:(id)arg1;
- (id)automaticallyPresentedPassFromAcceptedPasses:(id)arg1;
- (void)beginUpdates;
- (id)defaultSelectedPaymentApplicationForPass:(id)arg1;
- (id)defaultSelectedPaymentApplicationForRemoteInstrument:(id)arg1;
- (void)endUpdates;
- (void)fallbackToBypassMode;
- (id)init;
- (id)initWithMode:(long long)arg1;
- (BOOL)isValidWithError:(id *)arg1;
- (id)itemForType:(long long)arg1;
- (id)paymentErrorsFromLegacyStatus:(long long)arg1;
- (void)setPass:(id)arg1 withSelectedPaymentApplication:(id)arg2;
- (void)setPaymentPassWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (void)setRemotePaymentInstrument:(id)arg1 withSelectedPaymentApplication:(id)arg2;
- (void)setShippingAddressErrors:(id)arg1;
- (void)setStatus:(long long)arg1 forItemWithType:(long long)arg2;
- (void)setStatus:(long long)arg1 forItemWithType:(long long)arg2 notify:(BOOL)arg3;
- (BOOL)shouldUpdateContactDataItem;
- (id)unavailablePaymentApplicationsForPass:(id)arg1;
- (id)unavailablePaymentApplicationsForRemoteInstrument:(id)arg1;
- (void)updateBillingErrors;
- (void)updateRemoteDevices:(id)arg1;
- (void)updateRemoteDevices:(id)arg1 ignoreProximity:(BOOL)arg2;

@end

