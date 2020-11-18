//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIControl.h>

#import <UIKitCore/UIMovieScrubberTrackViewDataSource-Protocol.h>
#import <UIKitCore/UIMovieScrubberTrackViewDelegate-Protocol.h>

@class NSString, UIImage, UIImageView, UILabel, UIMovieScrubberEditingView, UIMovieScrubberTrackView, UIPanGestureRecognizer;
@protocol UIMovieScrubberDataSource, UIMovieScrubberDelegate;

@interface UIMovieScrubber : UIControl <UIMovieScrubberTrackViewDataSource, UIMovieScrubberTrackViewDelegate>
{
    UIImageView *_thumbView;
    UIMovieScrubberTrackView *_trackView;
    UIMovieScrubberEditingView *_editingView;
    UILabel *_elapsedLabel;
    UILabel *_remainingLabel;
    int _timeComponents;
    UIImage *_fillImage;
    UIImage *_innerShadowImage;
    UIImage *_maskImage;
    UIImage *_shadowImage;
    id<UIMovieScrubberDataSource> _dataSource;
    id<UIMovieScrubberDelegate> _delegate;
    struct CGRect _trackRect;
    double _hitOffset;
    double _zoomDelay;
    BOOL _showTimeViews;
    BOOL _editable;
    double _value;
    double _maximumValue;
    double _minimumValue;
    struct CGPoint _touchLocationWhenTrackPressBegan;
    double _trimStartValue;
    double _trimEndValue;
    double _minTrimmedLength;
    double _maxTrimmedLength;
    double _zoomAnimationDuration;
    double _zoomAnimationDelay;
    struct {
        unsigned int continuous:1;
        unsigned int animating:1;
        unsigned int creatingSnapshot:1;
        unsigned int needsReload:1;
        unsigned int layoutTimeViews:1;
        unsigned int computeTrackRect:1;
        unsigned int clampingTrimRange;
        unsigned int zoomed:1;
        unsigned int zoomAnimating:1;
        unsigned int trackIsPressed:1;
        unsigned int trackAnimating:1;
        unsigned int thumbIsVisible:1;
        unsigned int handleIsPressed:1;
        unsigned int willBeginEditing:1;
        unsigned int editing:1;
        unsigned int editingHandle;
        unsigned int rotationDisabled;
        unsigned int isInNavigationBar:1;
        unsigned int delegateValueDidChange:1;
        unsigned int delegateStartValueDidChange:1;
        unsigned int delegateEndValueDidChange:1;
        unsigned int delegateWillBeginRequestingThumbnails:1;
        unsigned int delegateDidFinishRequestingThumbnails:1;
        unsigned int delegateWillBeginEditing:1;
        unsigned int delegateDidBeginEditing:1;
        unsigned int delegateDidCancelEditing:1;
        unsigned int delegateEditingAnimationFinished:1;
        unsigned int delegateWidthDeltaOriginXDelta:1;
        unsigned int delegateDidBeginAnimatingZoom:1;
        unsigned int delegateDidEndAnimatingZoom:1;
        unsigned int delegateWillZoom:1;
        unsigned int dataSourceRequestThumbnailImageIsSummmary:1;
    } _sliderFlags;
    UIPanGestureRecognizer *_panGestureRecognizer;
    double _edgeInset;
}

@property (readonly, nonatomic) struct UIEdgeInsets alignmentMargins;
@property (nonatomic, getter=isContinuous) BOOL continuous;
@property (nonatomic) id<UIMovieScrubberDataSource> dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<UIMovieScrubberDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration; // @dynamic duration;
@property (nonatomic) double edgeInset; // @synthesize edgeInset=_edgeInset;
@property (nonatomic, getter=isEditable) BOOL editable;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isInsideNavigationBar;
@property (nonatomic) double maximumTrimLength; // @synthesize maximumTrimLength=_maxTrimmedLength;
@property (nonatomic) double minimumTrimLength; // @synthesize minimumTrimLength=_minTrimmedLength;
@property (nonatomic) BOOL showTimeViews; // @synthesize showTimeViews=_showTimeViews;
@property (readonly) Class superclass;
@property (nonatomic) BOOL thumbIsVisible;
@property (nonatomic) double trimEndValue;
@property (nonatomic) double trimStartValue;
@property (nonatomic) double value;
@property (readonly, nonatomic, getter=isZoomAnimating) BOOL zoomAnimating;
@property (nonatomic) double zoomDelay; // @synthesize zoomDelay=_zoomDelay;
@property (readonly, nonatomic) double zoomMaximumValue;
@property (readonly, nonatomic) double zoomMinimumValue;

+ (BOOL)_allowActionsToQueue;
+ (id)timeStringForSeconds:(int)arg1 forceFullWidthComponents:(BOOL)arg2 isElapsed:(BOOL)arg3;
- (void).cxx_destruct;
- (BOOL)_alwaysHandleScrollerMouseEvent;
- (void)_animateAfterEdit:(BOOL)arg1;
- (void)_beginTrackPressWithLocatable:(id)arg1 touchesBegan:(BOOL)arg2;
- (void)_cancelTrackPress:(BOOL)arg1;
- (void)_cancelTrackPressIfNeccessaryWithLocatable:(id)arg1;
- (void)_computeTrackRectForBounds:(struct CGRect)arg1;
- (void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2;
- (int)_editingHandleWithLocatable:(id)arg1;
- (struct CGRect)_editingRect;
- (struct CGRect)_editingRectForStartTime:(double)arg1 endTime:(double)arg2;
- (void)_handlePanGesture:(id)arg1;
- (void)_initSubviews;
- (void)_sendDelayedActions;
- (void)_setValue:(double)arg1 andSendAction:(BOOL)arg2;
- (void)_setZoomAnimating:(BOOL)arg1;
- (void)_sliderAnimationDidStop:(BOOL)arg1;
- (void)_sliderAnimationWillStart;
- (void)_sliderValueDidChange:(id)arg1;
- (void)_trackPressWasHeld;
- (void)_trimAnimationDidStop:(BOOL)arg1 glassView:(id)arg2;
- (void)_updateThumbLocation;
- (void)_updateTimes;
- (double)_valueForLocatable:(id)arg1;
- (void)animateAfterEdit;
- (void)animateCancelEdit;
- (void)beginTrackingWithLocatable:(id)arg1;
- (BOOL)cancelTouchTracking;
- (void)continueTrackingWithLocatable:(id)arg1;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)endTrackingWithLocatable:(id)arg1;
- (void)forceUnzoom;
- (BOOL)forceZoom;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (BOOL)isAnimatingValueChange;
- (void)layoutSubviews;
- (void)movieScrubberTrackView:(id)arg1 clampedSizeWidthDelta:(double)arg2 actualSizeWidthDelta:(double)arg3 originXDelta:(double)arg4 minimumVisibleValue:(double)arg5 maximumVisibleValue:(double)arg6;
- (id)movieScrubberTrackView:(id)arg1 evenlySpacedTimestamps:(int)arg2 startingAt:(id)arg3 endingAt:(id)arg4;
- (void)movieScrubberTrackView:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2 isSummaryThumbnail:(BOOL)arg3;
- (void)movieScrubberTrackViewDidCollapse:(id)arg1;
- (void)movieScrubberTrackViewDidExpand:(id)arg1;
- (void)movieScrubberTrackViewDidFinishRequestingThumbnails:(id)arg1;
- (double)movieScrubberTrackViewDuration:(id)arg1;
- (double)movieScrubberTrackViewThumbnailAspectRatio:(id)arg1;
- (void)movieScrubberTrackViewWillBeginRequestingThumbnails:(id)arg1;
- (double)movieScrubberTrackViewZoomAnimationDelay:(id)arg1;
- (double)movieScrubberTrackViewZoomAnimationDuration:(id)arg1;
- (BOOL)pointInsideThumb:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)reloadData;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)setRotationDisabled:(BOOL)arg1;
- (void)setThumbnailImage:(struct CGImage *)arg1 forTimestamp:(id)arg2;
- (void)setValue:(double)arg1 animated:(BOOL)arg2;
- (void)setZoomAnimationDuration:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGRect)thumbRectForValue:(double)arg1;
- (struct CGRect)trackRect;

@end
