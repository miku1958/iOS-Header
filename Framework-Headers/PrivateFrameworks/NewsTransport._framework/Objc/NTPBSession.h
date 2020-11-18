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
    CDStruct_95bda58d _userSegmentationSegmentSetIds;
    CDStruct_5df41632 _userSegmentationTreatmentIds;
    long long _appBuild;
    long long _appConfigTreatmentId;
    long long _lastAppOpenDate;
    long long _testBucket;
    long long _userStartDate;
    int _ageBracket;
    float _ageBracketConfidenceLevel;
    NSData *_appProcessLifetimeId;
    NSString *_appVersion;
    NSString *_browserLanguage;
    NSString *_campaignId;
    int _campaignType;
    NSString *_carrier;
    int _cellularRadioAccessTechnology;
    NSString *_clientName;
    NSString *_clientVersion;
    NSString *_countryCode;
    NSString *_deviceModel;
    NSString *_devicePlatform;
    int _ethnicity;
    float _ethnicityConfidenceLevel;
    int _gender;
    float _genderConfidenceLevel;
    int _incomeBracket;
    float _incomeBracketConfidenceLevel;
    NSString *_languageCode;
    int _newsWidgetModeGroup;
    NSString *_newsWidgetModeGroupId;
    NSString *_notwUserId;
    NSString *_originatingCampaignId;
    NSString *_originatingCampaignType;
    NSString *_originatingCreativeId;
    int _osInstallVariant;
    NSString *_osVersion;
    NSString *_personalizationPortraitVariantName;
    NSString *_previousAppVersion;
    NSString *_previousOsVersion;
    NSString *_productType;
    int _reachabilityStatus;
    NSData *_sessionId;
    NSData *_sessionIdWatch;
    int _textSize;
    NSString *_userId;
    NSString *_userStorefrontId;
    int _utcOffset;
    NSString *_watchSessionId;
    int _widgetDisplayMode;
    int _widgetDisplayModeSessionEnd;
    int _widgetModeType;
    NSData *_widgetSessionId;
    NSString *_widgetUserId;
    BOOL _iosSettingsNotificationsBadgeAppIconEnabled;
    BOOL _iosSettingsNotificationsEnabled;
    BOOL _iosSettingsNotificationsShowAsBannersEnabled;
    BOOL _iosSettingsNotificationsShowInHistoryEnabled;
    BOOL _iosSettingsNotificationsShowOnLockScreenEnabled;
    BOOL _iosSettingsNotificationsSoundEnabled;
    BOOL _isNewUser;
    BOOL _isPaidSubscriber;
    BOOL _isPaidSubscriberFromAppStore;
    BOOL _isPaidSubscriberFromNews;
    BOOL _isPaidSubscriberFromThirdParty;
    BOOL _locationPermissionGranted;
    BOOL _notificationsEnabled;
    BOOL _privateDataEncrypted;
    BOOL _privateDataSyncOn;
    BOOL _progressivePersonalizationAllowed;
    BOOL _runningObsolete;
    BOOL _signedIntoIcloud;
    BOOL _upgradedFromObsolete;
    struct {
        unsigned int appBuild:1;
        unsigned int appConfigTreatmentId:1;
        unsigned int lastAppOpenDate:1;
        unsigned int testBucket:1;
        unsigned int userStartDate:1;
        unsigned int ageBracket:1;
        unsigned int ageBracketConfidenceLevel:1;
        unsigned int campaignType:1;
        unsigned int cellularRadioAccessTechnology:1;
        unsigned int ethnicity:1;
        unsigned int ethnicityConfidenceLevel:1;
        unsigned int gender:1;
        unsigned int genderConfidenceLevel:1;
        unsigned int incomeBracket:1;
        unsigned int incomeBracketConfidenceLevel:1;
        unsigned int newsWidgetModeGroup:1;
        unsigned int osInstallVariant:1;
        unsigned int reachabilityStatus:1;
        unsigned int textSize:1;
        unsigned int utcOffset:1;
        unsigned int widgetDisplayMode:1;
        unsigned int widgetDisplayModeSessionEnd:1;
        unsigned int widgetModeType:1;
        unsigned int iosSettingsNotificationsBadgeAppIconEnabled:1;
        unsigned int iosSettingsNotificationsEnabled:1;
        unsigned int iosSettingsNotificationsShowAsBannersEnabled:1;
        unsigned int iosSettingsNotificationsShowInHistoryEnabled:1;
        unsigned int iosSettingsNotificationsShowOnLockScreenEnabled:1;
        unsigned int iosSettingsNotificationsSoundEnabled:1;
        unsigned int isNewUser:1;
        unsigned int isPaidSubscriber:1;
        unsigned int isPaidSubscriberFromAppStore:1;
        unsigned int isPaidSubscriberFromNews:1;
        unsigned int isPaidSubscriberFromThirdParty:1;
        unsigned int locationPermissionGranted:1;
        unsigned int notificationsEnabled:1;
        unsigned int privateDataEncrypted:1;
        unsigned int privateDataSyncOn:1;
        unsigned int progressivePersonalizationAllowed:1;
        unsigned int runningObsolete:1;
        unsigned int signedIntoIcloud:1;
        unsigned int upgradedFromObsolete:1;
    } _has;
}

@property (nonatomic) int ageBracket; // @synthesize ageBracket=_ageBracket;
@property (nonatomic) float ageBracketConfidenceLevel; // @synthesize ageBracketConfidenceLevel=_ageBracketConfidenceLevel;
@property (nonatomic) long long appBuild; // @synthesize appBuild=_appBuild;
@property (nonatomic) long long appConfigTreatmentId; // @synthesize appConfigTreatmentId=_appConfigTreatmentId;
@property (strong, nonatomic) NSData *appProcessLifetimeId; // @synthesize appProcessLifetimeId=_appProcessLifetimeId;
@property (strong, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property (strong, nonatomic) NSString *browserLanguage; // @synthesize browserLanguage=_browserLanguage;
@property (strong, nonatomic) NSString *campaignId; // @synthesize campaignId=_campaignId;
@property (nonatomic) int campaignType; // @synthesize campaignType=_campaignType;
@property (strong, nonatomic) NSString *carrier; // @synthesize carrier=_carrier;
@property (nonatomic) int cellularRadioAccessTechnology; // @synthesize cellularRadioAccessTechnology=_cellularRadioAccessTechnology;
@property (strong, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property (strong, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property (strong, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property (strong, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property (strong, nonatomic) NSString *devicePlatform; // @synthesize devicePlatform=_devicePlatform;
@property (nonatomic) int ethnicity; // @synthesize ethnicity=_ethnicity;
@property (nonatomic) float ethnicityConfidenceLevel; // @synthesize ethnicityConfidenceLevel=_ethnicityConfidenceLevel;
@property (nonatomic) int gender; // @synthesize gender=_gender;
@property (nonatomic) float genderConfidenceLevel; // @synthesize genderConfidenceLevel=_genderConfidenceLevel;
@property (nonatomic) BOOL hasAgeBracket;
@property (nonatomic) BOOL hasAgeBracketConfidenceLevel;
@property (nonatomic) BOOL hasAppBuild;
@property (nonatomic) BOOL hasAppConfigTreatmentId;
@property (readonly, nonatomic) BOOL hasAppProcessLifetimeId;
@property (readonly, nonatomic) BOOL hasAppVersion;
@property (readonly, nonatomic) BOOL hasBrowserLanguage;
@property (readonly, nonatomic) BOOL hasCampaignId;
@property (nonatomic) BOOL hasCampaignType;
@property (readonly, nonatomic) BOOL hasCarrier;
@property (nonatomic) BOOL hasCellularRadioAccessTechnology;
@property (readonly, nonatomic) BOOL hasClientName;
@property (readonly, nonatomic) BOOL hasClientVersion;
@property (readonly, nonatomic) BOOL hasCountryCode;
@property (readonly, nonatomic) BOOL hasDeviceModel;
@property (readonly, nonatomic) BOOL hasDevicePlatform;
@property (nonatomic) BOOL hasEthnicity;
@property (nonatomic) BOOL hasEthnicityConfidenceLevel;
@property (nonatomic) BOOL hasGender;
@property (nonatomic) BOOL hasGenderConfidenceLevel;
@property (nonatomic) BOOL hasIncomeBracket;
@property (nonatomic) BOOL hasIncomeBracketConfidenceLevel;
@property (nonatomic) BOOL hasIosSettingsNotificationsBadgeAppIconEnabled;
@property (nonatomic) BOOL hasIosSettingsNotificationsEnabled;
@property (nonatomic) BOOL hasIosSettingsNotificationsShowAsBannersEnabled;
@property (nonatomic) BOOL hasIosSettingsNotificationsShowInHistoryEnabled;
@property (nonatomic) BOOL hasIosSettingsNotificationsShowOnLockScreenEnabled;
@property (nonatomic) BOOL hasIosSettingsNotificationsSoundEnabled;
@property (nonatomic) BOOL hasIsNewUser;
@property (nonatomic) BOOL hasIsPaidSubscriber;
@property (nonatomic) BOOL hasIsPaidSubscriberFromAppStore;
@property (nonatomic) BOOL hasIsPaidSubscriberFromNews;
@property (nonatomic) BOOL hasIsPaidSubscriberFromThirdParty;
@property (readonly, nonatomic) BOOL hasLanguageCode;
@property (nonatomic) BOOL hasLastAppOpenDate;
@property (nonatomic) BOOL hasLocationPermissionGranted;
@property (nonatomic) BOOL hasNewsWidgetModeGroup;
@property (readonly, nonatomic) BOOL hasNewsWidgetModeGroupId;
@property (nonatomic) BOOL hasNotificationsEnabled;
@property (readonly, nonatomic) BOOL hasNotwUserId;
@property (readonly, nonatomic) BOOL hasOriginatingCampaignId;
@property (readonly, nonatomic) BOOL hasOriginatingCampaignType;
@property (readonly, nonatomic) BOOL hasOriginatingCreativeId;
@property (nonatomic) BOOL hasOsInstallVariant;
@property (readonly, nonatomic) BOOL hasOsVersion;
@property (readonly, nonatomic) BOOL hasPersonalizationPortraitVariantName;
@property (readonly, nonatomic) BOOL hasPreviousAppVersion;
@property (readonly, nonatomic) BOOL hasPreviousOsVersion;
@property (nonatomic) BOOL hasPrivateDataEncrypted;
@property (nonatomic) BOOL hasPrivateDataSyncOn;
@property (readonly, nonatomic) BOOL hasProductType;
@property (nonatomic) BOOL hasProgressivePersonalizationAllowed;
@property (nonatomic) BOOL hasReachabilityStatus;
@property (nonatomic) BOOL hasRunningObsolete;
@property (readonly, nonatomic) BOOL hasSessionId;
@property (readonly, nonatomic) BOOL hasSessionIdWatch;
@property (nonatomic) BOOL hasSignedIntoIcloud;
@property (nonatomic) BOOL hasTestBucket;
@property (nonatomic) BOOL hasTextSize;
@property (nonatomic) BOOL hasUpgradedFromObsolete;
@property (readonly, nonatomic) BOOL hasUserId;
@property (nonatomic) BOOL hasUserStartDate;
@property (readonly, nonatomic) BOOL hasUserStorefrontId;
@property (nonatomic) BOOL hasUtcOffset;
@property (readonly, nonatomic) BOOL hasWatchSessionId;
@property (nonatomic) BOOL hasWidgetDisplayMode;
@property (nonatomic) BOOL hasWidgetDisplayModeSessionEnd;
@property (nonatomic) BOOL hasWidgetModeType;
@property (readonly, nonatomic) BOOL hasWidgetSessionId;
@property (readonly, nonatomic) BOOL hasWidgetUserId;
@property (nonatomic) int incomeBracket; // @synthesize incomeBracket=_incomeBracket;
@property (nonatomic) float incomeBracketConfidenceLevel; // @synthesize incomeBracketConfidenceLevel=_incomeBracketConfidenceLevel;
@property (nonatomic) BOOL iosSettingsNotificationsBadgeAppIconEnabled; // @synthesize iosSettingsNotificationsBadgeAppIconEnabled=_iosSettingsNotificationsBadgeAppIconEnabled;
@property (nonatomic) BOOL iosSettingsNotificationsEnabled; // @synthesize iosSettingsNotificationsEnabled=_iosSettingsNotificationsEnabled;
@property (nonatomic) BOOL iosSettingsNotificationsShowAsBannersEnabled; // @synthesize iosSettingsNotificationsShowAsBannersEnabled=_iosSettingsNotificationsShowAsBannersEnabled;
@property (nonatomic) BOOL iosSettingsNotificationsShowInHistoryEnabled; // @synthesize iosSettingsNotificationsShowInHistoryEnabled=_iosSettingsNotificationsShowInHistoryEnabled;
@property (nonatomic) BOOL iosSettingsNotificationsShowOnLockScreenEnabled; // @synthesize iosSettingsNotificationsShowOnLockScreenEnabled=_iosSettingsNotificationsShowOnLockScreenEnabled;
@property (nonatomic) BOOL iosSettingsNotificationsSoundEnabled; // @synthesize iosSettingsNotificationsSoundEnabled=_iosSettingsNotificationsSoundEnabled;
@property (nonatomic) BOOL isNewUser; // @synthesize isNewUser=_isNewUser;
@property (nonatomic) BOOL isPaidSubscriber; // @synthesize isPaidSubscriber=_isPaidSubscriber;
@property (nonatomic) BOOL isPaidSubscriberFromAppStore; // @synthesize isPaidSubscriberFromAppStore=_isPaidSubscriberFromAppStore;
@property (nonatomic) BOOL isPaidSubscriberFromNews; // @synthesize isPaidSubscriberFromNews=_isPaidSubscriberFromNews;
@property (nonatomic) BOOL isPaidSubscriberFromThirdParty; // @synthesize isPaidSubscriberFromThirdParty=_isPaidSubscriberFromThirdParty;
@property (strong, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property (nonatomic) long long lastAppOpenDate; // @synthesize lastAppOpenDate=_lastAppOpenDate;
@property (nonatomic) BOOL locationPermissionGranted; // @synthesize locationPermissionGranted=_locationPermissionGranted;
@property (nonatomic) int newsWidgetModeGroup; // @synthesize newsWidgetModeGroup=_newsWidgetModeGroup;
@property (strong, nonatomic) NSString *newsWidgetModeGroupId; // @synthesize newsWidgetModeGroupId=_newsWidgetModeGroupId;
@property (nonatomic) BOOL notificationsEnabled; // @synthesize notificationsEnabled=_notificationsEnabled;
@property (strong, nonatomic) NSString *notwUserId; // @synthesize notwUserId=_notwUserId;
@property (strong, nonatomic) NSString *originatingCampaignId; // @synthesize originatingCampaignId=_originatingCampaignId;
@property (strong, nonatomic) NSString *originatingCampaignType; // @synthesize originatingCampaignType=_originatingCampaignType;
@property (strong, nonatomic) NSString *originatingCreativeId; // @synthesize originatingCreativeId=_originatingCreativeId;
@property (nonatomic) int osInstallVariant; // @synthesize osInstallVariant=_osInstallVariant;
@property (strong, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property (strong, nonatomic) NSString *personalizationPortraitVariantName; // @synthesize personalizationPortraitVariantName=_personalizationPortraitVariantName;
@property (strong, nonatomic) NSString *previousAppVersion; // @synthesize previousAppVersion=_previousAppVersion;
@property (strong, nonatomic) NSString *previousOsVersion; // @synthesize previousOsVersion=_previousOsVersion;
@property (nonatomic) BOOL privateDataEncrypted; // @synthesize privateDataEncrypted=_privateDataEncrypted;
@property (nonatomic) BOOL privateDataSyncOn; // @synthesize privateDataSyncOn=_privateDataSyncOn;
@property (strong, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property (nonatomic) BOOL progressivePersonalizationAllowed; // @synthesize progressivePersonalizationAllowed=_progressivePersonalizationAllowed;
@property (nonatomic) int reachabilityStatus; // @synthesize reachabilityStatus=_reachabilityStatus;
@property (nonatomic) BOOL runningObsolete; // @synthesize runningObsolete=_runningObsolete;
@property (strong, nonatomic) NSData *sessionId; // @synthesize sessionId=_sessionId;
@property (strong, nonatomic) NSData *sessionIdWatch; // @synthesize sessionIdWatch=_sessionIdWatch;
@property (nonatomic) BOOL signedIntoIcloud; // @synthesize signedIntoIcloud=_signedIntoIcloud;
@property (nonatomic) long long testBucket; // @synthesize testBucket=_testBucket;
@property (nonatomic) int textSize; // @synthesize textSize=_textSize;
@property (nonatomic) BOOL upgradedFromObsolete; // @synthesize upgradedFromObsolete=_upgradedFromObsolete;
@property (strong, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property (readonly, nonatomic) int *userSegmentationSegmentSetIds;
@property (readonly, nonatomic) unsigned long long userSegmentationSegmentSetIdsCount;
@property (readonly, nonatomic) long long *userSegmentationTreatmentIds;
@property (readonly, nonatomic) unsigned long long userSegmentationTreatmentIdsCount;
@property (nonatomic) long long userStartDate; // @synthesize userStartDate=_userStartDate;
@property (strong, nonatomic) NSString *userStorefrontId; // @synthesize userStorefrontId=_userStorefrontId;
@property (nonatomic) int utcOffset; // @synthesize utcOffset=_utcOffset;
@property (strong, nonatomic) NSString *watchSessionId; // @synthesize watchSessionId=_watchSessionId;
@property (nonatomic) int widgetDisplayMode; // @synthesize widgetDisplayMode=_widgetDisplayMode;
@property (nonatomic) int widgetDisplayModeSessionEnd; // @synthesize widgetDisplayModeSessionEnd=_widgetDisplayModeSessionEnd;
@property (nonatomic) int widgetModeType; // @synthesize widgetModeType=_widgetModeType;
@property (strong, nonatomic) NSData *widgetSessionId; // @synthesize widgetSessionId=_widgetSessionId;
@property (strong, nonatomic) NSString *widgetUserId; // @synthesize widgetUserId=_widgetUserId;

- (void).cxx_destruct;
- (int)StringAsCampaignType:(id)arg1;
- (int)StringAsCellularRadioAccessTechnology:(id)arg1;
- (int)StringAsNewsWidgetModeGroup:(id)arg1;
- (int)StringAsOsInstallVariant:(id)arg1;
- (int)StringAsReachabilityStatus:(id)arg1;
- (int)StringAsWidgetDisplayMode:(id)arg1;
- (int)StringAsWidgetDisplayModeSessionEnd:(id)arg1;
- (int)StringAsWidgetModeType:(id)arg1;
- (void)addUserSegmentationSegmentSetIds:(int)arg1;
- (void)addUserSegmentationTreatmentIds:(long long)arg1;
- (id)campaignTypeAsString:(int)arg1;
- (id)cellularRadioAccessTechnologyAsString:(int)arg1;
- (void)clearUserSegmentationSegmentSetIds;
- (void)clearUserSegmentationTreatmentIds;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)newsWidgetModeGroupAsString:(int)arg1;
- (id)osInstallVariantAsString:(int)arg1;
- (id)reachabilityStatusAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setUserSegmentationSegmentSetIds:(int *)arg1 count:(unsigned long long)arg2;
- (void)setUserSegmentationTreatmentIds:(long long *)arg1 count:(unsigned long long)arg2;
- (int)userSegmentationSegmentSetIdsAtIndex:(unsigned long long)arg1;
- (long long)userSegmentationTreatmentIdsAtIndex:(unsigned long long)arg1;
- (id)widgetDisplayModeAsString:(int)arg1;
- (id)widgetDisplayModeSessionEndAsString:(int)arg1;
- (id)widgetModeTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

