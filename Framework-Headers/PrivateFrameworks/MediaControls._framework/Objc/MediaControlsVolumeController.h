//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaControls/MPRequestResponseControllerDelegate-Protocol.h>
#import <MediaControls/MPVolumeControllerDelegate-Protocol.h>

@class MPAVEndpointRoute, MPAVOutputDeviceRoute, MPRequestResponseController, MPVolumeController, NSHashTable, NSString;

@interface MediaControlsVolumeController : NSObject <MPVolumeControllerDelegate, MPRequestResponseControllerDelegate>
{
    BOOL _isSplitRoute;
    BOOL _supportsHeadTrackedSpatialAudio;
    BOOL _headTrackedSpatialAudioEnabled;
    BOOL _headTrackedSpatialAudioActive;
    BOOL _automaticResponseLoading;
    BOOL _primaryInteractionEnabled;
    BOOL _secondaryInteractionEnabled;
    int _headTrackedSpatialAudioNotificationToken;
    NSString *_volumeAudioCategory;
    MPAVEndpointRoute *_systemRoute;
    NSHashTable *_observers;
    MPVolumeController *_systemVolumeController;
    MPVolumeController *_primaryVolumeController;
    MPVolumeController *_secondaryVolumeController;
    MPAVOutputDeviceRoute *_systemOutputDeviceRoute;
    MPAVOutputDeviceRoute *_primaryOutputDeviceRoute;
    MPAVOutputDeviceRoute *_secondaryOutputDeviceRoute;
    MPRequestResponseController *_requestController;
}

@property (nonatomic, getter=isAutomaticResponseLoading) BOOL automaticResponseLoading; // @synthesize automaticResponseLoading=_automaticResponseLoading;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isHeadTrackedSpatialAudioActive) BOOL headTrackedSpatialAudioActive; // @synthesize headTrackedSpatialAudioActive=_headTrackedSpatialAudioActive;
@property (nonatomic, getter=isHeadTrackedSpatialAudioEnabled) BOOL headTrackedSpatialAudioEnabled; // @synthesize headTrackedSpatialAudioEnabled=_headTrackedSpatialAudioEnabled;
@property (nonatomic) int headTrackedSpatialAudioNotificationToken; // @synthesize headTrackedSpatialAudioNotificationToken=_headTrackedSpatialAudioNotificationToken;
@property (readonly, nonatomic) BOOL isSplitRoute; // @synthesize isSplitRoute=_isSplitRoute;
@property (strong, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (nonatomic) BOOL primaryInteractionEnabled; // @synthesize primaryInteractionEnabled=_primaryInteractionEnabled;
@property (strong, nonatomic) MPAVOutputDeviceRoute *primaryOutputDeviceRoute; // @synthesize primaryOutputDeviceRoute=_primaryOutputDeviceRoute;
@property (strong, nonatomic) MPVolumeController *primaryVolumeController; // @synthesize primaryVolumeController=_primaryVolumeController;
@property (strong, nonatomic) MPRequestResponseController *requestController; // @synthesize requestController=_requestController;
@property (nonatomic) BOOL secondaryInteractionEnabled; // @synthesize secondaryInteractionEnabled=_secondaryInteractionEnabled;
@property (strong, nonatomic) MPAVOutputDeviceRoute *secondaryOutputDeviceRoute; // @synthesize secondaryOutputDeviceRoute=_secondaryOutputDeviceRoute;
@property (strong, nonatomic) MPVolumeController *secondaryVolumeController; // @synthesize secondaryVolumeController=_secondaryVolumeController;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsHeadTrackedSpatialAudio; // @synthesize supportsHeadTrackedSpatialAudio=_supportsHeadTrackedSpatialAudio;
@property (strong, nonatomic) MPAVOutputDeviceRoute *systemOutputDeviceRoute; // @synthesize systemOutputDeviceRoute=_systemOutputDeviceRoute;
@property (strong, nonatomic) MPAVEndpointRoute *systemRoute; // @synthesize systemRoute=_systemRoute;
@property (strong, nonatomic) MPVolumeController *systemVolumeController; // @synthesize systemVolumeController=_systemVolumeController;
@property (copy, nonatomic) NSString *volumeAudioCategory; // @synthesize volumeAudioCategory=_volumeAudioCategory;

+ (BOOL)isDefaultPackage:(id)arg1;
- (void).cxx_destruct;
- (void)_notifyUserInteractionEnabledChanged:(BOOL)arg1 routeType:(long long)arg2;
- (void)_notifyVolumeChangedForVolumeController:(id)arg1 volumeControlAvailable:(BOOL)arg2 effectiveVolume:(float)arg3;
- (id)_packageNameForRoute:(id)arg1 isRTL:(BOOL)arg2 isSlider:(BOOL)arg3;
- (long long)_routeForVolumeController:(id)arg1;
- (BOOL)_setupOutputDevicesAndVolumeControllersIfNeeded;
- (void)_updateHeadTrackedSpatialAudioEnabled;
- (id)_volumePackageNameForClusterRoute:(id)arg1 isRTL:(BOOL)arg2;
- (id)_volumePackageNameForRTL:(BOOL)arg1;
- (void)addObserver:(id)arg1;
- (id)availableBluetoothListeningModeForRouteType:(long long)arg1;
- (void)beginObservingHeadTrackedSpatialAudioEnabledNotification;
- (void)controller:(id)arg1 defersResponseReplacement:(CDUnknownBlockType)arg2;
- (id)currentBluetoothListeningModeForRouteType:(long long)arg1;
- (void)dealloc;
- (void)endObservingHeadTrackedSpatialAudioEnabledNotification;
- (id)glyphStateForVolumeLevel:(double)arg1 packageName:(id)arg2;
- (id)init;
- (void)logFailedSetBluetoothListeningMode:(id)arg1 forRouteType:(long long)arg2;
- (id)outputContextDescription;
- (id)packageNameForRouteType:(long long)arg1 isRTL:(BOOL)arg2 isSlider:(BOOL)arg3;
- (void)removeObserver:(id)arg1;
- (void)routeDidChangeNotification;
- (id)routeNameForRouteType:(long long)arg1;
- (id)setCurrentBluetoothListeningModeForRouteType:(long long)arg1 bluetoothListeningMode:(id)arg2;
- (void)setUserInteractionEnabled:(BOOL)arg1 forRouteType:(long long)arg2;
- (void)setVolume:(float)arg1 forRouteType:(long long)arg2;
- (BOOL)userInteractionEnabledForRouteType:(long long)arg1;
- (BOOL)volumeControlAvailableForRouteType:(long long)arg1;
- (void)volumeController:(id)arg1 volumeControlAvailableDidChange:(BOOL)arg2;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
- (float)volumeForRouteType:(long long)arg1;

@end
