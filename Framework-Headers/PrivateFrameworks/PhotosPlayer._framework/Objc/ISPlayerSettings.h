//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosPlayer/ISSettings.h>

@interface ISPlayerSettings : ISSettings
{
    BOOL _easingEnabled;
    BOOL _scaleDuringPlayback;
    BOOL _loopingEnabled;
    BOOL _crossfadeEnabled;
    BOOL _audioEnabled;
    BOOL _playIsSticky;
    BOOL _playDuringHint;
    BOOL _showStateOverlay;
    BOOL _prerollBeforePlaying;
    BOOL _useDedicatedQueues;
    BOOL _allowFrameBlending;
    BOOL _allowVideoPreRoll;
    BOOL _allowPlayerReuse;
    float _vitalityEaseMinRate;
    double _photoTransitionAdjustment;
    double _minimumPhotoTransitionDuration;
    double _vitalityEaseDuration;
    long long _startBehavior;
    double _forceTouchTimeoutInterval;
    double _forceTouchTimeoutMinimumProgress;
    double _forceScrubMinimumPressure;
    double _forceScrubMaximumPressure;
    double _forceScrubRewindFactor;
    double _forceScrubMinRateChange;
    double _forceScrubMinimumRate;
    double _forceScrubMaximumInteractiveRate;
    double _audioRampDuration;
}

@property (nonatomic) BOOL allowFrameBlending; // @synthesize allowFrameBlending=_allowFrameBlending;
@property (nonatomic) BOOL allowPlayerReuse; // @synthesize allowPlayerReuse=_allowPlayerReuse;
@property (nonatomic) BOOL allowVideoPreRoll; // @synthesize allowVideoPreRoll=_allowVideoPreRoll;
@property (nonatomic) BOOL audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property (nonatomic) double audioRampDuration; // @synthesize audioRampDuration=_audioRampDuration;
@property (nonatomic) BOOL crossfadeEnabled; // @synthesize crossfadeEnabled=_crossfadeEnabled;
@property (nonatomic) BOOL easingEnabled; // @synthesize easingEnabled=_easingEnabled;
@property (nonatomic) double forceScrubMaximumInteractiveRate; // @synthesize forceScrubMaximumInteractiveRate=_forceScrubMaximumInteractiveRate;
@property (nonatomic) double forceScrubMaximumPressure; // @synthesize forceScrubMaximumPressure=_forceScrubMaximumPressure;
@property (nonatomic) double forceScrubMinRateChange; // @synthesize forceScrubMinRateChange=_forceScrubMinRateChange;
@property (nonatomic) double forceScrubMinimumPressure; // @synthesize forceScrubMinimumPressure=_forceScrubMinimumPressure;
@property (nonatomic) double forceScrubMinimumRate; // @synthesize forceScrubMinimumRate=_forceScrubMinimumRate;
@property (nonatomic) double forceScrubRewindFactor; // @synthesize forceScrubRewindFactor=_forceScrubRewindFactor;
@property (nonatomic) double forceTouchTimeoutInterval; // @synthesize forceTouchTimeoutInterval=_forceTouchTimeoutInterval;
@property (nonatomic) double forceTouchTimeoutMinimumProgress; // @synthesize forceTouchTimeoutMinimumProgress=_forceTouchTimeoutMinimumProgress;
@property (nonatomic) BOOL loopingEnabled; // @synthesize loopingEnabled=_loopingEnabled;
@property (nonatomic) double minimumPhotoTransitionDuration; // @synthesize minimumPhotoTransitionDuration=_minimumPhotoTransitionDuration;
@property (nonatomic) double photoTransitionAdjustment; // @synthesize photoTransitionAdjustment=_photoTransitionAdjustment;
@property (nonatomic) BOOL playDuringHint; // @synthesize playDuringHint=_playDuringHint;
@property (nonatomic) BOOL playIsSticky; // @synthesize playIsSticky=_playIsSticky;
@property (nonatomic) BOOL prerollBeforePlaying; // @synthesize prerollBeforePlaying=_prerollBeforePlaying;
@property (nonatomic) BOOL scaleDuringPlayback; // @synthesize scaleDuringPlayback=_scaleDuringPlayback;
@property (nonatomic) BOOL showStateOverlay; // @synthesize showStateOverlay=_showStateOverlay;
@property (nonatomic) long long startBehavior; // @synthesize startBehavior=_startBehavior;
@property (nonatomic) BOOL useDedicatedQueues; // @synthesize useDedicatedQueues=_useDedicatedQueues;
@property (nonatomic) double vitalityEaseDuration; // @synthesize vitalityEaseDuration=_vitalityEaseDuration;
@property (nonatomic) float vitalityEaseMinRate; // @synthesize vitalityEaseMinRate=_vitalityEaseMinRate;

+ (id)settingsControllerModule;
+ (id)sharedInstance;
- (void)setDefaultValues;

@end

