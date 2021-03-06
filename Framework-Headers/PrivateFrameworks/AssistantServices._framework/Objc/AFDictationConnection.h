//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFNetworkAvailabilityObserver-Protocol.h>

@class AFAnalyticsEvent, AFAudioPowerUpdater, AFCallSiteInfo, AFSpeechRequestOptions, NSArray, NSMutableData, NSSet, NSString, NSXPCConnection;
@protocol AFDictationDelegate, OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

@interface AFDictationConnection : NSObject <AFNetworkAvailabilityObserver>
{
    NSXPCConnection *_connection;
    NSString *_lastUsedLanguage;
    NSSet *_knownOfflineInstalledLanguages;
    BOOL _isWaitingForKnownOfflineInstalledLanguages;
    id<AFDictationDelegate> _delegate;
    AFCallSiteInfo *_initiationCallSiteInfo;
    AFAudioPowerUpdater *_inputAudioPowerUpdater;
    BOOL _isCapturingSpeech;
    BOOL _hasActiveRequest;
    BOOL _isWaitingForAudioFile;
    BOOL _recognizingIncrementally;
    NSObject<OS_dispatch_group> *_speechCallbackGroup;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSObject<OS_dispatch_source> *_bufferTimer;
    BOOL _forceOfflineRecognition;
    AFSpeechRequestOptions *_stopOptions;
    NSMutableData *_buffer;
    double _audioStartTime;
    double _amountDataSent;
    BOOL _narrowband;
    NSString *_requestIdString;
    NSArray *_previouslyRecognizedPhrases;
    NSString *_onDeviceDictationUIInteractionIdentifier;
    AFAnalyticsEvent *_preheatEvent;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AFDictationDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)dictationIsEnabled;
+ (BOOL)dictationIsSupportedForLanguageCode:(id)arg1 error:(id *)arg2;
+ (void)fetchSupportedLanguageCodes:(CDUnknownBlockType)arg1;
+ (void)getForcedOfflineDictationSupportedLanguagesWithCompletion:(CDUnknownBlockType)arg1;
+ (BOOL)languageDetectorIsEnabled;
- (void).cxx_destruct;
- (void)_addPreheatAnalyticsEvent;
- (void)_availabilityChanged;
- (void)_cancelBufferFlushTimer;
- (void)_cancelRequestTimeout;
- (void)_cancelTimerClearBuffer;
- (void)_checkAndSetIsCapturingSpeech:(BOOL)arg1;
- (void)_clearConnection;
- (id)_connection;
- (void)_connectionClearedForInterruption:(BOOL)arg1;
- (void)_delayedStopSpeechWithOptions:(id)arg1;
- (void)_delegateDidRecognizeSpeechTokens:(id)arg1 languageModel:(id)arg2 delegate:(id)arg3;
- (id)_dequeueAudioWithLength:(unsigned long long)arg1;
- (id)_dictationService;
- (id)_dictationServiceWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)_dispatchAsync:(CDUnknownBlockType)arg1;
- (void)_dispatchCallbackGroupBlock:(CDUnknownBlockType)arg1;
- (void)_extendRequestTimeout;
- (void)_invokeRequestTimeout;
- (void)_logRequestCompetionStatusWithEventType:(long long)arg1 error:(id)arg2;
- (void)_registerInvalidationHandlerForXPCConnection:(id)arg1;
- (void)_scheduleRequestTimeout;
- (void)_sendDataIfNeeded;
- (void)_sendPendingAnalyticsEvents;
- (void)_setActivationTimeOnOptionsIfNecessary:(id)arg1;
- (void)_startInputAudioPowerUpdatesWithXPCWrapper:(id)arg1;
- (void)_stopInputAudioPowerUpdates;
- (void)_tellSpeechDelegateAudioFileFinished:(id)arg1 error:(id)arg2;
- (void)_tellSpeechDelegateAvailabilityChanged;
- (void)_tellSpeechDelegateDidBeginLocalRecognitionWithModelInfo:(id)arg1;
- (void)_tellSpeechDelegateDidProcessAudioDuration:(double)arg1;
- (void)_tellSpeechDelegateDidRecognizePackage:(id)arg1;
- (void)_tellSpeechDelegateDidRecognizePartialResult:(id)arg1;
- (void)_tellSpeechDelegateDidRecognizeSpeechPhrases:(id)arg1 utterances:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4 audioAnalytics:(id)arg5;
- (void)_tellSpeechDelegateDidRecognizeSpeechTokens:(id)arg1 languageModel:(id)arg2;
- (void)_tellSpeechDelegateDidRecognizeTranscriptionObjects:(id)arg1 languageModel:(id)arg2;
- (void)_tellSpeechDelegateLanguageDetected:(id)arg1 confidenceScores:(id)arg2 isConfident:(BOOL)arg3;
- (void)_tellSpeechDelegateLanguageDetectorDidFail:(id)arg1;
- (void)_tellSpeechDelegateMultilingualSpeechRecognized:(id)arg1;
- (void)_tellSpeechDelegateRecognitionDidFail:(id)arg1;
- (void)_tellSpeechDelegateRecordingDidBeginWithOptions:(id)arg1;
- (void)_tellSpeechDelegateRecordingDidCancel;
- (void)_tellSpeechDelegateRecordingDidEnd;
- (void)_tellSpeechDelegateRecordingDidFail:(id)arg1;
- (void)_tellSpeechDelegateRecordingWillBegin;
- (void)_tellSpeechDelegateSearchResultsReceived:(id)arg1 recognitionText:(id)arg2 stable:(BOOL)arg3 final:(BOOL)arg4;
- (void)_tellSpeechDelegateSpeechRecognitionDidSucceed;
- (void)_updateBufferFlushTimerWithDelay:(double)arg1;
- (void)_willCancelDictation;
- (void)_willCompleteDictation;
- (void)_willFailDictationWithError:(id)arg1;
- (void)_willStartDictationWithLanguageCode:(id)arg1 options:(id)arg2 speechOptions:(id)arg3 machAbsoluteTime:(unsigned long long)arg4;
- (void)addRecordedSpeechSampleData:(id)arg1;
- (float)averagePower;
- (void)beginAvailabilityMonitoring;
- (void)cancelAvailabilityMonitoring;
- (void)cancelSpeech;
- (void)dealloc;
- (BOOL)dictationIsAvailableForLanguage:(id)arg1;
- (BOOL)dictationIsAvailableForLanguage:(id)arg1 synchronous:(BOOL)arg2;
- (void)endSession;
- (BOOL)forcedOfflineDictationIsAvailableForLanguage:(id)arg1;
- (BOOL)forcedOfflineDictationIsAvailableForLanguage:(id)arg1 synchronous:(BOOL)arg2;
- (id)init;
- (void)networkAvailability:(id)arg1 isAvailable:(BOOL)arg2;
- (float)peakPower;
- (void)preheat;
- (void)preheatTestWithLanguage:(id)arg1 options:(id)arg2;
- (void)preheatWithRecordDeviceIdentifier:(id)arg1;
- (void)reportIssueForError:(id)arg1 eventType:(long long)arg2 context:(id)arg3;
- (void)reportIssueForError:(id)arg1 eventType:(long long)arg2 subtype:(id)arg3 context:(id)arg4;
- (void)requestOfflineDictationSupportForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendEngagementFeedback:(long long)arg1 voiceQueryIdentifier:(id)arg2;
- (void)sendSpeechCorrection:(id)arg1 forIdentifier:(id)arg2;
- (void)sendSpeechCorrection:(id)arg1 interactionIdentifier:(id)arg2;
- (void)sendUserSelectedAlternativeDictationLanguageCode:(id)arg1;
- (void)startDictationWithLanguageCode:(id)arg1 options:(id)arg2;
- (void)startDictationWithLanguageCode:(id)arg1 options:(id)arg2 speechOptions:(id)arg3;
- (void)startDictationWithSpeechFileAtURL:(id)arg1 isNarrowBand:(BOOL)arg2 options:(id)arg3 forLanguage:(id)arg4;
- (void)startDictationWithSpeechFileAtURL:(id)arg1 options:(id)arg2 forLanguage:(id)arg3;
- (void)startRecordedAudioDictationWithOptions:(id)arg1 forLanguage:(id)arg2;
- (void)startRecordedAudioDictationWithOptions:(id)arg1 forLanguage:(id)arg2 narrowband:(BOOL)arg3;
- (void)startRecordedAudioDictationWithOptions:(id)arg1 forLanguage:(id)arg2 narrowband:(BOOL)arg3 forceSampling:(BOOL)arg4;
- (CDUnknownBlockType)startRecordingForPendingDictationWithLanguageCode:(id)arg1 options:(id)arg2 speechOptions:(id)arg3;
- (void)stopSpeech;
- (void)stopSpeechWithOptions:(id)arg1;
- (void)updateSpeechOptions:(id)arg1;

@end

