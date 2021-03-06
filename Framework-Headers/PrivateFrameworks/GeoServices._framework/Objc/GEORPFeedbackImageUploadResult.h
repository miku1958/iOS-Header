//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

@interface GEORPFeedbackImageUploadResult : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_imageUploadInfos;
}

@property (strong, nonatomic) NSMutableArray *imageUploadInfos;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)imageUploadInfoType;
+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)addImageUploadInfo:(id)arg1;
- (void)clearImageUploadInfos;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)imageUploadInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageUploadInfosCount;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

