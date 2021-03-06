//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Preferences/NSCopying-Protocol.h>

@class NSString;

@interface KeychainSyncCountryInfo : NSObject <NSCopying>
{
    NSString *_countryCode;
    NSString *_countryName;
    NSString *_localizedCountryName;
    NSString *_dialingPrefix;
}

@property (strong, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property (strong, nonatomic) NSString *countryName; // @synthesize countryName=_countryName;
@property (strong, nonatomic) NSString *dialingPrefix; // @synthesize dialingPrefix=_dialingPrefix;
@property (strong, nonatomic) NSString *localizedCountryName; // @synthesize localizedCountryName=_localizedCountryName;

+ (void)_loadCountriesIfNeeded;
+ (id)allCountries;
+ (id)countryInfoForCountryCode:(id)arg1 dialingPrefix:(id)arg2;
+ (id)countryInfoWithDictionary:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;

@end

