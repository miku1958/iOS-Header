//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface GEOCoarseLocationTessellationOptions : PBCodable <NSCopying>
{
    CDStruct_9f2792e4 _zoomLevels;
    int _type;
}

@property (nonatomic) int type;
@property (readonly, nonatomic) unsigned int *zoomLevels;
@property (readonly, nonatomic) unsigned long long zoomLevelsCount;

+ (BOOL)isValid:(id)arg1;
- (int)StringAsType:(id)arg1;
- (void)addZoomLevels:(unsigned int)arg1;
- (void)clearZoomLevels;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
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
- (void)setZoomLevels:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;
- (unsigned int)zoomLevelsAtIndex:(unsigned long long)arg1;

@end
