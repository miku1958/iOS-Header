//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXSpeechManager/TTSSpeechSynthesizerDelegate-Protocol.h>

@class AXSpeechThread, NSArray, NSMutableArray, NSNumber, NSString, TTSSpeechSynthesizer;
@protocol OS_dispatch_semaphore;

@interface AXSpeechManager : NSObject <TTSSpeechSynthesizerDelegate>
{
    NSMutableArray *_speechQueue;
    TTSSpeechSynthesizer *_synthesizer;
    AXSpeechThread *_runThread;
    NSObject<OS_dispatch_semaphore> *_runThreadSemaphore;
    unsigned int _audioQueueFlags;
    BOOL _isSpeaking;
    BOOL _speechEnabled;
    BOOL isPaused;
    BOOL _showControlCenterControls;
    NSNumber *_originalSpeechRateForJobOverride;
}

@property (nonatomic) unsigned int audioQueueFlags;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isPaused; // @synthesize isPaused;
@property (readonly, nonatomic) BOOL isSpeaking; // @dynamic isSpeaking;
@property (strong, nonatomic) NSNumber *originalSpeechRateForJobOverride; // @synthesize originalSpeechRateForJobOverride=_originalSpeechRateForJobOverride;
@property (strong, nonatomic) NSArray *outputChannels;
@property (readonly, nonatomic) BOOL showControlCenterControls; // @synthesize showControlCenterControls=_showControlCenterControls;
@property (nonatomic) BOOL speechEnabled; // @synthesize speechEnabled=_speechEnabled;
@property (readonly) Class superclass;

+ (id)availableLanguageCodes;
+ (id)availableVoices;
+ (struct URegularExpression *)createRegularExpressionFromString:(id)arg1;
+ (id)currentLanguageCode;
+ (id)matchedRangesForString:(id)arg1 withRegularExpression:(struct URegularExpression *)arg2;
+ (id)pauseMarkupString:(id)arg1;
+ (id)remapLanguageCode:(id)arg1;
+ (id)spellOutMarkupString:(id)arg1;
+ (void)test_actionStartTap:(CDUnknownBlockType)arg1;
+ (void)test_setAvailableVoices:(id)arg1;
+ (void)test_setUnitTestMode:(BOOL)arg1;
- (void)__speechJobFinished:(id)arg1;
- (void)_clearSpeechQueue;
- (void)_continueSpeaking;
- (void)_dispatchSpeechAction:(id)arg1;
- (void)_initialize;
- (void)_isSpeaking:(id)arg1;
- (void)_pauseSpeaking:(id)arg1;
- (id)_phonemeSubstitutionsForAction:(id)arg1;
- (void)_speechJobFinished:(BOOL)arg1 action:(id)arg2;
- (void)_startNextSpeechJob;
- (void)_stopSpeaking:(id)arg1;
- (void)_tearDown;
- (void)_updateUserSubstitutions;
- (void)clearSpeechQueue;
- (void)continueSpeaking;
- (void)dealloc;
- (void)dispatchSpeechAction:(id)arg1;
- (id)init;
- (void)pauseSpeaking:(int)arg1;
- (void)speechSynthesizer:(id)arg1 didContinueSpeakingRequest:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(BOOL)arg3 withError:(id)arg4;
- (void)speechSynthesizer:(id)arg1 didPauseSpeakingRequest:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2;
- (void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(struct _NSRange)arg2 forRequest:(id)arg3;
- (void)stopSpeaking;
- (void)stopSpeaking:(int)arg1;
- (void)tearDown;
- (id)voiceIdentifierUsedForLanguage:(id)arg1;

@end

