//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ALCity, City, NSDictionary, NSNumber, NSString, NSURL;

@interface WorldClockCity : NSObject
{
    ALCity *_alCity;
    City *_weatherCity;
    NSString *_timeZone;
    NSString *_name;
    NSString *_countryName;
    NSString *_countryCode;
    NSString *_unlocalizedName;
    NSString *_unlocalizedCountryName;
}

@property (readonly, nonatomic) ALCity *alCity; // @synthesize alCity=_alCity;
@property (readonly, nonatomic) NSNumber *alCityId;
@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) NSString *countryName;
@property (readonly, nonatomic) NSURL *idUrl;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly, nonatomic) NSString *timeZone;
@property (readonly, nonatomic) NSString *unlocalizedCityName;
@property (readonly, nonatomic) NSString *unlocalizedCountryName;
@property (strong, nonatomic) City *weatherCity; // @synthesize weatherCity=_weatherCity;

+ (BOOL)isCachedLanguageStaleForProperties:(id)arg1;
+ (BOOL)isCachedLanguageStaleForProperties:(id)arg1 systemLanguage:(id)arg2;
+ (BOOL)isWorldClockCityProperties:(id)arg1;
+ (id)unlocalizedExampleCity;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithALCity:(id)arg1;
- (id)initWithALCityIdentifier:(int)arg1;
- (id)initWithProperties:(id)arg1;
- (id)initWithTimeZone:(id)arg1 countryCode:(id)arg2 name:(id)arg3 countryName:(id)arg4 unlocalizedName:(id)arg5 unlocalizedCountryName:(id)arg6;
- (BOOL)isEqual:(id)arg1;

@end

