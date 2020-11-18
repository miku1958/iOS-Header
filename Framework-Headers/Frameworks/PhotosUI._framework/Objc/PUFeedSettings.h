//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PUFeedSettings : PXSettings
{
    BOOL _useJPEGImageFormats;
    BOOL _shouldUseJPEGFastFormatForMediumTiles;
    BOOL _shouldUseJPEGFastFormatForLargeTiles;
    BOOL _useQualityImageFormats;
    BOOL _useSpeedometerFeedback;
    BOOL _shouldPreheatCoreData;
    BOOL _shouldPreheatAssets;
    BOOL _shouldPreheatComments;
    BOOL _forceDefaultPreheatManager;
    BOOL _ignoresCaptions;
    BOOL _parallaxEnabled;
    BOOL _allowsInfiniteScrolling;
    BOOL _forceAllItemsAsVideo;
    BOOL _forceLivePhotoBadges;
    BOOL _simulateSharedStreamsEnabled;
    BOOL _vitalityEnabled;
    double _smallTileSizeTolerance;
    long long _maximumScrollRegimeForQualityImageFormats;
    double _speedometerMediumUpperThreshold;
    double _speedometerMediumLowerThreshold;
    double _speedometerFastUpperThreshold;
    double _speedometerFastLowerThreshold;
    double _preheatingMinimumScrollFactor;
    double _slowScrollPreheatingWindowSize;
    double _mediumScrollPreheatingWindowSize;
    double _fastScrollPreheatingWindowSize;
    long long _feedContent;
    long long _initialWindowSize;
    long long _testInitialWindowSize;
    long long _parallaxModel;
    double _parallaxFactor;
    long long _infiniteScrollingWindowSizeIncrement;
}

@property (nonatomic) BOOL allowsInfiniteScrolling; // @synthesize allowsInfiniteScrolling=_allowsInfiniteScrolling;
@property (nonatomic) double fastScrollPreheatingWindowSize; // @synthesize fastScrollPreheatingWindowSize=_fastScrollPreheatingWindowSize;
@property (nonatomic) long long feedContent; // @synthesize feedContent=_feedContent;
@property (nonatomic) BOOL forceAllItemsAsVideo; // @synthesize forceAllItemsAsVideo=_forceAllItemsAsVideo;
@property (nonatomic) BOOL forceDefaultPreheatManager; // @synthesize forceDefaultPreheatManager=_forceDefaultPreheatManager;
@property (nonatomic) BOOL forceLivePhotoBadges; // @synthesize forceLivePhotoBadges=_forceLivePhotoBadges;
@property (nonatomic) BOOL ignoresCaptions; // @synthesize ignoresCaptions=_ignoresCaptions;
@property (nonatomic) long long infiniteScrollingWindowSizeIncrement; // @synthesize infiniteScrollingWindowSizeIncrement=_infiniteScrollingWindowSizeIncrement;
@property (nonatomic) long long initialWindowSize; // @synthesize initialWindowSize=_initialWindowSize;
@property (nonatomic) long long maximumScrollRegimeForQualityImageFormats; // @synthesize maximumScrollRegimeForQualityImageFormats=_maximumScrollRegimeForQualityImageFormats;
@property (nonatomic) double mediumScrollPreheatingWindowSize; // @synthesize mediumScrollPreheatingWindowSize=_mediumScrollPreheatingWindowSize;
@property (nonatomic) BOOL parallaxEnabled; // @synthesize parallaxEnabled=_parallaxEnabled;
@property (nonatomic) double parallaxFactor; // @synthesize parallaxFactor=_parallaxFactor;
@property (nonatomic) long long parallaxModel; // @synthesize parallaxModel=_parallaxModel;
@property (nonatomic) double preheatingMinimumScrollFactor; // @synthesize preheatingMinimumScrollFactor=_preheatingMinimumScrollFactor;
@property (nonatomic) BOOL shouldPreheatAssets; // @synthesize shouldPreheatAssets=_shouldPreheatAssets;
@property (nonatomic) BOOL shouldPreheatComments; // @synthesize shouldPreheatComments=_shouldPreheatComments;
@property (nonatomic) BOOL shouldPreheatCoreData; // @synthesize shouldPreheatCoreData=_shouldPreheatCoreData;
@property (nonatomic) BOOL shouldUseJPEGFastFormatForLargeTiles; // @synthesize shouldUseJPEGFastFormatForLargeTiles=_shouldUseJPEGFastFormatForLargeTiles;
@property (nonatomic) BOOL shouldUseJPEGFastFormatForMediumTiles; // @synthesize shouldUseJPEGFastFormatForMediumTiles=_shouldUseJPEGFastFormatForMediumTiles;
@property (nonatomic) BOOL simulateSharedStreamsEnabled; // @synthesize simulateSharedStreamsEnabled=_simulateSharedStreamsEnabled;
@property (nonatomic) double slowScrollPreheatingWindowSize; // @synthesize slowScrollPreheatingWindowSize=_slowScrollPreheatingWindowSize;
@property (nonatomic) double smallTileSizeTolerance; // @synthesize smallTileSizeTolerance=_smallTileSizeTolerance;
@property (nonatomic) double speedometerFastLowerThreshold; // @synthesize speedometerFastLowerThreshold=_speedometerFastLowerThreshold;
@property (nonatomic) double speedometerFastUpperThreshold; // @synthesize speedometerFastUpperThreshold=_speedometerFastUpperThreshold;
@property (nonatomic) double speedometerMediumLowerThreshold; // @synthesize speedometerMediumLowerThreshold=_speedometerMediumLowerThreshold;
@property (nonatomic) double speedometerMediumUpperThreshold; // @synthesize speedometerMediumUpperThreshold=_speedometerMediumUpperThreshold;
@property (nonatomic) long long testInitialWindowSize; // @synthesize testInitialWindowSize=_testInitialWindowSize;
@property (nonatomic) BOOL useJPEGImageFormats; // @synthesize useJPEGImageFormats=_useJPEGImageFormats;
@property (nonatomic) BOOL useQualityImageFormats; // @synthesize useQualityImageFormats=_useQualityImageFormats;
@property (nonatomic) BOOL useSpeedometerFeedback; // @synthesize useSpeedometerFeedback=_useSpeedometerFeedback;
@property (nonatomic) BOOL vitalityEnabled; // @synthesize vitalityEnabled=_vitalityEnabled;

+ (id)_localizedStrings;
+ (id)settingsControllerModule;
+ (id)sharedInstance;
- (id)parentSettings;
- (void)setDefaultValues;

@end

