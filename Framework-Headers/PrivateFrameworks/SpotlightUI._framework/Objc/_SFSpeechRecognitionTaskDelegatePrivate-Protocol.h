//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpotlightUI/SFSpeechRecognitionTaskDelegate-Protocol.h>

@class NSDictionary, NSString, SFSpeechRecognitionTask;

@protocol _SFSpeechRecognitionTaskDelegatePrivate <SFSpeechRecognitionTaskDelegate>

@optional
- (void)speechRecognitionTask:(SFSpeechRecognitionTask *)arg1 didReceiveSearchResults:(NSDictionary *)arg2 recognizedText:(NSString *)arg3 stable:(BOOL)arg4 final:(BOOL)arg5;
@end
