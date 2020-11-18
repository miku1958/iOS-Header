//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceShortcutsUI/AFDictationDelegate-Protocol.h>

@class AFDictationConnection, NSString;
@protocol OS_dispatch_queue, VCUIPhraseRecognizerDelegate;

@interface VCUIPhraseRecognizer : NSObject <AFDictationDelegate>
{
    BOOL _recordingUsingAudioFile;
    BOOL _currentlyRecording;
    id<VCUIPhraseRecognizerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_audioQueue;
    AFDictationConnection *_dictationConnection;
    NSString *_languageCode;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *audioQueue; // @synthesize audioQueue=_audioQueue;
@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (readonly, nonatomic) float averagePowerLevel;
@property (nonatomic) BOOL currentlyRecording; // @synthesize currentlyRecording=_currentlyRecording;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<VCUIPhraseRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) AFDictationConnection *dictationConnection; // @synthesize dictationConnection=_dictationConnection;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property (readonly, nonatomic, getter=isRecording) BOOL recording;
@property (nonatomic) BOOL recordingUsingAudioFile; // @synthesize recordingUsingAudioFile=_recordingUsingAudioFile;
@property (readonly) Class superclass;

+ (void)initialize;
- (void).cxx_destruct;
- (void)_startRecordingWithContextualStrings:(id)arg1 fileAtPath:(id)arg2;
- (void)clearDictationConnection;
- (void)dealloc;
- (void)dictationConnection:(id)arg1 didRecognizePackage:(id)arg2;
- (void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3;
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)dictationConnectionSpeechRecordingDidBegin:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidEnd:(id)arg1;
- (id)init;
- (BOOL)isNetworkAvailable;
- (BOOL)isSiriEnabled;
- (void)startRecordingWithContextualStrings:(id)arg1;
- (void)startRecordingWithFileAtPath:(id)arg1 contextualStrings:(id)arg2;
- (void)stopRecording;

@end

