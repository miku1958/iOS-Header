//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOFormattedString, PBUnknownFields;

@interface GEORoadDescription : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_formattedDescription;
    int _navigationFriendliness;
    struct {
        unsigned int has_navigationFriendliness:1;
    } _flags;
}

@property (strong, nonatomic) GEOFormattedString *formattedDescription;
@property (readonly, nonatomic) BOOL hasFormattedDescription;
@property (nonatomic) BOOL hasNavigationFriendliness;
@property (nonatomic) int navigationFriendliness;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsNavigationFriendliness:(id)arg1;
- (void)clearUnknownFields:(BOOL)arg1;
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
- (id)navigationFriendlinessAsString:(int)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

