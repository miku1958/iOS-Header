//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class AFDictationConnection, AFSpeechPackage, NSArray, NSError, NSFileHandle, NSString;

@protocol AFDictationDelegate <NSObject>

@optional
- (void)dictationConnection:(AFDictationConnection *)arg1 didFinishWritingAudioFile:(NSFileHandle *)arg2 error:(NSError *)arg3;
- (void)dictationConnection:(AFDictationConnection *)arg1 didProcessAudioDuration:(double)arg2;
- (void)dictationConnection:(AFDictationConnection *)arg1 didReceiveSearchResults:(NSArray *)arg2 recognizedText:(NSString *)arg3 stable:(BOOL)arg4 final:(BOOL)arg5;
- (void)dictationConnection:(AFDictationConnection *)arg1 didRecognizePackage:(AFSpeechPackage *)arg2;
- (void)dictationConnection:(AFDictationConnection *)arg1 didRecognizePhrases:(NSArray *)arg2 languageModel:(NSString *)arg3 correctionIdentifier:(id)arg4;
- (void)dictationConnection:(AFDictationConnection *)arg1 didRecognizeTokens:(NSArray *)arg2 languageModel:(NSString *)arg3;
- (void)dictationConnection:(AFDictationConnection *)arg1 didRecognizeTranscriptionObjects:(NSArray *)arg2 languageModel:(NSString *)arg3;
- (void)dictationConnection:(AFDictationConnection *)arg1 speechRecognitionDidFail:(NSError *)arg2;
- (void)dictationConnection:(AFDictationConnection *)arg1 speechRecordingDidFail:(NSError *)arg2;
- (void)dictationConnectionSpeechRecognitionDidSucceed:(AFDictationConnection *)arg1;
- (void)dictationConnectionSpeechRecordingDidBegin:(AFDictationConnection *)arg1;
- (void)dictationConnectionSpeechRecordingDidCancel:(AFDictationConnection *)arg1;
- (void)dictationConnectionSpeechRecordingDidEnd:(AFDictationConnection *)arg1;
- (void)dictationConnectionSpeechRecordingWillBegin:(AFDictationConnection *)arg1;
- (void)dictationConnnectionDidChangeAvailability:(AFDictationConnection *)arg1;
@end

