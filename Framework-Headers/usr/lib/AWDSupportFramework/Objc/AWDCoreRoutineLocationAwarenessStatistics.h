//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class AWDCoreRoutineLocationAwarenessBasicHistogram;

@interface AWDCoreRoutineLocationAwarenessStatistics : PBCodable <NSCopying>
{
    unsigned long long _duration;
    unsigned long long _timestamp;
    AWDCoreRoutineLocationAwarenessBasicHistogram *_activeRequestCount;
    AWDCoreRoutineLocationAwarenessBasicHistogram *_activeRequestInterrupted;
    AWDCoreRoutineLocationAwarenessBasicHistogram *_activeRequestTimeoutWithCoarseLocation;
    AWDCoreRoutineLocationAwarenessBasicHistogram *_activeRequestTimeoutWithLocationServiceDisabled;
    AWDCoreRoutineLocationAwarenessBasicHistogram *_activeRequestTimeoutWithLocationServiceEnabledRoutineDisabled;
    AWDCoreRoutineLocationAwarenessBasicHistogram *_activeRequestTimeoutWithLocationServiceEnabledRoutineEnabledWifiOff;
    AWDCoreRoutineLocationAwarenessBasicHistogram *_activeRequestTimeoutWithOtherReasons;
    AWDCoreRoutineLocationAwarenessBasicHistogram *_skippedRequestDueToRecentFix;
    AWDCoreRoutineLocationAwarenessBasicHistogram *_skippedRequestDueToStationary;
    AWDCoreRoutineLocationAwarenessBasicHistogram *_timerFiringCount;
    AWDCoreRoutineLocationAwarenessBasicHistogram *_timerFiringDelayedCount;
    AWDCoreRoutineLocationAwarenessBasicHistogram *_timerFiringDelayedMaxSeconds;
    AWDCoreRoutineLocationAwarenessBasicHistogram *_timerFiringDelayedTotalSeconds;
    AWDCoreRoutineLocationAwarenessBasicHistogram *_validLocationCount;
    CDStruct_9b5766a4 _has;
}

@property (strong, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *activeRequestCount; // @synthesize activeRequestCount=_activeRequestCount;
@property (strong, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *activeRequestInterrupted; // @synthesize activeRequestInterrupted=_activeRequestInterrupted;
@property (strong, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *activeRequestTimeoutWithCoarseLocation; // @synthesize activeRequestTimeoutWithCoarseLocation=_activeRequestTimeoutWithCoarseLocation;
@property (strong, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *activeRequestTimeoutWithLocationServiceDisabled; // @synthesize activeRequestTimeoutWithLocationServiceDisabled=_activeRequestTimeoutWithLocationServiceDisabled;
@property (strong, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *activeRequestTimeoutWithLocationServiceEnabledRoutineDisabled; // @synthesize activeRequestTimeoutWithLocationServiceEnabledRoutineDisabled=_activeRequestTimeoutWithLocationServiceEnabledRoutineDisabled;
@property (strong, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *activeRequestTimeoutWithLocationServiceEnabledRoutineEnabledWifiOff; // @synthesize activeRequestTimeoutWithLocationServiceEnabledRoutineEnabledWifiOff=_activeRequestTimeoutWithLocationServiceEnabledRoutineEnabledWifiOff;
@property (strong, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *activeRequestTimeoutWithOtherReasons; // @synthesize activeRequestTimeoutWithOtherReasons=_activeRequestTimeoutWithOtherReasons;
@property (nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property (readonly, nonatomic) BOOL hasActiveRequestCount;
@property (readonly, nonatomic) BOOL hasActiveRequestInterrupted;
@property (readonly, nonatomic) BOOL hasActiveRequestTimeoutWithCoarseLocation;
@property (readonly, nonatomic) BOOL hasActiveRequestTimeoutWithLocationServiceDisabled;
@property (readonly, nonatomic) BOOL hasActiveRequestTimeoutWithLocationServiceEnabledRoutineDisabled;
@property (readonly, nonatomic) BOOL hasActiveRequestTimeoutWithLocationServiceEnabledRoutineEnabledWifiOff;
@property (readonly, nonatomic) BOOL hasActiveRequestTimeoutWithOtherReasons;
@property (nonatomic) BOOL hasDuration;
@property (readonly, nonatomic) BOOL hasSkippedRequestDueToRecentFix;
@property (readonly, nonatomic) BOOL hasSkippedRequestDueToStationary;
@property (readonly, nonatomic) BOOL hasTimerFiringCount;
@property (readonly, nonatomic) BOOL hasTimerFiringDelayedCount;
@property (readonly, nonatomic) BOOL hasTimerFiringDelayedMaxSeconds;
@property (readonly, nonatomic) BOOL hasTimerFiringDelayedTotalSeconds;
@property (nonatomic) BOOL hasTimestamp;
@property (readonly, nonatomic) BOOL hasValidLocationCount;
@property (strong, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *skippedRequestDueToRecentFix; // @synthesize skippedRequestDueToRecentFix=_skippedRequestDueToRecentFix;
@property (strong, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *skippedRequestDueToStationary; // @synthesize skippedRequestDueToStationary=_skippedRequestDueToStationary;
@property (strong, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *timerFiringCount; // @synthesize timerFiringCount=_timerFiringCount;
@property (strong, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *timerFiringDelayedCount; // @synthesize timerFiringDelayedCount=_timerFiringDelayedCount;
@property (strong, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *timerFiringDelayedMaxSeconds; // @synthesize timerFiringDelayedMaxSeconds=_timerFiringDelayedMaxSeconds;
@property (strong, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *timerFiringDelayedTotalSeconds; // @synthesize timerFiringDelayedTotalSeconds=_timerFiringDelayedTotalSeconds;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property (strong, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *validLocationCount; // @synthesize validLocationCount=_validLocationCount;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

