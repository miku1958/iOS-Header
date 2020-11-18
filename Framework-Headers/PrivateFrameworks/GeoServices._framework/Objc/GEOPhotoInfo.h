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
    int _size;
    NSString *_url;
    struct {
        unsigned int size:1;
    } _has;
}

@property (nonatomic) BOOL hasSize;
@property (readonly, nonatomic) BOOL hasUrl;
@property (nonatomic) int size; // @synthesize size=_size;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (strong, nonatomic) NSString *url; // @synthesize url=_url;

- (void).cxx_destruct;
- (int)StringAsSize:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithPlaceDataPhotoContent:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)sizeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

