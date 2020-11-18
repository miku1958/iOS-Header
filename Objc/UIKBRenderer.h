//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSString, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface UIKBRenderer : NSObject
{
    struct CGContext *_cachingContext;
    CDUnknownBlockType _cachingContextCompletion;
    long long _forceColorFormat;
    UIColor *_singleColor;
    int _colorCount;
    BOOL _opaque;
    BOOL _colorDetectMode;
    BOOL _disableInternalCaching;
    struct CGContext *_ctx;
    double _scale;
    long long _renderFlags;
    NSString *_cacheKey;
    UIImage *_renderedImage;
    long long _contentColorFormat;
    long long _assetIdiom;
    struct CGSize _size;
}

@property (readonly, nonatomic) long long assetIdiom; // @synthesize assetIdiom=_assetIdiom;
@property (strong, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property (nonatomic) BOOL colorDetectMode; // @synthesize colorDetectMode=_colorDetectMode;
@property (readonly, nonatomic) long long contentColorFormat; // @synthesize contentColorFormat=_contentColorFormat;
@property (readonly, nonatomic) struct CGContext *context; // @synthesize context=_ctx;
@property (readonly, nonatomic) NSData *contextData;
@property (nonatomic) BOOL disableInternalCaching; // @synthesize disableInternalCaching=_disableInternalCaching;
@property (readonly, nonatomic) BOOL opaque; // @synthesize opaque=_opaque;
@property (readonly, nonatomic) long long renderFlags; // @synthesize renderFlags=_renderFlags;
@property (readonly, nonatomic) UIImage *renderedImage; // @synthesize renderedImage=_renderedImage;
@property (readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property (readonly, nonatomic) UIColor *singleColor;
@property (readonly, nonatomic) struct CGSize size; // @synthesize size=_size;

+ (void)clearInternalCaches;
+ (struct CGContext *)imageContextWithSize:(struct CGSize)arg1 scale:(double)arg2 colorFormat:(long long)arg3 opaque:(BOOL)arg4 invert:(BOOL)arg5;
+ (id)rendererWithContext:(struct CGContext *)arg1 withSize:(struct CGSize)arg2 withScale:(double)arg3 opaque:(BOOL)arg4 renderFlags:(long long)arg5 assetIdiom:(long long)arg6;
- (void)_addDetectedColor:(struct CGColor *)arg1;
- (void)_completeCacheImageWithTraitsIfNecessary:(id)arg1;
- (struct CGPath *)_deleteGlyphPaths;
- (void)_drawKeyImage:(id)arg1 inRect:(struct CGRect)arg2 withStyle:(id)arg3 force1xImages:(BOOL)arg4 flipHorizontally:(BOOL)arg5;
- (BOOL)_drawKeyString:(id)arg1 inRect:(struct CGRect)arg2 withStyle:(id)arg3;
- (void)_drawLinearGradient:(id)arg1 inRect:(struct CGRect)arg2;
- (BOOL)_drawSingleSymbol:(id)arg1 inRect:(struct CGRect)arg2 withStyle:(id)arg3;
- (void)_renderVariantsFromKeyContents:(id)arg1 withTraits:(id)arg2;
- (struct CGPath *)_thickShiftGlyphPath;
- (struct CGPath *)_thinShiftGlyphPath;
- (void)addPathForFlickGeometry:(id)arg1;
- (void)addPathForFlickPopupGeometries:(id)arg1;
- (void)addPathForRenderGeometry:(id)arg1;
- (void)addPathForSplitGeometry:(id)arg1;
- (void)addPathForTraits:(id)arg1 displayRect:(struct CGRect *)arg2;
- (void)addRoundRect:(struct CGRect)arg1 radius:(double)arg2 corners:(unsigned long long)arg3;
- (void)dealloc;
- (id)description;
- (void)detectColorsForEffect:(id)arg1;
- (void)detectColorsForGradient:(id)arg1;
- (void)detectColorsForNamedColor:(id)arg1;
- (void)drawPath:(struct CGPath *)arg1 weight:(double)arg2 transform:(struct CGAffineTransform)arg3 color:(struct CGColor *)arg4 fill:(BOOL)arg5;
- (void)drawShiftPath:(BOOL)arg1 weight:(double)arg2 transform:(struct CGAffineTransform)arg3 color:(struct CGColor *)arg4;
- (void)ensureContext;
- (void)forceColorFormat:(long long)arg1;
- (id)initWithContext:(struct CGContext *)arg1 withSize:(struct CGSize)arg2 withScale:(double)arg3 opaque:(BOOL)arg4 renderFlags:(long long)arg5 assetIdiom:(long long)arg6;
- (BOOL)loadCachedImageForHashString:(id)arg1;
- (id)pathForConcaveCornerWithGeometry:(id)arg1;
- (id)pathForFlickGeometry:(id)arg1;
- (id)pathForFlickPopupGeometries:(id)arg1;
- (id)pathForFlickWidth:(double)arg1 height:(double)arg2 handleLength:(double)arg3 keyMiddle:(struct CGPoint)arg4 angle:(double)arg5;
- (id)pathForRenderGeometry:(id)arg1;
- (id)pathForSplitGeometry:(id)arg1;
- (void)renderBackgroundTraits:(id)arg1;
- (void)renderBackgroundTraits:(id)arg1 allowCaching:(BOOL)arg2;
- (void)renderDivotEffect:(id)arg1 withTraits:(id)arg2;
- (void)renderEdgeEffect:(id)arg1 withTraits:(id)arg2;
- (void)renderKeyContents:(id)arg1 withTraits:(id)arg2;
- (unsigned long long)renderKeyImageContents:(id)arg1 withTraits:(id)arg2 status:(unsigned long long)arg3;
- (BOOL)renderKeyPathContents:(id)arg1 withTraits:(id)arg2;
- (unsigned long long)renderKeyStringContents:(id)arg1 withTraits:(id)arg2 status:(unsigned long long)arg3;
- (void)renderNullEffect:(id)arg1 withTraits:(id)arg2;
- (void)renderShadowEffect:(id)arg1 withTraits:(id)arg2;

@end

