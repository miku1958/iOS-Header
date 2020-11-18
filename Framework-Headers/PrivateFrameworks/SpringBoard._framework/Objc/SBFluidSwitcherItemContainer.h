//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBFTouchPassThroughView.h>

#import <SpringBoard/SBAppPlatterDragSourceViewProviding-Protocol.h>
#import <SpringBoard/SBFailureNotifyingTapGestureRecognizerDelegate-Protocol.h>
#import <SpringBoard/UIGestureRecognizerDelegate-Protocol.h>
#import <SpringBoard/UIScrollViewDelegate-Protocol.h>

@class NSArray, NSString, SBAppLayout, SBAppSwitcherPageView, SBAppSwitcherSettings, SBFFluidBehaviorSettings, SBFailureNotifyingTapGestureRecognizer, SBFluidSwitcherIconOverlayView, SBFluidSwitcherItemContainerHeaderView, SBFluidSwitcherTouchPassThroughScrollView, SBMedusaSettings, UIHoverGestureRecognizer, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol SBAppSwitcherPageContentView, SBFluidSwitcherItemContainerDelegate;

@interface SBFluidSwitcherItemContainer : SBFTouchPassThroughView <UIScrollViewDelegate, UIGestureRecognizerDelegate, SBFailureNotifyingTapGestureRecognizerDelegate, SBAppPlatterDragSourceViewProviding>
{
    SBAppSwitcherPageView *_pageView;
    id<SBFluidSwitcherItemContainerDelegate> _delegate;
    SBFluidSwitcherTouchPassThroughScrollView *_killScrollView;
    SBFluidSwitcherItemContainerHeaderView *_iconAndLabelHeader;
    SBFluidSwitcherIconOverlayView *_iconOverlayView;
    struct UIRectCornerRadii _contentCornerRadii;
    double _contentPageViewScale;
    double _titleOpacity;
    double _titleAndIconOpacity;
    UILongPressGestureRecognizer *_pressDownGestureRecognizer;
    UILongPressGestureRecognizer *_selectionHighlightGestureRecognizer;
    SBFailureNotifyingTapGestureRecognizer *_tapGestureRecognizer;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    SBFFluidBehaviorSettings *_squishSettings;
    SBAppSwitcherSettings *_settings;
    SBMedusaSettings *_medusaSettings;
    BOOL _sentKillRequest;
    struct CGPoint _highlightTapDownLocation;
    BOOL _animatingPageViewScale;
    double _killProgressForCurrentDecelerationTarget;
    UIHoverGestureRecognizer *_hoverGestureRecognizer;
    BOOL _dragging;
    BOOL _clipsToUnobscuredMargin;
    BOOL _selectable;
    BOOL _killable;
    BOOL _shouldScaleOverlayToFillBounds;
    BOOL _active;
    BOOL _visible;
    BOOL _pointerInteractionEnabled;
    BOOL _highlightedFromDirectTouch;
    BOOL _highlightedFromCursorHover;
    double _unobscuredMargin;
    SBAppLayout *_appLayout;
    unsigned long long _killAxis;
    double _minimumTranslationForKillingContainer;
    double _contentAlpha;
    NSArray *_headerItems;
}

@property (nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property (strong, nonatomic) SBAppLayout *appLayout; // @synthesize appLayout=_appLayout;
@property (nonatomic) BOOL blocksContentViewTouches;
@property (nonatomic) BOOL clipsToUnobscuredMargin; // @synthesize clipsToUnobscuredMargin=_clipsToUnobscuredMargin;
@property (nonatomic) double contentAlpha; // @synthesize contentAlpha=_contentAlpha;
@property (nonatomic) struct UIRectCornerRadii contentCornerRadii; // @synthesize contentCornerRadii=_contentCornerRadii;
@property (strong, nonatomic) UIView *contentOverlay;
@property (nonatomic) double contentPageViewScale; // @synthesize contentPageViewScale=_contentPageViewScale;
@property (strong, nonatomic) UIView<SBAppSwitcherPageContentView> *contentView;
@property (readonly, nonatomic) BOOL contentViewHasSceneOverlay;
@property (nonatomic) double darkeningAlpha;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBFluidSwitcherItemContainerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDragging) BOOL dragging; // @synthesize dragging=_dragging;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *headerItems; // @synthesize headerItems=_headerItems;
@property (nonatomic, getter=isHighlightedFromCursorHover) BOOL highlightedFromCursorHover; // @synthesize highlightedFromCursorHover=_highlightedFromCursorHover;
@property (nonatomic, getter=isHighlightedFromDirectTouch) BOOL highlightedFromDirectTouch; // @synthesize highlightedFromDirectTouch=_highlightedFromDirectTouch;
@property (readonly, nonatomic) BOOL isDeceleratingTowardsKillZone;
@property (nonatomic) unsigned long long killAxis; // @synthesize killAxis=_killAxis;
@property (nonatomic, getter=isKillable) BOOL killable; // @synthesize killable=_killable;
@property (readonly, nonatomic) double killingProgress;
@property (nonatomic) double lighteningAlpha;
@property (nonatomic) double minimumTranslationForKillingContainer; // @synthesize minimumTranslationForKillingContainer=_minimumTranslationForKillingContainer;
@property (nonatomic, getter=isPointerInteractionEnabled) BOOL pointerInteractionEnabled; // @synthesize pointerInteractionEnabled=_pointerInteractionEnabled;
@property (nonatomic, getter=isSelectable) BOOL selectable; // @synthesize selectable=_selectable;
@property (nonatomic) double shadowAlpha;
@property (nonatomic) double shadowOffset;
@property (nonatomic) long long shadowStyle;
@property (nonatomic) BOOL shouldScaleOverlayToFillBounds; // @synthesize shouldScaleOverlayToFillBounds=_shouldScaleOverlayToFillBounds;
@property (nonatomic) BOOL shouldUseBackgroundWallpaperTreatment;
@property (readonly) Class superclass;
@property (nonatomic) double titleAndIconOpacity; // @synthesize titleAndIconOpacity=_titleAndIconOpacity;
@property (nonatomic) double titleOpacity; // @synthesize titleOpacity=_titleOpacity;
@property (nonatomic) double unobscuredMargin; // @synthesize unobscuredMargin=_unobscuredMargin;
@property (nonatomic, getter=isVisible) BOOL visible; // @synthesize visible=_visible;
@property (nonatomic) double wallpaperOverlayAlpha;

+ (double)preferredRestingVisibleMarginForBounds:(struct CGRect)arg1;
- (void).cxx_destruct;
- (struct CGPoint)_CGPointFromScalarBasedOnKillAxis:(double)arg1;
- (double)_CGPointXOrYBasedOnKillAxis:(struct CGPoint)arg1;
- (struct CGSize)_CGSizeFromLengthBasedOnKillAxis:(double)arg1;
- (double)_CGSizeWidthOrHeightBasedOnKillAxis:(struct CGSize)arg1;
- (void)_addPageView;
- (struct CGPoint)_contentOffsetAtRest;
- (struct CGPoint)_contentOffsetForKillingProgress:(double)arg1;
- (struct CGSize)_contentSizeForScrollView;
- (id)_createScrollView;
- (void)_ensureSubviewOrder;
- (struct CGRect)_frameForPageView;
- (struct CGRect)_frameForScrollView;
- (void)_handleHoverGesture:(id)arg1;
- (void)_handlePageViewPressDown:(id)arg1;
- (void)_handlePageViewTap:(id)arg1;
- (void)_handleSelectionHighlightGesture:(id)arg1;
- (double)_inverseScaleTransformFactor;
- (BOOL)_isTitleIconVisible;
- (double)_killingProgressForContentOffset:(struct CGPoint)arg1;
- (struct CGSize)_overlayViewSize;
- (void)_resetKillProgressScrollState;
- (double)_scaleForHighlightFromCursorHover;
- (double)_scaleForHighlightFromDirectTouch;
- (double)_scaleTransformFactor;
- (BOOL)_scrollViewShouldPanGestureTryToBegin:(id)arg1;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)_springLoadingEffectTargetView;
- (void)_updateHeaderAnimated:(BOOL)arg1;
- (void)_updatePageViewContentClippingFrame;
- (void)_updatePageViewContentViewClipping;
- (void)_updateShadowVisibility;
- (void)_updateTransformForCurrentHighlight;
- (void)configureOverlayForIconZoomWithView:(id)arg1;
- (id)containerViewForBlurContentView;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)gestureRecognizerTransitionedToFailed:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 appLayout:(id)arg2 delegate:(id)arg3 active:(BOOL)arg4;
- (id)initialCornerRadiusConfiguration;
- (id)initialDiffuseShadowFilters;
- (struct SBDragPreviewShadowParameters)initialDiffuseShadowParameters;
- (id)initialRimShadowFilters;
- (struct SBDragPreviewShadowParameters)initialRimShadowParameters;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)prepareForReuse;
- (void)removeIconOverlay;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)setContentOverlay:(id)arg1 animated:(BOOL)arg2;
- (void)setHeaderItems:(id)arg1 animated:(BOOL)arg2;
- (id)sourceView;

@end
