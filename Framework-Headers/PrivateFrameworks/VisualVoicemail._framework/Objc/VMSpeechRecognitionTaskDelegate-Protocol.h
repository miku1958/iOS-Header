//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VisualVoicemail/NSObject-Protocol.h>

@class SFTranscription;
@protocol VMSpeechRecognitionResult, VMSpeechRecognitionTask;

@protocol VMSpeechRecognitionTaskDelegate <NSObject>

@optional
- (void)speechRecognitionDidDetectSpeech:(id<VMSpeechRecognitionTask>)arg1;
- (void)speechRecognitionTask:(id<VMSpeechRecognitionTask>)arg1 didFinishRecognition:(id<VMSpeechRecognitionResult>)arg2;
- (void)speechRecognitionTask:(id<VMSpeechRecognitionTask>)arg1 didFinishSuccessfully:(BOOL)arg2;
- (void)speechRecognitionTask:(id<VMSpeechRecognitionTask>)arg1 didHypothesizeTranscription:(SFTranscription *)arg2;
- (void)speechRecognitionTaskFinishedReadingAudio:(id<VMSpeechRecognitionTask>)arg1;
- (void)speechRecognitionTaskWasCancelled:(id<VMSpeechRecognitionTask>)arg1;
@end
