//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmbeddedAcousticRecognition/_EARSpeechRecognitionResultStream-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EARCSpeechRecognitionResultStreamGlue : NSObject <_EARSpeechRecognitionResultStream>
{
    struct EARCSpeechRecognitionResultStream _stream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithStream:(struct EARCSpeechRecognitionResultStream *)arg1;
- (void)speechRecognizer:(id)arg1 didFinishRecognitionWithError:(id)arg2;
- (void)speechRecognizer:(id)arg1 didProcessAudioDuration:(double)arg2;
- (void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2;
- (void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2 tokenSausage:(id)arg3 nBestChoices:(id)arg4;
- (void)speechRecognizer:(id)arg1 didRecognizePartialResult:(id)arg2;

@end
