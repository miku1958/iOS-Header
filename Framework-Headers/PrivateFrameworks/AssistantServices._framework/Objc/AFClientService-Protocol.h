//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/NSObject-Protocol.h>

@class AFApplicationInfo, AFAudioPlaybackRequest, AFClientConfiguration, AFMetrics, AFRequestInfo, AFSpeechRequestOptions, AFSpeechSynthesisRecord, NSArray, NSData, NSDictionary, NSError, NSSet, NSString, NSURL, SASPronunciationContext, SASetApplicationContext;

@protocol AFClientService <NSObject>
- (oneway void)_barrierWithReply:(void (^)(void))arg1;
- (oneway void)_broadcastCommandDictionary:(NSDictionary *)arg1;
- (oneway void)_clearAssistantInfoForAccountIdentifier:(NSString *)arg1;
- (oneway void)_fetchAppContextForApplicationInfo:(AFApplicationInfo *)arg1 reply:(void (^)(NSArray *))arg2;
- (oneway void)_listInstalledServicesWithReply:(void (^)(NSDictionary *))arg1;
- (oneway void)_performCommandDictionary:(NSDictionary *)arg1 forBundleIdentifier:(NSString *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (oneway void)_performTaskCommandDictionary:(NSDictionary *)arg1 forBundleIdentifier:(NSString *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (oneway void)_pingServiceForIdentifier:(NSString *)arg1 reply:(void (^)(NSDictionary *))arg2;
- (oneway void)_refreshAssistantValidation;
- (oneway void)_requestBarrierWithReply:(void (^)(void))arg1;
- (oneway void)_sendFeedbackToAppPreferencesPredictorForMetricsContext:(NSString *)arg1 selectedBundleId:(NSString *)arg2;
- (oneway void)_sendLargeData:(NSData *)arg1 reply:(void (^)(NSString *, NSData *))arg2;
- (oneway void)_startSpeechWithURL:(NSURL *)arg1 isNarrowBand:(BOOL)arg2;
- (oneway void)adviseSessionArbiterToContinueWithPreviousWinner:(BOOL)arg1;
- (oneway void)beginUpdateOutputAudioPowerWithReply:(void (^)(AFXPCWrapper *))arg1;
- (oneway void)boostedPreheatWithStyle:(long long)arg1 completion:(void (^)(void))arg2;
- (oneway void)cancelRequest;
- (oneway void)clearContext;
- (oneway void)continuePendingSpeechRequestWithId:(unsigned long long)arg1 fromTimestamp:(double)arg2;
- (oneway void)didDismissUI;
- (oneway void)endSession;
- (oneway void)endUpdateOutputAudioPower;
- (oneway void)forceAudioSessionActiveWithOptions:(unsigned long long)arg1 completion:(void (^)(unsigned int, NSError *))arg2;
- (oneway void)forceAudioSessionInactiveWithOptions:(unsigned long long)arg1 completion:(void (^)(void))arg2;
- (oneway void)getDeferredObjectsWithIdentifiers:(NSArray *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)getRemoteClockTimerSnapshotWithCompletion:(void (^)(AFClockTimerSnapshot *, NSError *))arg1;
- (oneway void)getSerializedCachedObjectsWithIdentifiers:(NSSet *)arg1 completion:(void (^)(NSDictionary *))arg2;
- (oneway void)performGenericAceCommand:(NSDictionary *)arg1 interruptOutstandingRequest:(BOOL)arg2 reply:(void (^)(BOOL))arg3;
- (oneway void)preheatWithStyle:(long long)arg1 forOptions:(AFSpeechRequestOptions *)arg2;
- (oneway void)prepareForPhoneCall;
- (oneway void)recordAWDSuccessMetrics;
- (oneway void)recordCancellationMetrics;
- (oneway void)recordFailureMetricsForError:(NSError *)arg1;
- (oneway void)recordUIMetrics:(AFMetrics *)arg1;
- (oneway void)reportIssueForError:(NSError *)arg1 type:(long long)arg2 context:(NSDictionary *)arg3;
- (oneway void)requestStateUpdateWithReply:(void (^)(BOOL, unsigned int))arg1;
- (oneway void)resumeInterruptedAudioPlaybackIfNeeded;
- (oneway void)rollbackClearContext;
- (oneway void)rollbackRequest;
- (oneway void)setAlertContextDirty;
- (oneway void)setApplicationContext:(SASetApplicationContext *)arg1;
- (oneway void)setApplicationContextForApplicationInfos:(NSArray *)arg1 withRefId:(NSString *)arg2;
- (oneway void)setCarDNDActive:(BOOL)arg1;
- (oneway void)setConfiguration:(AFClientConfiguration *)arg1;
- (oneway void)setLockState:(BOOL)arg1 showingLockScreen:(BOOL)arg2;
- (oneway void)setMyriadDecisionResult:(BOOL)arg1;
- (oneway void)setOverriddenApplicationContext:(NSString *)arg1 withContext:(id)arg2;
- (oneway void)setShouldWaitForMyriad:(BOOL)arg1;
- (oneway void)startAcousticIDRequestWithOptions:(AFSpeechRequestOptions *)arg1 context:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)startAudioPlaybackRequest:(AFAudioPlaybackRequest *)arg1 options:(unsigned long long)arg2 reply:(void (^)(NSError *))arg3;
- (oneway void)startRecordingForPendingSpeechRequestWithOptions:(AFSpeechRequestOptions *)arg1 requestId:(unsigned long long)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)startRequestWithInfo:(AFRequestInfo *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)startSpeechPronunciationRequestWithOptions:(AFSpeechRequestOptions *)arg1 context:(SASPronunciationContext *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)stopAllAudioPlaybackRequests:(BOOL)arg1;
- (oneway void)stopAudioPlaybackRequest:(AFAudioPlaybackRequest *)arg1 immediately:(BOOL)arg2;
- (oneway void)stopSpeechWithOptions:(AFSpeechRequestOptions *)arg1;
- (oneway void)telephonyRequestCompleted;
- (oneway void)updateSpeechOptions:(AFSpeechRequestOptions *)arg1;
- (oneway void)updateSpeechSynthesisRecord:(AFSpeechSynthesisRecord *)arg1;
- (oneway void)willPresentUIWithReply:(void (^)(void))arg1;
- (oneway void)willSetApplicationContextWithRefId:(NSString *)arg1;
@end

