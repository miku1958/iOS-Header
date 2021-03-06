//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/NSCopying-Protocol.h>
#import <WeatherFoundation/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSLocale, NSString, NSURL, WFAQIScale, WFAQIScaleCategory, WFAirPollutant, WFAirQualityProviderAttribution, WFLocation;

@interface WFAirQualityConditions : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _temporarilyUnavailable;
    WFLocation *_location;
    NSDate *_date;
    NSDate *_expirationDate;
    NSString *_provider;
    WFAirQualityProviderAttribution *_providerAttribution;
    NSString *_scaleIdentifier;
    WFAQIScale *_scale;
    WFAQIScaleCategory *_currentScaleCategory;
    NSURL *_learnMoreURL;
    unsigned long long _significance;
    NSArray *_pollutants;
    WFAirPollutant *_primaryPollutant;
    unsigned long long _airQualityIndex;
    unsigned long long _currentCategoryIndex;
    NSString *_localizedRecommendation;
    NSString *_localizedDisclaimer;
    unsigned long long _category;
    NSLocale *_locale;
    NSString *_localizedAirQualityCategory;
    NSString *_airQualityScale;
    unsigned long long _localizedAirQualityIndex;
    WFAQIScaleCategory *_localizedAirQualityScaleCategory;
}

@property (nonatomic) unsigned long long airQualityIndex; // @synthesize airQualityIndex=_airQualityIndex;
@property (copy, nonatomic) NSString *airQualityScale; // @synthesize airQualityScale=_airQualityScale;
@property (nonatomic) unsigned long long category; // @synthesize category=_category;
@property (nonatomic) unsigned long long currentCategoryIndex; // @synthesize currentCategoryIndex=_currentCategoryIndex;
@property (strong, nonatomic) WFAQIScaleCategory *currentScaleCategory; // @synthesize currentScaleCategory=_currentScaleCategory;
@property (copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property (copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (copy, nonatomic) NSURL *learnMoreURL; // @synthesize learnMoreURL=_learnMoreURL;
@property (copy, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property (copy, nonatomic) NSString *localizedAirQualityCategory; // @synthesize localizedAirQualityCategory=_localizedAirQualityCategory;
@property (nonatomic) unsigned long long localizedAirQualityIndex; // @synthesize localizedAirQualityIndex=_localizedAirQualityIndex;
@property (strong, nonatomic) WFAQIScaleCategory *localizedAirQualityScaleCategory; // @synthesize localizedAirQualityScaleCategory=_localizedAirQualityScaleCategory;
@property (copy, nonatomic) NSString *localizedDisclaimer; // @synthesize localizedDisclaimer=_localizedDisclaimer;
@property (copy, nonatomic) NSString *localizedRecommendation; // @synthesize localizedRecommendation=_localizedRecommendation;
@property (strong, nonatomic) WFLocation *location; // @synthesize location=_location;
@property (strong, nonatomic) NSArray *pollutants; // @synthesize pollutants=_pollutants;
@property (strong, nonatomic) WFAirPollutant *primaryPollutant; // @synthesize primaryPollutant=_primaryPollutant;
@property (copy, nonatomic) NSString *provider; // @synthesize provider=_provider;
@property (strong, nonatomic) WFAirQualityProviderAttribution *providerAttribution; // @synthesize providerAttribution=_providerAttribution;
@property (strong, nonatomic) WFAQIScale *scale; // @synthesize scale=_scale;
@property (copy, nonatomic) NSString *scaleIdentifier; // @synthesize scaleIdentifier=_scaleIdentifier;
@property (nonatomic) unsigned long long significance; // @synthesize significance=_significance;
@property (nonatomic) BOOL temporarilyUnavailable; // @synthesize temporarilyUnavailable=_temporarilyUnavailable;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

