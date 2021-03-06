//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXTextComponentLayoutHosting-Protocol.h>
#import <Silex/SXTextSelecting-Protocol.h>
#import <Silex/SXTextTangierInteractiveCanvasControllerDataSource-Protocol.h>
#import <Silex/SXTextTangierInteractiveCanvasControllerDelegate-Protocol.h>
#import <Silex/SXViewportChangeListener-Protocol.h>
#import <Silex/TSDiOSCanvasViewControllerDelegate-Protocol.h>

@class NSMutableSet, NSString, SXScrollView, SXTangierRepDirectLayerHostProvider, SXTangierTextRenderCollector, SXTextTangierCanvasViewController, SXTextTangierDocumentRoot, SXTextTangierInteractiveCanvasController, SXViewport, TSKDocumentRoot, TSWPSelection, UIView;
@protocol SXComponentActionHandler, SXComponentController, SXComponentInteractionManager, SXDOMObjectProviding, SXTangierControllerDelegate, SXTangierDragItemProvider;

@interface SXTangierController : NSObject <SXTextTangierInteractiveCanvasControllerDelegate, SXTextTangierInteractiveCanvasControllerDataSource, SXViewportChangeListener, TSDiOSCanvasViewControllerDelegate, SXTextComponentLayoutHosting, SXTextSelecting>
{
    SXTextTangierDocumentRoot *_documentRoot;
    BOOL _enclosingCanvasScrolling;
    BOOL _rebuildFlows;
    BOOL _preventScrollViewDidScrollReentrance;
    BOOL _disableClippingForTiles;
    BOOL _performedInitialLayoutAndRender;
    struct os_unfair_lock_s _unfairLock;
    id<SXTangierControllerDelegate> _delegate;
    SXTextTangierCanvasViewController *_cvc;
    SXTextTangierInteractiveCanvasController *_icc;
    unsigned long long _initialSubviewCount;
    SXViewport *_viewport;
    SXScrollView *_scrollView;
    id<SXComponentActionHandler> _componentActionHandler;
    id<SXTangierDragItemProvider> _dragItemProvider;
    id<SXComponentController> _componentController;
    id<SXComponentInteractionManager> _componentInteractionManager;
    id<SXDOMObjectProviding> _DOMObjectProvider;
    SXTangierTextRenderCollector *_textRenderCollector;
    SXTangierRepDirectLayerHostProvider *_directLayerHostProvider;
    UIView *_underRepsHost;
    UIView *_aboveRepsHost;
    UIView *_overlayRepsHost;
    TSWPSelection *_storedSelection;
    NSMutableSet *_presentedTextViews;
}

@property (readonly, nonatomic) id<SXDOMObjectProviding> DOMObjectProvider; // @synthesize DOMObjectProvider=_DOMObjectProvider;
@property (readonly, nonatomic) UIView *aboveRepsHost; // @synthesize aboveRepsHost=_aboveRepsHost;
@property (readonly, nonatomic) BOOL allowEditMenuToAppear;
@property (readonly, nonatomic) BOOL allowTextEditingToBegin;
@property (readonly, nonatomic) id<SXComponentActionHandler> componentActionHandler; // @synthesize componentActionHandler=_componentActionHandler;
@property (readonly, weak, nonatomic) id<SXComponentController> componentController; // @synthesize componentController=_componentController;
@property (readonly, weak, nonatomic) id<SXComponentInteractionManager> componentInteractionManager; // @synthesize componentInteractionManager=_componentInteractionManager;
@property (readonly, nonatomic) SXTextTangierCanvasViewController *cvc; // @synthesize cvc=_cvc;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SXTangierControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SXTangierRepDirectLayerHostProvider *directLayerHostProvider; // @synthesize directLayerHostProvider=_directLayerHostProvider;
@property (nonatomic) BOOL disableClippingForTiles; // @synthesize disableClippingForTiles=_disableClippingForTiles;
@property (readonly, strong, nonatomic) TSKDocumentRoot *documentRoot; // @synthesize documentRoot=_documentRoot;
@property (readonly, nonatomic) id<SXTangierDragItemProvider> dragItemProvider; // @synthesize dragItemProvider=_dragItemProvider;
@property (nonatomic, getter=isEnclosingCanvasScrolling) BOOL enclosingCanvasScrolling; // @synthesize enclosingCanvasScrolling=_enclosingCanvasScrolling;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) SXTextTangierInteractiveCanvasController *icc; // @synthesize icc=_icc;
@property (nonatomic) unsigned long long initialSubviewCount; // @synthesize initialSubviewCount=_initialSubviewCount;
@property (readonly, nonatomic) BOOL interactiveCanvasControllerAllowsHyperlinkInteraction;
@property (readonly, nonatomic) BOOL isCanvasInteractive;
@property (readonly, nonatomic) BOOL isPrintingCanvas;
@property (readonly, nonatomic) UIView *overlayRepsHost; // @synthesize overlayRepsHost=_overlayRepsHost;
@property (nonatomic) BOOL performedInitialLayoutAndRender; // @synthesize performedInitialLayoutAndRender=_performedInitialLayoutAndRender;
@property (readonly, nonatomic) NSMutableSet *presentedTextViews; // @synthesize presentedTextViews=_presentedTextViews;
@property (nonatomic) BOOL preventScrollViewDidScrollReentrance; // @synthesize preventScrollViewDidScrollReentrance=_preventScrollViewDidScrollReentrance;
@property (nonatomic) BOOL rebuildFlows; // @synthesize rebuildFlows=_rebuildFlows;
@property (strong, nonatomic) SXScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property (nonatomic) BOOL selectionEnabled;
@property (readonly, nonatomic) BOOL shouldClipToScrollViewBoundsInVisibleBounds;
@property (readonly, nonatomic) BOOL shouldPopKnobsOutsideEnclosingScrollView;
@property (readonly, nonatomic) BOOL shouldResizeCanvasToScrollView;
@property (readonly, nonatomic) BOOL shouldShowInstructionalText;
@property (readonly, nonatomic) BOOL shouldShowTextOverflowGlyphs;
@property (readonly, nonatomic) struct CGSize sizeOfScrollViewEnclosingCanvas;
@property (readonly, nonatomic) BOOL spellCheckingSupported;
@property (readonly, nonatomic) BOOL spellCheckingSuppressed;
@property (strong, nonatomic) TSWPSelection *storedSelection; // @synthesize storedSelection=_storedSelection;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SXTangierTextRenderCollector *textRenderCollector; // @synthesize textRenderCollector=_textRenderCollector;
@property (readonly, nonatomic) UIView *underRepsHost; // @synthesize underRepsHost=_underRepsHost;
@property (readonly, nonatomic) struct os_unfair_lock_s unfairLock; // @synthesize unfairLock=_unfairLock;
@property (strong, nonatomic) SXViewport *viewport; // @synthesize viewport=_viewport;

- (void).cxx_destruct;
- (void)_fixLayoutOffsets;
- (id)backgroundColorForDragUIPlatter;
- (void)clearSelection;
- (void)dealloc;
- (void)didStartPresentingTextView:(id)arg1;
- (void)didStopPresentingTextView:(id)arg1;
- (void)didTransitionToPresented;
- (void)endSelection;
- (id)initWithViewport:(id)arg1 scrollView:(id)arg2 componentActionHandler:(id)arg3 dragItemProvider:(id)arg4 componentController:(id)arg5 componentInteractionManager:(id)arg6 DOMObjectProvider:(id)arg7 adIgnorableViewFactory:(id)arg8;
- (id)interactiveCanvasController:(id)arg1 delegateConformingToProtocol:(id)arg2 forRep:(id)arg3;
- (id)interactiveCanvasController:(id)arg1 dragItemForSmartField:(id)arg2 interaction:(id)arg3 session:(id)arg4;
- (struct CGRect)interactiveCanvasController:(id)arg1 expandVisibleBoundsForClippingReps:(struct CGRect)arg2;
- (struct CGRect)interactiveCanvasController:(id)arg1 expandVisibleBoundsForTiling:(struct CGRect)arg2;
- (id)interactiveCanvasController:(id)arg1 infoForModel:(id)arg2 withSelection:(id)arg3;
- (void)interactiveCanvasController:(id)arg1 interactedWithHyperlink:(id)arg2 info:(id)arg3 range:(struct _NSRange)arg4 touchPoint:(struct CGPoint)arg5 touchAndHold:(BOOL)arg6;
- (void)interactiveCanvasController:(id)arg1 scrollViewDidEndDragging:(id)arg2 willDecelerate:(BOOL)arg3;
- (void)interactiveCanvasController:(id)arg1 scrollViewWillBeginDragging:(id)arg2;
- (void)interactiveCanvasController:(id)arg1 scrollViewWillEndDragging:(id)arg2 withVelocity:(struct CGPoint)arg3 targetContentOffset:(inout struct CGPoint *)arg4;
- (BOOL)interactiveCanvasController:(id)arg1 shouldBeginInteraction:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)interactiveCanvasControllerDidLayoutAndRenderOnBackgroundThread:(id)arg1;
- (void)interactiveCanvasControllerDidScroll:(id)arg1;
- (void)interactiveCanvasControllerDidStopScrolling:(id)arg1;
- (BOOL)interactiveCanvasControllerIsRelatedCanvasScrolling:(id)arg1;
- (void)interactiveCanvasControllerWillStartInteraction:(id)arg1;
- (id)layoutDescriptionForComponent:(id)arg1;
- (struct CGPoint)pointForCharacterAtIndex:(unsigned long long)arg1 inComponentWithIdentifier:(id)arg2;
- (id)scrollPositionForVisibleBounds:(struct CGRect)arg1 canvasWidth:(double)arg2;
- (void)setUnscaledCanvasRect:(struct CGRect)arg1;
- (void)teardown;
- (id)topLevelLayersForInteractiveCanvasController:(id)arg1;
- (id)topLevelRepsForInteractiveCanvasController:(id)arg1;
- (void)updateCanvasSize:(struct CGSize)arg1 forComponentViews:(id)arg2;
- (void)updateInfosWithBlock:(CDUnknownBlockType)arg1;
- (void)updatePresentationState;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (struct CGRect)visibleBounds;
- (id)visibleBoundsClipViewForInteractiveCanvasController:(id)arg1;
- (void)willTransitionToPresented;

@end

