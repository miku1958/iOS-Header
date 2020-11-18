//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AdCore/ADSingleton.h>

@class ADClientSettingsResponse, NSArray, NSString, NSURL;

@interface ADSearchAdsSettings : ADSingleton
{
    BOOL _isTest;
    BOOL _isBaseline;
    BOOL _isCustomTemplate;
    BOOL _isRequestedImage;
    BOOL _isRequestedRating;
    NSURL *_defaultToroServerURL;
    NSURL *_defaultAdTargetingServerURL;
    NSString *_storefrontLocalizationLanguage;
    NSString *_algoID;
    NSArray *_userKeyboards;
    double _requestedLocationAccuracy;
    double _locationGridSpacing;
    double _reverseGeolocationRefreshThresholdInMeters;
    double _clickExpirationThresholdInSeconds;
    double _frequencyCapExpirationInSeconds;
    unsigned long long _maxFrequencyCapElements;
    unsigned long long _maxClickCapElements;
    ADClientSettingsResponse *_clientSettings;
}

@property (strong, nonatomic) NSString *algoID; // @synthesize algoID=_algoID;
@property (nonatomic) double clickExpirationThresholdInSeconds; // @synthesize clickExpirationThresholdInSeconds=_clickExpirationThresholdInSeconds;
@property (strong, nonatomic) ADClientSettingsResponse *clientSettings; // @synthesize clientSettings=_clientSettings;
@property (strong, nonatomic) NSURL *defaultAdTargetingServerURL; // @synthesize defaultAdTargetingServerURL=_defaultAdTargetingServerURL;
@property (strong, nonatomic) NSURL *defaultToroServerURL; // @synthesize defaultToroServerURL=_defaultToroServerURL;
@property (nonatomic) double frequencyCapExpirationInSeconds; // @synthesize frequencyCapExpirationInSeconds=_frequencyCapExpirationInSeconds;
@property (nonatomic) BOOL isBaseline; // @synthesize isBaseline=_isBaseline;
@property (nonatomic) BOOL isCustomTemplate; // @synthesize isCustomTemplate=_isCustomTemplate;
@property (nonatomic) BOOL isRequestedImage; // @synthesize isRequestedImage=_isRequestedImage;
@property (nonatomic) BOOL isRequestedRating; // @synthesize isRequestedRating=_isRequestedRating;
@property (nonatomic) BOOL isTest; // @synthesize isTest=_isTest;
@property (nonatomic) double locationGridSpacing; // @synthesize locationGridSpacing=_locationGridSpacing;
@property (nonatomic) unsigned long long maxClickCapElements; // @synthesize maxClickCapElements=_maxClickCapElements;
@property (nonatomic) unsigned long long maxFrequencyCapElements; // @synthesize maxFrequencyCapElements=_maxFrequencyCapElements;
@property (nonatomic) double requestedLocationAccuracy; // @synthesize requestedLocationAccuracy=_requestedLocationAccuracy;
@property (nonatomic) double reverseGeolocationRefreshThresholdInMeters; // @synthesize reverseGeolocationRefreshThresholdInMeters=_reverseGeolocationRefreshThresholdInMeters;
@property (strong, nonatomic) NSString *storefrontLocalizationLanguage; // @synthesize storefrontLocalizationLanguage=_storefrontLocalizationLanguage;
@property (strong, nonatomic) NSArray *userKeyboards; // @synthesize userKeyboards=_userKeyboards;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)applyClientSettings;
- (void)checkForInternalSettingsOverrides;
- (double)clientSettingsExpirationDate;
- (void)expireClientSettings;
- (id)init;
- (void)overrideFrequencyCapExpiration:(double)arg1;
- (void)overrideMaxFrequencyCapElements:(unsigned long long)arg1;
- (void)overrideMaxToroClickElements:(unsigned long long)arg1;
- (void)overrideRevGeoThreshold:(double)arg1;
- (void)overrideToroClickExpiration:(double)arg1;
- (void)refresh;
- (void)refreshClientSettings:(CDUnknownBlockType)arg1;
- (void)restoreClientSettings;

@end

