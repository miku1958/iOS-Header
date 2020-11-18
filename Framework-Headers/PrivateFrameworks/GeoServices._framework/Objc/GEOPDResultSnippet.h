//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDPriceDescription, GEOPDRating, NSMutableArray, NSString, PBUnknownFields;

@interface GEOPDResultSnippet : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_category;
    NSMutableArray *_childPlaces;
    unsigned int _distanceDisplayThreshold;
    NSString *_locationString;
    NSString *_name;
    GEOPDPriceDescription *_priceDescription;
    GEOPDRating *_priceRange;
    struct {
        unsigned int distanceDisplayThreshold:1;
    } _has;
}

@property (strong, nonatomic) NSString *category; // @synthesize category=_category;
@property (strong, nonatomic) NSMutableArray *childPlaces; // @synthesize childPlaces=_childPlaces;
@property (nonatomic) unsigned int distanceDisplayThreshold; // @synthesize distanceDisplayThreshold=_distanceDisplayThreshold;
@property (readonly, nonatomic) BOOL hasCategory;
@property (nonatomic) BOOL hasDistanceDisplayThreshold;
@property (readonly, nonatomic) BOOL hasLocationString;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasPriceDescription;
@property (readonly, nonatomic) BOOL hasPriceRange;
@property (strong, nonatomic) NSString *locationString; // @synthesize locationString=_locationString;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) GEOPDPriceDescription *priceDescription; // @synthesize priceDescription=_priceDescription;
@property (strong, nonatomic) GEOPDRating *priceRange; // @synthesize priceRange=_priceRange;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)childPlaceType;
+ (id)resultSnippetForPlaceData:(id)arg1;
- (void).cxx_destruct;
- (void)addChildPlace:(id)arg1;
- (id)childPlaceAtIndex:(unsigned long long)arg1;
- (unsigned long long)childPlacesCount;
- (void)clearChildPlaces;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

