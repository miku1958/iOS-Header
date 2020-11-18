//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMapRegion, GEORPUpdatedLabel, NSMutableArray, NSString;

@interface GEORPDetails : PBCodable <NSCopying>
{
    int _directionsType;
    GEOMapRegion *_displayRegion;
    int _displayStyle;
    GEORPUpdatedLabel *_label;
    NSString *_localizedDescription;
    NSString *_localizedTitle;
    int _mapType;
    NSMutableArray *_places;
    struct {
        unsigned int directionsType:1;
        unsigned int displayStyle:1;
        unsigned int mapType:1;
    } _has;
}

@property (nonatomic) int directionsType; // @synthesize directionsType=_directionsType;
@property (strong, nonatomic) GEOMapRegion *displayRegion; // @synthesize displayRegion=_displayRegion;
@property (nonatomic) int displayStyle; // @synthesize displayStyle=_displayStyle;
@property (nonatomic) BOOL hasDirectionsType;
@property (readonly, nonatomic) BOOL hasDisplayRegion;
@property (nonatomic) BOOL hasDisplayStyle;
@property (readonly, nonatomic) BOOL hasLabel;
@property (readonly, nonatomic) BOOL hasLocalizedDescription;
@property (readonly, nonatomic) BOOL hasLocalizedTitle;
@property (nonatomic) BOOL hasMapType;
@property (strong, nonatomic) GEORPUpdatedLabel *label; // @synthesize label=_label;
@property (strong, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property (strong, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property (nonatomic) int mapType; // @synthesize mapType=_mapType;
@property (strong, nonatomic) NSMutableArray *places; // @synthesize places=_places;

- (void)addPlace:(id)arg1;
- (void)clearPlaces;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)placeAtIndex:(unsigned long long)arg1;
- (unsigned long long)placesCount;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
