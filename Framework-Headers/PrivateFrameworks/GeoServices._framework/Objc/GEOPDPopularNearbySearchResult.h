//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMapRegion, NSString, PBUnknownFields;

@interface GEOPDPopularNearbySearchResult : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOMapRegion *_displayMapRegion;
    NSString *_sectionHeader;
    BOOL _isChainResultSet;
    CDStruct_5984ff81 _has;
}

@property (strong, nonatomic) GEOMapRegion *displayMapRegion; // @synthesize displayMapRegion=_displayMapRegion;
@property (readonly, nonatomic) BOOL hasDisplayMapRegion;
@property (nonatomic) BOOL hasIsChainResultSet;
@property (readonly, nonatomic) BOOL hasSectionHeader;
@property (nonatomic) BOOL isChainResultSet; // @synthesize isChainResultSet=_isChainResultSet;
@property (strong, nonatomic) NSString *sectionHeader; // @synthesize sectionHeader=_sectionHeader;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
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
