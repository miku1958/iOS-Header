//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, _SFPBLatLng, _SFPBTimeZone;

@protocol _SFPBAirport <NSObject>

@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *code;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *district;
@property (readonly, nonatomic) BOOL hasCity;
@property (readonly, nonatomic) BOOL hasCode;
@property (readonly, nonatomic) BOOL hasCountry;
@property (readonly, nonatomic) BOOL hasCountryCode;
@property (readonly, nonatomic) BOOL hasDistrict;
@property (readonly, nonatomic) BOOL hasLocation;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasPostalCode;
@property (readonly, nonatomic) BOOL hasState;
@property (readonly, nonatomic) BOOL hasStreet;
@property (readonly, nonatomic) BOOL hasTimezone;
@property (readonly, nonatomic) NSData *jsonData;
@property (strong, nonatomic) _SFPBLatLng *location;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *postalCode;
@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSString *street;
@property (strong, nonatomic) _SFPBTimeZone *timezone;

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

