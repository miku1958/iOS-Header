//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BarcodeSupport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface AWDBarcodeSupportCodePreviewedEvent : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _previewContentType;
    struct {
        unsigned int timestamp:1;
        unsigned int previewContentType:1;
    } _has;
}

@property (nonatomic) BOOL hasPreviewContentType;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int previewContentType; // @synthesize previewContentType=_previewContentType;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

- (int)StringAsPreviewContentType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)previewContentTypeAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
