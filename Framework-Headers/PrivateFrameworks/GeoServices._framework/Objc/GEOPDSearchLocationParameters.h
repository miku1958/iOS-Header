//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDTransportHint, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchLocationParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOPDTransportHint *_searchTransportHint;
    int _searchLocationParametersType;
    struct {
        unsigned int has_searchLocationParametersType:1;
    } _flags;
}

@property (nonatomic) BOOL hasSearchLocationParametersType;
@property (readonly, nonatomic) BOOL hasSearchTransportHint;
@property (nonatomic) int searchLocationParametersType;
@property (strong, nonatomic) GEOPDTransportHint *searchTransportHint;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsSearchLocationParametersType:(id)arg1;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)searchLocationParametersTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
