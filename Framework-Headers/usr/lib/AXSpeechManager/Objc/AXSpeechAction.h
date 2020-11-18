//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, TTSSpeechRequest;

@interface AXSpeechAction : NSObject
{
    NSString *_string;
    double _pitch;
    double _volume;
    double _speakingRate;
    NSString *_language;
    BOOL _shouldQueue;
    BOOL _cannotInterrupt;
    BOOL _shouldDetectLanguage;
    BOOL _shouldProcessEmoji;
    BOOL _shouldProcessEmoticons;
    BOOL _shouldPrecomposeString;
    CDUnknownBlockType _completionCallback;
    CDUnknownBlockType _onPauseCallback;
    CDUnknownBlockType _onResumeCallback;
    CDUnknownBlockType _onWillSpeakRangeCallback;
    CDUnknownBlockType _onSpeechStartCallback;
    TTSSpeechRequest *_speechRequest;
    BOOL _useCompactVoice;
    unsigned int _audioQueueFlags;
    NSString *_voiceIdentifier;
    NSString *_processedString;
    NSMutableArray *_emojiRangeReplacements;
    double _useMonarchStyleSpeechRate;
    long long _wordCallbackPostProcessedOffset;
}

@property (nonatomic) unsigned int audioQueueFlags; // @synthesize audioQueueFlags=_audioQueueFlags;
@property (nonatomic) BOOL cannotInterrupt; // @synthesize cannotInterrupt=_cannotInterrupt;
@property (copy, nonatomic) CDUnknownBlockType completionCallback; // @synthesize completionCallback=_completionCallback;
@property (strong, nonatomic) NSMutableArray *emojiRangeReplacements; // @synthesize emojiRangeReplacements=_emojiRangeReplacements;
@property (strong, nonatomic) NSString *language; // @synthesize language=_language;
@property (copy, nonatomic) CDUnknownBlockType onPauseCallback; // @synthesize onPauseCallback=_onPauseCallback;
@property (copy, nonatomic) CDUnknownBlockType onResumeCallback; // @synthesize onResumeCallback=_onResumeCallback;
@property (copy, nonatomic) CDUnknownBlockType onSpeechStartCallback; // @synthesize onSpeechStartCallback=_onSpeechStartCallback;
@property (copy, nonatomic) CDUnknownBlockType onWillSpeakRangeCallback; // @synthesize onWillSpeakRangeCallback=_onWillSpeakRangeCallback;
@property (nonatomic) double pitch; // @synthesize pitch=_pitch;
@property (strong, nonatomic) NSString *processedString; // @synthesize processedString=_processedString;
@property (nonatomic) BOOL shouldDetectLanguage; // @synthesize shouldDetectLanguage=_shouldDetectLanguage;
@property (nonatomic) BOOL shouldPrecomposeString; // @synthesize shouldPrecomposeString=_shouldPrecomposeString;
@property (nonatomic) BOOL shouldProcessEmoji; // @synthesize shouldProcessEmoji=_shouldProcessEmoji;
@property (nonatomic) BOOL shouldProcessEmoticons; // @synthesize shouldProcessEmoticons=_shouldProcessEmoticons;
@property (nonatomic) BOOL shouldQueue; // @synthesize shouldQueue=_shouldQueue;
@property (nonatomic) double speakingRate; // @synthesize speakingRate=_speakingRate;
@property (strong, nonatomic) TTSSpeechRequest *speechRequest; // @synthesize speechRequest=_speechRequest;
@property (copy, nonatomic) NSString *string; // @synthesize string=_string;
@property (nonatomic) BOOL useCompactVoice; // @synthesize useCompactVoice=_useCompactVoice;
@property (nonatomic) double useMonarchStyleSpeechRate; // @synthesize useMonarchStyleSpeechRate=_useMonarchStyleSpeechRate;
@property (strong, nonatomic) NSString *voiceIdentifier; // @synthesize voiceIdentifier=_voiceIdentifier;
@property (nonatomic) double volume; // @synthesize volume=_volume;
@property (nonatomic) long long wordCallbackPostProcessedOffset; // @synthesize wordCallbackPostProcessedOffset=_wordCallbackPostProcessedOffset;

+ (id)actionWithString:(id)arg1 shouldQueue:(BOOL)arg2;
- (id)_detectLanguageFromContent;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)preprocessAction;

@end

