//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSNumber, NSString, SUScriptDictionary;

@interface SUScriptSubscriptionStatusResponse : SUScriptObject
{
    NSNumber *_acceptedStoreTermsVersion;
    NSString *_accountIdentifier;
    NSString *_accountStatus;
    NSString *_carrierBundlingStatus;
    id _discoveryModeEligible;
    NSString *_eligibilityStatus;
    id _familyOrganizer;
    id _familySubscription;
    id _final;
    id _hasFamily;
    id _hasFamilyMembers;
    NSNumber *_latestStoreTermsVersion;
    SUScriptDictionary *_rawResponseData;
    NSString *_sessionIdentifier;
    id _subscribed;
}

@property (readonly) NSNumber *acceptedStoreTermsVersion; // @synthesize acceptedStoreTermsVersion=_acceptedStoreTermsVersion;
@property (readonly) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property (readonly) NSString *accountStatus; // @synthesize accountStatus=_accountStatus;
@property (readonly) NSString *accountStatusNeedsAuthentication;
@property (readonly) NSString *accountStatusNotSubscribed;
@property (readonly) NSString *accountStatusSubscribed;
@property (readonly) NSString *accountStatusUnknown;
@property (readonly) NSString *carrierBundlingStatus; // @synthesize carrierBundlingStatus=_carrierBundlingStatus;
@property (readonly, getter=isDiscoveryModeEligible) id discoveryModeEligible; // @synthesize discoveryModeEligible=_discoveryModeEligible;
@property (readonly) NSString *eligibilityStatus; // @synthesize eligibilityStatus=_eligibilityStatus;
@property (readonly) NSString *eligibilityStatusEligible;
@property (readonly) NSString *eligibilityStatusNotEligible;
@property (readonly) NSString *eligibilityStatusUnknown;
@property (readonly, getter=isFamilyOrganizer) id familyOrganizer; // @synthesize familyOrganizer=_familyOrganizer;
@property (readonly, getter=isFamilySubscription) id familySubscription; // @synthesize familySubscription=_familySubscription;
@property (readonly, getter=isFinal) id final; // @synthesize final=_final;
@property (readonly) id hasFamily; // @synthesize hasFamily=_hasFamily;
@property (readonly) id hasFamilyMembers; // @synthesize hasFamilyMembers=_hasFamilyMembers;
@property (readonly) NSNumber *latestStoreTermsVersion; // @synthesize latestStoreTermsVersion=_latestStoreTermsVersion;
@property (readonly) SUScriptDictionary *rawResponseData; // @synthesize rawResponseData=_rawResponseData;
@property (readonly) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property (readonly, getter=isSubscribed) id subscribed; // @synthesize subscribed=_subscribed;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
- (void).cxx_destruct;
- (id)_className;
- (id)attributeKeys;
- (unsigned long long)hash;
- (id)initWithSubscriptionStatus:(id)arg1 isFinal:(BOOL)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)scriptAttributeKeys;

@end

