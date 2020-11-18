//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSString, NSURL, PKContact, PKPaymentMerchantSession;

@interface PKPaymentRequest : NSObject <NSSecureCoding>
{
    BOOL _expectsMerchantSession;
    BOOL _shippingEditable;
    BOOL _requiresAddressPrecision;
    NSString *_merchantIdentifier;
    NSString *_countryCode;
    NSArray *_supportedNetworks;
    unsigned long long _merchantCapabilities;
    NSArray *_paymentSummaryItems;
    NSString *_currencyCode;
    unsigned long long _requiredBillingAddressFields;
    PKContact *_billingContact;
    const void *_billingAddress;
    unsigned long long _requiredShippingAddressFields;
    PKContact *_shippingContact;
    const void *_shippingAddress;
    NSArray *_shippingMethods;
    unsigned long long _shippingType;
    NSData *_applicationData;
    NSArray *_thumbnailURLs;
    NSURL *_originatingURL;
    NSString *_shippingEditableMessage;
    PKPaymentMerchantSession *_merchantSession;
}

@property (copy, nonatomic) NSData *applicationData; // @synthesize applicationData=_applicationData;
@property (nonatomic) const void *billingAddress; // @synthesize billingAddress=_billingAddress;
@property (strong, nonatomic) PKContact *billingContact; // @synthesize billingContact=_billingContact;
@property (copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property (copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property (nonatomic) BOOL expectsMerchantSession; // @synthesize expectsMerchantSession=_expectsMerchantSession;
@property (nonatomic) unsigned long long merchantCapabilities; // @synthesize merchantCapabilities=_merchantCapabilities;
@property (copy, nonatomic) NSString *merchantIdentifier; // @synthesize merchantIdentifier=_merchantIdentifier;
@property (strong, nonatomic) PKPaymentMerchantSession *merchantSession; // @synthesize merchantSession=_merchantSession;
@property (strong, nonatomic) NSURL *originatingURL; // @synthesize originatingURL=_originatingURL;
@property (copy, nonatomic) NSArray *paymentSummaryItems; // @synthesize paymentSummaryItems=_paymentSummaryItems;
@property (nonatomic) unsigned long long requiredBillingAddressFields; // @synthesize requiredBillingAddressFields=_requiredBillingAddressFields;
@property (nonatomic) unsigned long long requiredShippingAddressFields; // @synthesize requiredShippingAddressFields=_requiredShippingAddressFields;
@property (nonatomic) BOOL requiresAddressPrecision; // @synthesize requiresAddressPrecision=_requiresAddressPrecision;
@property (nonatomic) const void *shippingAddress; // @synthesize shippingAddress=_shippingAddress;
@property (strong, nonatomic) PKContact *shippingContact; // @synthesize shippingContact=_shippingContact;
@property (nonatomic, getter=isShippingEditable) BOOL shippingEditable; // @synthesize shippingEditable=_shippingEditable;
@property (copy, nonatomic) NSString *shippingEditableMessage; // @synthesize shippingEditableMessage=_shippingEditableMessage;
@property (copy, nonatomic) NSArray *shippingMethods; // @synthesize shippingMethods=_shippingMethods;
@property (nonatomic) unsigned long long shippingType; // @synthesize shippingType=_shippingType;
@property (copy, nonatomic) NSArray *supportedNetworks; // @synthesize supportedNetworks=_supportedNetworks;
@property (strong, nonatomic) NSArray *thumbnailURLs; // @synthesize thumbnailURLs=_thumbnailURLs;

+ (id)availableNetworks;
+ (id)requestWithProtobuf:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (long long)version;
- (void).cxx_destruct;
- (id)_shippingTypeToString;
- (id)_transactionAmount;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPaymentRequest:(id)arg1;
- (BOOL)isServiceProviderPaymentRequest;
- (id)protobuf;
- (id)serviceProviderPaymentRequest;

@end

