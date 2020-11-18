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
+ (id)_stringForGatekeeperType:(unsigned long long)arg1;
+ (void)logDictationCancelled;
+ (void)logDictationFailedWithError:(id)arg1;
+ (void)logDictationStarted;
+ (void)logDictationSucceeded;
+ (void)logHomeButtonPressToActivationDuration:(double)arg1;
+ (void)logLocalFinalSpeechRecognitionWithDuration:(double)arg1;
+ (void)logLocalRecognitionAssetEvictedForLanguage:(id)arg1;
+ (void)logLocalRecognitionLoadedForLanguage:(id)arg1 duration:(double)arg2;
+ (void)logLocalRecognitionLostForLanguage:(id)arg1;
+ (void)logLocalRecognitionWonForLanguage:(id)arg1;
+ (void)logLocalSpeechStartedWithDuration:(double)arg1;
+ (void)logPingTimeout;
+ (void)logRequestCancelAfterSeconds:(double)arg1;
+ (void)logRequestCompletedWithDuration:(double)arg1;
+ (void)logRequestLaunchedApp;
+ (void)logSiriOtherRequestStarted;
+ (void)logSiriRequestCancelled;
+ (void)logSiriRequestFailedWithError:(id)arg1;
+ (void)logSiriRequestSucceeded;
+ (void)logSiriSpeechRequestStarted;
+ (void)logStarkGatekeeperAppearedForType:(unsigned long long)arg1;
+ (void)logStarkGatekeeperDismissedManuallyForType:(unsigned long long)arg1;
+ (void)logTimeToBeepWithDuration:(double)arg1;
+ (void)missedAlertContextForRequest;
+ (void)missedAppContextForRequest;
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

