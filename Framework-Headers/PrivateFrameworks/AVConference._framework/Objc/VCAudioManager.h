//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCAudioIOControllerControl-Protocol.h>
#import <AVConference/VCAudioIOSink-Protocol.h>
#import <AVConference/VCAudioIOSource-Protocol.h>

@class AVAudioDevice, NSDictionary, NSMutableArray, NSMutableSet, NSString, VCAudioSessionMediaProperties, VCAudioUnitProperties;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCAudioManager : NSObject <VCAudioIOControllerControl, VCAudioIOSink, VCAudioIOSource>
{
    struct tagHANDLE *_hAUIO;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    struct AudioEventQueue_t *_sourceEventQueue;
    struct AudioEventQueue_t *_sinkEventQueue;
    unsigned int _state;
    VCAudioSessionMediaProperties *_currentAudioSessionMediaProperties;
    VCAudioUnitProperties *_currentAudioUnitProperties;
    NSDictionary *_vpOperatingModeToAudioSessionMediaFormatMapping;
    struct AudioEventQueue_t *_eventQueue;
    NSMutableArray *_allClients;
    NSMutableArray *_suspendedClients;
    NSMutableArray *_startingIOClients;
    NSMutableSet *_sourceClients;
    NSMutableSet *_sinkClients;
    AVAudioDevice *_inputDevice;
    AVAudioDevice *_outputDevice;
    struct opaqueVCAudioBufferList *_sourceBuffer;
    BOOL _isGKVoiceChat;
    BOOL _isMicrophoneMuted;
    BOOL _isInDaemon;
    BOOL _isInputMeteringEnabled;
    BOOL _isOutputMeteringEnabled;
    BOOL _isSpeakerPhoneEnabled;
    BOOL _isSuspended;
}

@property (strong, nonatomic) VCAudioSessionMediaProperties *currentAudioSessionMediaProperties; // @synthesize currentAudioSessionMediaProperties=_currentAudioSessionMediaProperties;
@property (strong, nonatomic) VCAudioUnitProperties *currentAudioUnitProperties; // @synthesize currentAudioUnitProperties=_currentAudioUnitProperties;
@property (strong, nonatomic) AVAudioDevice *currentInputDevice; // @synthesize currentInputDevice=_inputDevice;
@property (strong, nonatomic) AVAudioDevice *currentOutputDevice; // @synthesize currentOutputDevice=_outputDevice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isGKVoiceChat; // @synthesize isGKVoiceChat=_isGKVoiceChat;
@property (nonatomic) BOOL isInDaemon; // @synthesize isInDaemon=_isInDaemon;
@property (nonatomic, getter=isMicrophoneMuted) BOOL microphoneMuted; // @synthesize microphoneMuted=_isMicrophoneMuted;
@property (nonatomic, getter=isSpeakerPhoneEnabled) BOOL speakerPhoneEnabled; // @synthesize speakerPhoneEnabled=_isSpeakerPhoneEnabled;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDictionary *vpOperatingModeToAudioSessionMediaFormatMapping;

+ (id)sharedInstance;
- (void)_cleanupDeadClients;
- (void)_resumeSuspendedClients;
- (void)_suspendAllClients;
- (BOOL)addClient:(id)arg1;
- (void)addSinkClient:(id)arg1;
- (void)addSourceClient:(id)arg1;
- (void)dealloc;
- (void)flushEventQueue:(struct AudioEventQueue_t *)arg1;
- (void)getPreferredFormat:(struct AudioStreamBasicDescription *)arg1 blockSize:(double *)arg2 vpOperatingMode:(unsigned int *)arg3 forOperatingMode:(int)arg4 deviceRole:(int)arg5 suggestedFormat:(struct AudioStreamBasicDescription *)arg6;
- (id)init;
- (id)newAudioSessionMediaPropertiesWithClient:(id)arg1;
- (id)newAudioUnitPropertiesWithClient:(id)arg1;
- (void)processEventQueue:(struct AudioEventQueue_t *)arg1 clientList:(id)arg2;
- (void)pullAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)refreshInputMetering;
- (void)refreshOutputMetering;
- (BOOL)removeClient:(id)arg1;
- (void)removeSinkClient:(id)arg1;
- (void)removeSourceClient:(id)arg1;
- (void)resetAUIOWithProperties:(id)arg1;
- (void)resetAudioSessionWithProperties:(id)arg1;
- (void)setInputMetering;
- (void)setOutputMetering;
- (void)setupIODevicesForAUIO:(struct tagHANDLE *)arg1;
- (BOOL)shouldResetAudioSessionWithProperties:(id)arg1;
- (BOOL)shouldResetAudioUnitWithProperties:(id)arg1;
- (BOOL)startAUIOWithProperties:(id)arg1;
- (BOOL)startAudioSessionWithProperties:(id)arg1;
- (void)startClient:(id)arg1;
- (BOOL)stateIdleWithAudioUnitProperties:(id)arg1 sessionProperties:(id)arg2 client:(id)arg3 newState:(unsigned int *)arg4;
- (void)stateRunningToSessionStarted;
- (BOOL)stateRunningWithAudioUnitProperties:(id)arg1 sessionProperties:(id)arg2 client:(id)arg3 newState:(unsigned int *)arg4;
- (BOOL)stateSessionStartedWithAudioUnitProperties:(id)arg1 sessionProperties:(id)arg2 client:(id)arg3 newState:(unsigned int *)arg4;
- (void)stopAUIO;
- (void)stopAudioSession;
- (void)stopClient:(id)arg1;
- (void)updateClient:(id)arg1;
- (BOOL)updateStateWithAudioIOClient:(id)arg1;
- (unsigned int)vpOperationModeForConferenceOperatingMode:(int)arg1 deviceRole:(int)arg2;

@end

