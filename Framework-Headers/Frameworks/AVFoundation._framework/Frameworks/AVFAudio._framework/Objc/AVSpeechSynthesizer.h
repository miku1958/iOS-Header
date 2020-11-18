//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol AVSpeechSynthesizerDelegate;

@interface AVSpeechSynthesizer : NSObject
{
    BOOL _speaking;
    BOOL _paused;
    BOOL _usesApplicationAudioSession;
    BOOL _mixToTelephonyUplink;
    id<AVSpeechSynthesizerDelegate> _delegate;
    NSArray *_outputChannels;
}

@property (weak, nonatomic) id<AVSpeechSynthesizerDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) BOOL mixToTelephonyUplink; // @synthesize mixToTelephonyUplink=_mixToTelephonyUplink;
@property (strong, nonatomic) NSArray *outputChannels; // @synthesize outputChannels=_outputChannels;
@property (readonly, nonatomic, getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property (readonly, nonatomic, getter=isSpeaking) BOOL speaking; // @synthesize speaking=_speaking;
@property (nonatomic) BOOL usesApplicationAudioSession; // @synthesize usesApplicationAudioSession=_usesApplicationAudioSession;

+ (void)initialize;
- (void).cxx_destruct;
- (BOOL)continueSpeaking;
- (BOOL)pauseSpeakingAtBoundary:(long long)arg1;
- (void)speakUtterance:(id)arg1;
- (BOOL)stopSpeakingAtBoundary:(long long)arg1;
- (void)writeUtterance:(id)arg1 toBufferCallback:(CDUnknownBlockType)arg2;
- (void)writeUtterance:(id)arg1 toBufferCallback:(CDUnknownBlockType)arg2 toMarkerCallback:(CDUnknownBlockType)arg3;

@end
