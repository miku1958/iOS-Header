//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AdCore/ADSingleton.h>

@class ACAccount, NSString, NSURL;

@interface ADCoreSettings : ADSingleton
{
    BOOL _educationModeEnabled;
    BOOL _internationalRoaming;
    BOOL _hasDeterminedRoamingStatus;
    int _connectionType;
    float _timezone;
    int _runState;
    NSURL *_defaultServerURL;
    NSURL *_defaultConfigurationServerURL;
    double _jingleTimeoutInterval;
    double _adServerTimeoutInterval;
    double _NSURLConnectionTimeout;
    double _NSURLTransactionTimeout;
    NSString *_osVersionAndBuild;
    NSString *_deviceModel;
    NSString *_bundleIdentifier;
    NSString *_storefrontLocalizationLanguage;
    NSString *_homeCarrierMCC;
    NSString *_homeCarrierMNC;
    NSString *_iTunesStorefront;
}

@property (nonatomic) double NSURLConnectionTimeout; // @synthesize NSURLConnectionTimeout=_NSURLConnectionTimeout;
@property (nonatomic) double NSURLTransactionTimeout; // @synthesize NSURLTransactionTimeout=_NSURLTransactionTimeout;
@property (nonatomic) double adServerTimeoutInterval; // @synthesize adServerTimeoutInterval=_adServerTimeoutInterval;
@property (strong, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (nonatomic) int connectionType; // @synthesize connectionType=_connectionType;
@property (readonly, nonatomic) NSString *customJinglePayload;
@property (strong, nonatomic) NSURL *defaultConfigurationServerURL; // @synthesize defaultConfigurationServerURL=_defaultConfigurationServerURL;
@property (strong, nonatomic) NSURL *defaultServerURL; // @synthesize defaultServerURL=_defaultServerURL;
@property (strong, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property (readonly, nonatomic) BOOL educationModeEnabled; // @synthesize educationModeEnabled=_educationModeEnabled;
@property (nonatomic) BOOL hasDeterminedRoamingStatus; // @synthesize hasDeterminedRoamingStatus=_hasDeterminedRoamingStatus;
@property (copy, nonatomic) NSString *homeCarrierMCC; // @synthesize homeCarrierMCC=_homeCarrierMCC;
@property (copy, nonatomic) NSString *homeCarrierMNC; // @synthesize homeCarrierMNC=_homeCarrierMNC;
@property (readonly, nonatomic) ACAccount *iCloudAccount;
@property (readonly, nonatomic) NSString *iCloudAccountIdentifier;
@property (readonly, nonatomic) NSString *iCloudDSID;
@property (readonly, nonatomic) NSString *iTunesAccountDSID;
@property (readonly, nonatomic) ACAccount *iTunesStoreAccount;
@property (strong, nonatomic) NSString *iTunesStorefront; // @synthesize iTunesStorefront=_iTunesStorefront;
@property (nonatomic) BOOL internationalRoaming; // @synthesize internationalRoaming=_internationalRoaming;
@property (readonly, nonatomic) BOOL isManagedAppleID;
@property (readonly, nonatomic) BOOL isManagediCloudAccount;
@property (readonly, nonatomic) BOOL isManagediTunesAccount;
@property (nonatomic) BOOL isPersonalizedAdsEnabled;
@property (nonatomic) double jingleTimeoutInterval; // @synthesize jingleTimeoutInterval=_jingleTimeoutInterval;
@property (readonly, nonatomic) NSString *localeIdentifier;
@property (nonatomic) int maxSegmentSendInterval;
@property (strong, nonatomic) NSString *osVersionAndBuild; // @synthesize osVersionAndBuild=_osVersionAndBuild;
@property (nonatomic) int runState; // @synthesize runState=_runState;
@property (nonatomic) int segmentRetrievalInterval;
@property (strong, nonatomic) NSString *storefrontLocalizationLanguage; // @synthesize storefrontLocalizationLanguage=_storefrontLocalizationLanguage;
@property (nonatomic) float timezone; // @synthesize timezone=_timezone;
@property (readonly) BOOL unitTesting;

+ (BOOL)educationModeEnabled;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)deviceDescription;
- (int)deviceRunStateForBundleIdentifier:(id)arg1;
- (void)expire;
- (void)gatherTelephonyData;
- (id)init;
- (BOOL)isAccountRestricted;
- (BOOL)purpleBuddyWillRun;
- (void)reloadStorefront:(CDUnknownBlockType)arg1;
- (void)setIdentifierForAdvertisingAllowed:(BOOL)arg1;

@end
