//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <VectorKit/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VKPShieldVariant : PBCodable <NSCopying>
{
    CDStruct_79d0722e _textShadow;
    CDStruct_033e8ed6 *_layers;
    unsigned long long _layersCount;
    unsigned long long _layersSpace;
    CDStruct_f43f0670 _textStroke;
    CDStruct_58ec0031 _fontColor;
    CDStruct_58ec0031 _nonDigitFontColor;
    CDStruct_fae3dc92 _centerPoints;
    unsigned int _atlasIndex;
    unsigned int _backgroundColor;
    unsigned int _borderColor;
    float _capWidthLeft;
    float _capWidthRight;
    float _centerOffsetX;
    NSString *_fontName;
    float _fontSize;
    float _lineSpacing;
    unsigned int _maxDigits;
    unsigned int _minDigits;
    NSString *_nonDigitFontName;
    float _nonDigitFontSize;
    float _paddingLeft;
    float _paddingRight;
    unsigned int _quadIndex;
    float _textBaseline;
    int _textMaskColor;
    struct {
        unsigned int textShadow:1;
        unsigned int textStroke:1;
        unsigned int fontColor:1;
        unsigned int nonDigitFontColor:1;
        unsigned int atlasIndex:1;
        unsigned int backgroundColor:1;
        unsigned int borderColor:1;
        unsigned int capWidthLeft:1;
        unsigned int capWidthRight:1;
        unsigned int centerOffsetX:1;
        unsigned int fontSize:1;
        unsigned int lineSpacing:1;
        unsigned int maxDigits:1;
        unsigned int minDigits:1;
        unsigned int nonDigitFontSize:1;
        unsigned int paddingLeft:1;
        unsigned int paddingRight:1;
        unsigned int quadIndex:1;
        unsigned int textBaseline:1;
        unsigned int textMaskColor:1;
    } _has;
}

@property (nonatomic) unsigned int atlasIndex; // @synthesize atlasIndex=_atlasIndex;
@property (nonatomic) unsigned int backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (nonatomic) unsigned int borderColor; // @synthesize borderColor=_borderColor;
@property (nonatomic) float capWidthLeft; // @synthesize capWidthLeft=_capWidthLeft;
@property (nonatomic) float capWidthRight; // @synthesize capWidthRight=_capWidthRight;
@property (nonatomic) float centerOffsetX; // @synthesize centerOffsetX=_centerOffsetX;
@property (readonly, nonatomic) float *centerPoints;
@property (readonly, nonatomic) unsigned long long centerPointsCount;
@property (nonatomic) CDStruct_58ec0031 fontColor; // @synthesize fontColor=_fontColor;
@property (strong, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property (nonatomic) float fontSize; // @synthesize fontSize=_fontSize;
@property (nonatomic) BOOL hasAtlasIndex;
@property (nonatomic) BOOL hasBackgroundColor;
@property (nonatomic) BOOL hasBorderColor;
@property (nonatomic) BOOL hasCapWidthLeft;
@property (nonatomic) BOOL hasCapWidthRight;
@property (nonatomic) BOOL hasCenterOffsetX;
@property (nonatomic) BOOL hasFontColor;
@property (readonly, nonatomic) BOOL hasFontName;
@property (nonatomic) BOOL hasFontSize;
@property (nonatomic) BOOL hasLineSpacing;
@property (nonatomic) BOOL hasMaxDigits;
@property (nonatomic) BOOL hasMinDigits;
@property (nonatomic) BOOL hasNonDigitFontColor;
@property (readonly, nonatomic) BOOL hasNonDigitFontName;
@property (nonatomic) BOOL hasNonDigitFontSize;
@property (nonatomic) BOOL hasPaddingLeft;
@property (nonatomic) BOOL hasPaddingRight;
@property (nonatomic) BOOL hasQuadIndex;
@property (nonatomic) BOOL hasTextBaseline;
@property (nonatomic) BOOL hasTextMaskColor;
@property (nonatomic) BOOL hasTextShadow;
@property (nonatomic) BOOL hasTextStroke;
@property (readonly, nonatomic) CDStruct_033e8ed6 *layers;
@property (readonly, nonatomic) unsigned long long layersCount;
@property (nonatomic) float lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property (nonatomic) unsigned int maxDigits; // @synthesize maxDigits=_maxDigits;
@property (nonatomic) unsigned int minDigits; // @synthesize minDigits=_minDigits;
@property (nonatomic) CDStruct_58ec0031 nonDigitFontColor; // @synthesize nonDigitFontColor=_nonDigitFontColor;
@property (strong, nonatomic) NSString *nonDigitFontName; // @synthesize nonDigitFontName=_nonDigitFontName;
@property (nonatomic) float nonDigitFontSize; // @synthesize nonDigitFontSize=_nonDigitFontSize;
@property (nonatomic) float paddingLeft; // @synthesize paddingLeft=_paddingLeft;
@property (nonatomic) float paddingRight; // @synthesize paddingRight=_paddingRight;
@property (nonatomic) unsigned int quadIndex; // @synthesize quadIndex=_quadIndex;
@property (nonatomic) float textBaseline; // @synthesize textBaseline=_textBaseline;
@property (nonatomic) int textMaskColor; // @synthesize textMaskColor=_textMaskColor;
@property (nonatomic) CDStruct_79d0722e textShadow; // @synthesize textShadow=_textShadow;
@property (nonatomic) CDStruct_f43f0670 textStroke; // @synthesize textStroke=_textStroke;

- (void)addCenterPoint:(float)arg1;
- (void)addLayer:(CDStruct_033e8ed6)arg1;
- (float)centerPointAtIndex:(unsigned long long)arg1;
- (void)clearCenterPoints;
- (void)clearLayers;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (CDStruct_033e8ed6)layerAtIndex:(unsigned long long)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCenterPoints:(float *)arg1 count:(unsigned long long)arg2;
- (void)setLayers:(CDStruct_033e8ed6 *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end

