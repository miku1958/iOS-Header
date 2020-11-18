//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _EARSpeechRecognizer;
@protocol OS_dispatch_queue;

@interface _EARSpeechRecognitionAudioBuffer : NSObject
{
    shared_ptr_809f9c31 _buffer;
    NSObject<OS_dispatch_queue> *_queue;
    _EARSpeechRecognizer *_speechRecognizer;
    BOOL _cancelled;
    BOOL _ended;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_detachFromRecognizer;
- (id)_initWithAudioBuffer:(shared_ptr_809f9c31)arg1 speechRecognizer:(id)arg2;
- (void)addAudioSampleData:(id)arg1;
- (void)addAudioSamples:(const short *)arg1 count:(unsigned long long)arg2;
- (void)cancelRecognition;
- (void)endAudio;

@end

