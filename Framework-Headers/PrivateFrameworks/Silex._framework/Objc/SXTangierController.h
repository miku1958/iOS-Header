//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/STTextTangierInteractiveCanvasControllerDataSource-Protocol.h>
#import <Silex/STTextTangierInteractiveCanvasControllerDelegate-Protocol.h>
#import <Silex/SXTextComponentLayoutHosting-Protocol.h>
#import <Silex/SXTextSelecting-Protocol.h>
#import <Silex/SXViewportChangeListener-Protocol.h>

@class NSMutableSet, NSString, STScrollView, STTangierRepDirectLayerHostProvider, STTangierTextRenderCollector, STTextTangierCanvasViewController, STTextTangierDocumentRoot, STTextTangierInteractiveCanvasController, SXViewport, TSKDocumentRoot, TSWPSelection, UIView;
@protocol OS_dispatch_semaphore, SXComponentActionHandler, SXTangierControllerDelegate, SXTangierDragItemProvider;

@interface SXTangierController : NSObject <STTextTangierInteractiveCanvasControllerDelegate, STTextTangierInteractiveCanvasControllerDataSource, SXViewportChangeListener, SXTextComponentLayoutHosting, SXTextSelecting>
{
    STTextTangierDocumentRoot *_documentRoot;
    BOOL _enclosingCanvasScrolling;
    BOOL _rebuildFlows;
    BOOL _preventScrollViewDidScrollReentrance;
    BOOL _disableClippingForTiles;
    BOOL _performedInitialLayoutAndRender;
    id<SXTangierControllerDelegate> _delegate;
    STTextTangierCanvasViewController *_cvc;
    STTextTangierInteractiveCanvasController *_icc;
    unsigned long long _initialSubviewCount;
    SXViewport *_viewport;
    STScrollView *_scrollView;
    id<SXComponentActionHandler> _componentActionHandler;
    id<SXTangierDragItemProvider> _dragItemProvider;
    STTangierTextRenderCollector *_textRenderCollector;
    STTangierRepDirectLayerHostProvider *_directLayerHostProvider;
    UIView *_underRepsHost;
    UIView *_aboveRepsHost;
    UIView *_overlayRepsHost;
    TSWPSelection *_storedSelection;
    NSMutableSet *_presentedTextViews;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property (readonly, nonatomic) UIView *aboveRepsHost; // @synthesize aboveRepsHost=_aboveRepsHost;
@property (readonly, nonatomic) BOOL allowEditMenuToAppear;
@property (readonly, nonatomic) BOOL allowTextEditingToBegin;
@property (readonly, nonatomic) id<SXComponentActionHandler> componentActionHandler; // @synthesize componentActionHandler=_componentActionHandler;
@property (readonly, nonatomic) STTextTangierCanvasViewController *cvc; // @synthesize cvc=_cvc;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SXTangierControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) STTangierRepDirectLayerHostProvider *directLayerHostProvider; // @synthesize directLayerHostProvider=_directLayerHostProvider;
@property (nonatomic) BOOL disableClippingForTiles; // @synthesize disableClippingForTiles=_disableClippingForTiles;
@property (readonly, nonatomic) TSKDocumentRoot *documentRoot;
@property (readonly, nonatomic) id<SXTangierDragItemProvider> dragItemProvider; // @synthesize dragItemProvider=_dragItemProvider;
@property (nonatomic, getter=isEnclosingCanvasScrolling) BOOL enclosingCanvasScrolling; // @synthesize enclosingCanvasScrolling=_enclosingCanvasScrolling;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) STTextTangierInteractiveCanvasController *icc; // @synthesize icc=_icc;
@property (nonatomic) unsigned long long initialSubviewCount; // @synthesize initialSubviewCount=_initialSubviewCount;
@property (readonly, nonatomic) BOOL interactiveCanvasControllerAllowsHyperlinkInteraction;
@property (readonly, nonatomic) BOOL isCanvasInteractive;
@property (readonly, nonatomic) BOOL isPrintingCanvas;
@property (readonly, nonatomic) UIView *overlayRepsHost; // @synthesize overlayRepsHost=_overlayRepsHost;
@property (nonatomic) BOOL performedInitialLayoutAndRender; // @synthesize performedInitialLayoutAndRender=_performedInitialLayoutAndRender;
@property (strong, nonatomic) NSMutableSet *presentedTextViews; // @synthesize presentedTextViews=_presentedTextViews;
@property (nonatomic) BOOL preventScrollViewDidScrollReentrance; // @synthesize preventScrollViewDidScrollReentrance=_preventScrollViewDidScrollReentrance;
@property (nonatomic) BOOL rebuildFlows; // @synthesize rebuildFlows=_rebuildFlows;
@property (strong, nonatomic) STScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
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
@property (readonly, nonatomic) STTangierTextRenderCollector *textRenderCollector; // @synthesize textRenderCollector=_textRenderCollector;
@property (readonly, nonatomic) UIView *underRepsHost; // @synthesize underRepsHost=_underRepsHost;
@property (strong, nonatomic) SXViewport *viewport; // @synthesize viewport=_viewport;

- (void).cxx_destruct;
- (void)_fixLayoutOffsets;
- (void)clearSelection;
- (void)dealloc;
- (void)didStartPresentingTextView:(id)arg1;
- (void)didStopPresentingTextView:(id)arg1;
- (void)didTransitionToPresented;
- (void)endSelection;
- (id)initWithViewport:(id)arg1 scrollView:(id)arg2 componentActionHandler:(id)arg3 dragItemProvider:(id)arg4;
- (id)interactiveCanvasController:(id)arg1 delegateConformingToProtocol:(id)arg2 forRep:(id)arg3;
- (id)interactiveCanvasController:(id)arg1 dragItemForSmartField:(id)arg2 interaction:(id)arg3 session:(id)arg4;
- (struct CGRect)interactiveCanvasController:(id)arg1 expandVisibleBoundsForClippingReps:(struct CGRect)arg2;
- (struct CGRect)interactiveCanvasController:(id)arg1 expandVisibleBoundsForTiling:(struct CGRect)arg2;
- (id)interactiveCanvasController:(id)arg1 infoForModel:(id)arg2 withSelection:(id)arg3;
- (void)interactiveCanvasController:(id)arg1 interactedWithHyperlink:(id)arg2 info:(id)arg3 range:(struct _NSRange)arg4 touchPoint:(struct CGPoint)arg5 touchAndHold:(BOOL)arg6;
- (void)interactiveCanvasController:(id)arg1 scrollViewDidEndDragging:(id)arg2 willDecelerate:(BOOL)arg3;
- (void)interactiveCanvasController:(id)arg1 scrollViewWillBeginDragging:(id)arg2;
- (void)interactiveCanvasController:(id)arg1 scrollViewWillEndDragging:(id)arg2 withVelocity:(struct CGPoint)arg3 targetContentOffset:(inout struct CGPoint *)arg4;
- (void)interactiveCanvasControllerDidLayoutAndRenderOnBackgroundThread:(id)arg1;
- (void)interactiveCanvasControllerDidScroll:(id)arg1;
- (void)interactiveCanvasControllerDidStopScrolling:(id)arg1;
- (BOOL)interactiveCanvasControllerIsRelatedCanvasScrolling:(id)arg1;
- (void)interactiveCanvasControllerWillStartInteraction:(id)arg1;
- (id)layoutDescriptionForComponent:(id)arg1;
- (struct CGPoint)pointForCharacterAtIndex:(unsigned long long)arg1 inComponentWithIndetifier:(id)arg2;
- (id)scrollPositionForVisibleRectWithComponentRect:(struct CGRect)arg1;
- (void)setUnscaledCanvasRect:(struct CGRect)arg1;
- (id)stringForLookupItemForInteractiveCanvasController:(id)arg1;
- (void)teardown;
- (id)topLevelLayersForInteractiveCanvasController:(id)arg1;
- (id)topLevelRepsForInteractiveCanvasController:(id)arg1;
- (void)updateCanvasSize:(struct CGSize)arg1 forComponentViews:(id)arg2;
- (void)updateHUD;
- (void)updateInfosWithBlock:(CDUnknownBlockType)arg1;
- (void)updatePresentationState;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (struct CGRect)visibleBounds;
- (id)visibleBoundsClipViewForInteractiveCanvasController:(id)arg1;
- (void)willTransitionToPresented;
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

