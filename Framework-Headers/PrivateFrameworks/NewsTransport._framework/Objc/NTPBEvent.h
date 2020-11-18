//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString, NTPBEventObject;

@interface NTPBEvent : PBCodable <NSCopying>
{
    long long _appConfigTreatmentId;
    long long _duration;
    long long _personalizationTreatmentId;
    long long _personalizedTreatmentId;
    long long _startTimestamp;
    NSString *_appAnalyticsEventIdentifier;
    NSString *_appAnalyticsEventPath;
    NSString *_bundleOfferId;
    NSString *_bundlePurchaseId;
    int _bundleSubscriptionStatus;
    int _cellularRadioAccessTechnology;
    int _deviceOrientation;
    NTPBEventObject *_eventObject;
    int _gestureType;
    int _interfaceOrientation;
    NSString *_notwUserId;
    int _reachabilityStatus;
    NSString *_referringSource;
    NSString *_referringType;
    NSString *_sBundlePurchaseId;
    NSData *_sessionId;
    NSData *_sessionIdWatch;
    NSString *_userId;
    NSMutableArray *_userPaidSubscriptionStatus;
    NSString *_userStorefrontId;
    NSData *_widgetSessionId;
    NSString *_widgetUserId;
    NSString *_windowFrameInScreen;
    BOOL _isAmplifyUser;
    BOOL _isBundlePurchaser;
    BOOL _isPaidSubscriberDuringEvent;
    BOOL _isPaidSubscriberFromAppStoreDuringEvent;
    BOOL _isPaidSubscriberFromNewsDuringEvent;
    BOOL _isPaidSubscriberFromThirdPartyDuringEvent;
    struct {
        unsigned int appConfigTreatmentId:1;
        unsigned int duration:1;
        unsigned int personalizationTreatmentId:1;
        unsigned int personalizedTreatmentId:1;
        unsigned int startTimestamp:1;
        unsigned int bundleSubscriptionStatus:1;
        unsigned int cellularRadioAccessTechnology:1;
        unsigned int deviceOrientation:1;
        unsigned int gestureType:1;
        unsigned int interfaceOrientation:1;
        unsigned int reachabilityStatus:1;
        unsigned int isAmplifyUser:1;
        unsigned int isBundlePurchaser:1;
        unsigned int isPaidSubscriberDuringEvent:1;
        unsigned int isPaidSubscriberFromAppStoreDuringEvent:1;
        unsigned int isPaidSubscriberFromNewsDuringEvent:1;
        unsigned int isPaidSubscriberFromThirdPartyDuringEvent:1;
    } _has;
}

@property (strong, nonatomic) NSString *appAnalyticsEventIdentifier; // @synthesize appAnalyticsEventIdentifier=_appAnalyticsEventIdentifier;
@property (strong, nonatomic) NSString *appAnalyticsEventPath; // @synthesize appAnalyticsEventPath=_appAnalyticsEventPath;
@property (nonatomic) long long appConfigTreatmentId; // @synthesize appConfigTreatmentId=_appConfigTreatmentId;
@property (strong, nonatomic) NSString *bundleOfferId; // @synthesize bundleOfferId=_bundleOfferId;
@property (strong, nonatomic) NSString *bundlePurchaseId; // @synthesize bundlePurchaseId=_bundlePurchaseId;
@property (nonatomic) int bundleSubscriptionStatus; // @synthesize bundleSubscriptionStatus=_bundleSubscriptionStatus;
@property (nonatomic) int cellularRadioAccessTechnology; // @synthesize cellularRadioAccessTechnology=_cellularRadioAccessTechnology;
@property (nonatomic) int deviceOrientation; // @synthesize deviceOrientation=_deviceOrientation;
@property (nonatomic) long long duration; // @synthesize duration=_duration;
@property (strong, nonatomic) NTPBEventObject *eventObject; // @synthesize eventObject=_eventObject;
@property (nonatomic) int gestureType; // @synthesize gestureType=_gestureType;
@property (readonly, nonatomic) BOOL hasAppAnalyticsEventIdentifier;
@property (readonly, nonatomic) BOOL hasAppAnalyticsEventPath;
@property (nonatomic) BOOL hasAppConfigTreatmentId;
@property (readonly, nonatomic) BOOL hasBundleOfferId;
@property (readonly, nonatomic) BOOL hasBundlePurchaseId;
@property (nonatomic) BOOL hasBundleSubscriptionStatus;
@property (nonatomic) BOOL hasCellularRadioAccessTechnology;
@property (nonatomic) BOOL hasDeviceOrientation;
@property (nonatomic) BOOL hasDuration;
@property (readonly, nonatomic) BOOL hasEventObject;
@property (nonatomic) BOOL hasGestureType;
@property (nonatomic) BOOL hasInterfaceOrientation;
@property (nonatomic) BOOL hasIsAmplifyUser;
@property (nonatomic) BOOL hasIsBundlePurchaser;
@property (nonatomic) BOOL hasIsPaidSubscriberDuringEvent;
@property (nonatomic) BOOL hasIsPaidSubscriberFromAppStoreDuringEvent;
@property (nonatomic) BOOL hasIsPaidSubscriberFromNewsDuringEvent;
@property (nonatomic) BOOL hasIsPaidSubscriberFromThirdPartyDuringEvent;
@property (readonly, nonatomic) BOOL hasNotwUserId;
@property (nonatomic) BOOL hasPersonalizationTreatmentId;
@property (nonatomic) BOOL hasPersonalizedTreatmentId;
@property (nonatomic) BOOL hasReachabilityStatus;
@property (readonly, nonatomic) BOOL hasReferringSource;
@property (readonly, nonatomic) BOOL hasReferringType;
@property (readonly, nonatomic) BOOL hasSBundlePurchaseId;
@property (readonly, nonatomic) BOOL hasSessionId;
@property (readonly, nonatomic) BOOL hasSessionIdWatch;
@property (nonatomic) BOOL hasStartTimestamp;
@property (readonly, nonatomic) BOOL hasUserId;
@property (readonly, nonatomic) BOOL hasUserStorefrontId;
@property (readonly, nonatomic) BOOL hasWidgetSessionId;
@property (readonly, nonatomic) BOOL hasWidgetUserId;
@property (readonly, nonatomic) BOOL hasWindowFrameInScreen;
@property (nonatomic) int interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property (nonatomic) BOOL isAmplifyUser; // @synthesize isAmplifyUser=_isAmplifyUser;
@property (nonatomic) BOOL isBundlePurchaser; // @synthesize isBundlePurchaser=_isBundlePurchaser;
@property (nonatomic) BOOL isPaidSubscriberDuringEvent; // @synthesize isPaidSubscriberDuringEvent=_isPaidSubscriberDuringEvent;
@property (nonatomic) BOOL isPaidSubscriberFromAppStoreDuringEvent; // @synthesize isPaidSubscriberFromAppStoreDuringEvent=_isPaidSubscriberFromAppStoreDuringEvent;
@property (nonatomic) BOOL isPaidSubscriberFromNewsDuringEvent; // @synthesize isPaidSubscriberFromNewsDuringEvent=_isPaidSubscriberFromNewsDuringEvent;
@property (nonatomic) BOOL isPaidSubscriberFromThirdPartyDuringEvent; // @synthesize isPaidSubscriberFromThirdPartyDuringEvent=_isPaidSubscriberFromThirdPartyDuringEvent;
@property (strong, nonatomic) NSString *notwUserId; // @synthesize notwUserId=_notwUserId;
@property (nonatomic) long long personalizationTreatmentId; // @synthesize personalizationTreatmentId=_personalizationTreatmentId;
@property (nonatomic) long long personalizedTreatmentId; // @synthesize personalizedTreatmentId=_personalizedTreatmentId;
@property (nonatomic) int reachabilityStatus; // @synthesize reachabilityStatus=_reachabilityStatus;
@property (strong, nonatomic) NSString *referringSource; // @synthesize referringSource=_referringSource;
@property (strong, nonatomic) NSString *referringType; // @synthesize referringType=_referringType;
@property (strong, nonatomic) NSString *sBundlePurchaseId; // @synthesize sBundlePurchaseId=_sBundlePurchaseId;
@property (strong, nonatomic) NSData *sessionId; // @synthesize sessionId=_sessionId;
@property (strong, nonatomic) NSData *sessionIdWatch; // @synthesize sessionIdWatch=_sessionIdWatch;
@property (nonatomic) long long startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property (strong, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property (strong, nonatomic) NSMutableArray *userPaidSubscriptionStatus; // @synthesize userPaidSubscriptionStatus=_userPaidSubscriptionStatus;
@property (strong, nonatomic) NSString *userStorefrontId; // @synthesize userStorefrontId=_userStorefrontId;
@property (strong, nonatomic) NSData *widgetSessionId; // @synthesize widgetSessionId=_widgetSessionId;
@property (strong, nonatomic) NSString *widgetUserId; // @synthesize widgetUserId=_widgetUserId;
@property (strong, nonatomic) NSString *windowFrameInScreen; // @synthesize windowFrameInScreen=_windowFrameInScreen;

+ (Class)userPaidSubscriptionStatusType;
- (void).cxx_destruct;
- (int)StringAsBundleSubscriptionStatus:(id)arg1;
- (int)StringAsCellularRadioAccessTechnology:(id)arg1;
- (int)StringAsReachabilityStatus:(id)arg1;
- (void)addUserPaidSubscriptionStatus:(id)arg1;
- (id)bundleSubscriptionStatusAsString:(int)arg1;
- (id)cellularRadioAccessTechnologyAsString:(int)arg1;
- (void)clearUserPaidSubscriptionStatus;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)reachabilityStatusAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)userPaidSubscriptionStatusAtIndex:(unsigned long long)arg1;
- (unsigned long long)userPaidSubscriptionStatusCount;
- (void)writeTo:(id)arg1;

@end
