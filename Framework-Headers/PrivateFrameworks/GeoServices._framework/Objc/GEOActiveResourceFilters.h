//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOActiveResourceFilters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    struct GEOActiveResourceFilter *_filters;
    unsigned long long _filtersCount;
    unsigned long long _filtersSpace;
}

@property (readonly, nonatomic) struct GEOActiveResourceFilter *filters;
@property (readonly, nonatomic) unsigned long long filtersCount;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)addFilter:(struct GEOActiveResourceFilter)arg1;
- (void)clearFilters;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (struct GEOActiveResourceFilter)filterAtIndex:(unsigned long long)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setFilters:(struct GEOActiveResourceFilter *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end
