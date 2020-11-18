//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDPhoto, NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPictureItem : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOPDPhoto *_photo;
    int _photoItemType;
    NSString *_primaryText;
    NSString *_secondaryText;
    struct {
        unsigned int photoItemType:1;
    } _has;
}

@property (readonly, nonatomic) BOOL hasPhoto;
@property (nonatomic) BOOL hasPhotoItemType;
@property (readonly, nonatomic) BOOL hasPrimaryText;
@property (readonly, nonatomic) BOOL hasSecondaryText;
@property (strong, nonatomic) GEOPDPhoto *photo; // @synthesize photo=_photo;
@property (nonatomic) int photoItemType; // @synthesize photoItemType=_photoItemType;
@property (strong, nonatomic) NSString *primaryText; // @synthesize primaryText=_primaryText;
@property (strong, nonatomic) NSString *secondaryText; // @synthesize secondaryText=_secondaryText;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsPhotoItemType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)photoItemTypeAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

