//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SSRSpeakerAnalyzerPSR : NSObject
{
}

- (void)endAudio;
- (id)getVoiceRecognizerResults;
- (id)initWithVoiceRecognitionContext:(id)arg1 delegate:(id)arg2 queue:(id)arg3;
- (void)processAudioData:(id)arg1;
- (id)resetForNewRequest;

@end

