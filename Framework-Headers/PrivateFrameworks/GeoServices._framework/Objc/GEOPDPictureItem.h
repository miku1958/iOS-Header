//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDPhoto, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPictureItem : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDPhoto *_photo;
    NSString *_primaryText;
    NSString *_secondaryText;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _photoItemType;
    struct {
        unsigned int has_photoItemType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_photo:1;
        unsigned int read_primaryText:1;
        unsigned int read_secondaryText:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (readonly, nonatomic) BOOL hasPhoto;
@property (nonatomic) BOOL hasPhotoItemType;
@property (readonly, nonatomic) BOOL hasPrimaryText;
@property (readonly, nonatomic) BOOL hasSecondaryText;
@property (strong, nonatomic) GEOPDPhoto *photo;
@property (nonatomic) int photoItemType;
@property (strong, nonatomic) NSString *primaryText;
@property (strong, nonatomic) NSString *secondaryText;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsPhotoItemType:(id)arg1;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)photoItemTypeAsString:(int)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

