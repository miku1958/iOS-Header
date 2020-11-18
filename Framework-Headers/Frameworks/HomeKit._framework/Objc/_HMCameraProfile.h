//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/_HMAccessoryProfile.h>

@class HMCameraClipManager, HMCameraUserSettings, NSArray, _HMCameraAudioControl, _HMCameraSettingsControl, _HMCameraSnapshotControl, _HMCameraStreamControl;

@interface _HMCameraProfile : _HMAccessoryProfile
{
    _HMCameraStreamControl *_streamControlInternal;
    _HMCameraSnapshotControl *_snapshotControlInternal;
    _HMCameraSettingsControl *_settingsControl;
    _HMCameraAudioControl *_speakerControl;
    _HMCameraAudioControl *_microphoneControl;
    HMCameraUserSettings *_userSettings;
    HMCameraClipManager *_clipManager;
}

@property (strong) HMCameraClipManager *clipManager; // @synthesize clipManager=_clipManager;
@property (readonly, copy) NSArray *controls;
@property (readonly) _HMCameraAudioControl *microphoneControl; // @synthesize microphoneControl=_microphoneControl;
@property (readonly) _HMCameraSettingsControl *settingsControl; // @synthesize settingsControl=_settingsControl;
@property (readonly) _HMCameraSnapshotControl *snapshotControlInternal; // @synthesize snapshotControlInternal=_snapshotControlInternal;
@property (readonly) _HMCameraAudioControl *speakerControl; // @synthesize speakerControl=_speakerControl;
@property (readonly) _HMCameraStreamControl *streamControlInternal; // @synthesize streamControlInternal=_streamControlInternal;
@property (strong) HMCameraUserSettings *userSettings; // @synthesize userSettings=_userSettings;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 accessory:(id)arg2;
- (void)_createControls:(id)arg1;
- (void)_registerNotificationHandlers;
- (void)addUserSettings:(id)arg1;
- (void)deleteAllClipsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
