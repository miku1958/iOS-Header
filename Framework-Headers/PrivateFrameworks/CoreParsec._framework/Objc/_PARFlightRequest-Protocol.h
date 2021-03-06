//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _PARLocation, _PARMapsSession;

@protocol _PARFlightRequest <NSObject>

@property (copy, nonatomic) NSString *countryCode;
@property (nonatomic) unsigned long long date;
@property (copy, nonatomic) NSString *effectiveSystemLanguage;
@property (copy, nonatomic) NSString *flightBundleId;
@property (copy, nonatomic) NSString *inputMode;
@property (copy, nonatomic) NSData *installedAppsSignature;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *locale;
@property (strong, nonatomic) _PARLocation *location;
@property (strong, nonatomic) _PARMapsSession *mapsSession;
@property (copy, nonatomic) NSArray *preferredLanguages;
@property (copy, nonatomic) NSString *query;
@property (nonatomic) int routineMode;
@property (copy, nonatomic) NSString *secretKey;
@property (nonatomic) int transportationMode;
@property (nonatomic) float uiScale;
@property (copy, nonatomic) NSString *userGUID;

- (void)addPreferredLanguages:(NSString *)arg1;
- (void)clearPreferredLanguages;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSString *)preferredLanguagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)preferredLanguagesCount;
@end

