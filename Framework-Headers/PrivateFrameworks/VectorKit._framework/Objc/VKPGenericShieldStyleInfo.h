//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <VectorKit/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface VKPGenericShieldStyleInfo : PBCodable <NSCopying>
{
    CDStruct_fae3dc92 _textDropShadowOffsets;
    unsigned int _backgroundColor;
    unsigned int _borderColor;
    int _style;
    unsigned int _textColor;
    unsigned int _textDropShadowColor;
    float _textDropShadowSize;
    unsigned int _textStrokeColor;
    float _textStrokeSize;
    struct {
        unsigned int backgroundColor:1;
        unsigned int borderColor:1;
        unsigned int style:1;
        unsigned int textColor:1;
        unsigned int textDropShadowColor:1;
        unsigned int textDropShadowSize:1;
        unsigned int textStrokeColor:1;
        unsigned int textStrokeSize:1;
    } _has;
}

@property (nonatomic) unsigned int backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (nonatomic) unsigned int borderColor; // @synthesize borderColor=_borderColor;
@property (nonatomic) BOOL hasBackgroundColor;
@property (nonatomic) BOOL hasBorderColor;
@property (nonatomic) BOOL hasStyle;
@property (nonatomic) BOOL hasTextColor;
@property (nonatomic) BOOL hasTextDropShadowColor;
@property (nonatomic) BOOL hasTextDropShadowSize;
@property (nonatomic) BOOL hasTextStrokeColor;
@property (nonatomic) BOOL hasTextStrokeSize;
@property (nonatomic) int style; // @synthesize style=_style;
@property (nonatomic) unsigned int textColor; // @synthesize textColor=_textColor;
@property (nonatomic) unsigned int textDropShadowColor; // @synthesize textDropShadowColor=_textDropShadowColor;
@property (readonly, nonatomic) float *textDropShadowOffsets;
@property (readonly, nonatomic) unsigned long long textDropShadowOffsetsCount;
@property (nonatomic) float textDropShadowSize; // @synthesize textDropShadowSize=_textDropShadowSize;
@property (nonatomic) unsigned int textStrokeColor; // @synthesize textStrokeColor=_textStrokeColor;
@property (nonatomic) float textStrokeSize; // @synthesize textStrokeSize=_textStrokeSize;

- (void)addTextDropShadowOffset:(float)arg1;
- (void)clearTextDropShadowOffsets;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setTextDropShadowOffsets:(float *)arg1 count:(unsigned long long)arg2;
- (float)textDropShadowOffsetAtIndex:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end

