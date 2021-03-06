//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSDrawables/NSObject-Protocol.h>

@class NSSet, TSDCanvas, TSDLayout, TSDRep, TSKDocumentRoot;
@protocol TSDCanvasProxyDelegate;

@protocol TSDCanvasDelegate <NSObject>

@property (readonly, nonatomic) id<TSDCanvasProxyDelegate> canvasProxyDelegate;

- (TSKDocumentRoot *)documentRoot;

@optional
- (NSSet *)additionalVisibleInfosForCanvas:(TSDCanvas *)arg1;
- (void)canvas:(TSDCanvas *)arg1 createdRep:(TSDRep *)arg2;
- (void)canvasDidLayout:(TSDCanvas *)arg1;
- (void)canvasDidValidateLayouts:(TSDCanvas *)arg1;
- (void)canvasDidValidateLayoutsWithDependencies:(TSDCanvas *)arg1;
- (void)canvasLayoutInvalidated:(TSDCanvas *)arg1;
- (Class)canvasRootLayoutClass;
- (void)canvasWillUpdateRepsFromLayouts:(TSDCanvas *)arg1;
- (void)canvasWillValidateLayouts:(TSDCanvas *)arg1;
- (BOOL)imageIsRenderingForMovie;
- (NSSet *)infosToHideForCanvas:(TSDCanvas *)arg1;
- (BOOL)isCanvasDrawingIntoPDF:(TSDCanvas *)arg1;
- (BOOL)isCanvasInteractive;
- (BOOL)isPrintingCanvas;
- (BOOL)isRenderingForKPF;
- (BOOL)shouldShowCommentsForCanvas:(TSDCanvas *)arg1;
- (BOOL)shouldShowInstructionalTextForLayout:(TSDLayout *)arg1;
- (BOOL)shouldShowTextCommentHighlightsForCanvas:(TSDCanvas *)arg1;
- (BOOL)shouldShowTextOverflowGlyphs;
- (BOOL)shouldSuppressBackgrounds;
- (BOOL)spellCheckingSupported;
- (BOOL)spellCheckingSuppressed;
- (BOOL)supportsAdaptiveLayout;
- (BOOL)textLayoutMustIncludeAdornments;
- (void)updateLayerTreeForInteractiveCanvas:(TSDCanvas *)arg1;
- (struct CGRect)visibleScaledBoundsForClippingRepsOnCanvas:(TSDCanvas *)arg1;
- (BOOL)wantsEditingLayoutsForOffscreenInfos;
@end

