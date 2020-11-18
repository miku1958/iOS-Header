//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSupportsOfflineMaps : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    int _offlinePlacecardSuggestion;
    BOOL _supportsOfflineMaps;
    struct {
        unsigned int has_offlinePlacecardSuggestion:1;
        unsigned int has_supportsOfflineMaps:1;
    } _flags;
}

@property (nonatomic) BOOL hasOfflinePlacecardSuggestion;
@property (nonatomic) BOOL hasSupportsOfflineMaps;
@property (nonatomic) int offlinePlacecardSuggestion;
@property (nonatomic) BOOL supportsOfflineMaps;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsOfflinePlacecardSuggestion:(id)arg1;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)offlinePlacecardSuggestionAsString:(int)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
