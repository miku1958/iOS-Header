//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PDFKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSString, PDFDestination, PDFDocument, PDFPage, PDFSelection, PDFViewPrivate, UIColor;
@protocol PDFViewDelegate;

@interface PDFView : UIView <UIGestureRecognizerDelegate>
{
    PDFViewPrivate *_private;
}

@property (nonatomic) BOOL autoScales;
@property (strong, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) BOOL canGoBack;
@property (readonly, nonatomic) BOOL canGoForward;
@property (readonly, nonatomic) BOOL canGoToFirstPage;
@property (readonly, nonatomic) BOOL canGoToLastPage;
@property (readonly, nonatomic) BOOL canGoToNextPage;
@property (readonly, nonatomic) BOOL canGoToPreviousPage;
@property (readonly, nonatomic) BOOL canZoomIn;
@property (readonly, nonatomic) BOOL canZoomOut;
@property (readonly, nonatomic) PDFDestination *currentDestination;
@property (readonly, nonatomic) PDFPage *currentPage;
@property (strong, nonatomic) PDFSelection *currentSelection;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PDFViewDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long displayBox;
@property (nonatomic) long long displayDirection;
@property (nonatomic) long long displayMode;
@property (nonatomic) BOOL displaysAsBook;
@property (nonatomic) BOOL displaysPageBreaks;
@property (nonatomic) BOOL displaysRTL;
@property (strong, nonatomic) PDFDocument *document;
@property (readonly, nonatomic) UIView *documentView;
@property (nonatomic) BOOL enableDataDetectors;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *highlightedSelections;
@property (nonatomic) long long interpolationQuality;
@property (readonly, nonatomic) BOOL isUsingPageViewController;
@property (nonatomic) double maxScaleFactor;
@property (nonatomic) double minScaleFactor;
@property (nonatomic) struct UIEdgeInsets pageBreakMargins;
@property (nonatomic, setter=enablePageShadows:) BOOL pageShadowsEnabled;
@property (nonatomic) double scaleFactor;
@property (readonly, nonatomic) double scaleFactorForSizeToFit;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *visiblePages;

+ (void)EnableAnnotationKit;
- (void).cxx_destruct;
- (BOOL)PDFKitHandleBackTabInTextWidget:(id)arg1;
- (BOOL)PDFKitHandleTabInTextWidget:(id)arg1;
- (id)PDFLayout;
- (double)PDFViewWillChangeScaleFactor:(id)arg1 toScale:(double)arg2;
- (void)PDFViewWillClickOnLink:(id)arg1 withURL:(id)arg2;
- (void)_commonInit;
- (void)_doNotQueryScaleFactor;
- (id)_dragItemsAtLocationInView:(struct CGPoint)arg1;
- (void)_forceTileRefresh;
- (id)_getDocumentAKController;
- (void)_goToPage:(id)arg1 animated:(BOOL)arg2 withBackgroundUpdate:(BOOL)arg3;
- (BOOL)_hasDraggableSelectionAtLocation:(struct CGPoint)arg1;
- (BOOL)_isOverWidgetAnnotation:(struct CGPoint)arg1;
- (void)_releaseDocument;
- (void)_releaseDocumentViewController;
- (void)_setupPageViewController;
- (BOOL)_shouldHandleAnnotationAtLocation:(struct CGPoint)arg1;
- (void)_syncPageIndexToScrollView;
- (void)_tileRefresh;
- (struct CGAffineTransform)_transformFromPageToPageView:(id)arg1;
- (struct CGAffineTransform)_transformFromPageViewToPage:(id)arg1;
- (double)_unboundAutoScaleFactorForPage:(id)arg1;
- (double)_unboundAutoScaleFactorForPageWithSize:(struct CGSize)arg1;
- (void)_updateAnnotations;
- (void)_updateBookmarksForPages;
- (BOOL)akAnnotationEditingEnabled;
- (id)akOverlayAdaptor;
- (id)akRedoToolbarItem;
- (id)akToolbarView;
- (id)akToolbarViewItemTintColor;
- (id)akToolbarViewTintColor;
- (id)akUndoToolbarItem;
- (void)animateTransitionFromPage:(id)arg1 toPage:(id)arg2;
- (void)annotationsChangedOnPage:(id)arg1;
- (void)appendPasswordUI;
- (long long)areaOfInterestForMouse:(id)arg1;
- (long long)areaOfInterestForPoint:(struct CGPoint)arg1;
- (double)autoScaleFactor;
- (double)autoScaleFactorForPage:(id)arg1;
- (double)autoScaleFactorForPageWithSize:(struct CGSize)arg1;
- (BOOL)automaticallyHandleGutter;
- (BOOL)backgroundImagesEnabled;
- (void)beginPDFViewRotation;
- (void)callPageVisibilityDelegateMethod:(int)arg1 forPageView:(id)arg2 atPageIndex:(unsigned long long)arg3;
- (void)callPageVisibilityDelegateMethodForOverlayAdaptorOnly:(int)arg1 forPageView:(id)arg2 atPageIndex:(unsigned long long)arg3;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)clearLollipopMagnifier;
- (void)clearSelection;
- (void)clearTextSelectionHandles;
- (void)clearTextSelectionMagnifier;
- (void)colorWidgetBackgrounds:(BOOL)arg1;
- (void)constrainedScrollToPoint:(struct CGPoint)arg1;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromPage:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toPage:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromPage:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toPage:(id)arg2;
- (struct CGRect)convertRectToRootView:(struct CGRect)arg1 fromPageLayer:(id)arg2;
- (struct CGRect)convertRootViewRect:(struct CGRect)arg1 toPageLayer:(id)arg2;
- (void)copy:(id)arg1;
- (long long)currentHistoryIndex;
- (void)dealloc;
- (double)defaultGutterWidth;
- (id)determineCurrentPage;
- (BOOL)displaysBookmarksForPages;
- (BOOL)displaysMarkupAnnotations;
- (BOOL)doPeriodicFlush;
- (void)documentDidBeginWrite:(id)arg1;
- (void)documentDidEndWrite:(id)arg1;
- (struct UIEdgeInsets)documentMargins;
- (id)documentScrollView;
- (id)documentViewController;
- (struct CGRect)documentViewFrustumForSelection:(id)arg1;
- (void)documentWasUnlocked;
- (id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
- (void)drawAccessibilityNodeType:(int)arg1 enableDrawing:(BOOL)arg2;
- (void)drawPage:(id)arg1 toContext:(struct CGContext *)arg2;
- (void)drawPagePost:(id)arg1 toContext:(struct CGContext *)arg2;
- (void)enableBackgroundImages:(BOOL)arg1;
- (BOOL)enableSelectionDrawing;
- (void)enableTextSelectionHandles;
- (void)encodeWithCoder:(id)arg1;
- (void)endEditingAnnotation;
- (void)endPDFViewRotation;
- (struct CGRect)extendedRootViewBounds;
- (struct CGRect)extensionViewBoundsInDocument;
- (double)extensionViewZoomScale;
- (void)findVisiblePages;
- (BOOL)flipsTileContents;
- (void)forceWebKitMainThread:(BOOL)arg1;
- (void)gestureInit;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)goBack:(id)arg1;
- (void)goForward:(id)arg1;
- (void)goToDestination:(id)arg1;
- (void)goToDestinationNoPush:(id)arg1;
- (void)goToFirstPage:(id)arg1;
- (void)goToLastPage:(id)arg1;
- (void)goToNextPage:(id)arg1;
- (void)goToPage:(id)arg1;
- (void)goToPage:(id)arg1 animated:(BOOL)arg2;
- (void)goToPageNoPush:(id)arg1;
- (void)goToPageNoPush:(id)arg1 animated:(BOOL)arg2;
- (void)goToPageWithoutBackgroundUpdate:(id)arg1;
- (void)goToPreviousPage:(id)arg1;
- (void)goToRect:(struct CGRect)arg1 onPage:(id)arg2;
- (void)goToSelection:(id)arg1;
- (double)greekingThreshold;
- (double)gutterWidth;
- (BOOL)handleBackTabInTextWidget:(id)arg1;
- (void)handleGesture:(unsigned long long)arg1 state:(long long)arg2 location:(struct CGPoint)arg3 locationOfFirstTouch:(struct CGPoint)arg4;
- (BOOL)handleTabInTextWidget:(id)arg1;
- (void)hintScrollDirectionHorizontal:(unsigned long long)arg1 andVertical:(unsigned long long)arg2;
- (id)history;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)interactWithAnnotation:(id)arg1;
- (void)internalSetScaleFactor:(double)arg1;
- (BOOL)isDrawingAccessibilityNodeType:(int)arg1;
- (BOOL)isForcingWebKitMainThread;
- (BOOL)isOverLinkAnnotation:(struct CGPoint)arg1;
- (BOOL)isRectVisible:(struct CGRect)arg1 onPage:(id)arg2;
- (unsigned long long)lastPageIndex;
- (void)layoutDocumentView;
- (void)layoutSubviews;
- (double)lineWidthThreshold;
- (id)longPressGestureRecognizer;
- (struct CGRect)mainScreenBounds;
- (double)mainScreenScale;
- (id)nextPage;
- (struct CGRect)normalizedPageBounds:(id)arg1;
- (id)pageColor;
- (id)pageForPoint:(struct CGPoint)arg1 nearest:(BOOL)arg2;
- (id)pageViewForPageAtIndex:(unsigned long long)arg1;
- (double)pageViewHeight:(id)arg1;
- (struct CGSize)pageViewSizeForPage:(id)arg1;
- (id)panGestureRecognizer;
- (struct CGSize)pdfDocumentViewSize;
- (void)pdfViewDidChangePage:(id)arg1;
- (void)pdfViewDidChangeScale:(id)arg1;
- (void)performAction:(id)arg1;
- (void)performBeep;
- (void)performOverlayAdaptorPageVisibilityTrueUpAfterSettingDocument;
- (id)popupManager;
- (void)positionInternalViews:(id)arg1;
- (id)previousPage;
- (void)pushDestination:(id)arg1;
- (void)reflectNewPageOn;
- (void)removeActiveAnnotation;
- (void)removeFromSuperview;
- (void)removePasswordUI;
- (id)renderingProperties;
- (void)resizeDisplayView:(id)arg1;
- (struct CGRect)rootViewBounds;
- (struct CGSize)rowSizeForPage:(id)arg1;
- (void)scrollByPage:(BOOL)arg1;
- (void)scrollHorizontalBy:(double)arg1;
- (struct CGPoint)scrollOriginForPageTopLeft:(id)arg1;
- (void)scrollSelectionToVisible:(id)arg1;
- (void)scrollVerticalBy:(double)arg1;
- (void)scrollViewSaysPageMayHaveChanged:(id)arg1;
- (BOOL)scrollingChangesPages;
- (void)selectAll:(id)arg1;
- (void)selfDidResize:(id)arg1;
- (void)setAkAnnotationEditingEnabled:(BOOL)arg1;
- (void)setAkToolbarViewItemTintColor:(id)arg1;
- (void)setAkToolbarViewTintColor:(id)arg1;
- (void)setBackgroundImage:(id)arg1 forPage:(id)arg2;
- (void)setBounds:(struct CGRect)arg1;
- (void)setCurrentSelection:(id)arg1 animate:(BOOL)arg2;
- (void)setCurrentSelectionNoClear:(id)arg1;
- (void)setDisplaysBookmarksForPages:(BOOL)arg1;
- (void)setDoPeriodicFlush:(BOOL)arg1;
- (void)setDocument:(id)arg1 waitDuration:(double)arg2;
- (void)setDocument:(id)arg1 withInitialPageIndex:(unsigned long long)arg2;
- (void)setDocumentMargins:(struct UIEdgeInsets)arg1;
- (void)setEnablePageShadows:(BOOL)arg1;
- (void)setEnableSelectionDrawing:(BOOL)arg1;
- (void)setEnableTileUpdates:(BOOL)arg1;
- (void)setForcesTopAlignment:(BOOL)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setGreekingThreshold:(double)arg1;
- (void)setGutterWidth:(double)arg1;
- (void)setIsUsingPDFExtensionView:(BOOL)arg1;
- (void)setLineWidthThreshold:(double)arg1;
- (void)setLollipopMagnifierPage:(id)arg1 forPagePoint:(struct CGPoint)arg2;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setNewPageVisibilityDelegate:(id)arg1 withOldDelegate:(id)arg2;
- (void)setPageColor:(id)arg1;
- (void)setPopupManager:(id)arg1;
- (void)setScaleFactor:(double)arg1 anchorPoint:(struct CGPoint)arg2;
- (void)setScrollViewScrollEnabled:(BOOL)arg1;
- (void)setScrollingChangesPages:(BOOL)arg1;
- (void)setShouldAntiAlias:(BOOL)arg1;
- (void)setShowsScrollIndicators:(BOOL)arg1;
- (void)setTextSelectionMagnifierPage:(id)arg1 forPagePoint:(struct CGPoint)arg2;
- (void)setUsesPageLabels:(BOOL)arg1;
- (BOOL)shouldAcceptTouch:(id)arg1 ofGestureRecognizer:(id)arg2;
- (BOOL)shouldAntiAlias;
- (void)showTextSelectionMenuIfPossible;
- (BOOL)showsScrollIndicators;
- (void)startEditingTextWidgetAnnotation:(id)arg1;
- (id)swipeGestureRecognizer;
- (void)syncPageIndexToScrollView;
- (void)takeBackgroundColorFrom:(id)arg1;
- (void)takePasswordFrom:(id)arg1;
- (id)tapGestureRecognizer;
- (int)textSelectionState;
- (void)updateCurrentPageUsingViewCenter;
- (void)updatePDFViewLayout:(struct CGRect)arg1 scrollViewFrame:(struct CGRect)arg2 zoomScale:(double)arg3;
- (void)usePageViewController:(BOOL)arg1 withViewOptions:(id)arg2;
- (BOOL)usesPageLabels;
- (id)viewForPage:(id)arg1;
- (id)visiblePageViews;
- (void)zoomIn:(id)arg1;
- (void)zoomOut:(id)arg1;

@end

