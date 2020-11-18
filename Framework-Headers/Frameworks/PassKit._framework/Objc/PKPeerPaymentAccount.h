//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSDecimalNumber, NSDictionary, NSString, NSURL, PKCurrencyAmount;

@interface PKPeerPaymentAccount : NSObject <NSSecureCoding>
{
    BOOL _accountStateDirty;
    BOOL _identityVerificationRequired;
    BOOL _termsAcceptanceRequired;
    unsigned long long _state;
    unsigned long long _stage;
    NSString *_countryCode;
    PKCurrencyAmount *_currentBalance;
    NSDecimalNumber *_maximumBalance;
    NSDate *_lastUpdated;
    double _proactiveFetchPeriod;
    NSString *_termsIdentifier;
    NSURL *_termsURL;
    NSURL *_associatedPassURL;
    long long _pendingPaymentCount;
    NSArray *_supportedFeatureDescriptors;
    NSString *_associatedPassSerialNumber;
    NSString *_associatedPassTypeIdentifier;
}

@property (nonatomic, getter=isAccountStateDirty) BOOL accountStateDirty; // @synthesize accountStateDirty=_accountStateDirty;
@property (copy, nonatomic) NSString *associatedPassSerialNumber; // @synthesize associatedPassSerialNumber=_associatedPassSerialNumber;
@property (copy, nonatomic) NSString *associatedPassTypeIdentifier; // @synthesize associatedPassTypeIdentifier=_associatedPassTypeIdentifier;
@property (copy, nonatomic) NSURL *associatedPassURL; // @synthesize associatedPassURL=_associatedPassURL;
@property (copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property (copy, nonatomic) PKCurrencyAmount *currentBalance; // @synthesize currentBalance=_currentBalance;
@property (readonly, copy, nonatomic) NSArray *defaultSuggestions;
@property (nonatomic) BOOL identityVerificationRequired; // @synthesize identityVerificationRequired=_identityVerificationRequired;
@property (strong, nonatomic) NSDate *lastUpdated; // @synthesize lastUpdated=_lastUpdated;
@property (copy, nonatomic) NSDecimalNumber *maximumBalance; // @synthesize maximumBalance=_maximumBalance;
@property (readonly, nonatomic) NSDictionary *maximumTransferAmounts;
@property (readonly, nonatomic) NSDictionary *minimumTransferAmounts;
@property (nonatomic) long long pendingPaymentCount; // @synthesize pendingPaymentCount=_pendingPaymentCount;
@property (nonatomic) double proactiveFetchPeriod; // @synthesize proactiveFetchPeriod=_proactiveFetchPeriod;
@property (nonatomic) unsigned long long stage; // @synthesize stage=_stage;
@property (nonatomic) unsigned long long state; // @synthesize state=_state;
@property (copy, nonatomic) NSArray *supportedFeatureDescriptors; // @synthesize supportedFeatureDescriptors=_supportedFeatureDescriptors;
@property (nonatomic) BOOL termsAcceptanceRequired; // @synthesize termsAcceptanceRequired=_termsAcceptanceRequired;
@property (copy, nonatomic) NSString *termsIdentifier; // @synthesize termsIdentifier=_termsIdentifier;
@property (copy, nonatomic) NSURL *termsURL; // @synthesize termsURL=_termsURL;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_featureWithIdentifier:(id)arg1;
- (id)associatedPassUniqueID;
- (id)cardBalancePromotionFeatureDescriptor;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 lastUpdated:(id)arg2;
- (BOOL)isAccountOutOfDate;
- (BOOL)isEqual:(id)arg1;
- (id)loadFromCardFeatureDescriptor;
- (id)requestFromUserFeatureDescriptor;
- (id)sendToUserFeatureDescriptor;
- (BOOL)supportsCardBalancePromotion;
- (BOOL)supportsLoadFromCard;
- (BOOL)supportsRequestFromUser;
- (BOOL)supportsSendToUser;
- (BOOL)supportsTransferToBank;
- (id)transferToBankFeatureDescriptor;

@end

