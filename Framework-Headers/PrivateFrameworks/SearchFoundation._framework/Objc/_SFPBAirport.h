//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBAirport-Protocol.h>

@class NSData, NSString, _SFPBLatLng, _SFPBTimeZone;

@interface _SFPBAirport : PBCodable <_SFPBAirport, NSSecureCoding>
{
    NSString *_code;
    _SFPBTimeZone *_timezone;
    _SFPBLatLng *_location;
    NSString *_city;
    NSString *_street;
    NSString *_district;
    NSString *_state;
    NSString *_postalCode;
    NSString *_countryCode;
    NSString *_country;
    NSString *_name;
}

@property (copy, nonatomic) NSString *city; // @synthesize city=_city;
@property (copy, nonatomic) NSString *code; // @synthesize code=_code;
@property (copy, nonatomic) NSString *country; // @synthesize country=_country;
@property (copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *district; // @synthesize district=_district;
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
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (strong, nonatomic) _SFPBLatLng *location; // @synthesize location=_location;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (copy, nonatomic) NSString *postalCode; // @synthesize postalCode=_postalCode;
@property (copy, nonatomic) NSString *state; // @synthesize state=_state;
@property (copy, nonatomic) NSString *street; // @synthesize street=_street;
@property (readonly) Class superclass;
@property (strong, nonatomic) _SFPBTimeZone *timezone; // @synthesize timezone=_timezone;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
