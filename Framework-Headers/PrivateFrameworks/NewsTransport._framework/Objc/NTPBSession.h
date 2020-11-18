//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSString;

@interface NTPBSession : PBCodable <NSCopying>
{
    long long _appBuild;
    long long _lastAppOpenDate;
    long long _userStartDate;
    NSString *_appVersion;
    NSString *_campaignId;
    int _campaignType;
    NSString *_carrier;
    int _cellularRadioAccessTechnology;
    NSString *_countryCode;
    NSString *_deviceModel;
    NSString *_devicePlatform;
    NSString *_languageCode;
    int _newsWidgetModeGroup;
    NSString *_originatingCampaignId;
    NSString *_originatingCampaignType;
    NSString *_originatingCreativeId;
    int _osInstallVariant;
    NSString *_osVersion;
    NSString *_previousAppVersion;
    NSString *_previousOsVersion;
    int _reachabilityStatus;
    NSData *_sessionId;
    int _textSize;
    NSString *_userId;
    NSString *_userStorefrontId;
    int _utcOffset;
    int _widgetModeType;
    BOOL _iosSettingsNotificationsEnabled;
    BOOL _isNewUser;
    BOOL _isPaidSubscriber;
    BOOL _isPaidSubscriberFromAppStore;
    BOOL _isPaidSubscriberFromNews;
    BOOL _isPaidSubscriberFromThirdParty;
    BOOL _locationPermissionGranted;
    BOOL _notificationsEnabled;
    BOOL _privateDataSyncOn;
    BOOL _runningObsolete;
    BOOL _signedIntoIcloud;
    BOOL _upgradedFromObsolete;
    struct {
        unsigned int appBuild:1;
        unsigned int lastAppOpenDate:1;
        unsigned int userStartDate:1;
        unsigned int campaignType:1;
        unsigned int cellularRadioAccessTechnology:1;
        unsigned int newsWidgetModeGroup:1;
        unsigned int osInstallVariant:1;
        unsigned int reachabilityStatus:1;
        unsigned int textSize:1;
        unsigned int utcOffset:1;
        unsigned int widgetModeType:1;
        unsigned int iosSettingsNotificationsEnabled:1;
        unsigned int isNewUser:1;
        unsigned int isPaidSubscriber:1;
        unsigned int isPaidSubscriberFromAppStore:1;
        unsigned int isPaidSubscriberFromNews:1;
        unsigned int isPaidSubscriberFromThirdParty:1;
        unsigned int locationPermissionGranted:1;
        unsigned int notificationsEnabled:1;
        unsigned int privateDataSyncOn:1;
        unsigned int runningObsolete:1;
        unsigned int signedIntoIcloud:1;
        unsigned int upgradedFromObsolete:1;
    } _has;
}

@property (nonatomic) long long appBuild; // @synthesize appBuild=_appBuild;
@property (strong, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property (strong, nonatomic) NSString *campaignId; // @synthesize campaignId=_campaignId;
@property (nonatomic) int campaignType; // @synthesize campaignType=_campaignType;
@property (strong, nonatomic) NSString *carrier; // @synthesize carrier=_carrier;
@property (nonatomic) int cellularRadioAccessTechnology; // @synthesize cellularRadioAccessTechnology=_cellularRadioAccessTechnology;
@property (strong, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property (strong, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property (strong, nonatomic) NSString *devicePlatform; // @synthesize devicePlatform=_devicePlatform;
@property (nonatomic) BOOL hasAppBuild;
@property (readonly, nonatomic) BOOL hasAppVersion;
@property (readonly, nonatomic) BOOL hasCampaignId;
@property (nonatomic) BOOL hasCampaignType;
@property (readonly, nonatomic) BOOL hasCarrier;
@property (nonatomic) BOOL hasCellularRadioAccessTechnology;
@property (readonly, nonatomic) BOOL hasCountryCode;
@property (readonly, nonatomic) BOOL hasDeviceModel;
@property (readonly, nonatomic) BOOL hasDevicePlatform;
@property (nonatomic) BOOL hasIosSettingsNotificationsEnabled;
@property (nonatomic) BOOL hasIsNewUser;
@property (nonatomic) BOOL hasIsPaidSubscriber;
@property (nonatomic) BOOL hasIsPaidSubscriberFromAppStore;
@property (nonatomic) BOOL hasIsPaidSubscriberFromNews;
@property (nonatomic) BOOL hasIsPaidSubscriberFromThirdParty;
@property (readonly, nonatomic) BOOL hasLanguageCode;
@property (nonatomic) BOOL hasLastAppOpenDate;
@property (nonatomic) BOOL hasLocationPermissionGranted;
@property (nonatomic) BOOL hasNewsWidgetModeGroup;
@property (nonatomic) BOOL hasNotificationsEnabled;
@property (readonly, nonatomic) BOOL hasOriginatingCampaignId;
@property (readonly, nonatomic) BOOL hasOriginatingCampaignType;
@property (readonly, nonatomic) BOOL hasOriginatingCreativeId;
@property (nonatomic) BOOL hasOsInstallVariant;
@property (readonly, nonatomic) BOOL hasOsVersion;
@property (readonly, nonatomic) BOOL hasPreviousAppVersion;
@property (readonly, nonatomic) BOOL hasPreviousOsVersion;
@property (nonatomic) BOOL hasPrivateDataSyncOn;
@property (nonatomic) BOOL hasReachabilityStatus;
@property (nonatomic) BOOL hasRunningObsolete;
@property (readonly, nonatomic) BOOL hasSessionId;
@property (nonatomic) BOOL hasSignedIntoIcloud;
@property (nonatomic) BOOL hasTextSize;
@property (nonatomic) BOOL hasUpgradedFromObsolete;
@property (readonly, nonatomic) BOOL hasUserId;
@property (nonatomic) BOOL hasUserStartDate;
@property (readonly, nonatomic) BOOL hasUserStorefrontId;
@property (nonatomic) BOOL hasUtcOffset;
@property (nonatomic) BOOL hasWidgetModeType;
@property (nonatomic) BOOL iosSettingsNotificationsEnabled; // @synthesize iosSettingsNotificationsEnabled=_iosSettingsNotificationsEnabled;
@property (nonatomic) BOOL isNewUser; // @synthesize isNewUser=_isNewUser;
@property (nonatomic) BOOL isPaidSubscriber; // @synthesize isPaidSubscriber=_isPaidSubscriber;
@property (nonatomic) BOOL isPaidSubscriberFromAppStore; // @synthesize isPaidSubscriberFromAppStore=_isPaidSubscriberFromAppStore;
@property (nonatomic) BOOL isPaidSubscriberFromNews; // @synthesize isPaidSubscriberFromNews=_isPaidSubscriberFromNews;
@property (nonatomic) BOOL isPaidSubscriberFromThirdParty; // @synthesize isPaidSubscriberFromThirdParty=_isPaidSubscriberFromThirdParty;
@property (strong, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property (nonatomic) long long lastAppOpenDate; // @synthesize lastAppOpenDate=_lastAppOpenDate;
@property (nonatomic) BOOL locationPermissionGranted; // @synthesize locationPermissionGranted=_locationPermissionGranted;
@property (nonatomic) int newsWidgetModeGroup; // @synthesize newsWidgetModeGroup=_newsWidgetModeGroup;
@property (nonatomic) BOOL notificationsEnabled; // @synthesize notificationsEnabled=_notificationsEnabled;
@property (strong, nonatomic) NSString *originatingCampaignId; // @synthesize originatingCampaignId=_originatingCampaignId;
@property (strong, nonatomic) NSString *originatingCampaignType; // @synthesize originatingCampaignType=_originatingCampaignType;
@property (strong, nonatomic) NSString *originatingCreativeId; // @synthesize originatingCreativeId=_originatingCreativeId;
@property (nonatomic) int osInstallVariant; // @synthesize osInstallVariant=_osInstallVariant;
@property (strong, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property (strong, nonatomic) NSString *previousAppVersion; // @synthesize previousAppVersion=_previousAppVersion;
@property (strong, nonatomic) NSString *previousOsVersion; // @synthesize previousOsVersion=_previousOsVersion;
@property (nonatomic) BOOL privateDataSyncOn; // @synthesize privateDataSyncOn=_privateDataSyncOn;
@property (nonatomic) int reachabilityStatus; // @synthesize reachabilityStatus=_reachabilityStatus;
@property (nonatomic) BOOL runningObsolete; // @synthesize runningObsolete=_runningObsolete;
@property (strong, nonatomic) NSData *sessionId; // @synthesize sessionId=_sessionId;
@property (nonatomic) BOOL signedIntoIcloud; // @synthesize signedIntoIcloud=_signedIntoIcloud;
@property (nonatomic) int textSize; // @synthesize textSize=_textSize;
@property (nonatomic) BOOL upgradedFromObsolete; // @synthesize upgradedFromObsolete=_upgradedFromObsolete;
@property (strong, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property (nonatomic) long long userStartDate; // @synthesize userStartDate=_userStartDate;
@property (strong, nonatomic) NSString *userStorefrontId; // @synthesize userStorefrontId=_userStorefrontId;
@property (nonatomic) int utcOffset; // @synthesize utcOffset=_utcOffset;
@property (nonatomic) int widgetModeType; // @synthesize widgetModeType=_widgetModeType;

- (void).cxx_destruct;
- (int)StringAsCampaignType:(id)arg1;
- (int)StringAsCellularRadioAccessTechnology:(id)arg1;
- (int)StringAsNewsWidgetModeGroup:(id)arg1;
- (int)StringAsOsInstallVariant:(id)arg1;
- (int)StringAsReachabilityStatus:(id)arg1;
- (int)StringAsWidgetModeType:(id)arg1;
- (id)campaignTypeAsString:(int)arg1;
- (id)cellularRadioAccessTechnologyAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)newsWidgetModeGroupAsString:(int)arg1;
- (id)osInstallVariantAsString:(int)arg1;
- (id)reachabilityStatusAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)widgetModeTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

