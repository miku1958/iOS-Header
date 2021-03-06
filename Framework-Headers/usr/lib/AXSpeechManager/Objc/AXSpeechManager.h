//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXSpeechManager/TTSSpeechSynthesizerDelegate-Protocol.h>

@class AVAudioSession, AXDispatchTimer, AXSpeechAction, AXSpeechThread, NSArray, NSLock, NSMutableArray, NSNumber, NSString, TTSSpeechSynthesizer;
@protocol OS_dispatch_queue;

@interface AXSpeechManager : NSObject <TTSSpeechSynthesizerDelegate>
{
    NSMutableArray *_speechQueue;
    TTSSpeechSynthesizer *_synthesizer;
    AXSpeechThread *_runThread;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    BOOL _isSpeaking;
    BOOL _speechEnabled;
    BOOL _audioSessionObserversEnabled;
    BOOL _speechThreadFinished;
    NSLock *_speechThreadQueueLock;
    BOOL _isPaused;
    BOOL _isInAudioInterruption;
    BOOL _supportsAccurateWordCallbacks;
    BOOL _showControlCenterControls;
    BOOL _usesAuxiliarySession;
    BOOL _wasSpeakingBeforeAudioInterruption;
    BOOL _didRequestStartSpeakingDuringAudioInterruption;
    BOOL _didRequestPauseSpeakingDuringAudioInterruption;
    BOOL _didRequestResumeSpeakingDuringAudioInterruption;
    BOOL _shouldHandleAudioInterruptions;
    unsigned int _audioQueueFlags;
    AXSpeechAction *_requestedActionDuringAudioInterruption;
    unsigned long long _audioSessionCategoryOptions;
    NSString *_audioSessionCategory;
    unsigned long long _setActiveOptions;
    AVAudioSession *_audioSession;
    double _audioSessionInactiveTimeout;
    CDUnknownBlockType _requestWillStart;
    NSNumber *_originalSpeechRateForJobOverride;
    AXDispatchTimer *_audioDeactivatorTimer;
    double _audioInterruptionStartedTime;
}

@property (strong, nonatomic) AXDispatchTimer *audioDeactivatorTimer; // @synthesize audioDeactivatorTimer=_audioDeactivatorTimer;
@property (nonatomic) double audioInterruptionStartedTime; // @synthesize audioInterruptionStartedTime=_audioInterruptionStartedTime;
@property (nonatomic) unsigned int audioQueueFlags; // @synthesize audioQueueFlags=_audioQueueFlags;
@property (strong, nonatomic) AVAudioSession *audioSession; // @synthesize audioSession=_audioSession;
@property (strong, nonatomic) NSString *audioSessionCategory; // @synthesize audioSessionCategory=_audioSessionCategory;
@property (nonatomic) unsigned long long audioSessionCategoryOptions; // @synthesize audioSessionCategoryOptions=_audioSessionCategoryOptions;
@property (nonatomic) double audioSessionInactiveTimeout; // @synthesize audioSessionInactiveTimeout=_audioSessionInactiveTimeout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didRequestPauseSpeakingDuringAudioInterruption; // @synthesize didRequestPauseSpeakingDuringAudioInterruption=_didRequestPauseSpeakingDuringAudioInterruption;
@property (nonatomic) BOOL didRequestResumeSpeakingDuringAudioInterruption; // @synthesize didRequestResumeSpeakingDuringAudioInterruption=_didRequestResumeSpeakingDuringAudioInterruption;
@property (nonatomic) BOOL didRequestStartSpeakingDuringAudioInterruption; // @synthesize didRequestStartSpeakingDuringAudioInterruption=_didRequestStartSpeakingDuringAudioInterruption;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isInAudioInterruption; // @synthesize isInAudioInterruption=_isInAudioInterruption;
@property (nonatomic) BOOL isPaused; // @synthesize isPaused=_isPaused;
@property (readonly, nonatomic) BOOL isSpeaking; // @dynamic isSpeaking;
@property (strong, nonatomic) NSNumber *originalSpeechRateForJobOverride; // @synthesize originalSpeechRateForJobOverride=_originalSpeechRateForJobOverride;
@property (strong, nonatomic) NSArray *outputChannels;
@property (copy, nonatomic) CDUnknownBlockType requestWillStart; // @synthesize requestWillStart=_requestWillStart;
@property (strong, nonatomic) AXSpeechAction *requestedActionDuringAudioInterruption; // @synthesize requestedActionDuringAudioInterruption=_requestedActionDuringAudioInterruption;
@property (nonatomic) unsigned long long setActiveOptions; // @synthesize setActiveOptions=_setActiveOptions;
@property (nonatomic) BOOL shouldHandleAudioInterruptions; // @synthesize shouldHandleAudioInterruptions=_shouldHandleAudioInterruptions;
@property (readonly, nonatomic) BOOL showControlCenterControls; // @synthesize showControlCenterControls=_showControlCenterControls;
@property (nonatomic) BOOL speechEnabled; // @synthesize speechEnabled=_speechEnabled;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsAccurateWordCallbacks; // @synthesize supportsAccurateWordCallbacks=_supportsAccurateWordCallbacks;
@property (nonatomic) BOOL usesAuxiliarySession; // @synthesize usesAuxiliarySession=_usesAuxiliarySession;
@property (nonatomic) BOOL wasSpeakingBeforeAudioInterruption; // @synthesize wasSpeakingBeforeAudioInterruption=_wasSpeakingBeforeAudioInterruption;

+ (id)_resetAvailableVoices;
+ (id)_resetAvailableVoices:(BOOL)arg1;
+ (id)audioFileSettingsForVoice:(id)arg1;
+ (id)availableLanguageCodes;
+ (id)availableVoices;
+ (id)availableVoices:(BOOL)arg1;
+ (struct URegularExpression *)createRegularExpressionFromString:(id)arg1;
+ (id)currentLanguageCode;
+ (BOOL)currentProcessAllowedToSaveVoiceInfo;
+ (id)matchedRangesForString:(id)arg1 withRegularExpression:(struct URegularExpression *)arg2;
+ (id)pauseMarkupString:(id)arg1;
+ (id)remapLanguageCode:(id)arg1;
+ (id)spellOutMarkupString:(id)arg1 string:(id)arg2;
+ (void)test_actionStartTap:(CDUnknownBlockType)arg1;
+ (void)test_setAvailableVoices:(id)arg1;
+ (void)test_setUnitTestMode:(BOOL)arg1;
- (void).cxx_destruct;
- (void)__speechJobFinished:(id)arg1;
- (void)_clearSpeechQueue;
- (void)_continueSpeaking;
- (void)_didBeginInterruption;
- (void)_didEndInterruption;
- (void)_dispatchSpeechAction:(id)arg1;
- (BOOL)_enqueueSelectorOnSpeechThread:(SEL)arg1 object:(id)arg2 waitUntilDone:(BOOL)arg3;
- (void)_handleAudioInterruption:(id)arg1;
- (void)_handleMediaServicesWereLost:(id)arg1;
- (void)_handleMediaServicesWereReset:(id)arg1;
- (void)_initialize;
- (void)_isSpeaking:(id)arg1;
- (void)_pauseSpeaking:(id)arg1;
- (id)_phonemeSubstitutionsForAction:(id)arg1;
- (void)_processDidContinueCallback:(id)arg1;
- (void)_processDidPauseCallback:(id)arg1;
- (void)_processDidStartCallback:(id)arg1;
- (void)_processWillSpeechRange:(id)arg1;
- (void)_resetInterruptionTracking;
- (void)_speechJobFinished:(BOOL)arg1 action:(id)arg2;
- (void)_startNextSpeechJob;
- (void)_stopSpeaking:(id)arg1;
- (void)_tearDown;
- (void)_updateAudioSessionProperties;
- (void)_updateAuxiliarySession;
- (void)_updateUserSubstitutions;
- (void)clearSpeechQueue;
- (void)continueSpeaking;
- (void)dealloc;
- (void)dispatchSpeechAction:(id)arg1;
- (id)externalVoiceIdentifierUsedForLanguage:(id)arg1;
- (void)handleAudioSessionObservers:(BOOL)arg1;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
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

