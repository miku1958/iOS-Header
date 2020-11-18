//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosPlayer/ISSettings.h>

@interface ISPlayerSettings : ISSettings
{
    BOOL _useDedicatedQueues;
    BOOL _allowFrameBlending;
    BOOL _allowVideoPreRoll;
    BOOL _allowPlayerReuse;
    BOOL _allowCrossfadeContent;
    BOOL _shouldPauseOnSettle;
    BOOL _variableIntro;
    double _forceTouchTimeoutInterval;
    double _forceTouchTimeoutMinimumProgress;
    double _forceScrubMinimumPressure;
    double _forceScrubMaximumPressure;
    double _forceScrubRewindFactor;
    double _forceScrubMinRateChange;
    double _forceScrubSettleRateAddition;
    double _forceScrubMinimumRate;
    double _forceScrubMaximumInteractiveRate;
    double _audioRampDuration;
    double _crossfadeTargetBlur;
    double _crossfadeDuration;
    double _maxPreCrossfadeDuration;
    double _nonForcePreCrossfadeDuration;
}

@property (nonatomic) BOOL allowCrossfadeContent; // @synthesize allowCrossfadeContent=_allowCrossfadeContent;
@property (nonatomic) BOOL allowFrameBlending; // @synthesize allowFrameBlending=_allowFrameBlending;
@property (nonatomic) BOOL allowPlayerReuse; // @synthesize allowPlayerReuse=_allowPlayerReuse;
@property (nonatomic) BOOL allowVideoPreRoll; // @synthesize allowVideoPreRoll=_allowVideoPreRoll;
@property (nonatomic) double audioRampDuration; // @synthesize audioRampDuration=_audioRampDuration;
@property (nonatomic) double crossfadeDuration; // @synthesize crossfadeDuration=_crossfadeDuration;
@property (nonatomic) double crossfadeTargetBlur; // @synthesize crossfadeTargetBlur=_crossfadeTargetBlur;
@property (nonatomic) double forceScrubMaximumInteractiveRate; // @synthesize forceScrubMaximumInteractiveRate=_forceScrubMaximumInteractiveRate;
@property (nonatomic) double forceScrubMaximumPressure; // @synthesize forceScrubMaximumPressure=_forceScrubMaximumPressure;
@property (nonatomic) double forceScrubMinRateChange; // @synthesize forceScrubMinRateChange=_forceScrubMinRateChange;
@property (nonatomic) double forceScrubMinimumPressure; // @synthesize forceScrubMinimumPressure=_forceScrubMinimumPressure;
@property (nonatomic) double forceScrubMinimumRate; // @synthesize forceScrubMinimumRate=_forceScrubMinimumRate;
@property (nonatomic) double forceScrubRewindFactor; // @synthesize forceScrubRewindFactor=_forceScrubRewindFactor;
@property (nonatomic) double forceScrubSettleRateAddition; // @synthesize forceScrubSettleRateAddition=_forceScrubSettleRateAddition;
@property (nonatomic) double forceTouchTimeoutInterval; // @synthesize forceTouchTimeoutInterval=_forceTouchTimeoutInterval;
@property (nonatomic) double forceTouchTimeoutMinimumProgress; // @synthesize forceTouchTimeoutMinimumProgress=_forceTouchTimeoutMinimumProgress;
@property (nonatomic) double maxPreCrossfadeDuration; // @synthesize maxPreCrossfadeDuration=_maxPreCrossfadeDuration;
@property (nonatomic) double nonForcePreCrossfadeDuration; // @synthesize nonForcePreCrossfadeDuration=_nonForcePreCrossfadeDuration;
@property (nonatomic) BOOL shouldPauseOnSettle; // @synthesize shouldPauseOnSettle=_shouldPauseOnSettle;
@property (nonatomic) BOOL useDedicatedQueues; // @synthesize useDedicatedQueues=_useDedicatedQueues;
@property (nonatomic) BOOL variableIntro; // @synthesize variableIntro=_variableIntro;

+ (id)settingsControllerModule;
+ (id)sharedInstance;
- (void)setDefaultValues;

@end

