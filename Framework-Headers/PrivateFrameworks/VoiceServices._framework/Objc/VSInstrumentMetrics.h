//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <VoiceServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface VSInstrumentMetrics : NSObject <NSSecureCoding>
{
    BOOL _isWarmStart;
    BOOL _isServerTTS;
    BOOL _isServerTimeout;
    BOOL _isSpeechRequest;
    BOOL _isCacheHitFromDisk;
    BOOL _isCacheHitFromMemory;
    NSString *_utterance;
    NSString *_voiceAssetKey;
    unsigned long long _requestCreatedTimestamp;
    unsigned long long _eagerRequestCreatedTimeStampDiffs;
    unsigned long long _synthesisBeginTimestamp;
    unsigned long long _synthesisEndTimestamp;
    unsigned long long _speechBeginTimestamp;
    unsigned long long _speechEndTimestamp;
    unsigned long long _audioStartTimestampDiffs;
    double _audioDuration;
    unsigned long long _synthesisToSpeechTimeGap;
    unsigned long long _waitForSynthesisToFinishTimeDelay;
}

@property double audioDuration; // @synthesize audioDuration=_audioDuration;
@property unsigned long long audioStartTimestampDiffs; // @synthesize audioStartTimestampDiffs=_audioStartTimestampDiffs;
@property unsigned long long eagerRequestCreatedTimeStampDiffs; // @synthesize eagerRequestCreatedTimeStampDiffs=_eagerRequestCreatedTimeStampDiffs;
@property BOOL isCacheHitFromDisk; // @synthesize isCacheHitFromDisk=_isCacheHitFromDisk;
@property BOOL isCacheHitFromMemory; // @synthesize isCacheHitFromMemory=_isCacheHitFromMemory;
@property BOOL isServerTTS; // @synthesize isServerTTS=_isServerTTS;
@property BOOL isServerTimeout; // @synthesize isServerTimeout=_isServerTimeout;
@property BOOL isSpeechRequest; // @synthesize isSpeechRequest=_isSpeechRequest;
@property BOOL isWarmStart; // @synthesize isWarmStart=_isWarmStart;
@property unsigned long long requestCreatedTimestamp; // @synthesize requestCreatedTimestamp=_requestCreatedTimestamp;
@property unsigned long long speechBeginTimestamp; // @synthesize speechBeginTimestamp=_speechBeginTimestamp;
@property unsigned long long speechEndTimestamp; // @synthesize speechEndTimestamp=_speechEndTimestamp;
@property unsigned long long synthesisBeginTimestamp; // @synthesize synthesisBeginTimestamp=_synthesisBeginTimestamp;
@property unsigned long long synthesisEndTimestamp; // @synthesize synthesisEndTimestamp=_synthesisEndTimestamp;
@property unsigned long long synthesisToSpeechTimeGap; // @synthesize synthesisToSpeechTimeGap=_synthesisToSpeechTimeGap;
@property (copy) NSString *utterance; // @synthesize utterance=_utterance;
@property (copy) NSString *voiceAssetKey; // @synthesize voiceAssetKey=_voiceAssetKey;
@property unsigned long long waitForSynthesisToFinishTimeDelay; // @synthesize waitForSynthesisToFinishTimeDelay=_waitForSynthesisToFinishTimeDelay;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (double)_clockFactor;
- (double)audioQueueLatency;
- (id)description;
- (double)eagerRequestTimeGap;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isSynthesisCached;
- (double)synthesisLatency;
- (double)synthesisToSpeechTime;
- (double)timeToSpeakLatency;
- (double)ttsSynthesisLatency;
- (double)ttsTotalLatency;
- (double)waitForSynthesisToFinishTime;

@end

