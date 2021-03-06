//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VCPAudioClassifier, VCPLoudnessAnalyzer, VCPSongDetector, VCPVoiceDetector;

@interface VCPAudioAnalyzer : NSObject
{
    void *_inputBuffer;
    struct AudioTimeStamp _audioTimestamp;
    struct AudioBufferList _audioBufferList;
    int _sampleBatchSize;
    VCPVoiceDetector *_voiceDetector;
    VCPAudioClassifier *_audioClassifier;
    VCPLoudnessAnalyzer *_loudnessAnalyzer;
    VCPSongDetector *_songDetector;
    int _bufferedSamples;
    BOOL _initialized;
}

- (void).cxx_destruct;
- (int)analyzeAsset:(id)arg1 cancel:(CDUnknownBlockType)arg2 results:(id *)arg3;
- (int)analyzeSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (id)audioFormatRequirements;
- (void)dealloc;
- (int)finalizeAnalysisAtTime:(const CDStruct_1b6d18a9 *)arg1;
- (id)initWithAnalysisTypes:(unsigned long long)arg1 forStreaming:(BOOL)arg2;
- (int)processAudioSamples:(struct AudioBufferList *)arg1 timestamp:(struct AudioTimeStamp)arg2;
- (int)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (int)setupWithSample:(struct opaqueCMSampleBuffer *)arg1;
- (id)voiceDetections;

@end

