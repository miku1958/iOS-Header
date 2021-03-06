//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBImageValue-Protocol.h>

@class NSData, NSString, _INPBValueMetadata;

@interface _INPBImageValue : PBCodable <_INPBImageValue, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int height:1;
        unsigned int renderingMode:1;
        unsigned int type:1;
        unsigned int width:1;
    } _has;
    int _renderingMode;
    int _type;
    NSData *_data;
    double _height;
    NSString *_proxyServiceIdentifier;
    NSString *_uri;
    _INPBValueMetadata *_valueMetadata;
    double _width;
}

@property (copy, nonatomic) NSData *data; // @synthesize data=_data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasData;
@property (nonatomic) BOOL hasHeight;
@property (readonly, nonatomic) BOOL hasProxyServiceIdentifier;
@property (nonatomic) BOOL hasRenderingMode;
@property (nonatomic) BOOL hasType;
@property (readonly, nonatomic) BOOL hasUri;
@property (readonly, nonatomic) BOOL hasValueMetadata;
@property (nonatomic) BOOL hasWidth;
@property (readonly) unsigned long long hash;
@property (nonatomic) double height; // @synthesize height=_height;
@property (copy, nonatomic) NSString *proxyServiceIdentifier; // @synthesize proxyServiceIdentifier=_proxyServiceIdentifier;
@property (nonatomic) int renderingMode; // @synthesize renderingMode=_renderingMode;
@property (readonly) Class superclass;
@property (nonatomic) int type; // @synthesize type=_type;
@property (copy, nonatomic) NSString *uri; // @synthesize uri=_uri;
@property (strong, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
@property (nonatomic) double width; // @synthesize width=_width;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (int)StringAsRenderingMode:(id)arg1;
- (int)StringAsType:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)renderingModeAsString:(int)arg1;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

