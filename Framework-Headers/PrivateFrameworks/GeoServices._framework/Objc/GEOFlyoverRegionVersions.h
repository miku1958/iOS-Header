//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface GEOFlyoverRegionVersions : PBCodable <NSCopying>
{
    struct GEOFlyoverRegion *_regions;
    unsigned long long _regionsCount;
    unsigned long long _regionsSpace;
}

@property (readonly, nonatomic) struct GEOFlyoverRegion *regions;
@property (readonly, nonatomic) unsigned long long regionsCount;

+ (BOOL)isValid:(id)arg1;
- (void)addRegion:(struct GEOFlyoverRegion)arg1;
- (void)clearRegions;
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
- (struct GEOFlyoverRegion)regionAtIndex:(unsigned long long)arg1;
- (void)setRegions:(struct GEOFlyoverRegion *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end

