//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString, NSURL;

@interface ICMusicSubscriptionCarrierBundlingEligibilityResponse : NSObject
{
    BOOL _familySubscription;
    BOOL _wantsDelayedRetry;
    BOOL _needsHeaderEnrichment;
    BOOL _needsSilentSMS;
    long long _carrierBundlingStatusType;
    NSError *_error;
    NSString *_SMSSessionIdentifier;
    double _delayInterval;
    NSString *_headerEnrichmentMessage;
    NSString *_headerEnrichmentSessionIdentifier;
    NSURL *_headerEnrichmentURL;
    NSString *_silentSMSMessage;
    NSString *_silentSMSNumber;
    NSString *_cellularProviderName;
    NSString *_phoneNumber;
}

@property (readonly, nonatomic) NSString *SMSSessionIdentifier; // @synthesize SMSSessionIdentifier=_SMSSessionIdentifier;
@property (readonly, nonatomic) long long carrierBundlingStatusType; // @synthesize carrierBundlingStatusType=_carrierBundlingStatusType;
@property (readonly, nonatomic) NSString *cellularProviderName; // @synthesize cellularProviderName=_cellularProviderName;
@property (readonly, nonatomic) double delayInterval; // @synthesize delayInterval=_delayInterval;
@property (readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly, nonatomic, getter=isFamilySubscription) BOOL familySubscription; // @synthesize familySubscription=_familySubscription;
@property (readonly, nonatomic) NSString *headerEnrichmentMessage; // @synthesize headerEnrichmentMessage=_headerEnrichmentMessage;
@property (readonly, nonatomic) NSString *headerEnrichmentSessionIdentifier; // @synthesize headerEnrichmentSessionIdentifier=_headerEnrichmentSessionIdentifier;
@property (readonly, nonatomic) NSURL *headerEnrichmentURL; // @synthesize headerEnrichmentURL=_headerEnrichmentURL;
@property (readonly, nonatomic) BOOL needsHeaderEnrichment; // @synthesize needsHeaderEnrichment=_needsHeaderEnrichment;
@property (readonly, nonatomic) BOOL needsSilentSMS; // @synthesize needsSilentSMS=_needsSilentSMS;
@property (readonly, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property (readonly, nonatomic) NSString *silentSMSMessage; // @synthesize silentSMSMessage=_silentSMSMessage;
@property (readonly, nonatomic) NSString *silentSMSNumber; // @synthesize silentSMSNumber=_silentSMSNumber;
@property (readonly, nonatomic) BOOL wantsDelayedRetry; // @synthesize wantsDelayedRetry=_wantsDelayedRetry;

- (void).cxx_destruct;
- (id)initWithEligibilityDictionary:(id)arg1 cellularProviderName:(id)arg2 phoneNumber:(id)arg3;

@end

