//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@class NSString;

@interface PXCuratedLibrarySettings : PXSettings
{
    BOOL _enablePlayMovieInYears;
    BOOL _enableSlideshowInYears;
    BOOL _launchToSavedAllPhotosScrollPosition;
    BOOL _emulatesEmptyLibrary;
    BOOL _showStatusBar;
    BOOL _secondaryToolbarAlwaysVisible;
    BOOL _alwaysShowSecondaryToolbarAtBottom;
    BOOL _enableTapOnTitleToScroll;
    BOOL _enableCustomScrollToTopOrBottom;
    BOOL _useSaliency;
    BOOL _showSaliencyRects;
    BOOL _hideStatusFooter;
    BOOL _hideStatusFooterInSelectMode;
    BOOL _hideAnalyzingStatus;
    BOOL _forceFloatingHeaderVisible;
    BOOL _showDebugInformationInFloatingHeader;
    BOOL _enableShowAllButtons;
    BOOL _allowsCustomDateTitles;
    BOOL _showAllHighlights;
    BOOL _useCustomDaysCurationType;
    BOOL _hideRecents;
    BOOL _hideAggregations;
    BOOL _enableInlinePlayback;
    BOOL _forcePlayback;
    BOOL _playBestTimeRange;
    BOOL _enablePlaybackDiagnostics;
    BOOL _stabilizeLivePhotos;
    BOOL _firstTimeExperienceAlwaysLogReadiness;
    BOOL _enbaleInteractiveTransition;
    BOOL _enableSnapshotMode;
    BOOL _enableRecentlyEditedAlbum;
    BOOL _exaggerateContrast;
    BOOL _forceBadgesOnAllAssets;
    BOOL _forceShowAllButtonsVisible;
    unsigned short _daysCurationType;
    double _recentHighlightsTimeInterval;
    NSString *_savedAllPhotosScrollPositionAnchorAssetIdentifier;
    double _bottomCenterSecondaryToolbarWidth;
    double _scrollSnapMaximumDecelerationFactor;
    double _scrollSnapMaximumAccelerationFactor;
    double _scrollSnapMinimumSpeed;
    double _floatingHeaderFadeThresholdBetweenHeaderTopAndBodyBottom;
    double _floatingHeaderFadeOverDistance;
    double _floatingHeaderButtonsFadeThresholdBetweenHeaderTopAndNextBodyTop;
    double _floatingHeaderButtonsFadeOverDistance;
    double _floatingHeadersAppearanceCrossfadeDuration;
    double _monthsFloatingHeadersDistanceFromSafeAreaTop;
    double _monthsFloatingHeadersAppearanceCrossfadeStartDistance;
    double _monthsFloatingHeadersAppearanceCrossfadeDistance;
    double _monthsFloatingHeadersFadeoutDistance;
    double _monthsFloatingHeadersSubtitleAlpha;
    double _monthsInlineHeadersFadeoutOffset;
    double _monthsInlineHeadersFadeoutDistance;
    double _monthsInlineHeadersFadeoutMinimumAlpha;
    double _yearsHeadersFadeoutOffset;
    double _yearsHeadersFadeoutDistance;
    double _yearsHeadersFadeoutMinimumAlpha;
    long long _largeHeroDensity;
    double _largeHeroMinimumScore;
    double _aspectRatioForCompactPortraitYears;
    double _aspectRatioForCompactLandscapeYears;
    double _aspectRatioForRegularYears;
    long long _forcedNumberOfYearsColumn;
    double _aspectRatioForCompactPortraitMonths;
    double _spacingBetweenDays;
    double _interitemSpacingForDays;
    double _allowSpecialPanoHeaders;
    double _topInsetForVisibilityAnchoring;
    double _sectionShadowOpacity;
    double _skimmingScale;
    long long _sectionsToPrefetch;
    double _faultInDistance;
    double _faultOutPadding;
    double _minimumVisibleHeightForTopMostSection;
    double _yearsHeaderGradientAlpha;
    double _yearsHeaderGradientHeight;
    double _monthsHeaderGradientAlpha;
    double _monthsHeaderGradientHeight;
    double _monthsSmallHeaderGradientHeight;
    double _daysHeaderGradientAlpha;
    double _daysHeaderGradientHeight;
    double _statusBarGradientAlpha;
    double _statusBarGradientHeight;
    double _statusBarGradientAndStyleFadeDuration;
    long long _initialZoomLevel;
    double _nonInterestingPromotionScore;
    double _minAutoplaySuggestionScore;
    long long _maxNumberOfPlayingItems;
    double _playbackVisibleRectEdgeInset;
    double _livePhotoLoopingCrossfadeDuration;
    double _slideshowTriggerDelay;
    double _slideshowIntervalDelay;
    long long _firstTimeExperienceMaxNonProcessedHighlights;
    long long _firstTimeExperienceMaxNonProcessedAssets;
    double _defaultZoomLevelTransitionAnimationDuration;
    double _defaultZoomLevelTransitionMaximumScaleAroundAnchor;
    double _nonAnchorYearsFadeSpeed;
    double _nonAnchorMonthsFadeSpeed;
    double _nonAnchorDaysFadeSpeed;
    double _transitionToOrFromAllPhotosAnimationDuration;
    double _transitionToOrFromAllPhotosScale;
    double _transitionScaleForDayNotMatchingMonths;
    double _zoomLevelPinchSignificantScaleDelta;
    double _swipeBackGestureMinAngle;
    double _swipeBackGestureMinTranslation;
    double _zoomLevelControlSegmentExpansionFactor;
}

@property (nonatomic) double allowSpecialPanoHeaders; // @synthesize allowSpecialPanoHeaders=_allowSpecialPanoHeaders;
@property (nonatomic) BOOL allowsCustomDateTitles; // @synthesize allowsCustomDateTitles=_allowsCustomDateTitles;
@property (nonatomic) BOOL alwaysShowSecondaryToolbarAtBottom; // @synthesize alwaysShowSecondaryToolbarAtBottom=_alwaysShowSecondaryToolbarAtBottom;
@property (nonatomic) double aspectRatioForCompactLandscapeYears; // @synthesize aspectRatioForCompactLandscapeYears=_aspectRatioForCompactLandscapeYears;
@property (nonatomic) double aspectRatioForCompactPortraitMonths; // @synthesize aspectRatioForCompactPortraitMonths=_aspectRatioForCompactPortraitMonths;
@property (nonatomic) double aspectRatioForCompactPortraitYears; // @synthesize aspectRatioForCompactPortraitYears=_aspectRatioForCompactPortraitYears;
@property (nonatomic) double aspectRatioForRegularYears; // @synthesize aspectRatioForRegularYears=_aspectRatioForRegularYears;
@property (nonatomic) double bottomCenterSecondaryToolbarWidth; // @synthesize bottomCenterSecondaryToolbarWidth=_bottomCenterSecondaryToolbarWidth;
@property (nonatomic) unsigned short daysCurationType; // @synthesize daysCurationType=_daysCurationType;
@property (nonatomic) double daysHeaderGradientAlpha; // @synthesize daysHeaderGradientAlpha=_daysHeaderGradientAlpha;
@property (nonatomic) double daysHeaderGradientHeight; // @synthesize daysHeaderGradientHeight=_daysHeaderGradientHeight;
@property (nonatomic) double defaultZoomLevelTransitionAnimationDuration; // @synthesize defaultZoomLevelTransitionAnimationDuration=_defaultZoomLevelTransitionAnimationDuration;
@property (nonatomic) double defaultZoomLevelTransitionMaximumScaleAroundAnchor; // @synthesize defaultZoomLevelTransitionMaximumScaleAroundAnchor=_defaultZoomLevelTransitionMaximumScaleAroundAnchor;
@property (nonatomic) BOOL emulatesEmptyLibrary; // @synthesize emulatesEmptyLibrary=_emulatesEmptyLibrary;
@property (nonatomic) BOOL enableCustomScrollToTopOrBottom; // @synthesize enableCustomScrollToTopOrBottom=_enableCustomScrollToTopOrBottom;
@property (nonatomic) BOOL enableInlinePlayback; // @synthesize enableInlinePlayback=_enableInlinePlayback;
@property (nonatomic) BOOL enablePlayMovieInYears; // @synthesize enablePlayMovieInYears=_enablePlayMovieInYears;
@property (nonatomic) BOOL enablePlaybackDiagnostics; // @synthesize enablePlaybackDiagnostics=_enablePlaybackDiagnostics;
@property (nonatomic) BOOL enableRecentlyEditedAlbum; // @synthesize enableRecentlyEditedAlbum=_enableRecentlyEditedAlbum;
@property (nonatomic) BOOL enableShowAllButtons; // @synthesize enableShowAllButtons=_enableShowAllButtons;
@property (nonatomic) BOOL enableSlideshowInYears; // @synthesize enableSlideshowInYears=_enableSlideshowInYears;
@property (nonatomic) BOOL enableSnapshotMode; // @synthesize enableSnapshotMode=_enableSnapshotMode;
@property (nonatomic) BOOL enableTapOnTitleToScroll; // @synthesize enableTapOnTitleToScroll=_enableTapOnTitleToScroll;
@property (nonatomic) BOOL enbaleInteractiveTransition; // @synthesize enbaleInteractiveTransition=_enbaleInteractiveTransition;
@property (nonatomic) BOOL exaggerateContrast; // @synthesize exaggerateContrast=_exaggerateContrast;
@property (nonatomic) double faultInDistance; // @synthesize faultInDistance=_faultInDistance;
@property (nonatomic) double faultOutPadding; // @synthesize faultOutPadding=_faultOutPadding;
@property (nonatomic) BOOL firstTimeExperienceAlwaysLogReadiness; // @synthesize firstTimeExperienceAlwaysLogReadiness=_firstTimeExperienceAlwaysLogReadiness;
@property (nonatomic) long long firstTimeExperienceMaxNonProcessedAssets; // @synthesize firstTimeExperienceMaxNonProcessedAssets=_firstTimeExperienceMaxNonProcessedAssets;
@property (nonatomic) long long firstTimeExperienceMaxNonProcessedHighlights; // @synthesize firstTimeExperienceMaxNonProcessedHighlights=_firstTimeExperienceMaxNonProcessedHighlights;
@property (nonatomic) double floatingHeaderButtonsFadeOverDistance; // @synthesize floatingHeaderButtonsFadeOverDistance=_floatingHeaderButtonsFadeOverDistance;
@property (nonatomic) double floatingHeaderButtonsFadeThresholdBetweenHeaderTopAndNextBodyTop; // @synthesize floatingHeaderButtonsFadeThresholdBetweenHeaderTopAndNextBodyTop=_floatingHeaderButtonsFadeThresholdBetweenHeaderTopAndNextBodyTop;
@property (nonatomic) double floatingHeaderFadeOverDistance; // @synthesize floatingHeaderFadeOverDistance=_floatingHeaderFadeOverDistance;
@property (nonatomic) double floatingHeaderFadeThresholdBetweenHeaderTopAndBodyBottom; // @synthesize floatingHeaderFadeThresholdBetweenHeaderTopAndBodyBottom=_floatingHeaderFadeThresholdBetweenHeaderTopAndBodyBottom;
@property (nonatomic) double floatingHeadersAppearanceCrossfadeDuration; // @synthesize floatingHeadersAppearanceCrossfadeDuration=_floatingHeadersAppearanceCrossfadeDuration;
@property (nonatomic) BOOL forceBadgesOnAllAssets; // @synthesize forceBadgesOnAllAssets=_forceBadgesOnAllAssets;
@property (nonatomic) BOOL forceFloatingHeaderVisible; // @synthesize forceFloatingHeaderVisible=_forceFloatingHeaderVisible;
@property (nonatomic) BOOL forcePlayback; // @synthesize forcePlayback=_forcePlayback;
@property (nonatomic) BOOL forceShowAllButtonsVisible; // @synthesize forceShowAllButtonsVisible=_forceShowAllButtonsVisible;
@property (nonatomic) long long forcedNumberOfYearsColumn; // @synthesize forcedNumberOfYearsColumn=_forcedNumberOfYearsColumn;
@property (nonatomic) BOOL hideAggregations; // @synthesize hideAggregations=_hideAggregations;
@property (nonatomic) BOOL hideAnalyzingStatus; // @synthesize hideAnalyzingStatus=_hideAnalyzingStatus;
@property (nonatomic) BOOL hideRecents; // @synthesize hideRecents=_hideRecents;
@property (nonatomic) BOOL hideStatusFooter; // @synthesize hideStatusFooter=_hideStatusFooter;
@property (nonatomic) BOOL hideStatusFooterInSelectMode; // @synthesize hideStatusFooterInSelectMode=_hideStatusFooterInSelectMode;
@property (nonatomic) long long initialZoomLevel; // @synthesize initialZoomLevel=_initialZoomLevel;
@property (nonatomic) double interitemSpacingForDays; // @synthesize interitemSpacingForDays=_interitemSpacingForDays;
@property (nonatomic) long long largeHeroDensity; // @synthesize largeHeroDensity=_largeHeroDensity;
@property (nonatomic) double largeHeroMinimumScore; // @synthesize largeHeroMinimumScore=_largeHeroMinimumScore;
@property (nonatomic) BOOL launchToSavedAllPhotosScrollPosition; // @synthesize launchToSavedAllPhotosScrollPosition=_launchToSavedAllPhotosScrollPosition;
@property (nonatomic) double livePhotoLoopingCrossfadeDuration; // @synthesize livePhotoLoopingCrossfadeDuration=_livePhotoLoopingCrossfadeDuration;
@property (nonatomic) long long maxNumberOfPlayingItems; // @synthesize maxNumberOfPlayingItems=_maxNumberOfPlayingItems;
@property (nonatomic) double minAutoplaySuggestionScore; // @synthesize minAutoplaySuggestionScore=_minAutoplaySuggestionScore;
@property (nonatomic) double minimumVisibleHeightForTopMostSection; // @synthesize minimumVisibleHeightForTopMostSection=_minimumVisibleHeightForTopMostSection;
@property (nonatomic) double monthsFloatingHeadersAppearanceCrossfadeDistance; // @synthesize monthsFloatingHeadersAppearanceCrossfadeDistance=_monthsFloatingHeadersAppearanceCrossfadeDistance;
@property (nonatomic) double monthsFloatingHeadersAppearanceCrossfadeStartDistance; // @synthesize monthsFloatingHeadersAppearanceCrossfadeStartDistance=_monthsFloatingHeadersAppearanceCrossfadeStartDistance;
@property (nonatomic) double monthsFloatingHeadersDistanceFromSafeAreaTop; // @synthesize monthsFloatingHeadersDistanceFromSafeAreaTop=_monthsFloatingHeadersDistanceFromSafeAreaTop;
@property (nonatomic) double monthsFloatingHeadersFadeoutDistance; // @synthesize monthsFloatingHeadersFadeoutDistance=_monthsFloatingHeadersFadeoutDistance;
@property (nonatomic) double monthsFloatingHeadersSubtitleAlpha; // @synthesize monthsFloatingHeadersSubtitleAlpha=_monthsFloatingHeadersSubtitleAlpha;
@property (nonatomic) double monthsHeaderGradientAlpha; // @synthesize monthsHeaderGradientAlpha=_monthsHeaderGradientAlpha;
@property (nonatomic) double monthsHeaderGradientHeight; // @synthesize monthsHeaderGradientHeight=_monthsHeaderGradientHeight;
@property (nonatomic) double monthsInlineHeadersFadeoutDistance; // @synthesize monthsInlineHeadersFadeoutDistance=_monthsInlineHeadersFadeoutDistance;
@property (nonatomic) double monthsInlineHeadersFadeoutMinimumAlpha; // @synthesize monthsInlineHeadersFadeoutMinimumAlpha=_monthsInlineHeadersFadeoutMinimumAlpha;
@property (nonatomic) double monthsInlineHeadersFadeoutOffset; // @synthesize monthsInlineHeadersFadeoutOffset=_monthsInlineHeadersFadeoutOffset;
@property (nonatomic) double monthsSmallHeaderGradientHeight; // @synthesize monthsSmallHeaderGradientHeight=_monthsSmallHeaderGradientHeight;
@property (nonatomic) double nonAnchorDaysFadeSpeed; // @synthesize nonAnchorDaysFadeSpeed=_nonAnchorDaysFadeSpeed;
@property (nonatomic) double nonAnchorMonthsFadeSpeed; // @synthesize nonAnchorMonthsFadeSpeed=_nonAnchorMonthsFadeSpeed;
@property (nonatomic) double nonAnchorYearsFadeSpeed; // @synthesize nonAnchorYearsFadeSpeed=_nonAnchorYearsFadeSpeed;
@property (nonatomic) double nonInterestingPromotionScore; // @synthesize nonInterestingPromotionScore=_nonInterestingPromotionScore;
@property (nonatomic) BOOL playBestTimeRange; // @synthesize playBestTimeRange=_playBestTimeRange;
@property (nonatomic) double playbackVisibleRectEdgeInset; // @synthesize playbackVisibleRectEdgeInset=_playbackVisibleRectEdgeInset;
@property (nonatomic) double recentHighlightsTimeInterval; // @synthesize recentHighlightsTimeInterval=_recentHighlightsTimeInterval;
@property (copy, nonatomic) NSString *savedAllPhotosScrollPositionAnchorAssetIdentifier; // @synthesize savedAllPhotosScrollPositionAnchorAssetIdentifier=_savedAllPhotosScrollPositionAnchorAssetIdentifier;
@property (nonatomic) double scrollSnapMaximumAccelerationFactor; // @synthesize scrollSnapMaximumAccelerationFactor=_scrollSnapMaximumAccelerationFactor;
@property (nonatomic) double scrollSnapMaximumDecelerationFactor; // @synthesize scrollSnapMaximumDecelerationFactor=_scrollSnapMaximumDecelerationFactor;
@property (nonatomic) double scrollSnapMinimumSpeed; // @synthesize scrollSnapMinimumSpeed=_scrollSnapMinimumSpeed;
@property (nonatomic) BOOL secondaryToolbarAlwaysVisible; // @synthesize secondaryToolbarAlwaysVisible=_secondaryToolbarAlwaysVisible;
@property (nonatomic) double sectionShadowOpacity; // @synthesize sectionShadowOpacity=_sectionShadowOpacity;
@property (nonatomic) long long sectionsToPrefetch; // @synthesize sectionsToPrefetch=_sectionsToPrefetch;
@property (nonatomic) BOOL showAllHighlights; // @synthesize showAllHighlights=_showAllHighlights;
@property (nonatomic) BOOL showDebugInformationInFloatingHeader; // @synthesize showDebugInformationInFloatingHeader=_showDebugInformationInFloatingHeader;
@property (nonatomic) BOOL showSaliencyRects; // @synthesize showSaliencyRects=_showSaliencyRects;
@property (nonatomic) BOOL showStatusBar; // @synthesize showStatusBar=_showStatusBar;
@property (nonatomic) double skimmingScale; // @synthesize skimmingScale=_skimmingScale;
@property (nonatomic) double slideshowIntervalDelay; // @synthesize slideshowIntervalDelay=_slideshowIntervalDelay;
@property (nonatomic) double slideshowTriggerDelay; // @synthesize slideshowTriggerDelay=_slideshowTriggerDelay;
@property (nonatomic) double spacingBetweenDays; // @synthesize spacingBetweenDays=_spacingBetweenDays;
@property (nonatomic) BOOL stabilizeLivePhotos; // @synthesize stabilizeLivePhotos=_stabilizeLivePhotos;
@property (nonatomic) double statusBarGradientAlpha; // @synthesize statusBarGradientAlpha=_statusBarGradientAlpha;
@property (nonatomic) double statusBarGradientAndStyleFadeDuration; // @synthesize statusBarGradientAndStyleFadeDuration=_statusBarGradientAndStyleFadeDuration;
@property (nonatomic) double statusBarGradientHeight; // @synthesize statusBarGradientHeight=_statusBarGradientHeight;
@property (nonatomic) double swipeBackGestureMinAngle; // @synthesize swipeBackGestureMinAngle=_swipeBackGestureMinAngle;
@property (nonatomic) double swipeBackGestureMinTranslation; // @synthesize swipeBackGestureMinTranslation=_swipeBackGestureMinTranslation;
@property (nonatomic) double topInsetForVisibilityAnchoring; // @synthesize topInsetForVisibilityAnchoring=_topInsetForVisibilityAnchoring;
@property (nonatomic) double transitionScaleForDayNotMatchingMonths; // @synthesize transitionScaleForDayNotMatchingMonths=_transitionScaleForDayNotMatchingMonths;
@property (nonatomic) double transitionToOrFromAllPhotosAnimationDuration; // @synthesize transitionToOrFromAllPhotosAnimationDuration=_transitionToOrFromAllPhotosAnimationDuration;
@property (nonatomic) double transitionToOrFromAllPhotosScale; // @synthesize transitionToOrFromAllPhotosScale=_transitionToOrFromAllPhotosScale;
@property (nonatomic) BOOL useCustomDaysCurationType; // @synthesize useCustomDaysCurationType=_useCustomDaysCurationType;
@property (nonatomic) BOOL useSaliency; // @synthesize useSaliency=_useSaliency;
@property (nonatomic) double yearsHeaderGradientAlpha; // @synthesize yearsHeaderGradientAlpha=_yearsHeaderGradientAlpha;
@property (nonatomic) double yearsHeaderGradientHeight; // @synthesize yearsHeaderGradientHeight=_yearsHeaderGradientHeight;
@property (nonatomic) double yearsHeadersFadeoutDistance; // @synthesize yearsHeadersFadeoutDistance=_yearsHeadersFadeoutDistance;
@property (nonatomic) double yearsHeadersFadeoutMinimumAlpha; // @synthesize yearsHeadersFadeoutMinimumAlpha=_yearsHeadersFadeoutMinimumAlpha;
@property (nonatomic) double yearsHeadersFadeoutOffset; // @synthesize yearsHeadersFadeoutOffset=_yearsHeadersFadeoutOffset;
@property (nonatomic) double zoomLevelControlSegmentExpansionFactor; // @synthesize zoomLevelControlSegmentExpansionFactor=_zoomLevelControlSegmentExpansionFactor;
@property (nonatomic) double zoomLevelPinchSignificantScaleDelta; // @synthesize zoomLevelPinchSignificantScaleDelta=_zoomLevelPinchSignificantScaleDelta;

+ (BOOL)enableEmptyYearsMonthsDaysForTesting;
+ (void)setEnableEmptyYearsMonthsDaysForTesting:(BOOL)arg1;
+ (id)settingsControllerModule;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (CDUnknownBlockType)acceptableLargeHeroPredicate;
- (BOOL)allowsModularLayoutForZoomLevel:(long long)arg1 sizeClass:(long long)arg2 orientation:(long long)arg3;
- (id)parentSettings;
- (void)setDefaultValues;
- (long long)version;

@end

