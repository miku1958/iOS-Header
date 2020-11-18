//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AFAggregator : NSObject
{
    unsigned long long _type;
    double _startTime;
    BOOL _hasActiveRequest;
    BOOL _sessionIsRetrying;
    BOOL _retryPrefersWWAN;
}

@property (nonatomic) unsigned long long connectionType; // @synthesize connectionType=_type;
@property (nonatomic) BOOL hasActiveRequest; // @synthesize hasActiveRequest=_hasActiveRequest;

+ (id)_fullAggDKeyWithPrefix:(id)arg1 error:(id)arg2;
+ (BOOL)_hadUserEventSinceIntervalAgo:(double)arg1;
+ (void)_logFeature:(id)arg1 setTo:(BOOL)arg2 by:(id)arg3;
+ (id)_stringForGatekeeperType:(unsigned long long)arg1;
+ (BOOL)_timestamp:(id)arg1 isAfter:(id)arg2;
+ (void)logAssistantEnabledSetTo:(BOOL)arg1 by:(id)arg2;
+ (void)logCDMAssetEvictedForAssetType:(id)arg1 language:(id)arg2;
+ (void)logCreateAssistant;
+ (void)logDESEvaluationForLanguage:(id)arg1 error:(id)arg2;
+ (void)logDESRecordingForLanguage:(id)arg1 error:(id)arg2;
+ (void)logDictationCancelled;
+ (void)logDictationEnabledSetTo:(BOOL)arg1 by:(id)arg2;
+ (void)logDictationFailedWithError:(id)arg1;
+ (void)logDictationFollowedByContinueOccurredForLanguage:(id)arg1;
+ (void)logDictationFollowedByKeyboardDeleteOccurredForLanguage:(id)arg1;
+ (void)logDictationFollowedByKeyboardInputOccurredForLanguage:(id)arg1;
+ (void)logDictationStarted;
+ (void)logDictationSucceeded;
+ (void)logEnabledState:(unsigned long long)arg1;
+ (void)logHomeButtonPressToActivationDuration:(double)arg1;
+ (void)logKeyboardInputFollowedByContinueOccurredForLanguage:(id)arg1;
+ (void)logLoadAssistant;
+ (void)logLocalFinalSpeechRecognitionWithDuration:(double)arg1;
+ (void)logLocalRecognitionAssetEvictedForLanguage:(id)arg1;
+ (void)logLocalRecognitionLoadedForLanguage:(id)arg1 duration:(double)arg2;
+ (void)logLocalRecognitionLostForLanguage:(id)arg1;
+ (void)logLocalRecognitionWonForLanguage:(id)arg1;
+ (void)logLocalSpeechStartedWithDuration:(double)arg1;
+ (void)logPeriodicUsageIfNeeded;
+ (void)logPingTimeout;
+ (void)logRequestCancelAfterSeconds:(double)arg1;
+ (void)logRequestCompletedWithDuration:(double)arg1;
+ (void)logRequestLaunchedApp;
+ (void)logSiriInvokedVia:(long long)arg1;
+ (void)logSiriMediaVolumeAction:(long long)arg1;
+ (void)logSiriOtherRequestStarted;
+ (void)logSiriPausedMedia;
+ (void)logSiriQuickStopAction:(unsigned long long)arg1;
+ (void)logSiriRequestCancelled;
+ (void)logSiriRequestFailedWithError:(id)arg1;
+ (void)logSiriRequestSucceeded;
+ (void)logSiriSpeechRequestStarted;
+ (void)logStarkGatekeeperAppearedForType:(unsigned long long)arg1;
+ (void)logStarkGatekeeperDismissedManuallyForType:(unsigned long long)arg1;
+ (void)logTimeToBeepWithDuration:(double)arg1;
+ (void)logUILockCanceledVTActivation;
+ (void)missedAlertContextForRequest;
+ (void)missedAppContextForRequest;
+ (void)noteConnectedToCarPlayHeadunit;
+ (void)noteSuccessOfRequest:(id)arg1 inCar:(BOOL)arg2;
- (void)beginSessionRetryPreferringWWAN:(BOOL)arg1;
- (void)connectionDidDrop;
- (void)connectionDidFail;
- (void)recordFailure:(int)arg1 forConnectionType:(unsigned long long)arg2;
- (void)recordSessionRetrySuccess;
- (void)recordSuccessForConnectionType:(unsigned long long)arg1 isWarm:(BOOL)arg2 forTimeInterval:(double)arg3;
- (void)speechResponseFailure;
- (void)speechResponseReceived;
- (void)startWaitingForSpeechResponse;

@end

