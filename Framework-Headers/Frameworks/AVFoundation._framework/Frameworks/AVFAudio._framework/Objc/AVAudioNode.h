//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFAudio/AVAudioMixing-Protocol.h>

@class AVAudioEngine, AVAudioTime, NSString;

@interface AVAudioNode : NSObject <AVAudioMixing>
{
    void *_impl;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) AVAudioEngine *engine;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) struct AVAudioNodeImplBase *impl;
@property (readonly, nonatomic) AVAudioTime *lastRenderTime;
@property (readonly, nonatomic) unsigned long long numberOfInputs;
@property (readonly, nonatomic) unsigned long long numberOfOutputs;
@property (readonly) Class superclass;
@property (nonatomic) float volume;

- (struct OpaqueAudioComponentInstance *)audioUnit;
- (id)clock;
- (void)dealloc;
- (id)destinationForMixer:(id)arg1 bus:(unsigned long long)arg2;
- (void)didAttachToEngine:(id)arg1;
- (void)didDetachFromEngine:(id)arg1;
- (id)init;
- (id)initWithImpl:(struct AVAudioNodeImplBase *)arg1;
- (id)inputFormatForBus:(unsigned long long)arg1;
- (void)installTapOnBus:(unsigned long long)arg1 bufferSize:(unsigned int)arg2 format:(id)arg3 block:(CDUnknownBlockType)arg4;
- (id)nameForInputBus:(unsigned long long)arg1;
- (id)nameForOutputBus:(unsigned long long)arg1;
- (float)obstruction;
- (float)occlusion;
- (id)outputFormatForBus:(unsigned long long)arg1;
- (float)pan;
- (struct AVAudio3DPoint)position;
- (float)rate;
- (void)removeTapOnBus:(unsigned long long)arg1;
- (long long)renderingAlgorithm;
- (void)reset;
- (float)reverbBlend;
- (BOOL)setInputFormat:(id)arg1 forBus:(unsigned long long)arg2;
- (void)setNumberOfInputs:(unsigned int)arg1;
- (void)setNumberOfOutputs:(unsigned int)arg1;
- (void)setObstruction:(float)arg1;
- (void)setOcclusion:(float)arg1;
- (BOOL)setOutputFormat:(id)arg1 forBus:(unsigned long long)arg2;
- (void)setPan:(float)arg1;
- (void)setPosition:(struct AVAudio3DPoint)arg1;
- (void)setRate:(float)arg1;
- (void)setRenderingAlgorithm:(long long)arg1;
- (void)setReverbBlend:(float)arg1;

@end

