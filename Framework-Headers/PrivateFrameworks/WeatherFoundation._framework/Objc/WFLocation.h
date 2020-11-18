//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/NSCopying-Protocol.h>
#import <WeatherFoundation/NSSecureCoding-Protocol.h>

@class CLLocation, NSDate, NSString, NSTimeZone;

@interface WFLocation : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_city;
    NSString *_county;
    NSString *_state;
    NSString *_stateAbbreviation;
    NSString *_country;
    NSString *_countryAbbreviation;
    CLLocation *_geoLocation;
    NSString *_locationID;
    NSTimeZone *_timeZone;
    long long _archiveVersion;
    NSString *_weatherDisplayName;
    NSString *_displayName;
    NSDate *_creationDate;
}

@property long long archiveVersion; // @synthesize archiveVersion=_archiveVersion;
@property (copy, nonatomic) NSString *city; // @synthesize city=_city;
@property (copy, nonatomic) NSString *country; // @synthesize country=_country;
@property (copy, nonatomic) NSString *countryAbbreviation; // @synthesize countryAbbreviation=_countryAbbreviation;
@property (copy, nonatomic) NSString *county; // @synthesize county=_county;
@property (copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property (copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (copy, nonatomic) CLLocation *geoLocation; // @synthesize geoLocation=_geoLocation;
@property (copy, nonatomic) NSString *locationID; // @synthesize locationID=_locationID;
@property (readonly, nonatomic) BOOL shouldQueryForAirQualityData;
@property (copy, nonatomic) NSString *state; // @synthesize state=_state;
@property (copy, nonatomic) NSString *stateAbbreviation; // @synthesize stateAbbreviation=_stateAbbreviation;
@property (copy, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property (copy, nonatomic) NSString *weatherDisplayName; // @synthesize weatherDisplayName=_weatherDisplayName;

+ (long long)currentArchiveVersion;
+ (id)knownKeys;
+ (id)locationsByConsolidatingDuplicates:(id)arg1 originalOrder:(id)arg2;
+ (id)locationsByConsolidatingDuplicatesInBucket:(id)arg1;
+ (id)locationsByFilteringDuplicates:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)cloudDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCloudDictionaryRepresentation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalDataRepresentation:(id)arg1;
- (id)initWithMapItem:(id)arg1;
- (id)initWithPlacemark:(id)arg1;
- (id)initWithSearchResponse:(id)arg1;
- (BOOL)isDay;
- (BOOL)isDayForDate:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)localDataRepresentation;
- (id)summary;
- (id)summaryThatIsCompact:(BOOL)arg1;
- (id)sunriseForDate:(id)arg1;
- (id)sunsetForDate:(id)arg1;

@end

