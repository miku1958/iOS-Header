//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCBasebandCodecNotifications-Protocol.h>

@class NSString, VCAudioRelayIO;
@protocol OS_dispatch_source;

@interface VCAudioRelay : NSObject <VCBasebandCodecNotifications>
{
    BOOL _isRelayRunning;
    struct OpaqueFigThread *_relayThread;
    struct _opaque_pthread_mutex_t _wakeUpMutex;
    struct _opaque_pthread_cond_t _wakeUpCondition;
    double _IOBufferDuration;
    struct OpaqueAudioConverter *_clientToRemoteConverter;
    struct OpaqueAudioConverter *_remoteToClientConverter;
    VCAudioRelayIO *_remoteIO;
    VCAudioRelayIO *_clientIO;
    struct _opaque_pthread_mutex_t _relayLock;
    struct _opaque_pthread_mutex_t _clientIOLock;
    struct _opaque_pthread_mutex_t _remoteIOLock;
    NSObject<OS_dispatch_source> *_periodicHealthPrintDispatchSource;
    unsigned int _blocksRelayedCount;
    float _clientUplinkPowerMovingAverage;
    float _clientDownlinkPowerMovingAverage;
    struct _VCRemoteCodecInfo _remoteCodecInfo;
}

@property (readonly) double IOBufferDuration; // @synthesize IOBufferDuration=_IOBufferDuration;
@property (readonly) unsigned int blocksRelayedCount; // @synthesize blocksRelayedCount=_blocksRelayedCount;
@property (readonly) float clientDownlinkPowerMovingAverage; // @synthesize clientDownlinkPowerMovingAverage=_clientDownlinkPowerMovingAverage;
@property (copy, nonatomic) VCAudioRelayIO *clientIO; // @synthesize clientIO=_clientIO;
@property (readonly) struct OpaqueAudioConverter *clientToRemoteConverter; // @synthesize clientToRemoteConverter=_clientToRemoteConverter;
@property (readonly) float clientUplinkPowerMovingAverage; // @synthesize clientUplinkPowerMovingAverage=_clientUplinkPowerMovingAverage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) BOOL isRelayRunning; // @synthesize isRelayRunning=_isRelayRunning;
@property (readonly) NSObject<OS_dispatch_source> *periodicHealthPrintDispatchSource; // @synthesize periodicHealthPrintDispatchSource=_periodicHealthPrintDispatchSource;
@property (copy, nonatomic) VCAudioRelayIO *remoteIO; // @synthesize remoteIO=_remoteIO;
@property (readonly) struct OpaqueAudioConverter *remoteToClientConverter; // @synthesize remoteToClientConverter=_remoteToClientConverter;
@property (readonly) Class superclass;

- (BOOL)canSetPropertyWithError:(id *)arg1;
- (BOOL)createAudioConvertersWithError:(id *)arg1;
- (void)dealloc;
- (void)destroyAudioConverters;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo *)arg1;
- (void)forwardSamplesFromIO:(id)arg1 toIO:(id)arg2 withConverter:(struct OpaqueAudioConverter *)arg3;
- (id)init;
- (void)lock;
- (struct OpaqueAudioConverter *)newAudioConverterWithInputFormat:(struct AudioStreamBasicDescription *)arg1 outputFormat:(struct AudioStreamBasicDescription *)arg2 withError:(id *)arg3;
- (void)printStreamFormats;
- (void)relayCallback;
- (void)relayProcessSamples;
- (float)rmsPowerOfBuffer:(float *)arg1 numSamples:(unsigned int)arg2;
- (BOOL)setClientIO:(id)arg1 withError:(id *)arg2;
- (BOOL)setIOBufferDuration:(double)arg1 withError:(id *)arg2;
- (BOOL)setRemoteIO:(id)arg1 withError:(id *)arg2;
- (void)sleepTillTime:(struct timespec *)arg1;
- (BOOL)startClientIO;
- (void)startPeriodicHealthPrint;
- (BOOL)startRelayIO:(id)arg1 name:(id)arg2 recordingsName:(id)arg3;
- (BOOL)startRelayThreadWithError:(id *)arg1;
- (BOOL)startRemoteIO;
- (void)stopClientIO;
- (BOOL)stopRelayIO:(id)arg1;
- (void)stopRelayThread;
- (void)stopRemoteIO;
- (void)unlock;
- (void)updateRealTimeStats;
- (void)updateRemoteCodecInfo:(const struct _VCRemoteCodecInfo *)arg1;

@end
