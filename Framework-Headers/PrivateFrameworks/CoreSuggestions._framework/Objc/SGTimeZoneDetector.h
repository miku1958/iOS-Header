//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SGTimeZoneDetector : NSObject
{
    NSDictionary *_countryCodeForCountryName;
    NSDictionary *_timeZoneForCountryCode;
    NSDictionary *_timeZoneForCountryCodeDictionarySupplement;
    NSDictionary *_regionAbbreviations;
    NSDictionary *_timeZoneForPostalCode;
    NSDictionary *_timeZoneAbbreviations;
    NSDictionary *_uniquePostalCodeFormats;
    NSDictionary *_postalCodeFormats;
    BOOL _keepData;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    unsigned long long _memoryPressureStatus;
}

+ (id)_normalizedCountryString:(id)arg1;
+ (id)_normalizedString:(id)arg1;
+ (id)_regularExpressionForPostalCodeFormat:(id)arg1;
- (void).cxx_destruct;
- (id)_countryCodeByCountryNameFromNormalizedAddressWords:(id)arg1;
- (id)_countryCodeByRegionAbbreviationFromNormalizedAddress:(id)arg1;
- (id)_countryCodeByRegionNameFromNormalizedAddress:(id)arg1 withWords:(id)arg2;
- (id)_countryCodeByRegularExpressionFromNormalizedAddress:(id)arg1;
- (id)_getCountryCodeForCountryName;
- (id)_getPostalCodeFormats;
- (id)_getRegionAbbreviations;
- (id)_getRegionNames;
- (id)_getTimeZoneAbbreviations;
- (id)_getTimeZoneForCountryCode;
- (id)_getTimeZoneForCountryCodeDictionarySupplement;
- (id)_getTimeZoneForPostalCode;
- (id)_getUniquePostalCodeFormats;
- (void)_handleMemoryPressureStatus;
- (id)_postalCodeForAddress:(id)arg1 withCountryCode:(id)arg2;
- (void)_readPlistRegionAbbreviationsData;
- (id)_timeZoneNameForPostalCode:(id)arg1 withPostalCodeTable:(id)arg2;
- (void)cleanupCache;
- (id)countryCodeForAddress:(id)arg1;
- (id)init;
- (id)timeZoneNameForAddress:(id)arg1 withCountryCode:(id)arg2;

@end

