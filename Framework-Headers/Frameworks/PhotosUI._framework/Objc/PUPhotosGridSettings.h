//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUSettings.h>

@interface PUPhotosGridSettings : PUSettings
{
    BOOL _badgeAllItemsAsFavorites;
    BOOL _displayAllItemsAsBursts;
    BOOL _simulateLongTitles;
    BOOL _allowDynamicDetailsTitles;
    BOOL _forceJPEGThumbnailsInDefaultGrid;
    BOOL _flashDegradedImages;
    BOOL _useFloatingHeaders;
    BOOL _swipeSelectionEnabled;
    BOOL _shouldExitEditingModeAfterDuplication;
    BOOL _showTimelineScrubbers;
    BOOL _hideGlobalFooter;
    double _defaultItemSideSize;
    double _minimumSpacing;
    double _maximumSpacing;
    double _sideMargins;
    double _simulatedDetailsAttributesLoadingDelay;
    long long _numberColumnsInDefaultGrid;
    long long _numberOfColumnsInWideGrid;
    double _magnifierRevealPreviewScale;
    double _previewRevealProgressToFreezeMagnifier;
    double _minimumDistanceToUnfreeze;
    double _leftScrubberRate;
    double _rightScrubberRate;
}

@property (nonatomic) BOOL allowDynamicDetailsTitles; // @synthesize allowDynamicDetailsTitles=_allowDynamicDetailsTitles;
@property (nonatomic) BOOL badgeAllItemsAsFavorites; // @synthesize badgeAllItemsAsFavorites=_badgeAllItemsAsFavorites;
@property (nonatomic) double defaultItemSideSize; // @synthesize defaultItemSideSize=_defaultItemSideSize;
@property (nonatomic) BOOL displayAllItemsAsBursts; // @synthesize displayAllItemsAsBursts=_displayAllItemsAsBursts;
@property (nonatomic) BOOL flashDegradedImages; // @synthesize flashDegradedImages=_flashDegradedImages;
@property (nonatomic) BOOL forceJPEGThumbnailsInDefaultGrid; // @synthesize forceJPEGThumbnailsInDefaultGrid=_forceJPEGThumbnailsInDefaultGrid;
@property (nonatomic) BOOL hideGlobalFooter; // @synthesize hideGlobalFooter=_hideGlobalFooter;
@property (nonatomic) double leftScrubberRate; // @synthesize leftScrubberRate=_leftScrubberRate;
@property (nonatomic) double magnifierRevealPreviewScale; // @synthesize magnifierRevealPreviewScale=_magnifierRevealPreviewScale;
@property (nonatomic) double maximumSpacing; // @synthesize maximumSpacing=_maximumSpacing;
@property (nonatomic) double minimumDistanceToUnfreeze; // @synthesize minimumDistanceToUnfreeze=_minimumDistanceToUnfreeze;
@property (nonatomic) double minimumSpacing; // @synthesize minimumSpacing=_minimumSpacing;
@property (nonatomic) long long numberColumnsInDefaultGrid; // @synthesize numberColumnsInDefaultGrid=_numberColumnsInDefaultGrid;
@property (nonatomic) long long numberOfColumnsInWideGrid; // @synthesize numberOfColumnsInWideGrid=_numberOfColumnsInWideGrid;
@property (nonatomic) double previewRevealProgressToFreezeMagnifier; // @synthesize previewRevealProgressToFreezeMagnifier=_previewRevealProgressToFreezeMagnifier;
@property (nonatomic) double rightScrubberRate; // @synthesize rightScrubberRate=_rightScrubberRate;
@property (nonatomic) BOOL shouldExitEditingModeAfterDuplication; // @synthesize shouldExitEditingModeAfterDuplication=_shouldExitEditingModeAfterDuplication;
@property (nonatomic) BOOL showTimelineScrubbers; // @synthesize showTimelineScrubbers=_showTimelineScrubbers;
@property (nonatomic) double sideMargins; // @synthesize sideMargins=_sideMargins;
@property (nonatomic) BOOL simulateLongTitles; // @synthesize simulateLongTitles=_simulateLongTitles;
@property (nonatomic) double simulatedDetailsAttributesLoadingDelay; // @synthesize simulatedDetailsAttributesLoadingDelay=_simulatedDetailsAttributesLoadingDelay;
@property (nonatomic, getter=isSwipeSelectionEnabled) BOOL swipeSelectionEnabled; // @synthesize swipeSelectionEnabled=_swipeSelectionEnabled;
@property (nonatomic) BOOL useFloatingHeaders; // @synthesize useFloatingHeaders=_useFloatingHeaders;

+ (id)settingsControllerModule;
+ (id)sharedInstance;
- (void)setDefaultValues;

@end

