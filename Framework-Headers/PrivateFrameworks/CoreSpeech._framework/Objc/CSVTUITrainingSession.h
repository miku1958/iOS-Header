//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSVTUIAudioSessionDelegate-Protocol.h>
#import <CoreSpeech/CSVTUIEndPointDelegate-Protocol.h>
#import <CoreSpeech/SFSpeechRecognitionTaskDelegate-Protocol.h>

@class CSVTUIKeywordDetector, NSMutableArray, NSString, NSTimer, SFSpeechAudioBufferRecognitionRequest, SFSpeechRecognitionTask, SFSpeechRecognizer;
@protocol CSVTUIAudioSession, CSVTUITrainingSessionDelegate, OS_dispatch_queue;

@interface CSVTUITrainingSession : NSObject <SFSpeechRecognitionTaskDelegate, CSVTUIAudioSessionDelegate, CSVTUIEndPointDelegate>
{
    long long _status;
    long long _utteranceId;
    long long _sessionNumber;
    NSString *_locale;
    CSVTUIKeywordDetector *_keywordDetector;
    id<CSVTUIAudioSession> _audioSession;
    SFSpeechRecognizer *_speechRecognizer;
    SFSpeechAudioBufferRecognitionRequest *_speechRecognitionRequest;
    SFSpeechRecognitionTask *_speechRecognitionTask;
    NSTimer *_masterTimer;
    NSMutableArray *_pcmBufArray;
    BOOL _resultReported;
    BOOL _sessionProcess;
    BOOL _sessionSuspended;
    BOOL _ASRErrorOccured;
    id<CSVTUITrainingSessionDelegate> _sessionDelegate;
    CDUnknownBlockType _trainingCompletion;
    NSObject<OS_dispatch_queue> *_queue;
    long long _numRequiredTrailingSamples;
    long long _numTrailingSamples;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_registerEndPointTimeout;
- (void)audioSessionDidStartRecording:(BOOL)arg1 error:(id)arg2;
- (void)audioSessionDidStopRecording:(long long)arg1;
- (void)audioSessionErrorDidOccur:(id)arg1;
- (void)audioSessionRecordBufferAvailable:(id)arg1;
- (void)audioSessionUnsupportedAudioRoute;
- (void)closeSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void)closeSessionWithStatus:(int)arg1 successfully:(BOOL)arg2;
- (void)closeSessionWithStatus:(int)arg1 successfully:(BOOL)arg2 complete:(CDUnknownBlockType)arg3;
- (void)computeRequiredTrailingSamples;
- (id)createAVAudioPCMBufferWithNSData:(id)arg1;
- (void)didDetectBeginOfSpeech;
- (void)didDetectEndOfSpeech:(long long)arg1;
- (void)feedSpeechRecognitionTrailingSamplesWithCompletedBlock:(CDUnknownBlockType)arg1;
- (void)feedSpeechRecognitionWithPCMBuffer;
- (void)finishSpeechRecognitionTask;
- (void)handleAudioBufferForVTWithAudioInput:(id)arg1 withDetectedBlock:(CDUnknownBlockType)arg2;
- (void)handleAudioInput:(id)arg1;
- (void)handleMasterTimeout:(id)arg1;
- (id)initWithUtteranceId:(long long)arg1 sessionNumber:(long long)arg2 Locale:(id)arg3 audioSession:(id)arg4 keywordDetector:(id)arg5 speechRecognizer:(id)arg6 speechRecognitionRequest:(id)arg7 sessionDelegate:(id)arg8 sessionDispatchQueue:(id)arg9 completion:(CDUnknownBlockType)arg10;
- (long long)numSamplesInPCMBuffer;
- (void)pushAudioInputIntoPCMBuffer:(id)arg1;
- (id)requestTriggeredUtterance:(id)arg1;
- (BOOL)resultAlreadyReported;
- (void)resumeTraining;
- (BOOL)setupPhraseSpotter;
- (void)setupSpeechRecognitionTaskWithVoiceTriggerEventInfo:(id)arg1;
- (void)speechRecognitionTask:(id)arg1 didHypothesizeTranscription:(id)arg2;
- (void)startMasterTimerWithTimeout:(float)arg1;
- (void)startTraining;
- (void)stopMasterTimer;
- (void)suspendTraining;
- (void)trimBeginingOfPCMBufferWithVoiceTriggerEventInfo:(id)arg1;
- (void)updateMeterAndForward;

@end

