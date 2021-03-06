//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Speech/AFDictationDelegate-Protocol.h>
#import <Speech/SFSpeechRecognitionBufferDelegate-Protocol.h>

@class AFDictationConnection, NSError, NSOperationQueue, NSString, SFSpeechRecognitionRequest;
@protocol OS_dispatch_queue;

@interface SFSpeechRecognitionTask : NSObject <AFDictationDelegate, SFSpeechRecognitionBufferDelegate>
{
    AFDictationConnection *_dictationConnection;
    NSOperationQueue *_externalQueue;
    NSString *_languageCode;
    SFSpeechRecognitionRequest *_request;
    NSObject<OS_dispatch_queue> *_internalQueue;
    BOOL _completed;
    BOOL _running;
    BOOL _finishing;
    BOOL _cancelled;
    long long _taskHint;
    NSError *_error;
    NSString *_requestIdentifier;
}

@property (readonly, nonatomic) long long _taskHint; // @synthesize _taskHint;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly, nonatomic, getter=isFinishing) BOOL finishing; // @synthesize finishing=_finishing;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property (readonly, nonatomic) long long state;
@property (readonly) Class superclass;

+ (id)recognizedResultFromPackage:(id)arg1;
+ (id)transcriptionsWithTokens:(id)arg1;
- (void).cxx_destruct;
- (id)_initWithRequest:(id)arg1 queue:(id)arg2 languageCode:(id)arg3 taskHint:(long long)arg4;
- (void)addRecordedSpeechSampleData:(id)arg1;
- (float)averagePower;
- (void)cancel;
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)dictationConnectionSpeechRecognitionDidSucceed:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidBegin:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidEnd:(id)arg1;
- (void)finish;
- (float)peakPower;
- (void)stopSpeech;

@end

