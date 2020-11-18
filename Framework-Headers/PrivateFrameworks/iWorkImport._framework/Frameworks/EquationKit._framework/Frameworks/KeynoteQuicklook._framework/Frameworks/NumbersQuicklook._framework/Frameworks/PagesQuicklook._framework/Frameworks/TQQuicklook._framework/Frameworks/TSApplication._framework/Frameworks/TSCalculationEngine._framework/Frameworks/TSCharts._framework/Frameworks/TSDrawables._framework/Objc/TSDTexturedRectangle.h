//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSDrawables/NSCopying-Protocol.h>
#import <TSDrawables/TSDMetalRendererDirectTextureSourceUpdating-Protocol.h>

@class CALayer, NSMapTable, NSOperation, NSString, NSUUID, TSDBitmapRenderingQualityInfo, TSDTextureSet, TSUBezierPath, TSUColor;
@protocol MTLTexture, TSDMetalRenderer;

@interface TSDTexturedRectangle : NSObject <NSCopying, TSDMetalRendererDirectTextureSourceUpdating>
{
    struct CGRect _originalFrame;
    CDUnknownBlockType _renderBlock;
    BOOL _singleTextureContainsMipmaps;
    BOOL _didInitFromLayer;
    BOOL _shouldCleanUpSingleTexture;
    BOOL _didInitFromGPUTexture;
    NSMapTable *_eventIndexToViewLayerMap;
    TSUBezierPath *_shapePath;
    TSUBezierPath *_bakedShapePath;
    struct CGPoint _originalLeadingCaretPosition;
    struct CGPoint _originalTrailingCaretPosition;
    struct CGSize _originalCaretSize;
    struct CGRect _originalLeadingCaretRect;
    struct CGRect _originalTrailingCaretRect;
    unsigned long long _signpostID;
    BOOL _isIncomingContent;
    BOOL _isVerticalText;
    BOOL _isFlattenedRepresentation;
    BOOL _shouldGenerateMipmap;
    BOOL _shouldUseDisplayLinkPresentationTime;
    unsigned int _singleTextureName;
    NSUUID *_uuid;
    struct CGImage *_bakedImage;
    double _bakedScale;
    double _bakedRotation;
    TSDBitmapRenderingQualityInfo *_bitmapRenderingQualityInfo;
    struct CGColorSpace *_colorSpace;
    TSUColor *_backgroundColor;
    CALayer *_layer;
    id<MTLTexture> _metalTexture;
    TSDTexturedRectangle *_metalTextureProxy;
    TSDTextureSet *_parent;
    NSOperation *_renderingOperation;
    NSOperation *_renderingOperationOpenGL;
    NSOperation *_renderingOperationMetal;
    struct CGImage *_sourceImage;
    NSString *_text;
    double _textBaseline;
    TSUColor *_textColor;
    TSUColor *_textBorderColor;
    double _textXHeight;
    long long _textureType;
    double _textureOpacity;
    struct CGPoint _offset;
    struct CGPoint _originalPosition;
    struct CGSize _singleTextureSize;
    struct CGSize _size;
    struct _NSRange _textRange;
    struct CGRect _contentRect;
    struct CGRect _leadingCaretRect;
    struct CGRect _trailingCaretRect;
}

@property (copy, nonatomic) TSUColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property struct CGImage *bakedImage; // @synthesize bakedImage=_bakedImage;
@property (nonatomic) double bakedRotation; // @synthesize bakedRotation=_bakedRotation;
@property (nonatomic) double bakedScale; // @synthesize bakedScale=_bakedScale;
@property (weak, nonatomic) TSDBitmapRenderingQualityInfo *bitmapRenderingQualityInfo; // @synthesize bitmapRenderingQualityInfo=_bitmapRenderingQualityInfo;
@property (nonatomic) struct CGColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property (nonatomic) struct CGRect contentRect; // @synthesize contentRect=_contentRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) struct CGRect frame;
@property (readonly, nonatomic) struct CGRect frameOnCanvas;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) struct CGImage *image;
@property (readonly, nonatomic) BOOL isBackgroundTexture;
@property (readonly, nonatomic) BOOL isBaked;
@property (nonatomic) BOOL isFlattenedRepresentation; // @synthesize isFlattenedRepresentation=_isFlattenedRepresentation;
@property (readonly, nonatomic) BOOL isImageSource;
@property (nonatomic) BOOL isIncomingContent; // @synthesize isIncomingContent=_isIncomingContent;
@property (readonly, nonatomic) BOOL isRenderable;
@property (readonly, nonatomic) BOOL isRendered;
@property (readonly, nonatomic) BOOL isSingleTextureSetup;
@property (readonly, nonatomic) BOOL isValid;
@property (nonatomic) BOOL isVerticalText; // @synthesize isVerticalText=_isVerticalText;
@property (readonly, nonatomic) CALayer *layer; // @synthesize layer=_layer;
@property (nonatomic) struct CGRect leadingCaretRect; // @synthesize leadingCaretRect=_leadingCaretRect;
@property (readonly, nonatomic) id<TSDMetalRenderer> liveTexturedRectangleRenderer;
@property (readonly, nonatomic) id<MTLTexture> metalTexture; // @synthesize metalTexture=_metalTexture;
@property (strong, nonatomic) TSDTexturedRectangle *metalTextureProxy; // @synthesize metalTextureProxy=_metalTextureProxy;
@property (nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
@property (readonly, nonatomic) struct CGRect originalFrame; // @synthesize originalFrame=_originalFrame;
@property (nonatomic) struct CGPoint originalPosition; // @synthesize originalPosition=_originalPosition;
@property (weak, nonatomic) TSDTextureSet *parent; // @synthesize parent=_parent;
@property (readonly, nonatomic) CALayer *parentLayer;
@property (weak) NSOperation *renderingOperation; // @synthesize renderingOperation=_renderingOperation;
@property (weak) NSOperation *renderingOperationMetal; // @synthesize renderingOperationMetal=_renderingOperationMetal;
@property (weak) NSOperation *renderingOperationOpenGL; // @synthesize renderingOperationOpenGL=_renderingOperationOpenGL;
@property (copy, nonatomic) TSUBezierPath *shapePath; // @synthesize shapePath=_shapePath;
@property (nonatomic) BOOL shouldGenerateMipmap; // @synthesize shouldGenerateMipmap=_shouldGenerateMipmap;
@property (nonatomic) BOOL shouldUseDisplayLinkPresentationTime; // @synthesize shouldUseDisplayLinkPresentationTime=_shouldUseDisplayLinkPresentationTime;
@property (readonly, nonatomic) unsigned int singleTextureName; // @synthesize singleTextureName=_singleTextureName;
@property (readonly, nonatomic) double singleTextureOpacity;
@property (readonly, nonatomic) struct CGSize singleTextureSize; // @synthesize singleTextureSize=_singleTextureSize;
@property (readonly, nonatomic) unsigned int singleTextureTarget;
@property (nonatomic) struct CGSize size; // @synthesize size=_size;
@property (readonly, nonatomic) unsigned long long sizeInBytes;
@property struct CGImage *sourceImage; // @synthesize sourceImage=_sourceImage;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text; // @synthesize text=_text;
@property (nonatomic) double textBaseline; // @synthesize textBaseline=_textBaseline;
@property (copy, nonatomic) TSUColor *textBorderColor; // @synthesize textBorderColor=_textBorderColor;
@property (copy, nonatomic) TSUColor *textColor; // @synthesize textColor=_textColor;
@property (nonatomic) struct _NSRange textRange; // @synthesize textRange=_textRange;
@property (nonatomic) double textXHeight; // @synthesize textXHeight=_textXHeight;
@property (nonatomic) double textureOpacity; // @synthesize textureOpacity=_textureOpacity;
@property (nonatomic) long long textureType; // @synthesize textureType=_textureType;
@property (nonatomic) struct CGRect trailingCaretRect; // @synthesize trailingCaretRect=_trailingCaretRect;
@property (strong, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property (readonly, nonatomic) BOOL willRenderWithLiveTexturedRectangleSource;

+ (struct CGRect)boundingRectForTextures:(id)arg1;
+ (struct CGRect)boundingRectOnCanvasForTextures:(id)arg1;
+ (id)setupMetalShaderForContext:(id)arg1;
- (void).cxx_destruct;
- (void)adjustAnchorRelativeToCenterOfRotation:(struct CGPoint)arg1 atEventIndex:(unsigned long long)arg2;
- (void)bakeLayerWithAngle:(double)arg1 scale:(double)arg2 layer:(id)arg3;
- (BOOL)canReuseMetalTextureWith:(id)arg1;
- (void)clearLiveTexturedRectangleSource;
- (struct CGRect)convertToCanvasCoordinates:(struct CGRect)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)drawFrameWithMetalContext:(id)arg1;
- (void)evictRenderedResources;
- (BOOL)hasLiveTexturedRectangleSourceWithNewRenderingForTimingInfo:(CDStruct_d6fcdff4)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1;
- (id)initWithLayer:(id)arg1;
- (id)initWithLayer:(id)arg1 forGLTexture:(id)arg2;
- (id)initWithLayer:(id)arg1 forMetalTexture:(id)arg2;
- (id)initWithMetalTexture:(id)arg1 frame:(struct CGRect)arg2;
- (id)initWithSize:(struct CGSize)arg1 offset:(struct CGPoint)arg2 renderBlock:(CDUnknownBlockType)arg3;
- (id)initWithTextureInfo:(id)arg1 frame:(struct CGRect)arg2;
- (BOOL)isMetalTextureSetup;
- (id)metalTextureWithContext:(id)arg1;
- (BOOL)needsToUpdateDirectTextureSourcesForTimingInfo:(CDStruct_d6fcdff4)arg1;
- (void)p_bakeLayerWithAngle:(double)arg1 scale:(double)arg2 layer:(id)arg3;
- (id)p_colorForColorspaceWithColor:(id)arg1;
- (struct CGColorSpace *)p_colorSpace;
- (void)p_initialize;
- (id)p_newImageAndBufferWithTransform:(struct CGAffineTransform)arg1;
- (CDUnknownBlockType)p_rasterizationBlockWithBitmapSize:(struct CGSize)arg1;
- (void)p_renderIntoContext:(struct CGContext *)arg1 viewLayer:(id)arg2 shouldApplyAlpha:(BOOL)arg3 shouldIgnoreLayerVisibility:(BOOL)arg4 shouldClipToBounds:(BOOL)arg5;
- (void)p_setupSingleTextureAndGenerateMipMaps:(BOOL)arg1 withContext:(id)arg2;
- (char *)p_setupTextureDataWithSize:(struct CGSize)arg1;
- (unsigned long long)p_textureDataSizeWithBitmapSize:(struct CGSize)arg1;
- (struct CGSize)p_textureSizeWithMaxSize:(struct CGSize)arg1;
- (struct CGAffineTransform)p_transformWithAngle:(double)arg1 scale:(double)arg2 offset:(struct CGPoint)arg3;
- (void)p_updateFrame;
- (void)promiseLiveTexturedRectangleSource;
- (void)releaseMetalTexture;
- (void)releaseSingleTexture;
- (void)renderIntoContext:(struct CGContext *)arg1 eventIndex:(unsigned long long)arg2 shouldApplyAlpha:(BOOL)arg3 shouldClipToBounds:(BOOL)arg4;
- (void)renderIntoContext:(struct CGContext *)arg1 shouldApplyAlpha:(BOOL)arg2;
- (void)renderIntoContext:(struct CGContext *)arg1 shouldApplyAlpha:(BOOL)arg2 shouldIgnoreLayerVisibility:(BOOL)arg3;
- (void)renderLayerContentsIfNeeded;
- (void)resetAnchorPointAtEventIndex:(unsigned long long)arg1;
- (void)resetToSourceImageAtEventIndex:(unsigned long long)arg1;
- (void)setLiveTextureRectangleDirectTextureSource:(id)arg1 fallbackRenderer:(id)arg2;
- (void)setLiveTexturedRectangleRenderer:(id)arg1;
- (void)setLiveTexturedRectangleSourceProxy:(id)arg1;
- (void)setupMetalTextureForContext:(id)arg1;
- (void)setupMetalTextureForDevice:(id)arg1 commandQueue:(id)arg2;
- (void)setupMetalTextureForDevice:(id)arg1 commandQueue:(id)arg2 maxSize:(struct CGSize)arg3;
- (void)setupSingleTexture;
- (void)setupSingleTextureWithContext:(id)arg1;
- (id)shortDescription;
- (void)teardown;
- (void)updateDirectTextureSourcesWithUpdateContext:(id)arg1;
- (id)viewLayerAtEventIndex:(unsigned long long)arg1;
- (void)waitUntilAsyncRenderingIsCompleteShouldCancel:(BOOL)arg1;

@end
