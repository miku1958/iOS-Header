//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDPhoto, NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDCaptionedPhoto : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_author;
    NSString *_caption;
    NSString *_licenseDescription;
    NSString *_licenseUrl;
    GEOPDPhoto *_photo;
    BOOL _displayFullPhotoInline;
    BOOL _useGallery;
    struct {
        unsigned int displayFullPhotoInline:1;
        unsigned int useGallery:1;
    } _has;
}

@property (strong, nonatomic) NSString *author; // @synthesize author=_author;
@property (strong, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property (nonatomic) BOOL displayFullPhotoInline; // @synthesize displayFullPhotoInline=_displayFullPhotoInline;
@property (readonly, nonatomic) BOOL hasAuthor;
@property (readonly, nonatomic) BOOL hasCaption;
@property (nonatomic) BOOL hasDisplayFullPhotoInline;
@property (readonly, nonatomic) BOOL hasLicenseDescription;
@property (readonly, nonatomic) BOOL hasLicenseUrl;
@property (readonly, nonatomic) BOOL hasPhoto;
@property (nonatomic) BOOL hasUseGallery;
@property (strong, nonatomic) NSString *licenseDescription; // @synthesize licenseDescription=_licenseDescription;
@property (strong, nonatomic) NSString *licenseUrl; // @synthesize licenseUrl=_licenseUrl;
@property (strong, nonatomic) GEOPDPhoto *photo; // @synthesize photo=_photo;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (nonatomic) BOOL useGallery; // @synthesize useGallery=_useGallery;

+ (id)captionedPhotosForPlaceData:(id)arg1;
- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

