//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoMailKitServer/NSCopying-Protocol.h>

@class NSString;

@interface NNMKProtoAttachmentMetadata : PBCodable <NSCopying>
{
    NSString *_contentId;
    NSString *_fileName;
    unsigned int _fileSize;
    float _imageHeight;
    float _imageWidth;
    NSString *_mimePartNumber;
    unsigned int _type;
    BOOL _renderOnClient;
    struct {
        unsigned int fileSize:1;
        unsigned int imageHeight:1;
        unsigned int imageWidth:1;
        unsigned int type:1;
        unsigned int renderOnClient:1;
    } _has;
}

@property (strong, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property (strong, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property (nonatomic) unsigned int fileSize; // @synthesize fileSize=_fileSize;
@property (readonly, nonatomic) BOOL hasContentId;
@property (readonly, nonatomic) BOOL hasFileName;
@property (nonatomic) BOOL hasFileSize;
@property (nonatomic) BOOL hasImageHeight;
@property (nonatomic) BOOL hasImageWidth;
@property (readonly, nonatomic) BOOL hasMimePartNumber;
@property (nonatomic) BOOL hasRenderOnClient;
@property (nonatomic) BOOL hasType;
@property (nonatomic) float imageHeight; // @synthesize imageHeight=_imageHeight;
@property (nonatomic) float imageWidth; // @synthesize imageWidth=_imageWidth;
@property (strong, nonatomic) NSString *mimePartNumber; // @synthesize mimePartNumber=_mimePartNumber;
@property (nonatomic) BOOL renderOnClient; // @synthesize renderOnClient=_renderOnClient;
@property (nonatomic) unsigned int type; // @synthesize type=_type;

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

