//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKit/PKPaymentValidating-Protocol.h>

@class CNContact, NSArray, NSDecimalNumber, NSMutableArray, NSMutableDictionary, NSString, PKPassLibrary, PKPaymentApplication, PKPaymentOptionsDefaults, PKPaymentOptionsRecents, PKPaymentPass, PKPaymentRequest, PKPaymentTransaction, PKShippingMethod;

@interface PKPaymentAuthorizationDataModel : NSObject <PKPaymentValidating>
{
    NSMutableArray *_items;
    NSMutableDictionary *_typeToItemMap;
    unsigned long long _holdPendingUpdatesCount;
    NSArray *_acceptedPasses;
    NSArray *_unavailablePasses;
    NSMutableDictionary *_statusForPasses;
    BOOL _shippingEditable;
    PKPaymentRequest *_paymentRequest;
    NSString *_hostAppLocalizedName;
    NSString *_hostApplicationIdentifier;
    PKPaymentPass *_pass;
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
    NSDecimalNumber *_transactionAmount;
    PKPaymentApplication *_paymentApplication;
    CNContact *_cachedRecentAddress;
}

@property (readonly, nonatomic) NSArray *acceptedPasses;
@property (strong, nonatomic) CNContact *billingAddress; // @synthesize billingAddress=_billingAddress;
@property (strong, nonatomic) CNContact *cachedRecentAddress; // @synthesize cachedRecentAddress=_cachedRecentAddress;
@property (readonly, nonatomic) NSString *currencyCode;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) PKPaymentOptionsDefaults *defaults; // @synthesize defaults=_defaults;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *hostAppLocalizedName; // @synthesize hostAppLocalizedName=_hostAppLocalizedName;
@property (strong, nonatomic) NSString *hostApplicationIdentifier; // @synthesize hostApplicationIdentifier=_hostApplicationIdentifier;
@property (readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property (strong, nonatomic) PKPassLibrary *library; // @synthesize library=_library;
@property (readonly, nonatomic) NSString *merchantName;
@property (strong, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
@property (strong, nonatomic) PKPaymentApplication *paymentApplication; // @synthesize paymentApplication=_paymentApplication;
@property (strong, nonatomic) PKPaymentRequest *paymentRequest; // @synthesize paymentRequest=_paymentRequest;
@property (strong, nonatomic) NSArray *paymentSummaryItems;
@property (strong, nonatomic) PKPaymentTransaction *pendingTransaction; // @synthesize pendingTransaction=_pendingTransaction;
@property (readonly, nonatomic) BOOL pinRequired;
@property (strong, nonatomic) PKPaymentOptionsRecents *recents; // @synthesize recents=_recents;
@property (strong, nonatomic) CNContact *shippingAddress; // @synthesize shippingAddress=_shippingAddress;
@property (nonatomic, getter=isShippingEditable) BOOL shippingEditable; // @synthesize shippingEditable=_shippingEditable;
@property (strong, nonatomic) NSString *shippingEditableMessage; // @synthesize shippingEditableMessage=_shippingEditableMessage;
@property (strong, nonatomic) CNContact *shippingEmail; // @synthesize shippingEmail=_shippingEmail;
@property (strong, nonatomic) PKShippingMethod *shippingMethod; // @synthesize shippingMethod=_shippingMethod;
@property (strong, nonatomic) CNContact *shippingName; // @synthesize shippingName=_shippingName;
@property (strong, nonatomic) CNContact *shippingPhone; // @synthesize shippingPhone=_shippingPhone;
@property (strong, nonatomic) NSString *shippingType; // @synthesize shippingType=_shippingType;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSDecimalNumber *transactionAmount; // @synthesize transactionAmount=_transactionAmount;
@property (readonly, nonatomic) NSArray *unavailablePasses;
@property (copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;

- (void)_ensureItemForClass:(Class)arg1;
- (void)_ensureItems;
- (void)_ensurePlaceholderItems;
- (id)_inAppPaymentPassesForNetworks:(id)arg1 capabilities:(unsigned long long)arg2;
- (id)_inAppPrivateLabelPaymentPasses;
- (id)_initialBillingContactForProperty:(id)arg1;
- (id)_initialShippingContactForProperty:(id)arg1;
- (void)_notifyModelChanged;
- (void)_setDataItem:(id)arg1;
- (void)_setStatus:(long long)arg1 forPaymentPass:(id)arg2;
- (id)_simulatorPasses;
- (void)beginUpdates;
- (void)dealloc;
- (void)endUpdates;
- (id)init;
- (BOOL)isValidWithError:(id *)arg1;
- (id)itemForType:(long long)arg1;
- (void)setStatus:(long long)arg1 forItemWithType:(long long)arg2;
- (long long)statusForPass:(id)arg1;

@end

