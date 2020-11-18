//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBMapRegion-Protocol.h>

@class NSData, NSString;

@interface _SFPBMapRegion : PBCodable <_SFPBMapRegion, NSSecureCoding>
{
    CDStruct_d6cfdf4e _has;
    double _southLat;
    double _westLng;
    double _northLat;
    double _eastLng;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double eastLng; // @synthesize eastLng=_eastLng;
@property (readonly, nonatomic) BOOL hasEastLng;
@property (readonly, nonatomic) BOOL hasNorthLat;
@property (readonly, nonatomic) BOOL hasSouthLat;
@property (readonly, nonatomic) BOOL hasWestLng;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) double northLat; // @synthesize northLat=_northLat;
@property (nonatomic) double southLat; // @synthesize southLat=_southLat;
@property (readonly) Class superclass;
@property (nonatomic) double westLng; // @synthesize westLng=_westLng;

- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
