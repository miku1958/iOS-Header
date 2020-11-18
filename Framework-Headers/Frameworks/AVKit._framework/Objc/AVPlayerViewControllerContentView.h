//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <AVKit/AVCaptureViewConfiguring-Protocol.h>
#import <AVKit/AVContentTransitioning-Protocol.h>

@class AVExternalPlaybackIndicatorView, AVPlaybackControlsView, AVPlayerContentTransitioningView, AVPlayerLayerAndContentOverlayContainerView, AVStyleSheet, AVTurboModePlaybackControlsPlaceholderView, NSMutableDictionary, NSString, UIImageView, UIPanGestureRecognizer, _UIVisualEffectBackdropView, __AVPlayerLayerView;
@protocol AVContentTransitioningDelegate, AVPlayerViewControllerContentViewDelegate;

@interface AVPlayerViewControllerContentView : UIView <AVCaptureViewConfiguring, AVContentTransitioning>
{
    BOOL _canAutomaticallyZoomLetterboxVideos;
    BOOL _styleSheetShouldUseCompactFullScreenItemSize;
    BOOL _needsInitialLayout;
    NSString *_automaticVideoGravity;
    NSString *_captureGroupName;
    _UIVisualEffectBackdropView *_captureView;
    AVExternalPlaybackIndicatorView *_externalPlaybackIndicatorView;
    UIImageView *_unsupportedContentIndicatorView;
    UIImageView *_audioOnlyIndicatorView;
    UIView *_iAdPreRollView;
    id<AVPlayerViewControllerContentViewDelegate> _delegate;
    UIView *_interactiveContentOverlayView;
    AVPlaybackControlsView *_playbackControlsView;
    AVTurboModePlaybackControlsPlaceholderView *_turboModePlaybackControlsPlaceholderView;
    AVPlayerContentTransitioningView *_contentTransitioningView;
    __AVPlayerLayerView *_playerLayerView;
    NSMutableDictionary *_targetVideoGravities;
    NSString *_externalPlaybackIndicatorTitle;
    NSString *_externalPlaybackIndicatorSubtitle;
    AVStyleSheet *_styleSheet;
    struct UIEdgeInsets _edgeInsetsForLetterboxedContent;
    struct CGRect _boundsForLastLayoutSubviews;
}

@property (readonly, nonatomic) AVPlayerLayerAndContentOverlayContainerView *activeContentView;
@property (readonly, nonatomic) UIImageView *audioOnlyIndicatorView; // @synthesize audioOnlyIndicatorView=_audioOnlyIndicatorView;
@property (readonly, nonatomic) UIImageView *audioOnlyIndicatorViewIfLoaded;
@property (copy, nonatomic) NSString *automaticVideoGravity; // @synthesize automaticVideoGravity=_automaticVideoGravity;
@property (nonatomic) struct CGRect boundsForLastLayoutSubviews; // @synthesize boundsForLastLayoutSubviews=_boundsForLastLayoutSubviews;
@property (nonatomic) BOOL canAutomaticallyZoomLetterboxVideos; // @synthesize canAutomaticallyZoomLetterboxVideos=_canAutomaticallyZoomLetterboxVideos;
@property (readonly, nonatomic) NSString *captureGroupName; // @synthesize captureGroupName=_captureGroupName;
@property (readonly, nonatomic) _UIVisualEffectBackdropView *captureView; // @synthesize captureView=_captureView;
@property (weak, nonatomic) id<AVContentTransitioningDelegate> contentTransitioningDelegate;
@property (readonly, nonatomic) AVPlayerContentTransitioningView *contentTransitioningView; // @synthesize contentTransitioningView=_contentTransitioningView;
@property (readonly, nonatomic) UIPanGestureRecognizer *contentTransitioningViewGestureRecognizer;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AVPlayerViewControllerContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct UIEdgeInsets edgeInsetsForLetterboxedContent; // @synthesize edgeInsetsForLetterboxedContent=_edgeInsetsForLetterboxedContent;
@property (copy, nonatomic) NSString *externalPlaybackIndicatorSubtitle; // @synthesize externalPlaybackIndicatorSubtitle=_externalPlaybackIndicatorSubtitle;
@property (copy, nonatomic) NSString *externalPlaybackIndicatorTitle; // @synthesize externalPlaybackIndicatorTitle=_externalPlaybackIndicatorTitle;
@property (readonly, nonatomic) AVExternalPlaybackIndicatorView *externalPlaybackIndicatorView; // @synthesize externalPlaybackIndicatorView=_externalPlaybackIndicatorView;
@property (readonly, nonatomic) AVExternalPlaybackIndicatorView *externalPlaybackIndicatorViewIfLoaded;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UIView *iAdPreRollView; // @synthesize iAdPreRollView=_iAdPreRollView;
@property (readonly, nonatomic) UIView *iAdPreRollViewIfLoaded;
@property (readonly, nonatomic) UIView *interactiveContentOverlayView; // @synthesize interactiveContentOverlayView=_interactiveContentOverlayView;
@property (readonly, nonatomic) BOOL isCoveringWindow;
@property (readonly, nonatomic) BOOL isDescendantOfNonPagingScrollView;
@property (readonly, nonatomic) unsigned long long layoutClass;
@property (nonatomic) BOOL needsInitialLayout; // @synthesize needsInitialLayout=_needsInitialLayout;
@property (readonly, nonatomic) AVPlaybackControlsView *playbackControlsView; // @synthesize playbackControlsView=_playbackControlsView;
@property (readonly, nonatomic) UIView *playerLayerAndContentOverlayContainerView;
@property (strong, nonatomic) __AVPlayerLayerView *playerLayerView; // @synthesize playerLayerView=_playerLayerView;
@property (strong, nonatomic) AVStyleSheet *styleSheet; // @synthesize styleSheet=_styleSheet;
@property (nonatomic) BOOL styleSheetShouldUseCompactFullScreenItemSize; // @synthesize styleSheetShouldUseCompactFullScreenItemSize=_styleSheetShouldUseCompactFullScreenItemSize;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableDictionary *targetVideoGravities; // @synthesize targetVideoGravities=_targetVideoGravities;
@property (readonly, nonatomic) long long transitionDirection;
@property (readonly, nonatomic, getter=isTransitionInteractive) BOOL transitionInteractive;
@property (readonly, nonatomic) double transitionProgress;
@property (readonly, nonatomic) long long transitionState;
@property (readonly, nonatomic) AVPlayerLayerAndContentOverlayContainerView *transitioningContentView;
@property (readonly, weak, nonatomic) AVTurboModePlaybackControlsPlaceholderView *turboModePlaybackControlsPlaceholderView; // @synthesize turboModePlaybackControlsPlaceholderView=_turboModePlaybackControlsPlaceholderView;
@property (readonly, nonatomic) UIImageView *unsupportedContentIndicatorView; // @synthesize unsupportedContentIndicatorView=_unsupportedContentIndicatorView;
@property (readonly, nonatomic) UIImageView *unsupportedContentIndicatorViewIfLoaded;

- (void).cxx_destruct;
- (void)_applyVideoGravityIfNeeded:(long long)arg1;
- (void)_insertPlaybackControlsOrPlaceholderView:(id)arg1;
- (BOOL)_isBeingTransitionedToOrFromFullScreen;
- (void)_loadTurboModePlaybackControlsPlaceholderViewIfNeeded;
- (id)_mediaTimingFunctionForCurrentAnimationCurve;
- (void)_updatePlayerLayerAndContentOverlayContainerViewLayoutMarginsForVideoGravity:(long long)arg1;
- (void)_updateStyleSheet;
- (void)_updateVideoGravityDuringLayoutSubviewsAndAssertThatIfYouBreakThisMethodYouOwnThisMethod;
- (void)addPlayerLayerAndContentOverlayContainerViewIfNeeded;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)configureBackdropView:(id)arg1;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1 playerLayerView:(id)arg2 targetVideoGravities:(id)arg3;
- (BOOL)isViewDescendantOfPlaybackControlsSubview:(id)arg1;
- (void)layoutSubviews;
- (void)loadPlaybackControlsViewIfNeeded;
- (void)performTransition:(long long)arg1;
- (void)playerLayerViewDidChange;
- (void)setExternalPlaybackIndicatorTitle:(id)arg1 subtitle:(id)arg2;
- (void)setShowsAudioOnlyIndicator:(BOOL)arg1;
- (void)setShowsExternalPlaybackIndicator:(BOOL)arg1;
- (void)setShowsUnsupportedContentIndicator:(BOOL)arg1;
- (void)setTargetVideoGravity:(id)arg1 forLayoutClass:(unsigned long long)arg2;
- (void)setVideoGravityForTransitioningContent:(id)arg1;

@end

