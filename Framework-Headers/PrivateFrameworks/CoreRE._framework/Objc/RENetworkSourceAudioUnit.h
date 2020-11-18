//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AudioToolbox/AUAudioUnit.h>

@class AUAudioUnitBus, AUAudioUnitBusArray, AVAudioPCMBuffer, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface RENetworkSourceAudioUnit : AUAudioUnit
{
    AUAudioUnitBus *_inputBus;
    AUAudioUnitBusArray *_inputBusArray;
    AVAudioPCMBuffer *_inputBuffer;
    AUAudioUnitBus *_outputBus;
    AUAudioUnitBusArray *_outputBusArray;
    struct unique_ptr<REJitterBuffer, std::__1::default_delete<REJitterBuffer>> _jitterBuffer;
    struct shared_ptr<REPacketEncoder> _encoder;
    long long _targetLatency;
    struct unique_ptr<REEncodePayloadPool, std::__1::default_delete<REEncodePayloadPool>> _payloadPool;
    struct unique_ptr<caulk::concurrent::messenger, std::__1::default_delete<caulk::concurrent::messenger>> _encoderMessenger;
    AVAudioPCMBuffer *_cannedRecordingBuffer;
    struct mutex _cannedRecordingMutex;
    BOOL _shortCircuit;
    BOOL _cannedRecording;
    NSObject<OS_dispatch_queue> *_sendQueue;
    CDUnknownBlockType _sendCompressedBytes;
}

@property (nonatomic) BOOL cannedRecording; // @synthesize cannedRecording=_cannedRecording;
@property (readonly, nonatomic) double currentPlaybackTime;
@property (readonly, nonatomic) unsigned long long decodedSampleCount;
@property (readonly, nonatomic) int droppedPacketRecoveryLimit;
@property (readonly) unsigned int jitterBufferSize;
@property (readonly, nonatomic) int samplesPerPacket;
@property (copy) CDUnknownBlockType sendCompressedBytes; // @synthesize sendCompressedBytes=_sendCompressedBytes;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *sendQueue; // @synthesize sendQueue=_sendQueue;
@property BOOL shortCircuit; // @synthesize shortCircuit=_shortCircuit;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)allocateRenderResourcesAndReturnError:(id *)arg1;
- (id)channelCapabilities;
- (void)configureJitterBufferForTargetLatency:(long long)arg1;
- (void)deallocateRenderResources;
- (id)initWithComponentDescription:(struct AudioComponentDescription)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (id)inputBusses;
- (CDUnknownBlockType)internalRenderBlock;
- (id)outputBusses;
- (void)receive:(const char *)arg1 size:(unsigned int)arg2 timestamp:(unsigned int)arg3;
- (void)receive:(id)arg1 timestamp:(unsigned int)arg2;
- (void)receiveCompressedBytes:(const char *)arg1 size:(unsigned int)arg2 timestamp:(double)arg3;
- (void)receiveCompressedBytes:(id)arg1 timestamp:(double)arg2;

@end
