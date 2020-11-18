//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VisualVoicemail/VMSpeechURLRecognitionRequestOperation.h>

#import <VisualVoicemail/_SFSpeechRecognitionTaskDelegatePrivate-Protocol.h>

@class NSObject, NSString, VMVoicemailTranscript;
@protocol OS_dispatch_semaphore;

@interface VMTranscriptionTranscribeOperation : VMSpeechURLRecognitionRequestOperation <_SFSpeechRecognitionTaskDelegatePrivate>
{
    double _duration;
    double _timeout;
    CDUnknownBlockType _transcribeOperationCompletion;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    VMVoicemailTranscript *_transcript;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property double duration; // @synthesize duration=_duration;
@property (readonly) unsigned long long hash;
@property BOOL processOnServer;
@property (strong, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property (readonly) Class superclass;
@property double timeout; // @synthesize timeout=_timeout;
@property (copy) CDUnknownBlockType transcribeOperationCompletion; // @synthesize transcribeOperationCompletion=_transcribeOperationCompletion;
@property (strong, nonatomic) VMVoicemailTranscript *transcript; // @synthesize transcript=_transcript;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithSpeechRecognizer:(id)arg1 speechURLRecognitionRequest:(id)arg2;
- (void)main;
- (void)speechRecognitionTask:(id)arg1 didFinishRecognition:(id)arg2;
- (void)speechRecognitionTask:(id)arg1 didFinishSuccessfully:(BOOL)arg2;
- (void)speechRecognitionTask:(id)arg1 didProcessAudioDuration:(double)arg2;
- (void)speechRecognitionTaskWasCancelled:(id)arg1;

@end

