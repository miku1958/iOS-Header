//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXMemoriesRelatedSettings : PXSettings
{
    BOOL _enableFeedbackUI;
    BOOL _enableFeedbackComboUI;
    BOOL _enableMemoriesLivingOnFeedback;
    BOOL _enableManualRefreshUI;
    BOOL _fakePeopleProximity;
    BOOL _recoverBlacklistedMemories;
    BOOL _showMemoryTitleLayer;
    BOOL _enableIPadWideHeader;
    double _refreshPhotoKitTimeout;
    double _widgetRefreshTimeInterval;
    long long _minimumNumberOfCuratedAssetsForInterestingMoments;
    long long _minimumNumberOfCuratedAssetsForMemories;
    long long _minimumNumberOfCuratedAssetsForMovieHeader;
    unsigned long long _deleteBehavior;
    long long _subtitleFontSize;
    unsigned long long _timelineSchedulerMode;
}

@property (nonatomic) unsigned long long deleteBehavior; // @synthesize deleteBehavior=_deleteBehavior;
@property (nonatomic) BOOL enableFeedbackComboUI; // @synthesize enableFeedbackComboUI=_enableFeedbackComboUI;
@property (nonatomic) BOOL enableFeedbackUI; // @synthesize enableFeedbackUI=_enableFeedbackUI;
@property (nonatomic) BOOL enableIPadWideHeader; // @synthesize enableIPadWideHeader=_enableIPadWideHeader;
@property (nonatomic) BOOL enableManualRefreshUI; // @synthesize enableManualRefreshUI=_enableManualRefreshUI;
@property (nonatomic) BOOL enableMemoriesLivingOnFeedback; // @synthesize enableMemoriesLivingOnFeedback=_enableMemoriesLivingOnFeedback;
@property (nonatomic) BOOL fakePeopleProximity; // @synthesize fakePeopleProximity=_fakePeopleProximity;
@property (nonatomic) long long minimumNumberOfCuratedAssetsForInterestingMoments; // @synthesize minimumNumberOfCuratedAssetsForInterestingMoments=_minimumNumberOfCuratedAssetsForInterestingMoments;
@property (nonatomic) long long minimumNumberOfCuratedAssetsForMemories; // @synthesize minimumNumberOfCuratedAssetsForMemories=_minimumNumberOfCuratedAssetsForMemories;
@property (nonatomic) long long minimumNumberOfCuratedAssetsForMovieHeader; // @synthesize minimumNumberOfCuratedAssetsForMovieHeader=_minimumNumberOfCuratedAssetsForMovieHeader;
@property (nonatomic) BOOL recoverBlacklistedMemories; // @synthesize recoverBlacklistedMemories=_recoverBlacklistedMemories;
@property (nonatomic) double refreshPhotoKitTimeout; // @synthesize refreshPhotoKitTimeout=_refreshPhotoKitTimeout;
@property (nonatomic) BOOL showMemoryTitleLayer; // @synthesize showMemoryTitleLayer=_showMemoryTitleLayer;
@property (nonatomic) long long subtitleFontSize; // @synthesize subtitleFontSize=_subtitleFontSize;
@property (nonatomic) unsigned long long timelineSchedulerMode; // @synthesize timelineSchedulerMode=_timelineSchedulerMode;
@property (nonatomic) double widgetRefreshTimeInterval; // @synthesize widgetRefreshTimeInterval=_widgetRefreshTimeInterval;

+ (void)_generateQuestionsWithOptions:(long long)arg1 count:(unsigned long long)arg2 inModuleController:(id)arg3;
+ (void)_presentAlertForMemoriesGenerationResult:(id)arg1 error:(id)arg2 inModuleController:(id)arg3;
+ (void)_presentAlertWithTitle:(id)arg1 andMessage:(id)arg2 inModuleController:(id)arg3;
+ (id)schedulerOptionsFromTimelineSchedulerMode:(unsigned long long)arg1;
+ (id)settingsControllerModule;
+ (id)sharedInstance;
- (id)parentSettings;
- (void)performPostSaveActions;
- (void)setDefaultValues;

@end

