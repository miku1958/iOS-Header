//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSError, NSMutableDictionary, NSString, NSXPCConnection;
@protocol AFAssistantUIService, AFSpeechDelegate, OS_dispatch_source;

@interface AFConnection : NSObject
{
    NSXPCConnection *_connection;
    NSString *_outstandingRequestClass;
    NSArray *_cachedBulletins;
    BOOL _hasActiveRequest;
    BOOL _hasActiveTimeout;
    long long _activeRequestUsefulUserResultType;
    NSMutableDictionary *_replyHandlerForAceId;
    unsigned int _stateInSync:1;
    unsigned int _shouldSpeak:1;
    unsigned int _isCapturingSpeech:1;
    unsigned int _hasOutstandingRequest:1;
    unsigned int _audioSessionID;
    void *_levelsSharedMem;
    unsigned long long _sharedMemSize;
    NSObject<OS_dispatch_source> *_levelsTimer;
    unsigned int _clientStateIsInSync:1;
    unsigned int _voiceOverIsActive:1;
    NSError *_lastRetryError;
    id<AFAssistantUIService> _delegate;
    id<AFSpeechDelegate> _speechDelegate;
}

@property (weak, nonatomic) id<AFAssistantUIService> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) BOOL hasActiveRequest;
@property (readonly, nonatomic) BOOL isRecording;
@property (weak, nonatomic) id<AFSpeechDelegate> speechDelegate; // @synthesize speechDelegate=_speechDelegate;

+ (BOOL)assistantIsSupported;
+ (BOOL)assistantIsSupportedForLanguageCode:(id)arg1 error:(id *)arg2;
+ (void)beginMonitoringAvailability;
+ (id)currentLanguageCode;
+ (void)defrost;
+ (void)initialize;
+ (BOOL)isAvailable;
+ (id)outputVoice;
+ (BOOL)siriIsSupportedForLanguageCode:(id)arg1 deviceProductVersion:(id)arg2 error:(id *)arg3;
+ (BOOL)siriIsSupportedForLanguageCode:(id)arg1 productName:(id)arg2 productVersion:(id)arg3 error:(id *)arg4;
+ (void)stopMonitoringAvailability;
+ (BOOL)userDataSyncNeeded;
- (void).cxx_destruct;
- (void)_aceConnectionWillRetryOnError:(id)arg1;
- (void)_barrier;
- (id)_cachedBulletins;
- (void)_cancelRequestTimeout;
- (void)_checkAndSetIsCapturingSpeech:(BOOL)arg1;
- (void)_clearAssistantInfoForAccountWithIdentifier:(id)arg1;
- (void)_clearConnection;
- (id)_clientService;
- (id)_clientServiceWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_connection;
- (void)_connectionInterrupted;
- (void)_doCommand:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_extendExistingRequestTimeout;
- (void)_extendRequestTimeout;
- (void)_invokeRequestTimeout;
- (void)_requestDidEnd;
- (void)_requestWillBeginWithRequestClass:(id)arg1 isSpeechRequest:(BOOL)arg2;
- (void)_requestWillBeginWithRequestClass:(id)arg1 isSpeechRequest:(BOOL)arg2 isBackgroundRequest:(BOOL)arg3;
- (void)_scheduleRequestTimeout;
- (void)_setAudioSessionID:(unsigned int)arg1;
- (void)_setLevelsWithSharedMem:(id)arg1;
- (void)_setShouldSpeak:(BOOL)arg1;
- (void)_stopLevelUpdates;
- (void)_tellDelegateAudioSessionIDChanged:(unsigned int)arg1;
- (void)_tellDelegateDidDetectMusic;
- (void)_tellDelegateDidFinishAcousticIDRequestWithSuccess:(BOOL)arg1;
- (void)_tellDelegateInvalidateCurrentUserActivity;
- (void)_tellDelegateRequestFailed:(id)arg1 requestClass:(id)arg2;
- (void)_tellDelegateRequestFinished;
- (void)_tellDelegateRequestWillStart;
- (void)_tellDelegateSetUserActivityInfo:(id)arg1 webpageURL:(id)arg2;
- (void)_tellDelegateShouldSpeakChanged:(BOOL)arg1;
- (void)_tellDelegateWillStartAcousticIDRequest;
- (void)_tellSpeechDelegateRecognitionDidFail:(id)arg1;
- (void)_tellSpeechDelegateRecordingDidBeginOnAVRecordRoute:(id)arg1;
- (void)_tellSpeechDelegateRecordingDidCancel;
- (void)_tellSpeechDelegateRecordingDidChangeAVRecordRoute:(id)arg1;
- (void)_tellSpeechDelegateRecordingDidDetectStartpoint;
- (void)_tellSpeechDelegateRecordingDidEnd;
- (void)_tellSpeechDelegateRecordingDidFail:(id)arg1;
- (void)_tellSpeechDelegateRecordingWillBegin;
- (void)_tellSpeechDelegateSpeechRecognized:(id)arg1;
- (void)_tellSpeechDelegateSpeechRecognizedPartialResult:(id)arg1;
- (void)_updateClientState;
- (void)_updateState;
- (void)_willCancelRequest;
- (void)_willCompleteRequest;
- (void)_willEndSession;
- (void)_willFailRequestWithError:(id)arg1;
- (void)_willPresentUsefulUserResultWithType:(long long)arg1;
- (void)_willStartRequestForSpeech:(BOOL)arg1;
- (unsigned int)audioSessionID;
- (float)averagePower;
- (void)cancelRequest;
- (void)cancelSpeech;
- (void)clearContext;
- (void)dealloc;
- (void)didDismissUI;
- (void)endSession;
- (void)forceAudioSessionActive;
- (void)forceAudioSessionInactive;
- (void)getDeferredObjectsWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (float)peakPower;
- (void)preheatWithStyle:(long long)arg1;
- (void)prepareForPhoneCall;
- (void)recordRequestMetric:(id)arg1 withTimestamp:(double)arg2;
- (void)recordUIMetrics:(id)arg1;
- (void)requestBarrier:(CDUnknownBlockType)arg1;
- (void)rollbackClearContext;
- (void)rollbackRequest;
- (void)sendGenericAceCommand:(id)arg1;
- (void)sendGenericAceCommand:(id)arg1 conflictHandler:(CDUnknownBlockType)arg2;
- (void)sendReplyCommand:(id)arg1;
- (void)setAlertContextWithBulletins:(id)arg1;
- (void)setApplicationContext:(id)arg1;
- (void)setApplicationContextForApplicationInfos:(id)arg1;
- (void)setApplicationContextForApplicationInfos:(id)arg1 withRefId:(id)arg2;
- (void)setIsStark:(BOOL)arg1;
- (void)setLockState:(BOOL)arg1 screenLocked:(BOOL)arg2;
- (void)setOverriddenApplicationContext:(id)arg1 withContext:(id)arg2;
- (void)setVoiceOverIsActive:(BOOL)arg1;
- (BOOL)shouldSpeak;
- (void)startAcousticIDRequestWithOptions:(id)arg1;
- (void)startContinuationRequestWithUserInfo:(id)arg1;
- (void)startDirectActionRequestWithString:(id)arg1;
- (CDUnknownBlockType)startRecordingAndGetContinueBlockForPendingSpeechRequestWithOptions:(id)arg1;
- (void)startRecordingForPendingSpeechRequestWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startRequestWithCorrectedText:(id)arg1 forSpeechIdentifier:(id)arg2;
- (void)startRequestWithInfo:(id)arg1;
- (void)startRequestWithText:(id)arg1;
- (void)startSpeechPronunciationRequestWithOptions:(id)arg1 pronunciationContext:(id)arg2;
- (void)startSpeechRequestWithOptions:(id)arg1;
- (void)startSpeechRequestWithSpeechFileAtURL:(id)arg1;
- (void)startSpeechRequestWithSpeechFileAtURL:(id)arg1 isNarrowBand:(BOOL)arg2;
- (void)startUIRequest;
- (void)stopSpeech;
- (void)stopSpeechWithOptions:(id)arg1;
- (void)telephonyRequestCompleted;
- (void)updateSpeechOptions:(id)arg1;
- (void)usefulUserResultWillPresent;
- (void)willPresentUI;
- (void)willPresentUsefulUserResultWithType:(long long)arg1;
- (void)willPresentUsefulUserResultWithType:(long long)arg1 forCommand:(id)arg2;
- (void)willSetApplicationContextWithRefId:(id)arg1;

@end

