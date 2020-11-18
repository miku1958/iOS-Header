//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUSettings.h>

@class PUScrubberSettings, PUSwipeDownSettings;

@interface PUOneUpSettings : PUSettings
{
    BOOL _allowUserTransform;
    BOOL _allowBadges;
    BOOL _allowScrubber;
    BOOL _allowChromeHiding;
    BOOL _allowDoubleTapZoom;
    BOOL _allowFullsizeJPEGDisplay;
    BOOL _showFacesAreaRect;
    BOOL _hideToolbarWhenShowingAccessoryView;
    BOOL _useGlobalDetailsVisibility;
    BOOL _useGlobalCommentsVisibility;
    BOOL _persistChromeVisibility;
    BOOL _allowParallax;
    BOOL _allowStatusBar;
    BOOL _doubleTapZoomAreaExcludesBars;
    BOOL _doubleTapZoomAreaExcludesBackground;
    BOOL _playVideoInScrubber;
    BOOL _lockScrollDuringLivePhotoPlayback;
    BOOL _useDebuggingColors;
    BOOL _useDebuggingTitle;
    BOOL _useDebuggingProgressLabel;
    BOOL _showBufferingIndicatorDuringPlay;
    BOOL _simulateAssetContentDownload;
    BOOL _simulateAssetContentDownloadFailure;
    long long _titleTapAction;
    PUSwipeDownSettings *_swipeDownSettings;
    PUScrubberSettings *_scrubberSettings;
    long long _userNavigationMaximumDistance;
    long long _accessoryViewType;
    double _accessoryInitialTopPosition;
    double _minimumVisibleContentHeight;
    double _minimumVisibleCommentedContentHeight;
    double _chromeDefaultAnimationDuration;
    long long _chromeAutoHideBehaviorOnPlayButton;
    long long _chromeAutoHideBehaviorOnSwipe;
    long long _chromeAutoHideBehaviorOnZoom;
    double _chromeAutoHideDelay;
    double _chromeTimedAutoHideAnimationDuration;
    long long _chromeAnimationType;
    long long _chromeBackgroundAnimationType;
    double _interpageSpacing;
    double _pagingSpringPullAdjustment;
    double _pagingFrictionAdjustment;
    long long _parallaxModel;
    double _parallaxFactor;
    double _barsAreaVerticalOutset;
    double _defaultMaximumZoomFactor;
    double _maximumInitialZoomToFillScaleForCompactSizeClass;
    double _maximumInitialZoomToFillScaleForRegularSizeClass;
    double _doubleTapZoomFactor;
    double _videoPauseThreshold;
    double _livePhotoInteractionThreshold;
    unsigned long long _viewModelCacheCountLimit;
    double _visibilityDurationForEnteringQuickPagingRegime;
    double _visibilityDurationForExitingQuickPagingRegime;
    long long _minNavigationDistanceForQuickPagingRegime;
    double _visibilityDurationForEnteringFastRegime;
    double _visibilityDurationForExitingFastRegime;
    long long _minNavigationDistanceForFastRegime;
    double _bounceDuration;
    double _bounceDelay;
    double _bounceSpringDamping;
    double _bounceInitialVelocity;
    unsigned long long _debuggingBadges;
    unsigned long long _debuggingBadgesWhenFavorite;
}

@property (nonatomic) double accessoryInitialTopPosition; // @synthesize accessoryInitialTopPosition=_accessoryInitialTopPosition;
@property (nonatomic) long long accessoryViewType; // @synthesize accessoryViewType=_accessoryViewType;
@property (nonatomic) BOOL allowBadges; // @synthesize allowBadges=_allowBadges;
@property (nonatomic) BOOL allowChromeHiding; // @synthesize allowChromeHiding=_allowChromeHiding;
@property (nonatomic) BOOL allowDoubleTapZoom; // @synthesize allowDoubleTapZoom=_allowDoubleTapZoom;
@property (nonatomic) BOOL allowFullsizeJPEGDisplay; // @synthesize allowFullsizeJPEGDisplay=_allowFullsizeJPEGDisplay;
@property (nonatomic) BOOL allowParallax; // @synthesize allowParallax=_allowParallax;
@property (nonatomic) BOOL allowScrubber; // @synthesize allowScrubber=_allowScrubber;
@property (nonatomic) BOOL allowStatusBar; // @synthesize allowStatusBar=_allowStatusBar;
@property (nonatomic) BOOL allowUserTransform; // @synthesize allowUserTransform=_allowUserTransform;
@property (nonatomic) double barsAreaVerticalOutset; // @synthesize barsAreaVerticalOutset=_barsAreaVerticalOutset;
@property (nonatomic) double bounceDelay; // @synthesize bounceDelay=_bounceDelay;
@property (nonatomic) double bounceDuration; // @synthesize bounceDuration=_bounceDuration;
@property (nonatomic) double bounceInitialVelocity; // @synthesize bounceInitialVelocity=_bounceInitialVelocity;
@property (nonatomic) double bounceSpringDamping; // @synthesize bounceSpringDamping=_bounceSpringDamping;
@property (nonatomic) long long chromeAnimationType; // @synthesize chromeAnimationType=_chromeAnimationType;
@property (nonatomic) long long chromeAutoHideBehaviorOnPlayButton; // @synthesize chromeAutoHideBehaviorOnPlayButton=_chromeAutoHideBehaviorOnPlayButton;
@property (nonatomic) long long chromeAutoHideBehaviorOnSwipe; // @synthesize chromeAutoHideBehaviorOnSwipe=_chromeAutoHideBehaviorOnSwipe;
@property (nonatomic) long long chromeAutoHideBehaviorOnZoom; // @synthesize chromeAutoHideBehaviorOnZoom=_chromeAutoHideBehaviorOnZoom;
@property (nonatomic) double chromeAutoHideDelay; // @synthesize chromeAutoHideDelay=_chromeAutoHideDelay;
@property (nonatomic) long long chromeBackgroundAnimationType; // @synthesize chromeBackgroundAnimationType=_chromeBackgroundAnimationType;
@property (nonatomic) double chromeDefaultAnimationDuration; // @synthesize chromeDefaultAnimationDuration=_chromeDefaultAnimationDuration;
@property (nonatomic) double chromeTimedAutoHideAnimationDuration; // @synthesize chromeTimedAutoHideAnimationDuration=_chromeTimedAutoHideAnimationDuration;
@property (nonatomic) unsigned long long debuggingBadges; // @synthesize debuggingBadges=_debuggingBadges;
@property (nonatomic) unsigned long long debuggingBadgesWhenFavorite; // @synthesize debuggingBadgesWhenFavorite=_debuggingBadgesWhenFavorite;
@property (nonatomic) double defaultMaximumZoomFactor; // @synthesize defaultMaximumZoomFactor=_defaultMaximumZoomFactor;
@property (nonatomic) BOOL doubleTapZoomAreaExcludesBackground; // @synthesize doubleTapZoomAreaExcludesBackground=_doubleTapZoomAreaExcludesBackground;
@property (nonatomic) BOOL doubleTapZoomAreaExcludesBars; // @synthesize doubleTapZoomAreaExcludesBars=_doubleTapZoomAreaExcludesBars;
@property (nonatomic) double doubleTapZoomFactor; // @synthesize doubleTapZoomFactor=_doubleTapZoomFactor;
@property (nonatomic) BOOL hideToolbarWhenShowingAccessoryView; // @synthesize hideToolbarWhenShowingAccessoryView=_hideToolbarWhenShowingAccessoryView;
@property (nonatomic) double interpageSpacing; // @synthesize interpageSpacing=_interpageSpacing;
@property (nonatomic) double livePhotoInteractionThreshold; // @synthesize livePhotoInteractionThreshold=_livePhotoInteractionThreshold;
@property (nonatomic) BOOL lockScrollDuringLivePhotoPlayback; // @synthesize lockScrollDuringLivePhotoPlayback=_lockScrollDuringLivePhotoPlayback;
@property (nonatomic) double maximumInitialZoomToFillScaleForCompactSizeClass; // @synthesize maximumInitialZoomToFillScaleForCompactSizeClass=_maximumInitialZoomToFillScaleForCompactSizeClass;
@property (nonatomic) double maximumInitialZoomToFillScaleForRegularSizeClass; // @synthesize maximumInitialZoomToFillScaleForRegularSizeClass=_maximumInitialZoomToFillScaleForRegularSizeClass;
@property (nonatomic) long long minNavigationDistanceForFastRegime; // @synthesize minNavigationDistanceForFastRegime=_minNavigationDistanceForFastRegime;
@property (nonatomic) long long minNavigationDistanceForQuickPagingRegime; // @synthesize minNavigationDistanceForQuickPagingRegime=_minNavigationDistanceForQuickPagingRegime;
@property (nonatomic) double minimumVisibleCommentedContentHeight; // @synthesize minimumVisibleCommentedContentHeight=_minimumVisibleCommentedContentHeight;
@property (nonatomic) double minimumVisibleContentHeight; // @synthesize minimumVisibleContentHeight=_minimumVisibleContentHeight;
@property (nonatomic) double pagingFrictionAdjustment; // @synthesize pagingFrictionAdjustment=_pagingFrictionAdjustment;
@property (nonatomic) double pagingSpringPullAdjustment; // @synthesize pagingSpringPullAdjustment=_pagingSpringPullAdjustment;
@property (nonatomic) double parallaxFactor; // @synthesize parallaxFactor=_parallaxFactor;
@property (nonatomic) long long parallaxModel; // @synthesize parallaxModel=_parallaxModel;
@property (nonatomic) BOOL persistChromeVisibility; // @synthesize persistChromeVisibility=_persistChromeVisibility;
@property (nonatomic) BOOL playVideoInScrubber; // @synthesize playVideoInScrubber=_playVideoInScrubber;
@property (strong, nonatomic) PUScrubberSettings *scrubberSettings; // @synthesize scrubberSettings=_scrubberSettings;
@property (nonatomic) BOOL showBufferingIndicatorDuringPlay; // @synthesize showBufferingIndicatorDuringPlay=_showBufferingIndicatorDuringPlay;
@property (nonatomic) BOOL showFacesAreaRect; // @synthesize showFacesAreaRect=_showFacesAreaRect;
@property (nonatomic) BOOL simulateAssetContentDownload; // @synthesize simulateAssetContentDownload=_simulateAssetContentDownload;
@property (nonatomic) BOOL simulateAssetContentDownloadFailure; // @synthesize simulateAssetContentDownloadFailure=_simulateAssetContentDownloadFailure;
@property (strong, nonatomic) PUSwipeDownSettings *swipeDownSettings; // @synthesize swipeDownSettings=_swipeDownSettings;
@property (nonatomic) long long titleTapAction; // @synthesize titleTapAction=_titleTapAction;
@property (nonatomic) BOOL useDebuggingColors; // @synthesize useDebuggingColors=_useDebuggingColors;
@property (nonatomic) BOOL useDebuggingProgressLabel; // @synthesize useDebuggingProgressLabel=_useDebuggingProgressLabel;
@property (nonatomic) BOOL useDebuggingTitle; // @synthesize useDebuggingTitle=_useDebuggingTitle;
@property (nonatomic) BOOL useGlobalCommentsVisibility; // @synthesize useGlobalCommentsVisibility=_useGlobalCommentsVisibility;
@property (nonatomic) BOOL useGlobalDetailsVisibility; // @synthesize useGlobalDetailsVisibility=_useGlobalDetailsVisibility;
@property (nonatomic) long long userNavigationMaximumDistance; // @synthesize userNavigationMaximumDistance=_userNavigationMaximumDistance;
@property (nonatomic) double videoPauseThreshold; // @synthesize videoPauseThreshold=_videoPauseThreshold;
@property (nonatomic) unsigned long long viewModelCacheCountLimit; // @synthesize viewModelCacheCountLimit=_viewModelCacheCountLimit;
@property (nonatomic) double visibilityDurationForEnteringFastRegime; // @synthesize visibilityDurationForEnteringFastRegime=_visibilityDurationForEnteringFastRegime;
@property (nonatomic) double visibilityDurationForEnteringQuickPagingRegime; // @synthesize visibilityDurationForEnteringQuickPagingRegime=_visibilityDurationForEnteringQuickPagingRegime;
@property (nonatomic) double visibilityDurationForExitingFastRegime; // @synthesize visibilityDurationForExitingFastRegime=_visibilityDurationForExitingFastRegime;
@property (nonatomic) double visibilityDurationForExitingQuickPagingRegime; // @synthesize visibilityDurationForExitingQuickPagingRegime=_visibilityDurationForExitingQuickPagingRegime;

+ (id)settingsControllerModule;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)setDefaultValues;

@end

