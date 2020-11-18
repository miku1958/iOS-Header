//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOPhotoOptions : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _photoSizes;
    int _maxPhotos;
    int _photoType;
    struct {
        unsigned int has_photoType:1;
    } _flags;
}

@property (nonatomic) BOOL hasPhotoType;
@property (nonatomic) int maxPhotos;
@property (readonly, nonatomic) int *photoSizes;
@property (readonly, nonatomic) unsigned long long photoSizesCount;
@property (nonatomic) int photoType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsPhotoSizes:(id)arg1;
- (int)StringAsPhotoType:(id)arg1;
- (void)addPhotoSize:(int)arg1;
- (void)clearPhotoSizes;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)photoSizeAtIndex:(unsigned long long)arg1;
- (id)photoSizesAsString:(int)arg1;
- (id)photoTypeAsString:(int)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setPhotoSizes:(int *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end
