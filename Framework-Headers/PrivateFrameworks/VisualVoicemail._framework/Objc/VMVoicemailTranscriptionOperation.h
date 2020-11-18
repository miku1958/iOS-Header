//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class SFSpeechRecognitionTask, SFSpeechRecognizer, SFSpeechURLRecognitionRequest;

@interface VMVoicemailTranscriptionOperation : NSOperation
{
    BOOL _finished;
    BOOL _executing;
    SFSpeechRecognizer *_recognizer;
    SFSpeechURLRecognitionRequest *_request;
    SFSpeechRecognitionTask *_task;
    CDUnknownBlockType _resultBlock;
    CDUnknownBlockType _timeoutBlock;
    double _timeout;
    double _timeSinceLastReceivedResult;
}

@property (weak, nonatomic) SFSpeechRecognizer *recognizer; // @synthesize recognizer=_recognizer;
@property (strong, nonatomic) SFSpeechURLRecognitionRequest *request; // @synthesize request=_request;
@property (copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
@property (strong, nonatomic) SFSpeechRecognitionTask *task; // @synthesize task=_task;
@property (nonatomic) double timeSinceLastReceivedResult; // @synthesize timeSinceLastReceivedResult=_timeSinceLastReceivedResult;
@property (nonatomic) double timeout; // @synthesize timeout=_timeout;
@property (copy, nonatomic) CDUnknownBlockType timeoutBlock; // @synthesize timeoutBlock=_timeoutBlock;

- (void).cxx_destruct;
- (void)_completeOperation;
- (void)cancel;
- (void)cancelTimeout;
- (void)dealloc;
- (id)initWithRecognizer:(id)arg1 URL:(id)arg2 forceOfflineRecognition:(BOOL)arg3 resultBlock:(CDUnknownBlockType)arg4;
- (BOOL)isAsynchronous;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)registerForTimeoutCancellingPreviousIfNecessary;
- (void)start;

@end
