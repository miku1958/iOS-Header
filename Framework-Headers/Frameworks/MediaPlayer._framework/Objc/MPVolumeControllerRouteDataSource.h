//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/MPVolumeControllerDataSource-Protocol.h>

@class MPAVRoute, NSString;
@protocol MPVolumeControllerDataSourceDelegate;

@interface MPVolumeControllerRouteDataSource : NSObject <MPVolumeControllerDataSource>
{
    float _pendingVolume;
    BOOL _hasPendingVolume;
    BOOL _hasVolumeInFlight;
    BOOL _volumeInitialized;
    BOOL _volumeCapabilitiesInitialized;
    BOOL _volumeControlAvailable;
    BOOL _muted;
    BOOL _volumeWarningEnabled;
    float _volume;
    float _EUVolumeLimit;
    id<MPVolumeControllerDataSourceDelegate> _delegate;
    long long _volumeWarningState;
    MPAVRoute *_groupRoute;
    MPAVRoute *_outputDeviceRoute;
}

@property (readonly, nonatomic) float EUVolumeLimit; // @synthesize EUVolumeLimit=_EUVolumeLimit;
@property (readonly, nonatomic) BOOL applicationShouldOverrideHardwareVolumeBehavior;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MPVolumeControllerDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) MPAVRoute *groupRoute; // @synthesize groupRoute=_groupRoute;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isMuted) BOOL muted; // @synthesize muted=_muted;
@property (strong, nonatomic) MPAVRoute *outputDeviceRoute; // @synthesize outputDeviceRoute=_outputDeviceRoute;
@property (readonly) Class superclass;
@property (nonatomic) float volume; // @synthesize volume=_volume;
@property (readonly, nonatomic, getter=isVolumeControlAvailable) BOOL volumeControlAvailable; // @synthesize volumeControlAvailable=_volumeControlAvailable;
@property (readonly, copy, nonatomic) NSString *volumeControlLabel;
@property (readonly, nonatomic) BOOL volumeWarningEnabled; // @synthesize volumeWarningEnabled=_volumeWarningEnabled;
@property (readonly, nonatomic) long long volumeWarningState; // @synthesize volumeWarningState=_volumeWarningState;

- (void).cxx_destruct;
- (void)_routeVolumeControlCapabilitiesDidChangeNotification:(id)arg1;
- (void)_routeVolumeDidChangeNotification:(id)arg1;
- (void)_setPendingVolumeIfNeeded;
- (void)_updateVolumeControlCapabilities:(unsigned int)arg1;
- (void)adjustVolumeValue:(float)arg1;
- (void)dealloc;
- (void)getVolumeValueWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithGroupRoute:(id)arg1 outputDeviceRoute:(id)arg2;
- (void)initializeVolume;
- (void)reload;
- (void)reloadWarning;

@end

