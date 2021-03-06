//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@class NSString, OKProducerPreset;

__attribute__((visibility("hidden")))
@interface PUSlideshowSettings : PXSettings
{
    BOOL _allowUserInteractivity;
    BOOL _slideshowSettingsEnableFullscreenSupport;
    OKProducerPreset *_currentPreset;
    double _interactiveTransitionFingerTrackingBoxRadiusMinValue;
    double _interactiveTransitionFingerTrackingBoxRadiusMaxValue;
    double _interactiveTransitionFingerTrackingBoxRadiusDefaultValue;
    double _interactiveTransitionFingerTrackingBoxRadiusIncrementValue;
    double _interactiveTransitionProgressThresholdMinValue;
    double _interactiveTransitionProgressThresholdMaxValue;
    double _interactiveTransitionProgressThresholdDefaultValue;
    double _interactiveTransitionProgressThresholdIncrementValue;
    double _interactiveTransitionVelocityThresholdForAlwaysFinishingMinValue;
    double _interactiveTransitionVelocityThresholdForAlwaysFinishingMaxValue;
    double _interactiveTransitionVelocityThresholdForAlwaysFinishingDefaultValue;
    double _interactiveTransitionVelocityThresholdForAlwaysFinishingIncrementValue;
    NSString *_currentPresetUniqueIdentifier;
}

@property (nonatomic) BOOL allowUserInteractivity; // @synthesize allowUserInteractivity=_allowUserInteractivity;
@property (strong, nonatomic) OKProducerPreset *currentPreset; // @synthesize currentPreset=_currentPreset;
@property (strong, nonatomic) NSString *currentPresetUniqueIdentifier; // @synthesize currentPresetUniqueIdentifier=_currentPresetUniqueIdentifier;
@property (nonatomic) double interactiveTransitionFingerTrackingBoxRadiusDefaultValue; // @synthesize interactiveTransitionFingerTrackingBoxRadiusDefaultValue=_interactiveTransitionFingerTrackingBoxRadiusDefaultValue;
@property (nonatomic) double interactiveTransitionFingerTrackingBoxRadiusIncrementValue; // @synthesize interactiveTransitionFingerTrackingBoxRadiusIncrementValue=_interactiveTransitionFingerTrackingBoxRadiusIncrementValue;
@property (nonatomic) double interactiveTransitionFingerTrackingBoxRadiusMaxValue; // @synthesize interactiveTransitionFingerTrackingBoxRadiusMaxValue=_interactiveTransitionFingerTrackingBoxRadiusMaxValue;
@property (nonatomic) double interactiveTransitionFingerTrackingBoxRadiusMinValue; // @synthesize interactiveTransitionFingerTrackingBoxRadiusMinValue=_interactiveTransitionFingerTrackingBoxRadiusMinValue;
@property (nonatomic) double interactiveTransitionProgressThresholdDefaultValue; // @synthesize interactiveTransitionProgressThresholdDefaultValue=_interactiveTransitionProgressThresholdDefaultValue;
@property (nonatomic) double interactiveTransitionProgressThresholdIncrementValue; // @synthesize interactiveTransitionProgressThresholdIncrementValue=_interactiveTransitionProgressThresholdIncrementValue;
@property (nonatomic) double interactiveTransitionProgressThresholdMaxValue; // @synthesize interactiveTransitionProgressThresholdMaxValue=_interactiveTransitionProgressThresholdMaxValue;
@property (nonatomic) double interactiveTransitionProgressThresholdMinValue; // @synthesize interactiveTransitionProgressThresholdMinValue=_interactiveTransitionProgressThresholdMinValue;
@property (nonatomic) double interactiveTransitionVelocityThresholdForAlwaysFinishingDefaultValue; // @synthesize interactiveTransitionVelocityThresholdForAlwaysFinishingDefaultValue=_interactiveTransitionVelocityThresholdForAlwaysFinishingDefaultValue;
@property (nonatomic) double interactiveTransitionVelocityThresholdForAlwaysFinishingIncrementValue; // @synthesize interactiveTransitionVelocityThresholdForAlwaysFinishingIncrementValue=_interactiveTransitionVelocityThresholdForAlwaysFinishingIncrementValue;
@property (nonatomic) double interactiveTransitionVelocityThresholdForAlwaysFinishingMaxValue; // @synthesize interactiveTransitionVelocityThresholdForAlwaysFinishingMaxValue=_interactiveTransitionVelocityThresholdForAlwaysFinishingMaxValue;
@property (nonatomic) double interactiveTransitionVelocityThresholdForAlwaysFinishingMinValue; // @synthesize interactiveTransitionVelocityThresholdForAlwaysFinishingMinValue=_interactiveTransitionVelocityThresholdForAlwaysFinishingMinValue;
@property (nonatomic) BOOL slideshowSettingsEnableFullscreenSupport; // @synthesize slideshowSettingsEnableFullscreenSupport=_slideshowSettingsEnableFullscreenSupport;

+ (id)settingsControllerModule;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)applyArchiveValue:(id)arg1 forKey:(id)arg2;
- (id)archiveValueForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)parentSettings;
- (void)performPostSaveActions;
- (void)removeTransitionTimingCustomizationsFromUserDefaults;
- (void)restoreCurrentInteractiveTransitionValuesFromUserDefaults;
- (void)saveInteractiveSlideshowSettingsInUserDefaults;
- (void)setDefaultPresetTransitionValues;
- (void)setDefaultValues;
- (BOOL)transitionSettingsAreDefaults;

@end

