//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOTransitNamedItem-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, NSMutableArray, NSString, PBUnknownFields;

@interface GEOPBTransitStation : PBCodable <GEOTransitNamedItem, NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _muid;
    GEOLatLng *_location;
    NSString *_nameDisplayString;
    unsigned int _stationIndex;
    int _structureType;
    NSMutableArray *_zoomNames;
    struct {
        unsigned int muid:1;
        unsigned int stationIndex:1;
        unsigned int structureType:1;
    } _has;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasLocation;
@property (nonatomic) BOOL hasMuid;
@property (nonatomic) BOOL hasMuid;
@property (readonly, nonatomic) BOOL hasNameDisplayString;
@property (nonatomic) BOOL hasStationIndex;
@property (nonatomic) BOOL hasStructureType;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) GEOLatLng *location; // @synthesize location=_location;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) unsigned long long muid; // @synthesize muid=_muid;
@property (strong, nonatomic) NSString *nameDisplayString; // @synthesize nameDisplayString=_nameDisplayString;
@property (nonatomic) unsigned int stationIndex; // @synthesize stationIndex=_stationIndex;
@property (nonatomic) int structureType; // @synthesize structureType=_structureType;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (strong, nonatomic) NSMutableArray *zoomNames; // @synthesize zoomNames=_zoomNames;

+ (Class)zoomNameType;
- (void).cxx_destruct;
- (int)StringAsStructureType:(id)arg1;
- (void)addZoomName:(id)arg1;
- (id)bestName;
- (void)clearZoomNames;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)identifier;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)structureTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;
- (id)zoomNameAtIndex:(unsigned long long)arg1;
- (unsigned long long)zoomNamesCount;

@end
