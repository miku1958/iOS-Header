//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSString, NTPBTodayWidgetConfig;

@interface NTPBHeadlineResultOperationFetchInfo : PBCodable <NSCopying>
{
    long long _appConfigTreatmentIDInteger;
    long long _cellularRadioAccessTechnology;
    double _inputSlotsLimit;
    long long _onboardingVersion;
    long long _reachabilityStatus;
    NSData *_clickThroughRateByPersonalizationFeatureIDData;
    NSString *_contentStoreFrontID;
    NSString *_headlineSourceIdentifier;
    NSString *_userID;
    NTPBTodayWidgetConfig *_widgetConfig;
    BOOL _wifiReachable;
    struct {
        unsigned int appConfigTreatmentIDInteger:1;
        unsigned int cellularRadioAccessTechnology:1;
        unsigned int inputSlotsLimit:1;
        unsigned int onboardingVersion:1;
        unsigned int reachabilityStatus:1;
        unsigned int wifiReachable:1;
    } _has;
}

@property (nonatomic) long long appConfigTreatmentIDInteger; // @synthesize appConfigTreatmentIDInteger=_appConfigTreatmentIDInteger;
@property (nonatomic) long long cellularRadioAccessTechnology; // @synthesize cellularRadioAccessTechnology=_cellularRadioAccessTechnology;
@property (strong, nonatomic) NSData *clickThroughRateByPersonalizationFeatureIDData; // @synthesize clickThroughRateByPersonalizationFeatureIDData=_clickThroughRateByPersonalizationFeatureIDData;
@property (strong, nonatomic) NSString *contentStoreFrontID; // @synthesize contentStoreFrontID=_contentStoreFrontID;
@property (nonatomic) BOOL hasAppConfigTreatmentIDInteger;
@property (nonatomic) BOOL hasCellularRadioAccessTechnology;
@property (readonly, nonatomic) BOOL hasClickThroughRateByPersonalizationFeatureIDData;
@property (readonly, nonatomic) BOOL hasContentStoreFrontID;
@property (readonly, nonatomic) BOOL hasHeadlineSourceIdentifier;
@property (nonatomic) BOOL hasInputSlotsLimit;
@property (nonatomic) BOOL hasOnboardingVersion;
@property (nonatomic) BOOL hasReachabilityStatus;
@property (readonly, nonatomic) BOOL hasUserID;
@property (readonly, nonatomic) BOOL hasWidgetConfig;
@property (nonatomic) BOOL hasWifiReachable;
@property (strong, nonatomic) NSString *headlineSourceIdentifier; // @synthesize headlineSourceIdentifier=_headlineSourceIdentifier;
@property (nonatomic) double inputSlotsLimit; // @synthesize inputSlotsLimit=_inputSlotsLimit;
@property (nonatomic) long long onboardingVersion; // @synthesize onboardingVersion=_onboardingVersion;
@property (nonatomic) long long reachabilityStatus; // @synthesize reachabilityStatus=_reachabilityStatus;
@property (strong, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property (strong, nonatomic) NTPBTodayWidgetConfig *widgetConfig; // @synthesize widgetConfig=_widgetConfig;
@property (nonatomic) BOOL wifiReachable; // @synthesize wifiReachable=_wifiReachable;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

