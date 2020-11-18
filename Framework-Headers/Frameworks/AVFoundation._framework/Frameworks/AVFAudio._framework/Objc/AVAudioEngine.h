//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioFormat, AVAudioInputNode, AVAudioMixerNode, AVAudioOutputNode;

@interface AVAudioEngine : NSObject
{
    void *_impl;
}

@property (nonatomic, getter=isAutoShutdownEnabled) BOOL autoShutdownEnabled;
@property (readonly, nonatomic) AVAudioInputNode *inputNode;
@property (readonly, nonatomic) BOOL isInManualRenderingMode;
@property (readonly, nonatomic) AVAudioMixerNode *mainMixerNode;
@property (readonly, nonatomic) CDUnknownBlockType manualRenderingBlock;
@property (readonly, nonatomic) AVAudioFormat *manualRenderingFormat;
@property (readonly, nonatomic) unsigned int manualRenderingMaximumFrameCount;
@property (readonly, nonatomic) long long manualRenderingMode;
@property (readonly, nonatomic) long long manualRenderingSampleTime;
@property (nonatomic) struct OpaqueMusicSequence *musicSequence;
@property (readonly, nonatomic) AVAudioOutputNode *outputNode;
@property (readonly, nonatomic, getter=isRunning) BOOL running;

- (void)attachNode:(id)arg1;
- (void)connect:(id)arg1 to:(id)arg2 format:(id)arg3;
- (void)connect:(id)arg1 to:(id)arg2 fromBus:(unsigned long long)arg3 toBus:(unsigned long long)arg4 format:(id)arg5;
- (void)connect:(id)arg1 toConnectionPoints:(id)arg2 fromBus:(unsigned long long)arg3 format:(id)arg4;
- (void)connectMIDI:(id)arg1 to:(id)arg2 format:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void)connectMIDI:(id)arg1 toNodes:(id)arg2 format:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)description;
- (void)detachNode:(id)arg1;
- (void)disableManualRenderingMode;
- (void)disconnectMIDI:(id)arg1 from:(id)arg2;
- (void)disconnectMIDI:(id)arg1 fromNodes:(id)arg2;
- (void)disconnectMIDIInput:(id)arg1;
- (void)disconnectMIDIOutput:(id)arg1;
- (void)disconnectNodeInput:(id)arg1;
- (void)disconnectNodeInput:(id)arg1 bus:(unsigned long long)arg2;
- (void)disconnectNodeOutput:(id)arg1;
- (void)disconnectNodeOutput:(id)arg1 bus:(unsigned long long)arg2;
- (BOOL)enableManualRenderingMode:(long long)arg1 format:(id)arg2 maximumFrameCount:(unsigned int)arg3 error:(id *)arg4;
- (struct AVAudioEngineImpl *)implementation;
- (id)init;
- (id)inputConnectionPointForNode:(id)arg1 inputBus:(unsigned long long)arg2;
- (id)outputConnectionPointsForNode:(id)arg1 outputBus:(unsigned long long)arg2;
- (void)pause;
- (void)prepare;
- (long long)renderOffline:(unsigned int)arg1 toBuffer:(id)arg2 error:(id *)arg3;
- (void)reset;
- (BOOL)startAndReturnError:(id *)arg1;
- (void)stop;

@end

