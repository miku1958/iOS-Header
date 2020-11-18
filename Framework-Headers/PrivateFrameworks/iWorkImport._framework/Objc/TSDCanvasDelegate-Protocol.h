//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class NSSet, TSDCanvas, TSDRep, TSKDocumentRoot;
@protocol TSDCanvasProxyDelegate;

@protocol TSDCanvasDelegate <NSObject>

@property (readonly, nonatomic) id<TSDCanvasProxyDelegate> canvasProxyDelegate;

- (TSKDocumentRoot *)documentRoot;

@optional
- (NSSet *)additionalVisibleInfosForCanvas:(TSDCanvas *)arg1;
- (void)canvas:(TSDCanvas *)arg1 createdRep:(TSDRep *)arg2;
- (void)canvasDidLayout:(TSDCanvas *)arg1;
- (void)canvasDidUpdateRepsFromLayouts:(TSDCanvas *)arg1;
- (void)canvasDidUpdateVisibleBounds:(TSDCanvas *)arg1;
- (void)canvasDidValidateLayouts:(TSDCanvas *)arg1;
- (void)canvasDidValidateLayoutsWithDependencies:(TSDCanvas *)arg1;
- (void)canvasLayoutInvalidated:(TSDCanvas *)arg1;
- (Class)canvasRootLayoutClass;
- (void)canvasWillLayout:(TSDCanvas *)arg1;
- (void)canvasWillUpdateRepsFromLayouts:(TSDCanvas *)arg1;
- (BOOL)imageIsRenderingForMovie;
- (NSSet *)infosToHideForCanvas:(TSDCanvas *)arg1;
- (BOOL)isCanvasDrawingIntoPDF:(TSDCanvas *)arg1;
- (BOOL)isCanvasInteractive;
- (BOOL)isExportingFixedLayoutEPub;
- (BOOL)isPrintingCanvas;
- (BOOL)isRenderingForKPF;
- (BOOL)shouldShowInstructionalText;
- (BOOL)shouldShowTextOverflowGlyphs;
- (BOOL)shouldSuppressBackgrounds;
- (BOOL)spellCheckingSupported;
- (BOOL)spellCheckingSuppressed;
- (BOOL)supportsAdaptiveLayout;
- (struct CGRect)visibleScaledBoundsForClippingRepsOnCanvas:(TSDCanvas *)arg1;
- (BOOL)wantsEditingLayoutsForOffscreenInfos;
@end

