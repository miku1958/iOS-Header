//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol VCAudioIOControllerDelegate;

__attribute__((visibility("hidden")))
@interface VCAudioIOControllerClient : NSObject
{
    id _delegate;
    struct AudioStreamBasicDescription _format;
    int _deviceRole;
    BOOL _allowAudioRecording;
    int _operatingMode;
    BOOL _isRemoteCodecInfoValid;
    unsigned int _remoteCodecType;
    double _remoteCodecSampleRate;
    BOOL _isRemoteVersionInfoValid;
    struct VoiceIOFarEndVersionInfo _farEndVersionInfo;
    int _clientPid;
    BOOL _isInputMeteringEnabled;
    BOOL _isOutputMeteringEnabled;
    unsigned char _direction;
    struct _VCAudioIOControllerClientIO _sinkIO;
    struct _VCAudioIOControllerClientIO _sourceIO;
}

@property (nonatomic) BOOL allowAudioRecording; // @synthesize allowAudioRecording=_allowAudioRecording;
@property (readonly, nonatomic) int clientPid; // @synthesize clientPid=_clientPid;
@property (readonly, nonatomic) id<VCAudioIOControllerDelegate> delegate;
@property (nonatomic) int deviceRole; // @synthesize deviceRole=_deviceRole;
@property (nonatomic) unsigned char direction; // @synthesize direction=_direction;
@property (readonly, nonatomic) struct VoiceIOFarEndVersionInfo farEndVersionInfo; // @synthesize farEndVersionInfo=_farEndVersionInfo;
@property (readonly, nonatomic) struct AudioStreamBasicDescription format; // @synthesize format=_format;
@property (nonatomic, getter=isInputMeteringEnabled) BOOL inputMeteringEnabled; // @synthesize inputMeteringEnabled=_isInputMeteringEnabled;
@property (readonly, nonatomic) BOOL isRemoteCodecInfoValid; // @synthesize isRemoteCodecInfoValid=_isRemoteCodecInfoValid;
@property (readonly, nonatomic) BOOL isRemoteVersionInfoValid; // @synthesize isRemoteVersionInfoValid=_isRemoteVersionInfoValid;
@property (nonatomic) int operatingMode; // @synthesize operatingMode=_operatingMode;
@property (nonatomic, getter=isOuputMeteringEnabled) BOOL outputMeteringEnabled; // @synthesize outputMeteringEnabled=_isOutputMeteringEnabled;
@property (readonly, nonatomic) double remoteCodecSampleRate; // @synthesize remoteCodecSampleRate=_remoteCodecSampleRate;
@property (readonly, nonatomic) unsigned int remoteCodecType; // @synthesize remoteCodecType=_remoteCodecType;
@property (readonly, nonatomic) struct _VCAudioIOControllerClientIO *sinkIO;
@property (readonly, nonatomic) struct _VCAudioIOControllerClientIO *sourceIO;

- (void)dealloc;
- (id)description;
- (id)initWithDelegate:(id)arg1 sourceContext:(void *)arg2 sourceProcess:(CDUnknownFunctionPointerType)arg3 sinkContext:(void *)arg4 sinkProcess:(CDUnknownFunctionPointerType)arg5 clientPid:(int)arg6;
- (void)setClientFormat:(struct AudioStreamBasicDescription)arg1;
- (void)setFarEndVersionInfo:(struct VoiceIOFarEndVersionInfo)arg1;
- (void)setRemoteCodecType:(unsigned int)arg1 sampleRate:(double)arg2;

@end
