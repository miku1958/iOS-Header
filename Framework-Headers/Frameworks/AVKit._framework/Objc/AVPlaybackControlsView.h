//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVBackdropView, AVButton, AVObservationController, AVPlaybackControlsRoutePickerView, AVPlayerViewControllerCustomControlsView, AVScrubber, AVStyleSheet, AVTransportControlsView, AVView, AVVolumeButtonControl, AVVolumeSlider, NSArray, NSLayoutConstraint, NSUUID, NSValue, UIViewPropertyAnimator;

__attribute__((visibility("hidden")))
@interface AVPlaybackControlsView : UIView
{
    BOOL _fullScreen;
    BOOL _doubleRowLayoutEnabled;
    BOOL _needsIntialLayout;
    BOOL _topAreaLayoutGuideExpanded;
    AVPlayerViewControllerCustomControlsView *_customControlsView;
    AVStyleSheet *_styleSheet;
    long long _preferredUnobscuredArea;
    long long _includedContainers;
    UIView *_volumeControlsContainer;
    UIView *_playbackControlsContainer;
    AVBackdropView *_screenModeControls;
    AVBackdropView *_volumeControls;
    AVBackdropView *_prominentPlayButtonBackdropView;
    AVBackdropView *_miniPlayPauseButtonBackdropView;
    AVView *_transportControlsContainerView;
    AVButton *_doneButton;
    AVButton *_fullScreenButton;
    AVButton *_videoGravityButton;
    AVButton *_pictureInPictureButton;
    NSArray *_customDisplayModeItems;
    AVVolumeButtonControl *_volumeButton;
    AVVolumeSlider *_volumeSlider;
    NSArray *_customAudioItems;
    AVButton *_prominentPlayButton;
    AVButton *_miniPlayPauseButton;
    AVTransportControlsView *_transportControlsView;
    AVButton *_standardPlayPauseButton;
    AVButton *_skipForwardButton;
    AVButton *_skipBackButton;
    AVButton *_startLeftwardContentTransitionButton;
    AVButton *_startRightwardContentTransitionButton;
    AVScrubber *_scrubber;
    AVPlaybackControlsRoutePickerView *_routePickerView;
    AVButton *_mediaSelectionButton;
    NSArray *_customMediaItems;
    NSArray *_customControlItems;
    NSValue *_overrideLayoutMarginsWhenEmbeddedInline;
    AVObservationController *_observationController;
    NSArray *_defaultAudioControls;
    NSArray *_defaultDisplayModeControls;
    double _keyboardHeight;
    UIViewPropertyAnimator *_keyboardUIAvoidanceAnimator;
    NSLayoutConstraint *_volumeButtonBottomToLayoutMarginsGuideBottomConstraint;
    NSLayoutConstraint *_volumeTopToLayoutGuideTopConstraint;
    NSLayoutConstraint *_volumeTopToViewTopConstraint;
    NSLayoutConstraint *_screenModeControlsToVolumeControlsSpacingConstraint;
    UIViewPropertyAnimator *_playbackControlsVisibilityAnimator;
    NSUUID *_mostRecentAnimationCompletionsID;
    struct CGAffineTransform _overrideTransformForProminentPlayButton;
}

@property (readonly, copy, nonatomic) NSArray *customAudioItems; // @synthesize customAudioItems=_customAudioItems;
@property (readonly, copy, nonatomic) NSArray *customControlItems; // @synthesize customControlItems=_customControlItems;
@property (readonly, nonatomic) AVPlayerViewControllerCustomControlsView *customControlsView; // @synthesize customControlsView=_customControlsView;
@property (readonly, copy, nonatomic) NSArray *customDisplayModeItems; // @synthesize customDisplayModeItems=_customDisplayModeItems;
@property (readonly, copy, nonatomic) NSArray *customMediaItems; // @synthesize customMediaItems=_customMediaItems;
@property (readonly, nonatomic) NSArray *defaultAudioControls; // @synthesize defaultAudioControls=_defaultAudioControls;
@property (readonly, nonatomic) NSArray *defaultDisplayModeControls; // @synthesize defaultDisplayModeControls=_defaultDisplayModeControls;
@property (readonly, nonatomic) AVButton *doneButton; // @synthesize doneButton=_doneButton;
@property (nonatomic, getter=isDoubleRowLayoutEnabled) BOOL doubleRowLayoutEnabled; // @synthesize doubleRowLayoutEnabled=_doubleRowLayoutEnabled;
@property (nonatomic, getter=isFullScreen) BOOL fullScreen; // @synthesize fullScreen=_fullScreen;
@property (readonly, nonatomic) AVButton *fullScreenButton; // @synthesize fullScreenButton=_fullScreenButton;
@property (readonly, nonatomic) BOOL hasVisibleSubview;
@property (readonly, nonatomic) long long includedContainers; // @synthesize includedContainers=_includedContainers;
@property (readonly, nonatomic) BOOL includesAudioControlsContainer;
@property (readonly, nonatomic) BOOL includesCustomAudioControls;
@property (readonly, nonatomic) BOOL includesCustomDisplayModeControls;
@property (readonly, nonatomic) BOOL includesDisplayModeControlsContainer;
@property (readonly, nonatomic) BOOL includesTransportControls;
@property (nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property (readonly, nonatomic) UIViewPropertyAnimator *keyboardUIAvoidanceAnimator; // @synthesize keyboardUIAvoidanceAnimator=_keyboardUIAvoidanceAnimator;
@property (readonly, nonatomic) AVButton *mediaSelectionButton; // @synthesize mediaSelectionButton=_mediaSelectionButton;
@property (readonly, nonatomic) AVButton *miniPlayPauseButton; // @synthesize miniPlayPauseButton=_miniPlayPauseButton;
@property (readonly, nonatomic) AVBackdropView *miniPlayPauseButtonBackdropView; // @synthesize miniPlayPauseButtonBackdropView=_miniPlayPauseButtonBackdropView;
@property (strong, nonatomic) NSUUID *mostRecentAnimationCompletionsID; // @synthesize mostRecentAnimationCompletionsID=_mostRecentAnimationCompletionsID;
@property (nonatomic) BOOL needsIntialLayout; // @synthesize needsIntialLayout=_needsIntialLayout;
@property (readonly, nonatomic) AVObservationController *observationController; // @synthesize observationController=_observationController;
@property (strong, nonatomic) NSValue *overrideLayoutMarginsWhenEmbeddedInline; // @synthesize overrideLayoutMarginsWhenEmbeddedInline=_overrideLayoutMarginsWhenEmbeddedInline;
@property (nonatomic) struct CGAffineTransform overrideTransformForProminentPlayButton; // @synthesize overrideTransformForProminentPlayButton=_overrideTransformForProminentPlayButton;
@property (readonly, nonatomic) AVButton *pictureInPictureButton; // @synthesize pictureInPictureButton=_pictureInPictureButton;
@property (readonly, nonatomic) UIView *playbackControlsContainer; // @synthesize playbackControlsContainer=_playbackControlsContainer;
@property (strong, nonatomic) UIViewPropertyAnimator *playbackControlsVisibilityAnimator; // @synthesize playbackControlsVisibilityAnimator=_playbackControlsVisibilityAnimator;
@property (nonatomic) long long preferredUnobscuredArea; // @synthesize preferredUnobscuredArea=_preferredUnobscuredArea;
@property (readonly, nonatomic) AVButton *prominentPlayButton; // @synthesize prominentPlayButton=_prominentPlayButton;
@property (readonly, nonatomic) AVBackdropView *prominentPlayButtonBackdropView; // @synthesize prominentPlayButtonBackdropView=_prominentPlayButtonBackdropView;
@property (readonly, nonatomic) AVPlaybackControlsRoutePickerView *routePickerView; // @synthesize routePickerView=_routePickerView;
@property (readonly, nonatomic) AVBackdropView *screenModeControls; // @synthesize screenModeControls=_screenModeControls;
@property (readonly, nonatomic) NSLayoutConstraint *screenModeControlsToVolumeControlsSpacingConstraint; // @synthesize screenModeControlsToVolumeControlsSpacingConstraint=_screenModeControlsToVolumeControlsSpacingConstraint;
@property (readonly, nonatomic) AVScrubber *scrubber; // @synthesize scrubber=_scrubber;
@property (readonly, nonatomic) BOOL showsProminentPlayButton;
@property (readonly, nonatomic) AVButton *skipBackButton; // @synthesize skipBackButton=_skipBackButton;
@property (readonly, nonatomic) AVButton *skipForwardButton; // @synthesize skipForwardButton=_skipForwardButton;
@property (readonly, nonatomic) AVButton *standardPlayPauseButton; // @synthesize standardPlayPauseButton=_standardPlayPauseButton;
@property (readonly, nonatomic) AVButton *startLeftwardContentTransitionButton; // @synthesize startLeftwardContentTransitionButton=_startLeftwardContentTransitionButton;
@property (readonly, nonatomic) AVButton *startRightwardContentTransitionButton; // @synthesize startRightwardContentTransitionButton=_startRightwardContentTransitionButton;
@property (strong, nonatomic) AVStyleSheet *styleSheet; // @synthesize styleSheet=_styleSheet;
@property (nonatomic, getter=isTopAreaLayoutGuideExpanded) BOOL topAreaLayoutGuideExpanded; // @synthesize topAreaLayoutGuideExpanded=_topAreaLayoutGuideExpanded;
@property (readonly, nonatomic) AVView *transportControlsContainerView; // @synthesize transportControlsContainerView=_transportControlsContainerView;
@property (readonly, nonatomic) AVTransportControlsView *transportControlsView; // @synthesize transportControlsView=_transportControlsView;
@property (readonly, nonatomic) AVButton *videoGravityButton; // @synthesize videoGravityButton=_videoGravityButton;
@property (readonly, nonatomic) AVVolumeButtonControl *volumeButton; // @synthesize volumeButton=_volumeButton;
@property (readonly, nonatomic) NSLayoutConstraint *volumeButtonBottomToLayoutMarginsGuideBottomConstraint; // @synthesize volumeButtonBottomToLayoutMarginsGuideBottomConstraint=_volumeButtonBottomToLayoutMarginsGuideBottomConstraint;
@property (readonly, nonatomic) AVBackdropView *volumeControls; // @synthesize volumeControls=_volumeControls;
@property (readonly, nonatomic) UIView *volumeControlsContainer; // @synthesize volumeControlsContainer=_volumeControlsContainer;
@property (readonly, nonatomic) AVVolumeSlider *volumeSlider; // @synthesize volumeSlider=_volumeSlider;
@property (readonly, nonatomic) NSLayoutConstraint *volumeTopToLayoutGuideTopConstraint; // @synthesize volumeTopToLayoutGuideTopConstraint=_volumeTopToLayoutGuideTopConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *volumeTopToViewTopConstraint; // @synthesize volumeTopToViewTopConstraint=_volumeTopToViewTopConstraint;

- (void).cxx_destruct;
- (void)_animateKeyboardAvoidance:(long long)arg1 duration:(double)arg2;
- (id)_audioViewsToRemoveDuringAnimation;
- (id)_currentArrangedAudioModeViews;
- (id)_currentArrangedDisplayModeViews;
- (id)_customControlsViewIfLoaded;
- (id)_displayModeViewsToRemoveDuringAnimation;
- (id)_playbackControlsViewItems;
- (id)_playbackControlsViewsForControlItems:(id)arg1 withType:(long long)arg2;
- (id)_preferredArrangedAudioModeViews;
- (id)_preferredArrangedDisplayModeViews;
- (void)_remove:(BOOL)arg1 view:(id)arg2;
- (void)_remove:(BOOL)arg1 views:(id)arg2;
- (void)_setupInitialLayout;
- (void)_updateAreVolumeAndTransportControlsVisible;
- (void)_updateDoubleRowLayoutEnabled;
- (void)_updateLayoutMargins;
- (void)_updatePlaybackControlsContainerVisibility:(CDUnknownBlockType)arg1;
- (void)animateAlongsideVisibilityAnimationsWithAnimationCoordinator:(id)arg1 appearingViews:(id)arg2 disappearingViews:(id)arg3;
- (void)dealloc;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 styleSheet:(id)arg2;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (void)setCustomControlItems:(id)arg1 animations:(CDUnknownBlockType)arg2;
- (void)setIncludedContainers:(long long)arg1 animations:(CDUnknownBlockType)arg2;
- (void)setupInitialLayout;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateLayoutForChangedControlsVisibility;

@end
