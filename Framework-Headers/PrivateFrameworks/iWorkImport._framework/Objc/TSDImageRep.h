//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDMediaRep.h>

#import <iWorkImport/CALayerDelegate-Protocol.h>
#import <iWorkImport/TSDImageDrawingDataSource-Protocol.h>
#import <iWorkImport/TSDMagicMoveMatching-Protocol.h>

@class NSMutableArray, NSObject, NSString, TSDImageDrawingHelper, TSDImageInfo, TSDImageLayout, TSDLayoutGeometry, TSDMaskInfo, TSDMaskLayout, TSPData;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface TSDImageRep : TSDMediaRep <CALayerDelegate, TSDImageDrawingDataSource, TSDMagicMoveMatching>
{
    TSDLayoutGeometry *mLastImageGeometryInRoot;
    TSDLayoutGeometry *mLastMaskGeometryInRoot;
    struct CGAffineTransform mLastLayoutToImageTransform;
    struct CGRect mFrameInUnscaledCanvasRelativeToSuper;
    BOOL mFrameInUnscaledCanvasIsValid;
    TSDImageDrawingHelper *mDrawingHelper;
    NSMutableArray *mUpdateFromLayoutBlocks;
    NSObject<OS_dispatch_semaphore> *mUpdateFromLayoutBlocksLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) TSPData *imageDataForRendering;
@property (readonly, nonatomic) TSDImageInfo *imageInfo;
@property (readonly, nonatomic) TSDImageLayout *imageLayout;
@property (readonly, nonatomic) TSDMaskInfo *maskInfo;
@property (readonly, nonatomic) TSDMaskLayout *maskLayout;
@property (readonly) Class superclass;

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 mixingTypeContext:(id)arg3;
- (void).cxx_destruct;
- (BOOL)canDrawInParallel;
- (BOOL)canDrawShadowInOneStepWithChildren:(BOOL)arg1;
- (void)dealloc;
- (id)downloadProgressPlaceholderImage;
- (void)drawInContextWithoutEffects:(struct CGContext *)arg1 withContent:(BOOL)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(BOOL)arg4 forAlphaOnly:(BOOL)arg5 drawChildren:(BOOL)arg6;
- (void)drawInLayerContext:(struct CGContext *)arg1;
- (struct CGRect)frameInUnscaledCanvas;
- (id)imageDrawingHelperAdjustedImageData:(id)arg1;
- (id)imageDrawingHelperImageData:(id)arg1;
- (BOOL)imageDrawingHelperImageHasAlpha:(id)arg1;
- (struct CGRect)imageDrawingHelperImageRect:(id)arg1;
- (struct CGAffineTransform)imageDrawingHelperImageTransformInRootForAntialiasingDefeat:(id)arg1;
- (id)imageDrawingHelperThumbnailAdjustedImageData:(id)arg1;
- (id)imageDrawingHelperThumbnailImageData:(id)arg1;
- (id)imageOfStroke:(struct CGRect *)arg1;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (BOOL)isDataCurrentlyDownloading;
- (void)p_drawInContext:(struct CGContext *)arg1 withContent:(BOOL)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(double)arg4 withMask:(BOOL)arg5 withIAMask:(BOOL)arg6 forLayer:(BOOL)arg7 forShadow:(BOOL)arg8 forHitTest:(BOOL)arg9;
- (BOOL)p_drawsInOneStep;
- (BOOL)p_shouldUseSourceImageForDescription:(id)arg1 clipBounds:(struct CGRect)arg2 transform:(struct CGAffineTransform)arg3 image:(struct CGImage *)arg4;
- (id)p_validatedBitmapImageProvider;
- (id)p_validatedImageProvider;
- (void)setTextureAttributes:(id)arg1 textureBounds:(struct CGRect)arg2;
- (BOOL)shouldShowCheckerboard;
- (id)textureForDescription:(id)arg1;
- (void)willBeRemoved;

@end
