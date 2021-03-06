//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_PARRevGeoResolution-Protocol.h>

@class NSArray, NSData, NSString;

__attribute__((visibility("hidden")))
@interface _PARRevGeoResolution : PBCodable <_PARRevGeoResolution, NSSecureCoding>
{
    NSString *_country;
    NSString *_administrativeArea;
    NSString *_subAdministrativeArea;
    NSString *_locality;
    NSArray *_formattedAddressLines;
}

@property (copy, nonatomic) NSString *administrativeArea; // @synthesize administrativeArea=_administrativeArea;
@property (copy, nonatomic) NSString *country; // @synthesize country=_country;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *formattedAddressLines; // @synthesize formattedAddressLines=_formattedAddressLines;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *locality; // @synthesize locality=_locality;
@property (copy, nonatomic) NSString *subAdministrativeArea; // @synthesize subAdministrativeArea=_subAdministrativeArea;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addFormattedAddressLines:(id)arg1;
- (void)clearFormattedAddressLines;
- (id)dictionaryRepresentation;
- (id)formattedAddressLinesAtIndex:(unsigned long long)arg1;
- (unsigned long long)formattedAddressLinesCount;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

