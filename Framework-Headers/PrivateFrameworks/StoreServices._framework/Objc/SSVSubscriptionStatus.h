//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>
#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSString;

@interface SSVSubscriptionStatus : NSObject <SSXPCCoding, NSCopying>
{
    NSNumber *_accountIdentifier;
    NSArray *_accountPermissions;
    long long _accountStatus;
    unsigned long long _acceptedStoreTermsVersion;
    long long _carrierBundlingStatus;
    long long _carrierBundlingErrorCode;
    NSString *_cellularOperatorName;
    BOOL _discoveryModeEligible;
    BOOL _familyOrganizer;
    BOOL _familySubscription;
    BOOL _freeTrialIneligible;
    BOOL _hasFamily;
    BOOL _hasFamilyMembers;
    BOOL _hasOfflineSlots;
    unsigned long long _latestStoreTermsVersion;
    NSString *_phoneNumber;
    NSDictionary *_rawResponseData;
    double _subscriptionExpirationTime;
    BOOL _subscriptionPurchaser;
    BOOL _hasOfflineSlot;
    NSString *_sessionIdentifier;
}

@property (nonatomic) unsigned long long acceptedStoreTermsVersion; // @synthesize acceptedStoreTermsVersion=_acceptedStoreTermsVersion;
@property (copy, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property (copy, nonatomic) NSArray *accountPermissions; // @synthesize accountPermissions=_accountPermissions;
@property (nonatomic) long long accountStatus; // @synthesize accountStatus=_accountStatus;
@property (nonatomic) long long carrierBundlingErrorCode; // @synthesize carrierBundlingErrorCode=_carrierBundlingErrorCode;
@property (nonatomic) long long carrierBundlingStatus; // @synthesize carrierBundlingStatus=_carrierBundlingStatus;
@property (copy, nonatomic) NSString *cellularOperatorName; // @synthesize cellularOperatorName=_cellularOperatorName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDiscoveryModeEligible) BOOL discoveryModeEligible; // @synthesize discoveryModeEligible=_discoveryModeEligible;
@property (nonatomic, getter=isFamilyOrganizer) BOOL familyOrganizer; // @synthesize familyOrganizer=_familyOrganizer;
@property (nonatomic, getter=isFamilySubscription) BOOL familySubscription; // @synthesize familySubscription=_familySubscription;
@property (nonatomic, getter=isFreeTrialIneligible) BOOL freeTrialIneligible; // @synthesize freeTrialIneligible=_freeTrialIneligible;
@property (nonatomic) BOOL hasFamily; // @synthesize hasFamily=_hasFamily;
@property (nonatomic) BOOL hasFamilyMembers; // @synthesize hasFamilyMembers=_hasFamilyMembers;
@property (readonly, nonatomic) BOOL hasOfflineSlot; // @synthesize hasOfflineSlot=_hasOfflineSlot;
@property (nonatomic) BOOL hasOfflineSlots; // @synthesize hasOfflineSlots=_hasOfflineSlots;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long latestStoreTermsVersion; // @synthesize latestStoreTermsVersion=_latestStoreTermsVersion;
@property (copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property (copy, nonatomic) NSDictionary *rawResponseData; // @synthesize rawResponseData=_rawResponseData;
@property (copy, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property (nonatomic, getter=isSubscribed) BOOL subscribed;
@property (copy, nonatomic) NSDate *subscriptionExpirationDate;
@property (nonatomic, getter=isSubscriptionPurchaser) BOOL subscriptionPurchaser; // @synthesize subscriptionPurchaser=_subscriptionPurchaser;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setSubscribed:(BOOL)arg1;
- (id)copyUserDefaultsRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyXPCEncoding;
- (id)initWithUserDefaultsRepresentation:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)isEqualToStatus:(id)arg1;
- (void)resetAccountBasedProperties;
- (void)resetCarrierBundlingProperties;
- (void)setValuesUsingStatusDictionary:(id)arg1;

@end
