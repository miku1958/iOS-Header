//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PUPhotoEditProtoSettings : PXSettings
{
    BOOL _showLevelIndicator;
    BOOL _showResetToolButton;
    BOOL _allowAnyPlugin;
    BOOL _cropMaskBlurred;
    BOOL _autoCropEnabled;
    BOOL _simulateDownload;
    BOOL _simulateDownloadFailure;
    BOOL _previewOriginalAllowsLongPress;
    BOOL _previewOriginalTimesOut;
    BOOL _livePhotoTrimAllowed;
    BOOL _showEffectsPicker;
    long long _renderPriority;
    double _cropSideMargins;
    double _cropWheelSize;
    double _cropRecomposeDelay;
    double _maxRawMP;
    double _previewOriginalDuration;
    double _minimumLivePhotoTrimDuration;
}

@property (nonatomic) BOOL allowAnyPlugin; // @synthesize allowAnyPlugin=_allowAnyPlugin;
@property (nonatomic) BOOL autoCropEnabled; // @synthesize autoCropEnabled=_autoCropEnabled;
@property (nonatomic) BOOL cropMaskBlurred; // @synthesize cropMaskBlurred=_cropMaskBlurred;
@property (nonatomic) double cropRecomposeDelay; // @synthesize cropRecomposeDelay=_cropRecomposeDelay;
@property (nonatomic) double cropSideMargins; // @synthesize cropSideMargins=_cropSideMargins;
@property (nonatomic) double cropWheelSize; // @synthesize cropWheelSize=_cropWheelSize;
@property (nonatomic) BOOL livePhotoTrimAllowed; // @synthesize livePhotoTrimAllowed=_livePhotoTrimAllowed;
@property (nonatomic) double maxRawMP; // @synthesize maxRawMP=_maxRawMP;
@property (nonatomic) double minimumLivePhotoTrimDuration; // @synthesize minimumLivePhotoTrimDuration=_minimumLivePhotoTrimDuration;
@property (nonatomic) BOOL previewOriginalAllowsLongPress; // @synthesize previewOriginalAllowsLongPress=_previewOriginalAllowsLongPress;
@property (nonatomic) double previewOriginalDuration; // @synthesize previewOriginalDuration=_previewOriginalDuration;
@property (nonatomic) BOOL previewOriginalTimesOut; // @synthesize previewOriginalTimesOut=_previewOriginalTimesOut;
@property (nonatomic) long long renderPriority; // @synthesize renderPriority=_renderPriority;
@property (nonatomic) BOOL showEffectsPicker; // @synthesize showEffectsPicker=_showEffectsPicker;
@property (nonatomic) BOOL showLevelIndicator; // @synthesize showLevelIndicator=_showLevelIndicator;
@property (nonatomic) BOOL showResetToolButton; // @synthesize showResetToolButton=_showResetToolButton;
@property (nonatomic) BOOL simulateDownload; // @synthesize simulateDownload=_simulateDownload;
@property (nonatomic) BOOL simulateDownloadFailure; // @synthesize simulateDownloadFailure=_simulateDownloadFailure;

+ (id)settingsControllerModule;
+ (id)sharedInstance;
- (id)parentSettings;
- (void)setDefaultValues;

@end

