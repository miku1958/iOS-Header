//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSString, PBUnknownFields, _INPBValueMetadata;

@interface _INPBImageValue : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _height;
    double _width;
    NSString *_uri;
    _INPBValueMetadata *_valueMetadata;
    struct {
        unsigned int height:1;
        unsigned int width:1;
    } _has;
}

@property (nonatomic) BOOL hasHeight;
@property (readonly, nonatomic) BOOL hasUri;
@property (readonly, nonatomic) BOOL hasValueMetadata;
@property (nonatomic) BOOL hasWidth;
@property (nonatomic) double height; // @synthesize height=_height;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (strong, nonatomic) NSString *uri; // @synthesize uri=_uri;
@property (strong, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
@property (nonatomic) double width; // @synthesize width=_width;

+ (id)options;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

