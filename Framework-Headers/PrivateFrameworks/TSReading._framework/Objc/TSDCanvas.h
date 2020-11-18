//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSSet, TSDInteractiveCanvasController, TSDLayoutController, TSKAccessController, TSKChangeNotifier, TSKDocumentRoot, TSPObjectContext;
@protocol TSDCanvasDelegate;

@interface TSDCanvas : NSObject
{
    id<TSDCanvasDelegate> mDelegate;
    TSDInteractiveCanvasController *mCanvasController;
    NSArray *mInfos;
    NSArray *mTopLevelReps;
    NSSet *mAllReps;
    struct __CFDictionary *mRepsByLayout;
    TSDLayoutController *mLayoutController;
    BOOL mIsTemporaryForLayout;
    struct CGSize mUnscaledSize;
    double mViewScale;
    double mContentsScale;
    BOOL mWideGamut;
    struct {
        unsigned int layout:1;
        unsigned int reps:1;
        unsigned int visibleBounds:1;
        unsigned int layers:1;
    } mInvalidFlags;
    BOOL mInLayout;
    NSArray *mPreviouslyVisibleLayouts;
    struct CGColor *mBackgroundColor;
    struct UIEdgeInsets mContentInset;
    BOOL mClipToCanvas;
    BOOL mAllowsFontSubpixelQuantization;
    BOOL pInTearDown;
}

@property (readonly, nonatomic) TSKAccessController *accessController;
@property (nonatomic) BOOL allowsFontSubpixelQuantization; // @synthesize allowsFontSubpixelQuantization=mAllowsFontSubpixelQuantization;
@property (nonatomic) struct CGColor *backgroundColor; // @synthesize backgroundColor=mBackgroundColor;
@property (readonly, nonatomic) TSDInteractiveCanvasController *canvasController;
@property (readonly, nonatomic) BOOL canvasIsWideGamut;
@property (readonly, nonatomic) TSKChangeNotifier *changeNotifier;
@property (nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=mContentInset;
@property (readonly, nonatomic) double contentsScale;
@property (nonatomic) id<TSDCanvasDelegate> delegate; // @synthesize delegate=mDelegate;
@property (readonly, nonatomic) TSKDocumentRoot *documentRoot;
@property (copy, nonatomic) NSArray *infosToDisplay; // @synthesize infosToDisplay=mInfos;
@property (readonly, nonatomic) BOOL isCanvasInteractive;
@property (readonly, nonatomic) BOOL isTemporaryForLayout; // @synthesize isTemporaryForLayout=mIsTemporaryForLayout;
@property (readonly, nonatomic) TSDLayoutController *layoutController; // @synthesize layoutController=mLayoutController;
@property (readonly, nonatomic) TSPObjectContext *objectContext;
@property (nonatomic) BOOL pInTearDown; // @synthesize pInTearDown;
@property (readonly, nonatomic) BOOL supportsAdaptiveLayout;
@property (nonatomic) struct CGSize unscaledSize; // @synthesize unscaledSize=mUnscaledSize;
@property (nonatomic) double viewScale; // @synthesize viewScale=mViewScale;

- (void)addBitmapsToRenderingQualityInfo:(id)arg1 inContext:(struct CGContext *)arg2;
- (id)allReps;
- (struct CGPoint)convertBoundsToUnscaledPoint:(struct CGPoint)arg1;
- (struct CGRect)convertBoundsToUnscaledRect:(struct CGRect)arg1;
- (struct CGSize)convertBoundsToUnscaledSize:(struct CGSize)arg1;
- (struct CGPoint)convertUnscaledToBoundsPoint:(struct CGPoint)arg1;
- (struct CGRect)convertUnscaledToBoundsRect:(struct CGRect)arg1;
- (struct CGSize)convertUnscaledToBoundsSize:(struct CGSize)arg1;
- (void)dealloc;
- (id)hitRep:(struct CGPoint)arg1 inTopLevelReps:(id)arg2 smallRepOutset:(double)arg3 withGesture:(id)arg4 passingTest:(CDUnknownBlockType)arg5;
- (struct CGRect)i_approximateScaledFrameOfEditingMenuAtPoint:(struct CGPoint)arg1;
- (struct CGRect)i_clipRectForCreatingRepsFromLayouts;
- (void)i_clipsImagesToBounds:(BOOL)arg1;
- (struct CGContext *)i_createContextToDrawImageInScaledRect:(struct CGRect)arg1 withTargetIntegralSize:(struct CGSize)arg2 returningBounds:(struct CGRect *)arg3 integralBounds:(struct CGRect *)arg4;
- (void)i_drawBackgroundInContext:(struct CGContext *)arg1;
- (void)i_drawBackgroundInContext:(struct CGContext *)arg1 bounds:(struct CGRect)arg2;
- (void)i_drawRepsInContext:(struct CGContext *)arg1;
- (void)i_drawRepsInContext:(struct CGContext *)arg1 distort:(struct CGAffineTransform)arg2;
- (struct CGImage *)i_image;
- (struct CGImage *)i_imageInScaledRect:(struct CGRect)arg1;
- (struct CGImage *)i_imageInScaledRect:(struct CGRect)arg1 withTargetIntegralSize:(struct CGSize)arg2 distortedToMatch:(BOOL)arg3;
- (BOOL)i_needsLayout;
- (struct CGImage *)i_newImageInContext:(struct CGContext *)arg1 bounds:(struct CGRect)arg2 integralBounds:(struct CGRect)arg3 distortedToMatch:(BOOL)arg4;
- (void)i_registerRep:(id)arg1;
- (void)i_setCanvasController:(id)arg1;
- (void)i_setCanvasIsWideGamut:(BOOL)arg1;
- (void)i_setContentsScale:(double)arg1;
- (void)i_setInfosToDisplay:(id)arg1 updatingLayoutController:(BOOL)arg2;
- (void)i_unregisterRep:(id)arg1;
- (struct CGRect)i_unscaledRectOfLayouts;
- (void)i_updateInfosInLayoutController;
- (id)init;
- (id)initForTemporaryLayout;
- (void)invalidateLayers;
- (void)invalidateReps;
- (void)invalidateVisibleBounds;
- (BOOL)isDrawingIntoPDF;
- (BOOL)isPrinting;
- (id)layoutGeometryProviderForLayout:(id)arg1;
- (void)layoutIfNeeded;
- (void)layoutInvalidated;
- (struct CGRect)p_bounds;
- (BOOL)p_expandHitRegionOfPoint:(struct CGPoint)arg1 forRep:(id)arg2 smallRepOutset:(double)arg3 forShortestDistance:(double *)arg4;
- (void)p_layoutWithReadLock;
- (void)p_removeAllReps;
- (BOOL)p_shouldRep:(id)arg1 countAsClosestSmallRepForSizeLimit:(double)arg2;
- (BOOL)p_updateRepsFromLayouts;
- (void)recreateAllLayoutsAndReps;
- (id)repForLayout:(id)arg1;
- (BOOL)shouldShowInstructionalText;
- (BOOL)shouldShowTextOverflowGlyphs;
- (BOOL)shouldSuppressBackgrounds;
- (BOOL)spellCheckingSupported;
- (BOOL)spellCheckingSuppressed;
- (void)teardown;
- (id)textRendererForLayer:(id)arg1 context:(struct CGContext *)arg2;
- (id)topLevelReps;
- (struct CGRect)visibleUnscaledRectForClippingReps;

@end

