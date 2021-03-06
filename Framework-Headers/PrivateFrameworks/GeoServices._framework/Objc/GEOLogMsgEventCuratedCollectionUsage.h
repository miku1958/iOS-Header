//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOTouristInfo;

@interface GEOLogMsgEventCuratedCollectionUsage : PBCodable <NSCopying>
{
    double _collectionFirstViewedDate;
    double _collectionLastViewedDate;
    unsigned long long _collectionMuid;
    GEOTouristInfo *_touristInfo;
    unsigned int _viewsToday;
    struct {
        unsigned int has_collectionFirstViewedDate:1;
        unsigned int has_collectionLastViewedDate:1;
        unsigned int has_collectionMuid:1;
        unsigned int has_viewsToday:1;
    } _flags;
}

@property (nonatomic) double collectionFirstViewedDate;
@property (nonatomic) double collectionLastViewedDate;
@property (nonatomic) unsigned long long collectionMuid;
@property (nonatomic) BOOL hasCollectionFirstViewedDate;
@property (nonatomic) BOOL hasCollectionLastViewedDate;
@property (nonatomic) BOOL hasCollectionMuid;
@property (readonly, nonatomic) BOOL hasTouristInfo;
@property (nonatomic) BOOL hasViewsToday;
@property (strong, nonatomic) GEOTouristInfo *touristInfo;
@property (nonatomic) unsigned int viewsToday;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

