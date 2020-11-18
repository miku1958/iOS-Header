//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CUIPSDGradient, CUIShapeEffectPreset, NSArray, NSData, NSDate, NSMutableArray, NSSet, NSString;

@interface CSIGenerator : NSObject
{
    struct CGSize _size;
    NSString *_name;
    NSString *_utiType;
    NSMutableArray *_slices;
    NSMutableArray *_bitmaps;
    NSMutableArray *_metrics;
    NSMutableArray *_layerReferences;
    BOOL _isFPOHint;
    BOOL _isExcludedFromFilter;
    BOOL _isVectorBased;
    long long _templateRenderingMode;
    BOOL _allowsMultiPassEncoding;
    BOOL _allowsOptimalPacking;
    BOOL _optOutOfThinning;
    BOOL _isFlippable;
    BOOL _isTintable;
    short _colorSpaceID;
    short _layout;
    unsigned int _scaleFactor;
    CUIPSDGradient *_gradient;
    NSData *_rawData;
    CUIShapeEffectPreset *_effectPreset;
    int _blendMode;
    double _opacity;
    NSDate *_modtime;
    unsigned int _pixelFormat;
    int _exifOrientation;
    unsigned long long _rowbytes;
    NSString *_assetPackIdentifier;
    NSSet *_externalTags;
    struct CGRect _externalReferenceFrame;
    unsigned short _linkLayout;
    struct CGSize _originalUncroppedSize;
    struct CGRect _alphaCroppedFrame;
    NSArray *_explicitlyPackedContents;
    double _compressionQuality;
    long long _compressionType;
    BOOL _isCubeMap;
    long long _textureFormat;
    long long _textureInterpretation;
    NSMutableArray *_mipReferences;
    BOOL _textureOpaque;
}

@property (nonatomic) BOOL allowsMultiPassEncoding; // @synthesize allowsMultiPassEncoding=_allowsMultiPassEncoding;
@property (nonatomic) BOOL allowsOptimalPacking; // @synthesize allowsOptimalPacking=_allowsOptimalPacking;
@property (nonatomic) struct CGRect alphaCroppedFrame; // @synthesize alphaCroppedFrame=_alphaCroppedFrame;
@property (nonatomic) int blendMode; // @synthesize blendMode=_blendMode;
@property (nonatomic) short colorSpaceID; // @synthesize colorSpaceID=_colorSpaceID;
@property (nonatomic) double compressionQuality;
@property long long compressionType;
@property (nonatomic) BOOL cubemap; // @synthesize cubemap=_isCubeMap;
@property (strong, nonatomic) CUIShapeEffectPreset *effectPreset; // @synthesize effectPreset=_effectPreset;
@property (nonatomic, getter=isExcludedFromContrastFilter) BOOL excludedFromContrastFilter; // @synthesize excludedFromContrastFilter=_isExcludedFromFilter;
@property (nonatomic) int exifOrientation; // @synthesize exifOrientation=_exifOrientation;
@property (strong, nonatomic) CUIPSDGradient *gradient; // @synthesize gradient=_gradient;
@property (nonatomic) BOOL isFlippable; // @synthesize isFlippable=_isFlippable;
@property (nonatomic) BOOL isRenditionFPO; // @synthesize isRenditionFPO=_isFPOHint;
@property (nonatomic) BOOL isTintable; // @synthesize isTintable=_isTintable;
@property (nonatomic) BOOL isVectorBased; // @synthesize isVectorBased=_isVectorBased;
@property (readonly, nonatomic) NSArray *layerReferences; // @synthesize layerReferences=_layerReferences;
@property (readonly, nonatomic) NSArray *mipReferences; // @synthesize mipReferences=_mipReferences;
@property (copy, nonatomic) NSDate *modtime; // @synthesize modtime=_modtime;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) double opacity; // @synthesize opacity=_opacity;
@property (nonatomic) BOOL optOutOfThinning; // @synthesize optOutOfThinning=_optOutOfThinning;
@property (nonatomic) struct CGSize originalUncroppedSize; // @synthesize originalUncroppedSize=_originalUncroppedSize;
@property (nonatomic) unsigned int pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property (nonatomic) unsigned int scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property (nonatomic) struct CGSize size; // @synthesize size=_size;
@property (nonatomic) long long templateRenderingMode; // @synthesize templateRenderingMode=_templateRenderingMode;
@property (nonatomic) long long textureFormat; // @synthesize textureFormat=_textureFormat;
@property (nonatomic) long long textureInterpretation; // @synthesize textureInterpretation=_textureInterpretation;
@property (nonatomic) BOOL textureOpaque; // @synthesize textureOpaque=_textureOpaque;
@property (copy, nonatomic) NSString *utiType; // @synthesize utiType=_utiType;

+ (int)fileEncoding;
+ (void)initialize;
+ (void)setFileEncoding:(int)arg1;
- (id)CSIRepresentationWithCompression:(BOOL)arg1;
- (void)_addNodes:(id)arg1 toNodeList:(struct _csigradientdatanode *)arg2;
- (void)_updateCompressionInfoFor:(id)arg1;
- (void)addBitmap:(id)arg1;
- (void)addLayerReference:(id)arg1;
- (void)addMetrics:(CDStruct_1ba92a5e)arg1;
- (void)addMipReference:(id)arg1;
- (void)addSliceRect:(struct CGRect)arg1;
- (void)dealloc;
- (void)formatCSIHeader:(struct _csiheader *)arg1;
- (id)initWithCanvasSize:(struct CGSize)arg1 sliceCount:(unsigned int)arg2 layout:(short)arg3;
- (id)initWithExplicitlyPackedList:(id)arg1;
- (id)initWithExternalReference:(id)arg1 tags:(id)arg2;
- (id)initWithInternalReferenceRect:(struct CGRect)arg1 layout:(short)arg2;
- (id)initWithLayerStackData:(id)arg1 withCanvasSize:(struct CGSize)arg2;
- (id)initWithRawData:(id)arg1 pixelFormat:(unsigned int)arg2 layout:(short)arg3;
- (id)initWithShapeEffectPreset:(id)arg1 forScaleFactor:(unsigned int)arg2;
- (id)initWithTextureForPixelFormat:(long long)arg1;
- (id)initWithTextureImageWithSize:(struct CGSize)arg1 forPixelFormat:(long long)arg2 cubeMap:(BOOL)arg3;
- (unsigned long long)writeBitmap:(id)arg1 toData:(id)arg2 compress:(BOOL)arg3;
- (unsigned long long)writeExternalLinkToData:(id)arg1;
- (unsigned long long)writeGradientToData:(id)arg1;
- (void)writeHeader:(struct _csiheader *)arg1 toData:(id)arg2;
- (unsigned long long)writeRawDataToData:(id)arg1;
- (unsigned long long)writeResourcesToData:(id)arg1;
- (unsigned long long)writeTextureToData:(id)arg1;

@end

