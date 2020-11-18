//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray;

@interface VCPVoiceDetector : NSObject
{
    NSDictionary *_model;
    struct AudioStreamBasicDescription _audioStream;
    int _sampleBatchSize;
    CDStruct_1b6d18a9 _trackStart;
    BOOL _voiceActivity;
    CDStruct_1b6d18a9 _voiceStart;
    NSMutableArray *_voiceDetections;
    NSMutableArray *_utteranceDetections;
    NSMutableArray *_musicDetections;
}

@property (strong) NSMutableArray *voiceDetections; // @synthesize voiceDetections=_voiceDetections;

+ (id)detector;
- (void).cxx_destruct;
- (void)addDetectionFromTime:(const CDStruct_1b6d18a9 *)arg1 toTime:(const CDStruct_1b6d18a9 *)arg2 result:(id)arg3;
- (id)audioFormatRequirements;
- (int)finalizeAnalysisAtTime:(const CDStruct_1b6d18a9 *)arg1;
- (id)init;
- (int)loadModel;
- (int)processAudioSamples:(struct AudioBufferList *)arg1 timestamp:(struct AudioTimeStamp)arg2;
- (id)results;
- (int)setupWithAudioStream:(const struct AudioStreamBasicDescription *)arg1;
- (int)setupWithSample:(struct opaqueCMSampleBuffer *)arg1 andSampleBatchSize:(int)arg2;

@end
