//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKPaymentValidating-Protocol.h>

@class CNContact, NSArray, NSDecimalNumber, NSMapTable, NSMutableArray, NSMutableDictionary, NSSet, NSString, PKPassLibrary, PKPaymentApplication, PKPaymentOptionsDefaults, PKPaymentOptionsRecents, PKPaymentPass, PKPaymentRequest, PKPaymentTransaction, PKRemoteDevice, PKRemotePaymentInstrument, PKShippingMethod;

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
    BOOL _shippingEditable;
    PKPaymentPass *_pass;
    PKRemoteDevice *_remoteDevice;
    long long _mode;
    PKPaymentRequest *_paymentRequest;
    NSString *_hostAppLocalizedName;
    NSString *_hostApplicationIdentifier;
    CNContact *_shippingEmail;
    CNContact *_shippingPhone;
    CNContact *_shippingName;
    CNContact *_shippingAddress;
    PKShippingMethod *_shippingMethod;
    NSString *_shippingType;
    NSString *_shippingEditableMessage;
    CNContact *_billingAddress;
    PKPaymentOptionsDefaults *_defaults;
    PKPaymentOptionsRecents *_recents;
    PKPassLibrary *_library;
    PKPaymentTransaction *_pendingTransaction;
    CDUnknownBlockType _updateHandler;
    PKPaymentApplication *_paymentApplication;
    PKRemotePaymentInstrument *_remotePaymentInstrument;
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
@property (strong, nonatomic) CNContact *cachedRecentAddress; // @synthesize cachedRecentAddress=_cachedRecentAddress;
@property (readonly, nonatomic) NSString *currencyCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *defaultPaymentPassUniqueIdentifier;
@property (strong, nonatomic) PKPaymentOptionsDefaults *defaults; // @synthesize defaults=_defaults;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *hostAppLocalizedName; // @synthesize hostAppLocalizedName=_hostAppLocalizedName;
@property (strong, nonatomic) NSString *hostApplicationIdentifier; // @synthesize hostApplicationIdentifier=_hostApplicationIdentifier;
@property (readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property (strong, nonatomic) PKPassLibrary *library; // @synthesize library=_library;
@property (readonly, nonatomic) NSString *merchantName;
@property (readonly, nonatomic) long long mode; // @synthesize mode=_mode;
@property (strong, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
@property (strong, nonatomic) PKPaymentApplication *paymentApplication; // @synthesize paymentApplication=_paymentApplication;
@property (strong, nonatomic) PKPaymentRequest *paymentRequest; // @synthesize paymentRequest=_paymentRequest;
@property (strong, nonatomic) NSArray *paymentSummaryItems;
@property (strong, nonatomic) PKPaymentTransaction *pendingTransaction; // @synthesize pendingTransaction=_pendingTransaction;
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
@property (readonly, nonatomic) NSDecimalNumber *transactionAmount;
@property (readonly, nonatomic) NSArray *unavailablePasses;
@property (copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;

- (void).cxx_destruct;
- (void)_ensureItemForClass:(Class)arg1;
- (void)_ensureItems;
- (void)_ensurePlaceholderItems;
- (id)_filterPaymentPassesUsingConfiguration:(id)arg1;
- (id)_inAppPaymentPassesForNetworks:(id)arg1 capabilities:(unsigned long long)arg2;
- (id)_inAppPrivateLabelPaymentPasses;
- (void)_notifyModelChanged;
- (void)_setDataItem:(id)arg1;
- (void)_setStatus:(long long)arg1 forPass:(id)arg2;
- (id)_simulatorPasses;
- (long long)_statusForPass:(id)arg1;
- (id)acceptedRemotePaymentInstrumentsForRemoteDevice:(id)arg1;
- (id)automaticallyPresentedPass;
- (void)beginUpdates;
- (void)dealloc;
- (void)endUpdates;
- (id)init;
- (id)initWithMode:(long long)arg1;
- (BOOL)isValidWithError:(id *)arg1;
- (id)itemForType:(long long)arg1;
- (void)setStatus:(long long)arg1 forItemWithType:(long long)arg2;
- (void)setStatus:(long long)arg1 forItemWithType:(long long)arg2 notify:(BOOL)arg3;
- (void)updateRemoteDevices:(id)arg1;
- (void)updateRemoteDevices:(id)arg1 ignoreProximity:(BOOL)arg2;

@end
