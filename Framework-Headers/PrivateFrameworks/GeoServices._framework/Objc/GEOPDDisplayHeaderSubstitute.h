//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDRelatedSearchSuggestion, NSString, PBUnknownFields;

@interface GEOPDDisplayHeaderSubstitute : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_interpretedQuery;
    GEOPDRelatedSearchSuggestion *_relatedSearchSuggestion;
    int _substituteType;
    struct {
        unsigned int substituteType:1;
    } _has;
}

@property (readonly, nonatomic) BOOL hasInterpretedQuery;
@property (readonly, nonatomic) BOOL hasRelatedSearchSuggestion;
@property (nonatomic) BOOL hasSubstituteType;
@property (strong, nonatomic) NSString *interpretedQuery; // @synthesize interpretedQuery=_interpretedQuery;
@property (strong, nonatomic) GEOPDRelatedSearchSuggestion *relatedSearchSuggestion; // @synthesize relatedSearchSuggestion=_relatedSearchSuggestion;
@property (nonatomic) int substituteType; // @synthesize substituteType=_substituteType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsSubstituteType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)substituteTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

