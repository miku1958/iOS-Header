//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/NSCoding-Protocol.h>
#import <UIKit/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKit/UIScrollViewDelayedTouchesBeganGestureRecognizerClient-Protocol.h>
#import <UIKit/_UIScrollToTopView-Protocol.h>

@class CADisplayLink, NSArray, NSISVariable, NSString, UIGestureRecognizer, UIImageView, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRefreshControl, UIScrollViewDirectionalPressGestureRecognizer, UIScrollViewPinchGestureRecognizer, UISwipeGestureRecognizer, _UIFeedbackEdgeBehavior, _UIFeedbackZoomEdgeBehavior, _UIFocusFastScrollingController, _UIFocusFastScrollingRequest, _UIScrollViewIndexBar, _UIStaticScrollBar;
@protocol UIFocusItem, UIScrollViewDelegate, _UIScrollViewLayoutObserver;

@interface UIScrollView : UIView <UIGestureRecognizerDelegate, UIScrollViewDelayedTouchesBeganGestureRecognizerClient, _UIScrollToTopView, NSCoding>
{
    id _delegate;
    struct CGSize _contentSize;
    struct UIEdgeInsets _contentInset;
    struct UIEdgeInsets _contentScrollInset;
    UIImageView *_verticalScrollIndicator;
    UIImageView *_horizontalScrollIndicator;
    _UIStaticScrollBar *_staticScrollBar;
    struct UIEdgeInsets _scrollIndicatorInset;
    double _startOffsetX;
    double _startOffsetY;
    double _lastUpdateOffsetX;
    double _lastUpdateOffsetY;
    double _lastUpdateTime;
    struct CGPoint _lastSetContentOffsetUnrounded;
    double _lastOffsetUpdateTimeInterval;
    struct CGSize _lastOffsetUpdateOffset;
    long long _smoothScrollCallbackSkips;
    long long _smoothScrollCallbackCurrentSkipCount;
    double _minimumZoomScale;
    double _maximumZoomScale;
    UIView *_zoomView;
    double _horizontalVelocity;
    double _verticalVelocity;
    double _previousHorizontalVelocity;
    double _previousVerticalVelocity;
    CADisplayLink *_scrollHeartbeat;
    struct CGPoint _pageDecelerationTarget;
    struct CGSize _decelerationFactor;
    struct CGPoint _adjustedDecelerationTarget;
    struct CGSize _adjustedDecelerationFactor;
    double _decelerationLnFactorH;
    double _decelerationLnFactorV;
    id *_shadows;
    id _scrollNotificationViews;
    double _contentOffsetAnimationDuration;
    id _animation;
    id _zoomAnimation;
    UIScrollViewPinchGestureRecognizer *_pinch;
    id _pan;
    id _swipe;
    id _touchDelayGestureRecognizer;
    UIScrollViewDirectionalPressGestureRecognizer *_directionalPressGestureRecognizer;
    UISwipeGestureRecognizer *_lowFidelitySwipeGestureRecognizers[4];
    UIScrollView *_draggingChildScrollView;
    struct CGPoint _parentAdjustment;
    double _pagingSpringPull;
    double _pagingFriction;
    long long _fastScrollCount;
    double _fastScrollMultiplier;
    double _fastScrollStartMultiplier;
    double _fastScrollEndTime;
    struct CGPoint _rotationCenterPoint;
    double _accuracy;
    unsigned long long _zoomAnimationCount;
    struct CGSize _accumulatedOffset;
    long long _touchLevel;
    double _savedKeyboardAdjustmentDelta;
    struct CGSize _interpageSpacing;
    struct CGPoint _pagingOrigin;
    struct UIOffset _firstPageOffset;
    UIRefreshControl *_refreshControl;
    UIView *_relativePanView;
    id<_UIScrollViewLayoutObserver> _layoutObserver;
    _UIFeedbackEdgeBehavior *_horizontalFeedbackBehavior;
    _UIFeedbackEdgeBehavior *_verticalFeedbackBehavior;
    _UIFeedbackZoomEdgeBehavior *_zoomFeedbackBehavior;
    struct UIEdgeInsets _gradientMaskLengths;
    struct UIEdgeInsets _gradientMaskEdgeInsets;
    _UIFocusFastScrollingRequest *_focusFastScrollingRequest;
    _UIFocusFastScrollingController *_focusFastScrollingController;
    _UIScrollViewIndexBar *_focusFastScrollingIndexBar;
    id<UIFocusItem> _overridingDestinationItemForFocusUpdate;
    struct {
        unsigned int tracking:1;
        unsigned int dragging:1;
        unsigned int verticalBounceEnabled:1;
        unsigned int horizontalBounceEnabled:1;
        unsigned int verticalBouncing:1;
        unsigned int horizontalBouncing:1;
        unsigned int bouncesZoom:1;
        unsigned int zoomBouncing:1;
        unsigned int alwaysBounceHorizontal:1;
        unsigned int alwaysBounceVertical:1;
        unsigned int preventScrollingContainer:1;
        unsigned int canCancelContentTouches:1;
        unsigned int delaysContentTouches:1;
        unsigned int programmaticScrollDisabled:1;
        unsigned int scrollDisabled:1;
        unsigned int zoomDisabled:1;
        unsigned int scrollTriggered:1;
        unsigned int showsHorizontalScrollIndicator:1;
        unsigned int showsVerticalScrollIndicator:1;
        unsigned int indexDisplayMode:2;
        unsigned int indicatorStyle:2;
        unsigned int inZoom:1;
        unsigned int hideIndicatorsInZoom:1;
        unsigned int pushedTrackingMode:1;
        unsigned int flashingScrollIndicators:1;
        unsigned int verticalIndicatorShrunk:1;
        unsigned int horizontalIndicatorShrunk:1;
        unsigned int contentFitDisableScrolling:1;
        unsigned int pagingEnabled:1;
        unsigned int pagingLeft:1;
        unsigned int pagingRight:1;
        unsigned int pagingUp:1;
        unsigned int pagingDown:1;
        unsigned int lastHorizontalDirection:1;
        unsigned int lastVerticalDirection:1;
        unsigned int dontScrollToTop:1;
        unsigned int scrollingToTop:1;
        unsigned int scrollingDirectionalPress:1;
        unsigned int singleFingerPan:1;
        unsigned int autoscrolling:1;
        unsigned int automaticContentOffsetAdjustmentDisabled:1;
        unsigned int skipStartOffsetAdjustment:1;
        unsigned int delegateScrollViewDidScroll:1;
        unsigned int delegateScrollViewDidZoom:1;
        unsigned int delegateContentSizeForZoomScale:1;
        unsigned int delegateScrollViewDidChangeContentSize:1;
        unsigned int delegateWasNonNil:1;
        unsigned int preserveCenterDuringRotation:1;
        unsigned int delaysTrackingWhileDecelerating:1;
        unsigned int pinnedZoomMin:1;
        unsigned int pinnedXMin:1;
        unsigned int pinnedYMin:1;
        unsigned int pinnedXMax:1;
        unsigned int pinnedYMax:1;
        unsigned int staysCenteredDuringPinch:1;
        unsigned int wasDelayingPinchForSystemGestures:1;
        unsigned int systemGesturesRecognitionPossible:1;
        unsigned int disableContentOffsetRounding:1;
        unsigned int alwaysDisableContentOffsetRounding:1;
        unsigned int adjustedDecelerationTargetX:1;
        unsigned int adjustedDecelerationTargetY:1;
        unsigned int hasScrolled:1;
        unsigned int wantsConstrainedContentSize:1;
        unsigned int constrainedContentSizeNeedsUpdate:1;
        unsigned int updateInsetBottom:1;
        unsigned int beingDraggedByChildScrollView:1;
        unsigned int adjustsTargetsOnContentOffsetChanges:1;
        unsigned int forwardsTouchesUpResponderChain:1;
        unsigned int firstResponderKeyboardAvoidanceDisabled:1;
        unsigned int hasGradientMaskView:1;
        unsigned int interruptingDeceleration:1;
        unsigned int delegateScrollViewAdjustedOffset:1;
        unsigned int disableUpdateOffsetOnCancelTracking:1;
        unsigned int inSetContentOffset:1;
        unsigned int canSkipTraitsAndOverlayUpdatesForViewControllerToNotifyOnLayout:1;
        unsigned int needToIncrementScrollBounceStatistic:1;
        unsigned int didSetContentSizeAtLeastOnce:1;
        unsigned int forcingPanGestureToEndImmediately:1;
        unsigned int isPreviewingFocusFastScrolling:1;
        unsigned int isIndicatingFocusFastScrollingDestination:1;
        unsigned int isAttemptingToEndFocusFastScrolling:1;
        unsigned int applicationHasExplicitlySetBounces:1;
        unsigned int needsDecelerationFrameTimeAdjustment:1;
    } _scrollViewFlags;
    BOOL _useContentDimensionVariablesForConstraintLowering;
    id _scrollTestParameters;
    long long _keyboardDismissMode;
    NSISVariable *_contentWidthVariable;
    NSISVariable *_contentHeightVariable;
    NSArray *_automaticContentConstraints;
    NSArray *__allowedTouchTypesForScrolling;
    struct CGPoint _zoomAnchorPoint;
}

@property (copy, nonatomic, setter=_setAllowedTouchTypesForScrolling:) NSArray *_allowedTouchTypesForScrolling; // @synthesize _allowedTouchTypesForScrolling=__allowedTouchTypesForScrolling;
@property (copy, nonatomic, setter=_setAutomaticContentConstraints:) NSArray *_automaticContentConstraints; // @synthesize _automaticContentConstraints;
@property (readonly, strong, nonatomic) NSISVariable *_contentHeightVariable; // @synthesize _contentHeightVariable;
@property (readonly, nonatomic, getter=_contentInsetIncludingDecorations) struct UIEdgeInsets _contentInsetIncludingDecorations;
@property (readonly, strong, nonatomic) NSISVariable *_contentWidthVariable; // @synthesize _contentWidthVariable;
@property (nonatomic, setter=_setDisableUpdateOffsetOnCancelTracking:) BOOL _disableUpdateOffsetOnCancelTracking;
@property (strong, nonatomic, setter=_setRefreshControl:) UIRefreshControl *_refreshControl;
@property (readonly, nonatomic) _UIStaticScrollBar *_staticScrollBar;
@property (nonatomic, setter=_setUseContentDimensionVariablesForConstraintLowering:) BOOL _useContentDimensionVariablesForConstraintLowering; // @synthesize _useContentDimensionVariablesForConstraintLowering;
@property (nonatomic, setter=_setWantsConstrainedContentSize:) BOOL _wantsConstrainedContentSize;
@property (nonatomic, getter=_adjustsTargetsOnContentOffsetChanges, setter=_setAdjustsTargetsOnContentOffsetChanges:) BOOL adjustsTargetsOnContentOffsetChanges;
@property (nonatomic) BOOL alwaysBounceHorizontal;
@property (nonatomic) BOOL alwaysBounceVertical;
@property (readonly, nonatomic, getter=_isAttemptingToEndFocusFastScrolling) BOOL attemptingToEndFocusFastScrolling;
@property (nonatomic) BOOL bounces;
@property (nonatomic) BOOL bouncesZoom;
@property (nonatomic) BOOL canCancelContentTouches;
@property (readonly, nonatomic, getter=_canScrollX) BOOL canScrollX; // @dynamic canScrollX;
@property (readonly, nonatomic, getter=_canScrollY) BOOL canScrollY; // @dynamic canScrollY;
@property (nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property (nonatomic) struct CGPoint contentOffset;
@property (nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isDecelerating) BOOL decelerating;
@property (nonatomic) double decelerationRate;
@property (nonatomic) BOOL delaysContentTouches; // @dynamic delaysContentTouches;
@property (weak, nonatomic) id<UIScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDirectionalLockEnabled) BOOL directionalLockEnabled;
@property (readonly, nonatomic) UIGestureRecognizer *directionalPressGestureRecognizer; // @synthesize directionalPressGestureRecognizer=_directionalPressGestureRecognizer;
@property (readonly, nonatomic, getter=isDragging) BOOL dragging;
@property (nonatomic, getter=_isFirstResponderKeyboardAvoidanceEnabled, setter=_setFirstResponderKeyboardAvoidanceEnabled:) BOOL firstResponderKeyboardAvoidanceEnabled;
@property (readonly, nonatomic, getter=_isFocusFastScrolling) BOOL focusFastScrolling;
@property (nonatomic, getter=_forwardsTouchesUpResponderChain, setter=_setForwardsTouchesUpResponderChain:) BOOL forwardsTouchesUpResponderChain;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long indexDisplayMode;
@property (nonatomic) long long indicatorStyle;
@property (readonly, nonatomic, getter=_isAnimatingScroll) BOOL isAnimatingScroll;
@property (readonly, nonatomic, getter=_isAnimatingZoom) BOOL isAnimatingZoom;
@property (readonly, nonatomic, getter=_isHorizontalBouncing) BOOL isHorizontalBouncing;
@property (readonly, nonatomic, getter=_isVerticalBouncing) BOOL isVerticalBouncing;
@property (nonatomic) long long keyboardDismissMode; // @synthesize keyboardDismissMode=_keyboardDismissMode;
@property (readonly, nonatomic, getter=_maximumContentOffset) struct CGPoint maximumContentOffset;
@property (nonatomic) double maximumZoomScale; // @synthesize maximumZoomScale=_maximumZoomScale;
@property (readonly, nonatomic, getter=_minimumContentOffset) struct CGPoint minimumContentOffset;
@property (nonatomic) double minimumZoomScale;
@property (nonatomic, getter=isPagingEnabled) BOOL pagingEnabled;
@property (readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_pan;
@property (readonly, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer; // @synthesize pinchGestureRecognizer=_pinch;
@property (nonatomic, getter=isProgrammaticScrollEnabled) BOOL programmaticScrollEnabled;
@property (strong, nonatomic) UIRefreshControl *refreshControl;
@property (nonatomic, getter=isScrollEnabled) BOOL scrollEnabled;
@property (readonly, nonatomic, getter=_scrollHysteresis) double scrollHysteresis; // @dynamic scrollHysteresis;
@property (nonatomic) struct UIEdgeInsets scrollIndicatorInsets;
@property (strong, nonatomic) id scrollTestParameters; // @synthesize scrollTestParameters=_scrollTestParameters;
@property (readonly, nonatomic, getter=_isScrollingToTop) BOOL scrollingToTop;
@property (nonatomic) BOOL scrollsToTop;
@property (nonatomic, getter=_isShowingFocusFastScrollingPreview, setter=_setShowingFocusFastScrollingPreview:) BOOL showingFocusFastScrollingPreview;
@property (nonatomic) BOOL showsHorizontalScrollIndicator;
@property (nonatomic) BOOL showsVerticalScrollIndicator;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=_touchDelayForScrollDetection) double touchDelayForScrollDetection; // @dynamic touchDelayForScrollDetection;
@property (readonly, nonatomic, getter=isTracking) BOOL tracking;
@property (nonatomic, getter=_zoomAnchorPoint, setter=_setZoomAnchorPoint:) struct CGPoint zoomAnchorPoint; // @synthesize zoomAnchorPoint=_zoomAnchorPoint;
@property (readonly, nonatomic, getter=isZoomBouncing) BOOL zoomBouncing;
@property (nonatomic) double zoomScale;
@property (readonly, nonatomic, getter=isZooming) BOOL zooming;

+ (id)_implicitAnimationCulprits;
+ (SEL)_panGestureAction;
+ (SEL)_pinchGestureAction;
- (void).cxx_destruct;
- (unsigned long long)_abuttedEdgesForContentOffset:(struct CGPoint)arg1;
- (unsigned long long)_abuttedPagingEdges;
- (void)_accumulateViewConstraintsIntoArray:(id)arg1;
- (void)_activateScrollFeedback;
- (void)_activateZoomFeedback;
- (void)_addContentSubview:(id)arg1 atBack:(BOOL)arg2;
- (void)_addScrollNotificationView:(id)arg1;
- (void)_adjustBackgroundShadowsForContentSizeForcedVisible:(BOOL)arg1;
- (void)_adjustBackgroundShadowsForContentSizeForcedVisible:(BOOL)arg1 withOffset:(double)arg2;
- (void)_adjustContentOffsetIfNecessary;
- (void)_adjustContentSizeForView:(id)arg1 atScale:(double)arg2;
- (void)_adjustCrossingConstraintsIfNecessaryForOldContentInset:(struct UIEdgeInsets)arg1;
- (struct CGPoint)_adjustFocusContentOffset:(struct CGPoint)arg1 forView:(id)arg2;
- (void)_adjustForAutomaticKeyboardInfo:(id)arg1 animated:(BOOL)arg2 lastAdjustment:(double *)arg3;
- (void)_adjustScrollerIndicators:(BOOL)arg1 alwaysShowingThem:(BOOL)arg2;
- (void)_adjustScrollerIndicatorsIfNeeded;
- (void)_adjustShadowsIfNecessary;
- (void)_adjustShadowsIfNecessaryForOffset:(double)arg1;
- (void)_adjustStartOffsetForGrabbedBouncingScrollView;
- (struct CGPoint)_adjustedContentOffsetForContentOffset:(struct CGPoint)arg1;
- (double)_adjustedHorizontalOffsetPinnedToScrollableBounds:(double)arg1;
- (double)_adjustedVerticalOffsetPinnedToScrollableBounds:(double)arg1;
- (unsigned long long)_allowedFocusBounceEdges;
- (struct CGPoint)_animatedOriginalOffset;
- (struct CGPoint)_animatedTargetOffset;
- (BOOL)_applicationHasExplicitlySetBounces;
- (void)_applyConstrainedContentSizeIfNecessary;
- (void)_attemptToBeginFocusFastScrollingWithRequest:(id)arg1;
- (void)_attemptToDragParent:(id)arg1 forNewBounds:(struct CGRect)arg2 oldBounds:(struct CGRect)arg3;
- (BOOL)_attemptToEndFocusFastScrolling:(BOOL)arg1;
- (id)_backgroundShadowForSlideAnimation;
- (void)_beginIndicatingFocusFastScrollingDestination;
- (void)_beginRefreshing;
- (BOOL)_beginTrackingWithEvent:(id)arg1;
- (BOOL)_bounceForCarPlayIfNecessary;
- (BOOL)_canCancelContentTouches:(id)arg1;
- (BOOL)_canScrollWithoutBouncingX;
- (BOOL)_canScrollWithoutBouncingY;
- (BOOL)_canSkipTraitsAndOverlayUpdatesForViewControllerToNotifyOnLayoutResetState:(BOOL)arg1;
- (void)_centerContentIfNecessary;
- (void)_centerContentIfNecessaryAdjustingContentOffset:(BOOL)arg1;
- (void)_clearContentOffsetAnimation;
- (void)_clearContentOffsetAnimation:(id)arg1;
- (void)_clearParentAdjustment;
- (void)_clearScrollBounceStatisticsTrackingState;
- (void)_commitScrollBounceStatisticsTrackingState;
- (BOOL)_constraintAffectsContentSize:(id)arg1;
- (id)_constraintsFromContentSize;
- (double)_contentFitCanScrollThreshold;
- (double)_contentOffsetAnimationDuration;
- (struct CGPoint)_contentOffsetForLowFidelityScrollInDirection:(struct CGPoint)arg1 duration:(double *)arg2;
- (BOOL)_contentOffsetRoundingEnabled;
- (struct UIEdgeInsets)_contentScrollInset;
- (void)_createGestureRecognizersForCurrentTouchLevel;
- (unsigned long long)_currentlyAbuttedContentEdges;
- (double)_defaultPagingFriction;
- (void)_delegateScrollViewAnimationEnded;
- (void)_didAddDependentConstraint:(id)arg1;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_didRemoveDependentConstraint:(id)arg1;
- (void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (long long)_effectiveIndicatorStyle;
- (void)_enableOnlyGestureRecognizersForCurrentTouchLevel;
- (void)_endIndicatingFocusFastScrollingDestination;
- (void)_endPanNormal:(BOOL)arg1;
- (void)_endRefreshingAnimated:(BOOL)arg1;
- (void)_ensureViewsAreLoadedInRect:(struct CGRect)arg1;
- (BOOL)_evaluateWantsConstrainedContentSize;
- (struct UIEdgeInsets)_fastScrollingIndexBarInsets;
- (long long)_fastScrollingIndexMaximumSlotCount;
- (struct UIOffset)_firstPageOffset;
- (void)_flashScrollIndicatorsPersistingPreviousFlashes:(BOOL)arg1;
- (id)_focusFastScrollingDestinationItem;
- (id)_focusFastScrollingDestinationItemAtContentEnd;
- (id)_focusFastScrollingDestinationItemAtContentStart;
- (id)_focusFastScrollingDestinationItemAtRelativePosition:(double)arg1 isEnding:(BOOL)arg2;
- (id)_focusFastScrollingDestinationItemForIndexEntry:(id)arg1;
- (id)_focusFastScrollingDestinationItemNearItem:(id)arg1 isEnd:(BOOL)arg2;
- (id)_focusFastScrollingIndexEntries;
- (id)_focusFastScrollingIndexEntriesForDisplay;
- (struct CGPoint)_focusTargetOffset;
- (void)_focusedView:(id)arg1 isMinX:(BOOL *)arg2 isMaxX:(BOOL *)arg3 isMinY:(BOOL *)arg4 isMaxY:(BOOL *)arg5;
- (void)_forceDelegateScrollViewDidZoom:(BOOL)arg1;
- (void)_forcePanGestureToEndImmediately;
- (BOOL)_forwardsToParentScroller;
- (BOOL)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_gestureRecognizerFailed:(id)arg1;
- (BOOL)_getBouncingDecelerationOffset:(double *)arg1 forTimeInterval:(double)arg2 lastUpdateOffset:(double)arg3 min:(double)arg4 max:(double)arg5 decelerationFactor:(double)arg6 decelerationLnFactor:(double)arg7 velocity:(double *)arg8;
- (id)_getDelegateZoomView;
- (void)_getGradientMaskBounds:(out struct CGRect *)arg1 startInsets:(out struct UIEdgeInsets *)arg2 endInsets:(out struct UIEdgeInsets *)arg3 intensities:(out struct UIEdgeInsets *)arg4;
- (BOOL)_getPagingDecelerationOffset:(struct CGPoint *)arg1 forTimeInterval:(double)arg2;
- (void)_getStandardDecelerationOffset:(double *)arg1 forTimeInterval:(double)arg2 min:(double)arg3 max:(double)arg4 decelerationFactor:(double)arg5 decelerationLnFactor:(double)arg6 velocity:(double *)arg7;
- (struct UIEdgeInsets)_gradientMaskEdgeInsets;
- (struct UIEdgeInsets)_gradientMaskInsets;
- (struct UIEdgeInsets)_gradientMaskLengths;
- (void)_handleDirectionalPress:(id)arg1;
- (void)_handleDirectionalScrollToOffset:(struct CGPoint)arg1 clampingToBounds:(BOOL)arg2;
- (void)_handleLowFidelitySwipe:(id)arg1;
- (void)_handleSwipe:(id)arg1;
- (double)_heightForFocusFastScrollingUI:(double)arg1;
- (void)_hideScrollIndicators;
- (id)_horizontalFeedbackBehavior;
- (double)_horizontalVelocity;
- (void)_incrementForScrollTest;
- (struct CGSize)_interpageSpacing;
- (BOOL)_isAnimatingScrollTest;
- (BOOL)_isAutomaticContentOffsetAdjustmentEnabled;
- (BOOL)_isAutoscrolling;
- (BOOL)_isBouncing;
- (BOOL)_isInterruptingDeceleration;
- (BOOL)_isRectFullyVisible:(struct CGRect)arg1;
- (BOOL)_isScrollingEnabled;
- (void)_layoutFocusFastScrollingUI;
- (id)_layoutObserver;
- (void)_layoutStaticScrollBar;
- (id)_layoutVariablesWithAmbiguousValue;
- (void)_lowFidelityScrollInDirection:(struct CGPoint)arg1;
- (void)_markScrollViewAnimationForKey:(id)arg1 ofView:(id)arg2;
- (void)_moveContentSubview:(id)arg1 toBack:(BOOL)arg2;
- (void)_notifyDidScroll;
- (struct CGSize)_nsis_contentSize;
- (struct UIOffset)_offsetForCenterOfPossibleZoomView:(id)arg1 withIncomingBoundsSize:(struct CGSize)arg2;
- (double)_offsetForRubberBandOffset:(double)arg1 maxOffset:(double)arg2 minOffset:(double)arg3 range:(double)arg4;
- (struct CGPoint)_offsetToScrollToForArrowPressType:(long long)arg1;
- (double)_offsetWithoutDecorationForRubberBandOffset:(double)arg1 maxOffset:(double)arg2 minOffset:(double)arg3 range:(double)arg4;
- (void)_old_updateAutomaticContentSizeConstraintsIfNecessaryWithContentSize:(struct CGSize)arg1;
- (struct CGPoint)_originalOffsetForAnimatedSetContentOffset;
- (id)_overridingDestinationEnvironmentForFocusUpdateInContext:(id)arg1;
- (BOOL)_ownsAnimationForKey:(id)arg1 ofView:(id)arg2;
- (struct CGPoint)_pageDecelerationTarget;
- (BOOL)_pagingDown;
- (double)_pagingFriction;
- (BOOL)_pagingLeft;
- (struct CGPoint)_pagingOrigin;
- (BOOL)_pagingRight;
- (BOOL)_pagingUp;
- (id)_panGestureRecognizer;
- (id)_parentScrollView;
- (void)_performFullScreenScrollTest:(id)arg1 iterations:(int)arg2 scrollAxis:(int)arg3;
- (void)_performScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3;
- (void)_performScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4;
- (void)_performScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4 scrollAxis:(int)arg5;
- (void)_performScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4 scrollAxis:(int)arg5 extraResultsBlock:(CDUnknownBlockType)arg6;
- (void)_performScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 scrollAxis:(int)arg4;
- (void)_pinContentOffsetToClosestPageBoundary;
- (void)_popTrackingRunLoopMode;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_prepareToPageWithHorizontalVelocity:(double)arg1 verticalVelocity:(double)arg2;
- (void)_quicklyHideScrollIndicator:(id)arg1 animated:(BOOL)arg2;
- (struct CGRect)_rectForPageContainingView:(id)arg1;
- (void)_reenableImplicitAnimationsAfterScrollTest;
- (void)_registerAsScrollToTopViewIfPossible;
- (void)_registerForRotation:(BOOL)arg1 ofWindow:(id)arg2;
- (void)_registerForSpringBoardBlankedScreenNotification;
- (id)_relativePanView;
- (void)_reloadFocusFastScrollingIndexEntries;
- (void)_removeFocusFastScrollingUI;
- (void)_removeScrollNotificationView:(id)arg1;
- (BOOL)_resetScrollingForGestureEvent:(id)arg1;
- (void)_resetScrollingWithUIEvent:(id)arg1;
- (void)_resizeWithOldSuperviewSize:(struct CGSize)arg1;
- (struct CGPoint)_roundedProposedContentOffset:(struct CGPoint)arg1;
- (struct CGPoint)_rubberBandContentOffsetForOffset:(struct CGPoint)arg1 outsideX:(BOOL *)arg2 outsideY:(BOOL *)arg3;
- (double)_rubberBandOffsetForOffset:(double)arg1 maxOffset:(double)arg2 minOffset:(double)arg3 range:(double)arg4 outside:(BOOL *)arg5;
- (double)_rubberBandOffsetWithoutDecorationForOffset:(double)arg1 maxOffset:(double)arg2 minOffset:(double)arg3 range:(double)arg4 outside:(BOOL *)arg5;
- (void)_runLoopModePopped:(id)arg1;
- (id)_scrollTestExtraResults;
- (void)_scrollToTopFromTouchAtScreenLocation:(struct CGPoint)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (BOOL)_scrollToTopIfPossible:(BOOL)arg1;
- (void)_scrollViewAnimationEnded:(id)arg1 finished:(BOOL)arg2;
- (void)_scrollViewDidEndDecelerating;
- (void)_scrollViewDidEndDeceleratingForDelegate;
- (void)_scrollViewDidEndDraggingForDelegateWithDeceleration:(BOOL)arg1;
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)arg1;
- (void)_scrollViewDidEndZooming;
- (id)_scrollViewTouchDelayGesture;
- (void)_scrollViewWillBeginDragging;
- (void)_scrollViewWillBeginZooming;
- (BOOL)_scrollViewWillEndDraggingWithDeceleration:(BOOL)arg1;
- (BOOL)_scrollsToMakeFirstResponderVisible;
- (void)_setAbsoluteContentOffset:(struct CGPoint)arg1 animated:(BOOL)arg2;
- (void)_setAllowedFocusBounceEdges:(unsigned long long)arg1;
- (void)_setAlwaysBounceVertical:(BOOL)arg1;
- (void)_setAutomaticContentOffsetAdjustmentEnabled:(BOOL)arg1;
- (void)_setAutoscrolling:(BOOL)arg1;
- (void)_setContentOffset:(struct CGPoint)arg1 animated:(BOOL)arg2 animationCurve:(int)arg3;
- (void)_setContentOffset:(struct CGPoint)arg1 animated:(BOOL)arg2 animationCurve:(int)arg3 animationAdjustsForContentOffsetDelta:(BOOL)arg4;
- (void)_setContentOffset:(struct CGPoint)arg1 duration:(double)arg2 animationCurve:(int)arg3;
- (void)_setContentOffsetAnimationDuration:(double)arg1;
- (void)_setContentOffsetPinned:(struct CGPoint)arg1;
- (void)_setContentOffsetPinned:(struct CGPoint)arg1 animated:(BOOL)arg2;
- (void)_setContentOffsetRoundingEnabled:(BOOL)arg1;
- (void)_setContentScrollInset:(struct UIEdgeInsets)arg1;
- (void)_setFirstPageOffset:(struct UIOffset)arg1;
- (void)_setGradientMaskEdgeInsets:(struct UIEdgeInsets)arg1;
- (void)_setGradientMaskInsets:(struct UIEdgeInsets)arg1;
- (void)_setGradientMaskLengths:(struct UIEdgeInsets)arg1;
- (void)_setHorizontalFeedbackBehavior:(id)arg1;
- (void)_setInterpageSpacing:(struct CGSize)arg1;
- (void)_setLayoutObserver:(id)arg1;
- (void)_setMaskView:(id)arg1;
- (void)_setPagingFriction:(double)arg1;
- (void)_setPagingOrigin:(struct CGPoint)arg1;
- (void)_setPanGestureRecognizer:(id)arg1;
- (void)_setPinchGestureRecognizer:(id)arg1;
- (void)_setRelativePanView:(id)arg1;
- (void)_setShowsBackgroundShadow:(BOOL)arg1;
- (void)_setShowsHorizontalScrollIndicator:(BOOL)arg1;
- (void)_setShowsVerticalScrollIndicator:(BOOL)arg1;
- (void)_setStaysCenteredDuringPinch:(BOOL)arg1;
- (void)_setSubviewWantsAutolayoutTripWantsAutolayout:(BOOL)arg1;
- (void)_setTransfersScrollToContainer:(BOOL)arg1;
- (void)_setUsesStaticScrollBar:(BOOL)arg1;
- (void)_setVerticalFeedbackBehavior:(id)arg1;
- (void)_setZoomFeedbackBehavior:(id)arg1;
- (double)_shadowHeightOffset;
- (BOOL)_shouldScrollToContentBeginningInRightToLeft;
- (BOOL)_shouldTrackImmediatelyWhileDecelerating;
- (void)_showFocusFastScrollingIndexBar:(id)arg1;
- (void)_showFocusFastScrollingUI;
- (BOOL)_showsBackgroundShadow;
- (void)_simulateGestureWithDuration:(double)arg1 begin:(CDUnknownBlockType)arg2 update:(CDUnknownBlockType)arg3 end:(CDUnknownBlockType)arg4;
- (void)_simulateScrollWithTranslation:(struct CGPoint)arg1 duration:(double)arg2 willBeginDragging:(CDUnknownBlockType)arg3 didEndDragging:(CDUnknownBlockType)arg4 willBeginDecelerating:(CDUnknownBlockType)arg5 didEndDecelerating:(CDUnknownBlockType)arg6;
- (void)_simulateZoomByScaleFactor:(double)arg1 duration:(double)arg2 willBeginZooming:(CDUnknownBlockType)arg3 didEndZooming:(CDUnknownBlockType)arg4;
- (void)_skipNextStartOffsetAdjustment;
- (void)_smoothScrollDisplayLink:(id)arg1;
- (void)_smoothScrollTimer:(id)arg1;
- (void)_smoothScrollWithUpdateTime:(double)arg1;
- (void)_springBoardBlankedScreenNotification:(id)arg1;
- (BOOL)_startBeingDraggedByChild:(id)arg1;
- (void)_startDraggingParent:(id)arg1;
- (void)_startTimer:(BOOL)arg1;
- (void)_staticScrollBar:(id)arg1 didScrollInDirection:(struct CGPoint)arg2;
- (BOOL)_staysCenteredDuringPinch;
- (BOOL)_stopBeingDraggedByChild:(id)arg1;
- (void)_stopDraggingParent:(id)arg1;
- (void)_stopScrollDecelerationNotify:(BOOL)arg1;
- (void)_stopScrollingAndZoomingAnimations;
- (void)_stopScrollingAndZoomingAnimationsPinningToContentViewport:(BOOL)arg1;
- (void)_stopScrollingAndZoomingAnimationsPinningToContentViewport:(BOOL)arg1 tramplingDragFlags:(BOOL)arg2;
- (void)_stopScrollingNotify:(BOOL)arg1 pin:(BOOL)arg2;
- (void)_stopScrollingNotify:(BOOL)arg1 pin:(BOOL)arg2 tramplingDragFlags:(BOOL)arg3;
- (BOOL)_supportsContentDimensionVariables;
- (void)_suppressImplicitAnimationsForScrollTest;
- (id)_swipeGestureRecognizer;
- (void)_switchToLayoutEngine:(id)arg1;
- (void)_systemGestureStateChanged:(id)arg1;
- (BOOL)_temp_getFlag_systemGesturesRecognitionPossible;
- (void)_temp_setFlag_systemGesturesRecognitionPossible:(BOOL)arg1;
- (void)_temp_setFlag_tracking:(BOOL)arg1;
- (struct CGPoint)_touchPositionForTouches:(id)arg1;
- (id)_touchesDelayedGestureRecognizer;
- (BOOL)_transfersScrollToContainer;
- (id)_uili_existingLayoutVariables;
- (void)_unregisterForSpringBoardBlankedScreenNotification;
- (void)_updateContentFitDisableScrolling;
- (void)_updateForChangedScrollRelatedInsets;
- (void)_updateGradientMaskView;
- (void)_updateIndicatedFocusFastScrollingDestination;
- (void)_updatePagingGesture;
- (void)_updatePanGesture;
- (void)_updatePanGestureConfiguration;
- (void)_updatePinchGesture;
- (void)_updatePinchGestureForState:(long long)arg1;
- (void)_updateRubberbandingStatisticTrackingState;
- (void)_updateScrollAnimationForChangedTargetOffset:(struct CGPoint)arg1;
- (void)_updateScrollGestureRecognizersEnabled;
- (void)_updateUsesStaticScrollBar;
- (void)_updateZoomGestureRecognizersEnabled;
- (BOOL)_usesLowFidelityPanning;
- (struct CGPoint)_velocityForAnimatedScrollFromOffset:(struct CGPoint)arg1 toOffset:(struct CGPoint)arg2;
- (id)_verticalFeedbackBehavior;
- (double)_verticalVelocity;
- (BOOL)_viewIsInsideNavigationController;
- (void)_webCustomViewWillBeRemovedFromSuperview;
- (void)_willMoveToWindow:(id)arg1;
- (void)_zoomAnimationDidStop;
- (float)_zoomAnimationDurationForScale:(double)arg1;
- (id)_zoomFeedbackBehavior;
- (double)_zoomRubberBandScaleForScale:(double)arg1;
- (double)_zoomScaleForRubberBandScale:(double)arg1;
- (double)_zoomScaleFromPresentationLayer:(BOOL)arg1;
- (void)_zoomToCenter:(struct CGPoint)arg1 scale:(double)arg2 duration:(double)arg3;
- (void)_zoomToCenter:(struct CGPoint)arg1 scale:(double)arg2 duration:(double)arg3 force:(BOOL)arg4;
- (BOOL)allowsMultipleFingers;
- (void)animator:(id)arg1 stopAnimation:(id)arg2 fraction:(float)arg3;
- (struct CGPoint)autoscrollContentOffset;
- (BOOL)bouncesHorizontally;
- (BOOL)bouncesVertically;
- (BOOL)cancelMouseTracking;
- (BOOL)cancelTouchTracking;
- (struct CGRect)contentFrameForView:(id)arg1;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)delayed:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)flashScrollIndicators;
- (BOOL)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handlePan:(id)arg1;
- (void)handlePinch:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (double)horizontalScrollDecelerationFactor;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isZoomEnabled;
- (double)keyboardBottomInsetAdjustmentDelta;
- (void)layoutSubviews;
- (double)maxVelocityInDirection:(int)arg1;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (id)nsli_contentHeightVariable;
- (id)nsli_contentWidthVariable;
- (BOOL)preservesCenterDuringRotation;
- (void)removeFromSuperview;
- (void)scrollRectToVisible:(struct CGRect)arg1 animated:(BOOL)arg2;
- (int)scrollableDirections;
- (void)setAllowsMultipleFingers:(BOOL)arg1;
- (void)setAutoscrollContentOffset:(struct CGPoint)arg1;
- (void)setBouncesHorizontally:(BOOL)arg1;
- (void)setBouncesVertically:(BOOL)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(BOOL)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)setHorizontalScrollDecelerationFactor:(double)arg1;
- (void)setNeedsLayout;
- (void)setPreservesCenterDuringRotation:(BOOL)arg1;
- (void)setScrollingEnabled:(BOOL)arg1;
- (void)setShowBackgroundShadow:(BOOL)arg1;
- (void)setTracksImmediatelyWhileDecelerating:(BOOL)arg1;
- (void)setUpdateInsetBottomDuringKeyboardDismiss:(BOOL)arg1;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (void)setVerticalScrollDecelerationFactor:(double)arg1;
- (void)setZoomEnabled:(BOOL)arg1;
- (void)setZoomScale:(double)arg1 animated:(BOOL)arg2;
- (void)setZoomScale:(double)arg1 withAnchorPoint:(struct CGPoint)arg2 validatingScrollOffset:(BOOL)arg3 allowRubberbanding:(BOOL)arg4 animated:(BOOL)arg5 duration:(double)arg6 notifyDelegate:(BOOL)arg7;
- (void)setZoomScale:(double)arg1 withAnchorPoint:(struct CGPoint)arg2 validatingScrollOffset:(BOOL)arg3 allowRubberbanding:(BOOL)arg4 animated:(BOOL)arg5 duration:(double)arg6 notifyDelegate:(BOOL)arg7 force:(BOOL)arg8;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (BOOL)touchesShouldBegin:(id)arg1 withEvent:(id)arg2 inContentView:(id)arg3;
- (BOOL)touchesShouldCancelInContentView:(id)arg1;
- (BOOL)tracksImmediatelyWhileDecelerating;
- (void)traitCollectionDidChange:(id)arg1;
- (BOOL)updateInsetBottomDuringKeyboardDismiss;
- (double)verticalScrollDecelerationFactor;
- (void)willAnimateRotationToInterfaceOrientation:(id)arg1;
- (void)willRotateToInterfaceOrientation:(id)arg1;
- (void)zoomToRect:(struct CGRect)arg1 animated:(BOOL)arg2;

@end

