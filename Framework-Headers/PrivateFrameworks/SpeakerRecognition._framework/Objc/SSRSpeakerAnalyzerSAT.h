//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SSRSpeakerAnalyzerSAT : NSObject
{
}

- (void)endAudio;
- (id)getVoiceRecognizerResults;
- (id)initWithVoiceRecognitionContext:(id)arg1 delegate:(id)arg2 queue:(id)arg3;
- (void)processAudioData:(id)arg1 numSamples:(unsigned long long)arg2;
- (id)resetForNewRequest;

@end

