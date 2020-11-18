//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/_HMAccessoryProfile.h>

@class NSMutableArray, _HMCameraAudioControl, _HMCameraSettingsControl, _HMCameraSnapshotControl, _HMCameraStreamControl;

@interface _HMCameraProfile : _HMAccessoryProfile
{
    _HMCameraStreamControl *_streamControlInternal;
    _HMCameraSnapshotControl *_snapshotControlInternal;
    _HMCameraSettingsControl *_settingsControl;
    _HMCameraAudioControl *_speakerControl;
    _HMCameraAudioControl *_microphoneControl;
    NSMutableArray *_controls;
}

@property (readonly, nonatomic) NSMutableArray *controls; // @synthesize controls=_controls;
@property (readonly, nonatomic) _HMCameraAudioControl *microphoneControl; // @synthesize microphoneControl=_microphoneControl;
@property (readonly, nonatomic) _HMCameraSettingsControl *settingsControl; // @synthesize settingsControl=_settingsControl;
@property (readonly, nonatomic) _HMCameraSnapshotControl *snapshotControlInternal; // @synthesize snapshotControlInternal=_snapshotControlInternal;
@property (readonly, nonatomic) _HMCameraAudioControl *speakerControl; // @synthesize speakerControl=_speakerControl;
@property (readonly, nonatomic) _HMCameraStreamControl *streamControlInternal; // @synthesize streamControlInternal=_streamControlInternal;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_registerNotificationHandlers;
- (void)configureWithClientQueue:(id)arg1 delegateCaller:(id)arg2 msgDispatcher:(id)arg3 home:(id)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

