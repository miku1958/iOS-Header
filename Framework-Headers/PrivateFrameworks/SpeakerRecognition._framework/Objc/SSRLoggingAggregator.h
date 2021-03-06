//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface SSRLoggingAggregator : NSObject
{
    NSString *_eventString;
    NSMutableDictionary *_eventContext;
    unsigned long long explicitUtteranceIndex;
    unsigned long long explicitFailedUtteranceIndex;
    unsigned long long implicitUtteranceIndex;
    unsigned long long implicitDiscardedUtteranceIndex;
    float _voiceProfileUpdateScoreMSE;
    unsigned long long _voiceProfilePruningFailureReasonCode;
    unsigned long long _voiceProfileDiscardedUtteranceCount;
    unsigned long long _voiceProfilePrunedUtteranceCount;
    unsigned long long _voiceProfileRetainedUtteranceCount;
    unsigned long long _voiceProfileRetrainingFailureReasonCode;
    double _retrainingWaitTime;
    unsigned long long _speakerRecognitionProcessingStatus;
    double _speakerRecognitionWaitTime;
    unsigned long long _speakerRecognitionPSRProcessingStatus;
    unsigned long long _speakerRecognitionSATProcessingStatus;
}

@property (nonatomic) double retrainingWaitTime; // @synthesize retrainingWaitTime=_retrainingWaitTime;
@property (nonatomic) unsigned long long speakerRecognitionPSRProcessingStatus; // @synthesize speakerRecognitionPSRProcessingStatus=_speakerRecognitionPSRProcessingStatus;
@property (nonatomic) unsigned long long speakerRecognitionProcessingStatus; // @synthesize speakerRecognitionProcessingStatus=_speakerRecognitionProcessingStatus;
@property (nonatomic) unsigned long long speakerRecognitionSATProcessingStatus; // @synthesize speakerRecognitionSATProcessingStatus=_speakerRecognitionSATProcessingStatus;
@property (nonatomic) double speakerRecognitionWaitTime; // @synthesize speakerRecognitionWaitTime=_speakerRecognitionWaitTime;
@property (nonatomic) unsigned long long voiceProfileDiscardedUtteranceCount; // @synthesize voiceProfileDiscardedUtteranceCount=_voiceProfileDiscardedUtteranceCount;
@property (nonatomic) unsigned long long voiceProfilePrunedUtteranceCount; // @synthesize voiceProfilePrunedUtteranceCount=_voiceProfilePrunedUtteranceCount;
@property (nonatomic) unsigned long long voiceProfilePruningFailureReasonCode; // @synthesize voiceProfilePruningFailureReasonCode=_voiceProfilePruningFailureReasonCode;
@property (nonatomic) unsigned long long voiceProfileRetainedUtteranceCount; // @synthesize voiceProfileRetainedUtteranceCount=_voiceProfileRetainedUtteranceCount;
@property (nonatomic) unsigned long long voiceProfileRetrainingFailureReasonCode; // @synthesize voiceProfileRetrainingFailureReasonCode=_voiceProfileRetrainingFailureReasonCode;
@property (nonatomic) float voiceProfileUpdateScoreMSE; // @synthesize voiceProfileUpdateScoreMSE=_voiceProfileUpdateScoreMSE;

- (void).cxx_destruct;
- (void)appendVoiceProfileDiscardedImplicitUtteranceScoreWith:(float)arg1;
- (void)appendVoiceProfileExplicitUtteranceScoreWith:(float)arg1;
- (void)appendVoiceProfileFailedExplicitUtteranceScoreWith:(float)arg1;
- (void)appendVoiceProfileImplicitUtteranceScoreWith:(float)arg1;
- (id)initWithEvent:(id)arg1 locale:(id)arg2 configVersion:(id)arg3;
- (void)pushAnalytics;
- (void)pushAnalyticsWithLazyBlock:(CDUnknownBlockType)arg1;
- (void)setvoiceProfilePrunedUtteranceCount:(unsigned long long)arg1;

@end

