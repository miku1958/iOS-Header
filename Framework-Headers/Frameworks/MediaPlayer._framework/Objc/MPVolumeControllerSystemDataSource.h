//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/MPVolumeControllerDataSource-Protocol.h>

@class NSString;
@protocol MPVolumeControllerDataSourceDelegate;

@interface MPVolumeControllerSystemDataSource : NSObject <MPVolumeControllerDataSource>
{
    BOOL _debugVolumeWarning;
    id<MPVolumeControllerDataSourceDelegate> _delegate;
    float _volume;
    BOOL _muted;
    BOOL _volumeControlAvailable;
    BOOL _volumeInitialized;
    BOOL _volumeControlCapabilitiesInitialized;
    BOOL _volumeWarningEnabled;
    float _EUVolumeLimit;
    NSString *_volumeAudioCategory;
    NSString *_volumeControlLabel;
    long long _volumeWarningState;
}

@property (readonly, nonatomic) float EUVolumeLimit; // @synthesize EUVolumeLimit=_EUVolumeLimit;
@property (readonly, nonatomic) BOOL applicationShouldOverrideHardwareVolumeBehavior;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MPVolumeControllerDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isMuted) BOOL muted; // @synthesize muted=_muted;
@property (readonly) Class superclass;
@property (nonatomic) float volume; // @synthesize volume=_volume;
@property (copy, nonatomic) NSString *volumeAudioCategory; // @synthesize volumeAudioCategory=_volumeAudioCategory;
@property (readonly, nonatomic, getter=isVolumeControlAvailable) BOOL volumeControlAvailable; // @synthesize volumeControlAvailable=_volumeControlAvailable;
@property (readonly, copy, nonatomic) NSString *volumeControlLabel; // @synthesize volumeControlLabel=_volumeControlLabel;
@property (readonly, nonatomic) BOOL volumeWarningEnabled; // @synthesize volumeWarningEnabled=_volumeWarningEnabled;
@property (readonly, nonatomic) long long volumeWarningState; // @synthesize volumeWarningState=_volumeWarningState;

- (void).cxx_destruct;
- (void)_EUVolumeLimitDidChange:(id)arg1;
- (void)_EUVolumeLimitEnforcedDidChange:(id)arg1;
- (void)_mediaServerDiedNotification:(id)arg1;
- (void)_reloadEUVolumeLimits;
- (void)_routeDidChangeNotification:(id)arg1;
- (void)_setup;
- (void)_systemMuteDidChange:(id)arg1;
- (void)_systemVolumeDidChange:(id)arg1;
- (void)_tearDown;
- (void)_updateRouteLabelForRoute:(id)arg1;
- (float)_volumeApplyingEUVolumePolicyToVolume:(float)arg1;
- (void)_volumeControlCapabilitiesDidChangeNotification:(id)arg1;
- (void)_volumeDidChangeNotification:(id)arg1;
- (void)adjustVolumeValue:(float)arg1;
- (void)dealloc;
- (void)getVolumeValueWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (void)initializeVolume;
- (void)reload;
- (void)reloadWarning;
- (void)updateVolume:(float)arg1;
- (void)updateVolumeControlCapabilities:(unsigned int)arg1;

@end

