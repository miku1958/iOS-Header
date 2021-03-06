//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOTileSetInfo : PBCodable <NSCopying>
{
    unsigned int _count;
    int _style;
    unsigned int _uncertainty;
    unsigned int _zoom;
    struct {
        unsigned int has_count:1;
        unsigned int has_style:1;
        unsigned int has_uncertainty:1;
        unsigned int has_zoom:1;
    } _flags;
}

@property (nonatomic) unsigned int count;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) BOOL hasStyle;
@property (nonatomic) BOOL hasUncertainty;
@property (nonatomic) BOOL hasZoom;
@property (nonatomic) int style;
@property (nonatomic) unsigned int uncertainty;
@property (nonatomic) unsigned int zoom;

+ (BOOL)isValid:(id)arg1;
- (int)StringAsStyle:(id)arg1;
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
- (id)styleAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

