//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDVenueLabel, NSMutableArray, PBUnknownFields;

@interface GEOPDFilterElementInfo : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_filterIds;
    GEOPDVenueLabel *_label;
}

@property (strong, nonatomic) NSMutableArray *filterIds; // @synthesize filterIds=_filterIds;
@property (readonly, nonatomic) BOOL hasLabel;
@property (strong, nonatomic) GEOPDVenueLabel *label; // @synthesize label=_label;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)filterIdType;
- (void).cxx_destruct;
- (void)addFilterId:(id)arg1;
- (void)clearFilterIds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)filterIdAtIndex:(unsigned long long)arg1;
- (unsigned long long)filterIdsCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

