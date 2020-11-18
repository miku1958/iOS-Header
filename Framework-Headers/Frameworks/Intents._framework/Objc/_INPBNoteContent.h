//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBNoteContent-Protocol.h>

@class NSString, _INPBImageNoteContent, _INPBTextNoteContent;

@interface _INPBNoteContent : PBCodable <_INPBNoteContent, NSSecureCoding, NSCopying>
{
    CDStruct_f953fb60 _has;
    BOOL __encodeLegacyGloryData;
    int _type;
    _INPBImageNoteContent *_image;
    _INPBTextNoteContent *_text;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasImage;
@property (readonly, nonatomic) BOOL hasText;
@property (nonatomic) BOOL hasType;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _INPBImageNoteContent *image; // @synthesize image=_image;
@property (readonly) Class superclass;
@property (strong, nonatomic) _INPBTextNoteContent *text; // @synthesize text=_text;
@property (nonatomic) int type; // @synthesize type=_type;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
