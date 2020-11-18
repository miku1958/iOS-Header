//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TSReading/NSCoding-Protocol.h>
#import <TSReading/TSDBackgroundLayoutAndRenderStateDelegate-Protocol.h>
#import <TSReading/TSDCanvasDelegate-Protocol.h>
#import <TSReading/TSDErrorPresenter-Protocol.h>
#import <TSReading/TSDModalOperationPresenter-Protocol.h>
#import <TSReading/TSDRepTrackerDelegateCreation-Protocol.h>
#import <TSReading/TSKChangeSourceObserver-Protocol.h>
#import <TSReading/TSKScrollViewDelegate-Protocol.h>

@class CALayer, NSArray, NSFormatter, NSMutableArray, NSMutableSet, NSRecursiveLock, NSSet, NSString, TSDBackgroundLayoutAndRenderState, TSDCanvas, TSDCanvasAnimation, TSDCanvasLayer, TSDCanvasView, TSDContainerRep, TSDDisplayLinkDispatch, TSDDynamicOperationController, TSDEditorController, TSDGestureDispatcher, TSDGuideController, TSDGuideStorage, TSDLayoutController, TSDTextInputResponder, TSDTileStorage, TSDTrackerManipulatorCoordinator, TSDTrackingController, TSKAccessController, TSKChangeNotifier, TSKDocumentRoot, TSPObjectContext;
@protocol TSDAnnotationHosting, TSDAnnotationPopoverController, TSDCanvasEditor, TSDCanvasLayerHosting, TSDEditor, TSDImageHUDController, TSDInteractiveCanvasControllerDelegate, TSDRepDirectLayerHostProvider, TSDRulerController, TSKDocumentRootProvider;

@interface TSDInteractiveCanvasController : NSObject <TSDCanvasDelegate, TSDErrorPresenter, TSDModalOperationPresenter, TSKChangeSourceObserver, NSCoding, TSKScrollViewDelegate, TSDBackgroundLayoutAndRenderStateDelegate, TSDRepTrackerDelegateCreation>
{
    id<TSDInteractiveCanvasControllerDelegate> mDelegate;
    TSDCanvas *mCanvas;
    id<TSDCanvasLayerHosting> mLayerHost;
    struct __CFDictionary *mContainerLayersByRep;
    struct __CFDictionary *mRepLayersByRep;
    struct __CFDictionary *mRepsByRepLayer;
    struct __CFDictionary *mRepsByContainerLayer;
    struct __CFDictionary *mDirectLayerHostsByRep;
    CALayer *mRepContainerLayer;
    TSDEditorController *mEditorController;
    TSDGuideController *mGuideController;
    NSObject<TSDCanvasEditor> *mCanvasEditor;
    BOOL mHasBeenTornDown;
    BOOL mHadLayerHost;
    BOOL mLayerHostHasBeenTornDown;
    TSDTextInputResponder *mTextInputResponder;
    TSDInteractiveCanvasController *mTextInputResponderSource;
    unsigned long long mTextInputResponderShareCount;
    NSFormatter *mUnitFormatter;
    BOOL mResizeCanvasOnLayout;
    BOOL mCreateRepsForOffscreenLayouts;
    BOOL mShouldAutoscrollToSelectionAfterLayout;
    BOOL mSuppressAutozoomToSelectionAfterLayout;
    BOOL mShouldAnimateAutoscroll;
    BOOL mShouldCenterSelectionWhenAutoscrolling;
    CALayer *mOverlayLayer;
    BOOL mOverlayLayerSuppressed;
    CALayer *mPopoutLayer;
    NSMutableArray *mDecorators;
    BOOL mShowGrayOverlay;
    BOOL mInDynamicOperation;
    int mDynamicOperationCounter;
    BOOL mInReadMode;
    BOOL mInVersionBrowsingMode;
    struct CGColor *mSelectionHighlightColor;
    BOOL mShowInvisibleObjects;
    TSDCanvasAnimation *mCurrentAnimation;
    TSDTrackerManipulatorCoordinator *mTMCoordinator;
    TSDDynamicOperationController *mDynOpController;
    NSObject<TSDRulerController> *mRulerController;
    TSDGestureDispatcher *mGestureDispatcher;
    BOOL mInspectorModeEnabled;
    NSMutableArray *mInspectorGestureRecognizersToReenable;
    CDUnknownBlockType mInspectorSingleTapBlock;
    struct CGPoint mLastTapPoint;
    struct CGRect mVisibleBoundsRectForTiling;
    struct CGRect mVisibleUnscaledRect;
    struct CGRect mUnobscuredScrollViewFrame;
    TSDBackgroundLayoutAndRenderState *mBackgroundLayoutAndRenderState;
    BOOL mStaticLayoutAndRenderOnThread;
    BOOL mLayoutAndRenderOnThreadDuringScroll;
    BOOL mNestedCanvasAllowLayoutAndRenderOnThread;
    BOOL mTemporarilyDisabledLayoutAndRenderOnThreadDuringScroll;
    BOOL mCurrentlyScrolling;
    BOOL mAnimatingScroll;
    BOOL mSuppressedAutozoom;
    BOOL mTextGesturesInFlight;
    BOOL _orbTextGesturesInFlight;
    id<TSDEditor> mSelectionChangeNotificationDeferredEditor;
    BOOL mShouldAutoscrollToSelectionAfterGestures;
    BOOL mSuspendedLowPriorityThreadDispatcher;
    BOOL mCurrentlyWaitingOnThreadedLayoutAndRender;
    int mDisableThreadedLayoutAndRender;
    unsigned int mEmbeddedCanvasScrolling;
    NSMutableArray *mHiddenTopLevelLayers;
    BOOL mShouldSuppressRendering;
    BOOL mSupportsBackgroundTileRendering;
    NSMutableSet *mNotificationsToPostWithValidLayouts;
    NSArray *mLayersWithZoomFadeAnimation;
    BOOL mDynamicallyZooming;
    double mDynamicViewScale;
    BOOL mUsesAlternateDrawableSelectionHighlight;
    double mTargetPointSize;
    BOOL mAnimatingViewScale;
    BOOL mSuppressingKeyboard;
    NSObject<TSDImageHUDController> *mImageHUDController;
    long long mImageHUDLock;
    NSObject<TSDImageHUDController> *mIAHUDController;
    long long mIAHUDLock;
    BOOL mIgnoreContentOffsetChanges;
    TSDTileStorage *mTileStorage;
    struct CGPoint mZoomCenterInBounds;
    NSMutableArray *mBackgroundRenderingObjects;
    id<TSDAnnotationHosting> mDisplayedAnnotation;
    id<TSDAnnotationPopoverController> mAnnotationPopoverController;
    BOOL mShouldClipThemeContentToCanvas;
    NSMutableArray *mNextLayoutBlocks;
    BOOL mShowUserDefinedGuides;
    BOOL mTeardownOnBackgroundThread;
    TSDDisplayLinkDispatch *mDisplayLinkDispatch;
    BOOL mRepViewsNeedUpdating;
    NSRecursiveLock *mSelfSync;
    BOOL mPreventSettingNilEditorOnTextResponder;
    BOOL mForceTilingLayoutOnThreadWhenScrolling;
    id<TSDRepDirectLayerHostProvider> _directLayerHostProvider;
    TSDTrackingController *mTrackingController;
    NSSet *mCachedTopLevelTilingLayers;
}

@property (readonly, nonatomic) TSKAccessController *accessController;
@property (readonly, nonatomic) NSArray *additionalLayersOverRepLayers;
@property (readonly, nonatomic) NSArray *additionalLayersUnderRepLayers;
@property (nonatomic) BOOL allowLayoutAndRenderOnThread; // @synthesize allowLayoutAndRenderOnThread=mLayoutAndRenderOnThreadDuringScroll;
@property (readonly, nonatomic) BOOL animatingViewScale; // @synthesize animatingViewScale=mAnimatingViewScale;
@property (readonly, nonatomic) TSDCanvas *canvas; // @synthesize canvas=mCanvas;
@property (strong, nonatomic) NSObject<TSDCanvasEditor> *canvasEditor; // @synthesize canvasEditor=mCanvasEditor;
@property (readonly, nonatomic) TSDCanvasLayer *canvasLayer;
@property (readonly, nonatomic) id canvasReferenceController;
@property (readonly, nonatomic) struct CGSize canvasScrollingOutset;
@property (readonly, nonatomic) TSDCanvasView *canvasView;
@property (readonly, nonatomic) CDStruct_499be82c centerPlusMovementContentPlacement;
@property (readonly, nonatomic) TSKChangeNotifier *changeNotifier;
@property (nonatomic) BOOL createRepsForOffscreenLayouts; // @synthesize createRepsForOffscreenLayouts=mCreateRepsForOffscreenLayouts;
@property (readonly, nonatomic) double currentViewScale;
@property (readonly, nonatomic) BOOL currentlyScrolling;
@property (readonly, nonatomic) BOOL currentlyWaitingOnThreadedLayoutAndRender; // @synthesize currentlyWaitingOnThreadedLayoutAndRender=mCurrentlyWaitingOnThreadedLayoutAndRender;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CGSize defaultMinimumUnscaledCanvasSize;
@property (readonly, nonatomic) double defaultViewScale;
@property (nonatomic) id<TSDInteractiveCanvasControllerDelegate> delegate; // @synthesize delegate=mDelegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) id<TSDRepDirectLayerHostProvider> directLayerHostProvider; // @synthesize directLayerHostProvider=_directLayerHostProvider;
@property (readonly, nonatomic) TSKDocumentRoot *documentRoot;
@property (readonly, nonatomic) id<TSKDocumentRootProvider> documentRootProvider;
@property (readonly, strong, nonatomic) TSDDynamicOperationController *dynamicOperationController;
@property (readonly, nonatomic) TSDEditorController *editorController;
@property (readonly, nonatomic) double fitWidthViewScale;
@property (nonatomic) BOOL forceTilingLayoutOnThreadWhenScrolling; // @synthesize forceTilingLayoutOnThreadWhenScrolling=mForceTilingLayoutOnThreadWhenScrolling;
@property (readonly, strong, nonatomic) TSDGestureDispatcher *gestureDispatcher;
@property (readonly, nonatomic) TSDGuideStorage *guideStorage;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL inReadMode; // @synthesize inReadMode=mInReadMode;
@property (nonatomic) BOOL inVersionBrowsingMode; // @synthesize inVersionBrowsingMode=mInVersionBrowsingMode;
@property (copy, nonatomic) NSArray *infosToDisplay;
@property (readonly, nonatomic) BOOL inspectorModeEnabled; // @synthesize inspectorModeEnabled=mInspectorModeEnabled;
@property (nonatomic) struct CGPoint lastTapPoint; // @synthesize lastTapPoint=mLastTapPoint;
@property (nonatomic) id<TSDCanvasLayerHosting> layerHost; // @synthesize layerHost=mLayerHost;
@property (readonly, nonatomic) TSDLayoutController *layoutController;
@property (nonatomic) BOOL nestedCanvasAllowLayoutAndRenderOnThread; // @synthesize nestedCanvasAllowLayoutAndRenderOnThread=mNestedCanvasAllowLayoutAndRenderOnThread;
@property (readonly, nonatomic) TSPObjectContext *objectContext;
@property (nonatomic) BOOL orbTextGesturesInFlight; // @synthesize orbTextGesturesInFlight=_orbTextGesturesInFlight;
@property (readonly, nonatomic) CALayer *overlayLayer; // @synthesize overlayLayer=mOverlayLayer;
@property (nonatomic) BOOL overlayLayerSuppressed; // @synthesize overlayLayerSuppressed=mOverlayLayerSuppressed;
@property (copy) NSSet *p_cachedTopLevelTilingLayers; // @synthesize p_cachedTopLevelTilingLayers=mCachedTopLevelTilingLayers;
@property struct CGRect p_visibleBoundsRectForTiling; // @synthesize p_visibleBoundsRectForTiling=mVisibleBoundsRectForTiling;
@property struct CGRect p_visibleUnscaledRect; // @synthesize p_visibleUnscaledRect=mVisibleUnscaledRect;
@property (nonatomic) BOOL preventSettingNilEditorOnTextResponder; // @synthesize preventSettingNilEditorOnTextResponder=mPreventSettingNilEditorOnTextResponder;
@property (readonly, nonatomic) CALayer *repContainerLayer; // @synthesize repContainerLayer=mRepContainerLayer;
@property (nonatomic) BOOL resizeCanvasOnLayout; // @synthesize resizeCanvasOnLayout=mResizeCanvasOnLayout;
@property (nonatomic) NSObject<TSDRulerController> *rulerController; // @synthesize rulerController=mRulerController;
@property (readonly, nonatomic) CDStruct_499be82c screenBottomContentPlacement;
@property (readonly, nonatomic) CDStruct_499be82c screenTopContentPlacement;
@property (nonatomic) struct CGColor *selectionHighlightColor;
@property (nonatomic) BOOL shouldAutoscrollToSelectionAfterLayout; // @synthesize shouldAutoscrollToSelectionAfterLayout=mShouldAutoscrollToSelectionAfterLayout;
@property (nonatomic) BOOL shouldClipThemeContentToCanvas; // @synthesize shouldClipThemeContentToCanvas=mShouldClipThemeContentToCanvas;
@property (nonatomic) BOOL shouldShowUserDefinedGuides;
@property (nonatomic) BOOL shouldSuppressRendering; // @synthesize shouldSuppressRendering=mShouldSuppressRendering;
@property (nonatomic) BOOL showGrayOverlay; // @synthesize showGrayOverlay=mShowGrayOverlay;
@property (nonatomic) BOOL showInvisibleObjects; // @synthesize showInvisibleObjects=mShowInvisibleObjects;
@property (nonatomic) BOOL showsComments;
@property (readonly, nonatomic) struct CGSize sizeOfScrollViewEnclosingCanvas;
@property (nonatomic) BOOL staticLayoutAndRenderOnThread; // @synthesize staticLayoutAndRenderOnThread=mStaticLayoutAndRenderOnThread;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsBackgroundTileRendering; // @synthesize supportsBackgroundTileRendering=mSupportsBackgroundTileRendering;
@property (nonatomic) BOOL suppressAutozoomToSelectionAfterLayout; // @synthesize suppressAutozoomToSelectionAfterLayout=mSuppressAutozoomToSelectionAfterLayout;
@property (nonatomic) BOOL textGesturesInFlight; // @synthesize textGesturesInFlight=mTextGesturesInFlight;
@property (readonly, nonatomic) TSDTextInputResponder *textInputResponder; // @synthesize textInputResponder=mTextInputResponder;
@property (readonly, strong, nonatomic) TSDTrackerManipulatorCoordinator *tmCoordinator;
@property (readonly, nonatomic) TSDContainerRep *topLevelContainerRepForEditing;
@property (readonly, nonatomic) CDStruct_499be82c touchContentPlacement;
@property (strong, nonatomic) TSDTrackingController *trackingController; // @synthesize trackingController=mTrackingController;
@property (nonatomic) struct CGRect unobscuredScrollViewFrame; // @synthesize unobscuredScrollViewFrame=mUnobscuredScrollViewFrame;
@property (nonatomic) BOOL usesAlternateDrawableSelectionHighlight;
@property (nonatomic) double viewScale;
@property (readonly, nonatomic) struct CGRect visibleBoundsRect;
@property (readonly, nonatomic) struct CGRect visibleBoundsRectClippedToWindow;
@property (readonly, nonatomic) struct CGRect visibleBoundsRectForTiling;
@property (readonly, nonatomic) struct CGRect visibleBoundsRectUsingSizeOfEnclosingScrollView;
@property (readonly, nonatomic) struct CGRect visibleUnscaledRect;
@property (readonly, nonatomic) struct CGRect visibleUnscaledRectForAutoscroll;
@property (readonly, nonatomic) struct CGRect visibleUnscaledRectForCanvasUI;
@property (readonly, nonatomic) struct CGRect visibleUnscaledRectForScrollingAutomatically;
@property (readonly, nonatomic) struct CGRect visibleUnscaledRectValidWhileZooming;

+ (id)keyPathsForValuesAffectingCurrentViewScale;
+ (id)keyPathsForValuesAffectingDocumentRoot;
+ (id)keyPathsForValuesAffectingEditorController;
+ (id)keyPathsForValuesAffectingViewScale;
+ (BOOL)selectorIsActionMethod:(SEL)arg1;
+ (double)smallRepOutsetForHitTesting;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (id)actionGhostKnobForRep:(id)arg1;
- (void)actionGhostKnobHitForRep:(id)arg1;
- (void)addBackgroundRenderingObject:(id)arg1;
- (void)addCommonObservers;
- (void)addDecorator:(id)arg1;
- (id)additionalVisibleInfosForCanvas:(id)arg1;
- (BOOL)allowAutoscroll;
- (BOOL)allowNegativeAutoscroll;
- (id)ancestorRepOfRep:(id)arg1 orDelegateConformingToProtocol:(id)arg2;
- (void)animateToViewScale:(double)arg1 contentOffset:(struct CGPoint)arg2 duration:(double)arg3;
- (void)animateToViewScale:(double)arg1 contentOffset:(struct CGPoint)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)animateToViewScale:(double)arg1 contentOffset:(struct CGPoint)arg2 duration:(double)arg3 forceAnimation:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (double)animationBeginTime;
- (double)animationDuration;
- (id)annotationController;
- (void)asyncProcessChanges:(id)arg1 forChangeSource:(id)arg2;
- (BOOL)attachedCommentsAllowedForDrawable:(id)arg1;
- (void)backgroundLayoutAndRenderState:(id)arg1 performWorkInBackgroundTilingOnly:(BOOL)arg2;
- (BOOL)backgroundLayoutAndRenderState:(id)arg1 shouldDispatchBackgroundWork:(CDUnknownBlockType)arg2;
- (void)backgroundLayoutAndRenderStateDidPerformBackgroundWork:(id)arg1;
- (void)beginAnimations:(id)arg1 context:(void *)arg2;
- (void)beginDynamicOperation;
- (id)beginEditingRep:(id)arg1;
- (id)beginEditingRep:(id)arg1 clearingSelection:(BOOL)arg2 withEditorProvider:(CDUnknownBlockType)arg3;
- (id)beginEditingRepForInfo:(id)arg1;
- (void)beginPossiblyParallelInspectorDynamicOperation;
- (void)beginScrollingOperation;
- (struct CGRect)boundingRectForActiveGuidesForRect:(struct CGRect)arg1;
- (BOOL)canDrawTilingLayerInBackground:(id)arg1;
- (BOOL)canPerformInteractiveAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canZoomToCurrentSelection;
- (void)canvas:(id)arg1 createdRep:(id)arg2;
- (id)canvas:(id)arg1 layoutGeometryProviderForLayout:(id)arg2;
- (void)canvas:(id)arg1 willLayoutRep:(id)arg2;
- (void)canvasDidLayout:(id)arg1;
- (void)canvasDidUpdateRepsFromLayouts:(id)arg1;
- (void)canvasDidUpdateVisibleBounds:(id)arg1;
- (void)canvasDidValidateLayouts:(id)arg1;
- (void)canvasDidValidateLayoutsWithDependencies:(id)arg1;
- (void)canvasLayoutInvalidated:(id)arg1;
- (struct CGRect)canvasViewBoundsWithBounds:(struct CGRect)arg1;
- (BOOL)canvasViewShouldBecomeFirstResponder:(id)arg1;
- (void)canvasWillLayout:(id)arg1;
- (void)canvasWillUpdateRepsFromLayouts:(id)arg1;
- (void)changeFirstResponderIfNecessary;
- (id)clampContentLocation:(id)arg1 forPlacement:(CDStruct_499be82c)arg2;
- (id)clampedCenterContentLocationForPoint:(struct CGPoint)arg1 withPlacement:(CDStruct_499be82c)arg2 viewScale:(double)arg3;
- (struct CGPoint)clampedCenterPointForPoint:(struct CGPoint)arg1 withPlacement:(CDStruct_499be82c)arg2 viewScale:(double)arg3;
- (struct CGPoint)clampedUnscaledContentOffset:(struct CGPoint)arg1 forViewScale:(double)arg2;
- (struct CGPoint)clampedUnscaledContentOffset:(struct CGPoint)arg1 forViewScale:(double)arg2 scrollViewBoundsSize:(struct CGSize)arg3;
- (void)closeOverlays;
- (void)commitAnimations;
- (id)containerLayerForRep:(id)arg1;
- (struct CGPoint)contentOffset;
- (CDStruct_499be82c)contentPlacementForPoint:(struct CGPoint)arg1 inView:(id)arg2;
- (struct CGPoint)convertBoundsToUnscaledPoint:(struct CGPoint)arg1;
- (struct CGRect)convertBoundsToUnscaledRect:(struct CGRect)arg1;
- (struct CGSize)convertBoundsToUnscaledSize:(struct CGSize)arg1;
- (id)convertContentLocation:(id)arg1 fromPlacement:(CDStruct_499be82c)arg2 toPlacement:(CDStruct_499be82c)arg3;
- (struct CGPoint)convertUnscaledToBoundsPoint:(struct CGPoint)arg1;
- (struct CGRect)convertUnscaledToBoundsRect:(struct CGRect)arg1;
- (struct CGSize)convertUnscaledToBoundsSize:(struct CGSize)arg1;
- (void)dealloc;
- (int)defaultKnobTypeForRep:(id)arg1;
- (void)deselectAll:(id)arg1;
- (void)didEndDrawingTilingLayerInBackground:(id)arg1 withToken:(id)arg2;
- (void)didLayoutAndRenderOnThread;
- (void)disableThreadedLayoutAndRender;
- (void)discardRepForClassChange:(id)arg1;
- (void)displayRulerForRect:(struct CGRect)arg1;
- (void)displayRulerWithSlowFade:(BOOL)arg1;
- (void)doubleTappedCanvasBackgroundAtPoint:(struct CGPoint)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)embeddedCanvasDidEndScrolling;
- (void)embeddedCanvasWillBeginScrolling;
- (void)enableThreadedLayoutAndRender;
- (void)encodeWithCoder:(id)arg1;
- (void)endDynamicOperation;
- (void)endEditing;
- (void)endPossiblyParallelInspectorDynamicOperation;
- (void)endScrollingOperation;
- (void)forceBackgroundLayout;
- (void)forceStopScrolling;
- (void)forwardInvocation:(id)arg1;
- (id)gestureTargetStack:(id)arg1;
- (struct CGSize)growUnscaledCanvasLayerSize:(struct CGSize)arg1;
- (BOOL)handleDoubleTapAtPoint:(struct CGPoint)arg1;
- (BOOL)handleSingleTapAtPoint:(struct CGPoint)arg1;
- (BOOL)hasAnnotations;
- (void)hideRuler;
- (id)hitKnobAtPoint:(struct CGPoint)arg1 returningRep:(id *)arg2;
- (id)hitRep:(struct CGPoint)arg1;
- (id)hitRep:(struct CGPoint)arg1 withGesture:(id)arg2 passingTest:(CDUnknownBlockType)arg3;
- (id)hitRepChromeAtUnscaledPoint:(struct CGPoint)arg1;
- (id)hitRepsAtPoint:(struct CGPoint)arg1 withSlop:(struct CGSize)arg2;
- (double)i_adjustViewScale:(double)arg1;
- (struct CGSize)i_canvasCenterOffsetForProposedViewScale:(double)arg1 originalViewScale:(double)arg2;
- (void)i_canvasContentsScaleDidChange;
- (struct CGRect)i_clippingBoundsForScrollViewEnclosingCanvas;
- (id)i_currentAnimation;
- (void)i_cvcWillBecomeFirstResponder;
- (void)i_cvcWillResignFirstResponder;
- (id)i_descriptionForViewScale:(double)arg1;
- (void)i_drawRepWithReadLock:(id)arg1 inContext:(struct CGContext *)arg2 forLayer:(id)arg3;
- (BOOL)i_inPrintPreviewMode;
- (void)i_invalidateSelectionHighlightLayers;
- (void)i_layerHostHasBeenTornDown;
- (void)i_layout;
- (void)i_layoutRegistered:(id)arg1;
- (void)i_layoutUnregistered:(id)arg1;
- (BOOL)i_needsLayout;
- (double)i_nextCanvasViewScaleDetentForProposedViewScale:(double)arg1 greater:(BOOL)arg2;
- (void)i_recordUserViewScale;
- (void)i_repNeedsDisplay:(id)arg1;
- (void)i_repNeedsDisplay:(id)arg1 inRect:(struct CGRect)arg2;
- (void)i_syncWithLayoutThread;
- (BOOL)i_temporarilyDisabledLayoutAndRenderOnThreadDuringScroll;
- (id)i_tileStorage;
- (id)i_topLevelLayersForTiling;
- (void)i_viewDidZoomToViewScale:(double)arg1;
- (void)i_viewIsZoomingAtPoint:(struct CGPoint)arg1;
- (void)i_viewScaleDidChange;
- (double)i_viewScaleForProposedViewScale:(double)arg1 originalViewScale:(double)arg2;
- (void)i_viewScrollDidChange;
- (void)i_viewScrollWillChange;
- (void)i_viewScrollingEnded;
- (void)i_viewWillBeginZooming;
- (id)infoForModel:(id)arg1 withSelection:(id)arg2;
- (id)infoToScrollToForModel:(id)arg1 withSelection:(id)arg2;
- (id)infosForGuides;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)invalidateComments;
- (void)invalidateLayers;
- (void)invalidateLayoutInBackground:(id)arg1;
- (void)invalidateReps;
- (void)invalidateRepsIfSynced;
- (void)invalidateRepsInBackground;
- (void)invalidateVisibleBounds;
- (void)invalidateVisibleBoundsInBackground;
- (BOOL)isCanvasInteractive;
- (BOOL)isInDynamicOperation;
- (BOOL)isInInspectorDynamicOperation;
- (BOOL)isPrinting;
- (BOOL)isPrintingCanvas;
- (BOOL)keyboardSuppressedAndTextInputEditorIgnoresFirstResponderChanges;
- (id)layerForRep:(id)arg1;
- (id)layoutForInfo:(id)arg1;
- (id)layoutForInfoNearestVisibleRect:(id)arg1;
- (id)layoutForInfoNearestVisibleRect:(id)arg1 intersectingSelection:(id)arg2;
- (id)layoutForModel:(id)arg1 withSelection:(id)arg2;
- (void)layoutIfNeeded;
- (void)layoutInvalidated;
- (id)layoutsForInfo:(id)arg1;
- (id)layoutsForInfo:(id)arg1 intersectingSelection:(id)arg2;
- (id)layoutsForModel:(id)arg1 withSelection:(id)arg2;
- (id)localizedPercentStringForAlignmentGuide:(id)arg1;
- (void)makeEditorPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)makeUserDefinedGuidesVisible;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)mustDrawTilingLayerOnMainThread:(id)arg1;
- (id)newCanvasEditor;
- (struct CGColor *)newDefaultSelectionHighlightColor;
- (void)p_acquireLockAndPerformAction:(CDUnknownBlockType)arg1;
- (BOOL)p_allowUpdateViewsFromReps;
- (void)p_applyViewScale:(double)arg1 andContentOffset:(struct CGPoint)arg2;
- (void)p_autoscrollToSelection:(id)arg1 withInfo:(id)arg2 isInitialSelection:(BOOL)arg3 focusRect:(struct CGRect)arg4;
- (void)p_autoscrollToSelection:(id)arg1 withInfo:(id)arg2 isInitialSelection:(BOOL)arg3 focusRect:(struct CGRect)arg4 scrollImmediately:(BOOL)arg5 skipZoom:(BOOL)arg6;
- (id)p_backgroundLayoutAndRenderState;
- (void)p_beginZoomingOperation;
- (struct CGRect)p_calculateVisibleBoundsRectForTiling;
- (struct CGRect)p_calculateVisibleUnscaledRect;
- (BOOL)p_centerOnInitialSelection;
- (void)p_commonInit;
- (BOOL)p_currentlyScrolling;
- (BOOL)p_currentlyScrollingIncludeEmbeddedCanvasScrolling:(BOOL)arg1;
- (id)p_decorators;
- (void)p_discardContainerLayer:(id)arg1 forRep:(id)arg2;
- (void)p_discardLayer:(id)arg1 forRep:(id)arg2;
- (void)p_drawLayerWithReadLock:(id)arg1;
- (void)p_editorControllerDidChangeCurrentEditors:(id)arg1;
- (void)p_editorControllerDidChangeTextInputEditor:(id)arg1;
- (void)p_editorControllerSelectionDidChange:(id)arg1;
- (void)p_editorControllerSelectionDidChangeAndWantsKeyboard:(id)arg1;
- (void)p_editorDidChangeSelection:(id)arg1 withSelectionFlags:(unsigned long long)arg2;
- (void)p_editorDoneChangingSelection:(id)arg1;
- (void)p_editorDoneChangingSelection:(id)arg1 withFlags:(unsigned long long)arg2;
- (BOOL)p_endEditingToBeginEditingRep:(id)arg1;
- (void)p_endZoomingOperation;
- (void)p_guideColorChanged:(id)arg1;
- (void)p_iccWillBecomeFirstResponderNotification:(id)arg1;
- (void)p_iccWillResignFirstResponderNotification:(id)arg1;
- (void)p_invalidateForBackgroundLayout;
- (void)p_invalidateTilingLayers;
- (void)p_layoutWithReadLock;
- (void)p_maybeSetTextResponderEditorTo:(id)arg1;
- (struct CGRect)p_outsetSelectionRect:(struct CGRect)arg1;
- (id)p_overlayLayerForReps:(id)arg1;
- (void)p_postNotificationOnMainThreadWithValidLayouts:(id)arg1;
- (void)p_recursiveHitKnobAtPoint:(struct CGPoint)arg1 inRep:(id)arg2 minDistance:(double *)arg3 hitKnob:(id *)arg4 hitRep:(id *)arg5;
- (void)p_recursivelyClearLayerDelegate:(id)arg1;
- (void)p_recursivelyUpdateLayerEdgeAntialiasingForLayer:(id)arg1;
- (void)p_recursivelyUpdateLayerForRep:(id)arg1 accumulatingLayers:(id)arg2 andReps:(id)arg3;
- (id)p_repForLayout:(id)arg1 createIfNeeded:(BOOL)arg2;
- (void)p_rulerUnitsDidChangeNotification:(id)arg1;
- (void)p_scrollModelToVisible:(id)arg1 withSelection:(id)arg2;
- (void)p_scrollToPrimarySelectionForEditor:(id)arg1 skipZoom:(BOOL)arg2;
- (void)p_scrollViewDidEndScrollingAnimation:(id)arg1;
- (id)p_setSelection:(id)arg1 onInfo:(id)arg2 withFlags:(unsigned long long)arg3;
- (void)p_setTargetPointSize:(double)arg1;
- (void)p_setupPopoutLayerForReps:(id)arg1;
- (BOOL)p_shouldLayoutAndRenderOnThread;
- (BOOL)p_shouldLayoutAndRenderOnThreadForcePendingLayout:(BOOL)arg1;
- (BOOL)p_shouldSuppressAutozoomForEditor:(id)arg1;
- (double)p_targetPointSize;
- (void)p_textGesturesDidEndNotification:(id)arg1;
- (void)p_textGesturesWillBeginNotification:(id)arg1;
- (void)p_updateCanvasSizeFromLayouts;
- (void)p_updateLayersFromReps;
- (void)p_updateViewsFromReps;
- (void)p_updateViewsFromRepsForceUpdate:(BOOL)arg1;
- (void)p_viewScrollingEnded;
- (struct CGRect)p_visibleBoundsRectUsingSizeOfEnclosingScrollView:(BOOL)arg1;
- (void)p_willEnterForeground:(id)arg1;
- (void)performBlockAfterNextLayout:(CDUnknownBlockType)arg1;
- (void)performBlockNextFrame:(CDUnknownBlockType)arg1;
- (void)popThreadedLayoutAndRenderDisabled;
- (void)presentError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)presentErrors:(id)arg1 withLocalizedDescription:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)provideDynamicGuides;
- (id)provideUserDefinedGuides;
- (void)pushThreadedLayoutAndRenderDisabled;
- (id)queueForDrawingTilingLayerInBackground:(id)arg1;
- (void)recreateAllLayoutsAndReps;
- (void)removeBackgroundRenderingObject:(id)arg1;
- (void)removeCommonObservers;
- (void)removeDecorator:(id)arg1;
- (id)repForContainerLayer:(id)arg1;
- (id)repForInfo:(id)arg1;
- (id)repForInfo:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)repForLayer:(id)arg1;
- (id)repForLayout:(id)arg1;
- (id)replaceImageController;
- (id)repsForInfo:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)resumeEditing;
- (void)reuseTextInputResponderFrom:(id)arg1;
- (void)scrollCurrentSelectionToVisible;
- (struct CGRect)scrollFocusRectForModel:(id)arg1 withSelection:(id)arg2;
- (void)scrollRectToVisible:(struct CGRect)arg1 animated:(BOOL)arg2;
- (void)scrollRectToVisibleCenter:(struct CGRect)arg1 animated:(BOOL)arg2 onlyScrollNecessaryAxes:(BOOL)arg3;
- (void)scrollRectToVisibleWithSelectionOutset:(struct CGRect)arg1 animated:(BOOL)arg2;
- (void)scrollSearchReferenceToVisible:(id)arg1;
- (void)scrollToPrimarySelection;
- (void)scrollToPrimarySelectionForEditor:(id)arg1;
- (void)scrollToSelection:(id)arg1 onModel:(id)arg2;
- (void)scrollToSelection:(id)arg1 onModel:(id)arg2 scrollImmediately:(BOOL)arg3;
- (struct CGPoint)scrollView:(id)arg1 restrictContentOffset:(struct CGPoint)arg2;
- (void)scrollView:(id)arg1 willAnimateToContentOffset:(struct CGPoint)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (BOOL)selectionContainsOnlyInfosOnCanvas:(id)arg1 model:(id)arg2;
- (void)setAnimation:(id)arg1 forLayer:(id)arg2 forKey:(id)arg3;
- (void)setAnimationCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setAnimationDelay:(double)arg1;
- (void)setAnimationDelegate:(id)arg1;
- (void)setAnimationDidStopSelector:(SEL)arg1;
- (void)setAnimationDuration:(double)arg1;
- (void)setAnimationFilterBlock:(CDUnknownBlockType)arg1;
- (void)setAnimationRepeatAutoreverses:(BOOL)arg1;
- (void)setAnimationRepeatCount:(float)arg1;
- (void)setAnimationStartDate:(id)arg1;
- (void)setAnimationTimingFunction:(id)arg1;
- (void)setAnimationUseRepFiltering:(BOOL)arg1;
- (void)setAnimationWillStartSelector:(SEL)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(BOOL)arg2;
- (void)setContentOffset:(struct CGPoint)arg1 clamp:(BOOL)arg2 animated:(BOOL)arg3;
- (void)setContentOffset:(struct CGPoint)arg1 clamp:(BOOL)arg2 animated:(BOOL)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)setKeyboardSuppressedAndTextInputEditorIgnoresFirstResponderChanges:(BOOL)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1 onLayer:(id)arg2;
- (void)setNeedsDisplayOnLayer:(id)arg1;
- (void)setSelection:(id)arg1 onModel:(id)arg2 withFlags:(unsigned long long)arg3;
- (void)setShouldSuppressRendering:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setViewScale:(double)arg1 andScrollViewFrame:(struct CGRect)arg2 animated:(BOOL)arg3;
- (void)setViewScale:(double)arg1 andScrollViewFrame:(struct CGRect)arg2 maintainPosition:(BOOL)arg3 animated:(BOOL)arg4;
- (void)setViewScale:(double)arg1 contentOffset:(struct CGPoint)arg2 clampOffset:(BOOL)arg3 animated:(BOOL)arg4;
- (void)setViewScale:(double)arg1 contentOffset:(struct CGPoint)arg2 clampOffset:(BOOL)arg3 animationDuration:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setViewScale:(double)arg1 contentOffset:(struct CGPoint)arg2 clampOffset:(BOOL)arg3 animationDuration:(double)arg4 forceAnimation:(BOOL)arg5 completion:(CDUnknownBlockType)arg6;
- (BOOL)shouldBeginDrawingTilingLayerInBackground:(id)arg1 returningToken:(id *)arg2 andQueue:(id *)arg3;
- (BOOL)shouldDisplayCommentUIForInfo:(id)arg1;
- (BOOL)shouldEverShowPathHighlightOnInvisibleShapes;
- (BOOL)shouldLayoutTilingLayer:(id)arg1;
- (BOOL)shouldPopKnobsOutsideEnclosingScrollView;
- (BOOL)shouldResampleImages;
- (BOOL)shouldResizeCanvasToScrollView;
- (BOOL)shouldShowInstructionalText;
- (BOOL)shouldShowOnRepHyperlinkUI;
- (BOOL)shouldShowPathHighlightOnUnselectedInvisibleShapes;
- (BOOL)shouldShowTextOverflowGlyphs;
- (BOOL)shouldZoomOnSelectionChange;
- (void)showOrHideComments:(id)arg1;
- (struct CGPoint)smartZoomCenterForNoSelection;
- (BOOL)spellCheckingSupported;
- (BOOL)spellCheckingSuppressed;
- (void)syncProcessChanges:(id)arg1 forChangeSource:(id)arg2;
- (void)tappedCanvasBackgroundAtPoint:(struct CGPoint)arg1;
- (void)teardown;
- (void)teardownBackgroundRendering;
- (void)teardownCanvasEditor;
- (void)toggleHyperlinkUIForRep:(id)arg1;
- (void)toggleShouldShowUserDefinedGuides;
- (id)topLevelRepsForDragSelecting;
- (id)topLevelRepsForHitTesting;
- (id)topLevelZOrderedSiblingsOfInfos:(id)arg1;
- (id)unitFormatter;
- (id)unitStringForAngle:(double)arg1;
- (id)unitStringForAngle:(double)arg1 andLength:(double)arg2;
- (id)unitStringForNumber:(double)arg1;
- (id)unitStringForPoint:(struct CGPoint)arg1;
- (id)unitStringForSize:(struct CGSize)arg1;
- (void)unobscuredFrameDidChange;
- (struct CGRect)unobscuredFrameOfView:(id)arg1;
- (void)updateSelectionForTapAtPoint:(struct CGPoint)arg1 extendingSelection:(BOOL)arg2;
- (void)updateSelectionForTapOnSelectedRep:(id)arg1;
- (id)validatedLayoutForInfo:(id)arg1;
- (void)viewDidEndZooming;
- (double)viewScaleForZoomToFitRect:(struct CGRect)arg1 outset:(BOOL)arg2 fitWidthOnly:(BOOL)arg3;
- (id)viewWithTransferredLayers;
- (struct CGRect)visibleBoundsForTilingLayer:(id)arg1;
- (struct CGRect)visibleScaledBoundsForClippingRepsOnCanvas:(id)arg1;
- (BOOL)wantsUpdatedScrollIndicatorInsets;
- (void)zoomToCurrentSelection;
- (BOOL)zoomToFitRect:(struct CGRect)arg1 outset:(BOOL)arg2 fitWidthOnly:(BOOL)arg3 centerHorizontally:(BOOL)arg4 centerVertically:(BOOL)arg5 animated:(BOOL)arg6;
- (void)zoomWithAnimationToUnscaledRect:(struct CGRect)arg1;

@end

