//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

@interface GEOPhotoInfo : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_url;
    int _size;
    struct {
        unsigned int has_size:1;
    } _flags;
}

@property (nonatomic) BOOL hasSize;
@property (readonly, nonatomic) BOOL hasUrl;
@property (nonatomic) int size;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (strong, nonatomic) NSString *url;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsSize:(id)arg1;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithPlaceDataPhotoContent:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)sizeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
