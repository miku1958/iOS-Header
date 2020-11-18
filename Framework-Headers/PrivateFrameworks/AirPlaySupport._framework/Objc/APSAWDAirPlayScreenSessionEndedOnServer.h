//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AirPlaySupport/NSCopying-Protocol.h>

@class NSString;

@interface APSAWDAirPlayScreenSessionEndedOnServer : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _audioLate;
    unsigned int _audioLost;
    unsigned int _audioUnrecovered;
    int _avgAhead;
    unsigned int _avgRTT;
    int _avgReceiveMs;
    unsigned int _caDrops;
    unsigned int _caFrames;
    unsigned int _clearScreens;
    unsigned int _configChanges;
    unsigned int _duration;
    unsigned int _forcedRefreshes;
    unsigned int _framesReceived;
    unsigned int _negativeAheadFrames;
    int _reason;
    unsigned int _resumes;
    NSString *_sessionUUID;
    unsigned int _suspends;
    unsigned int _unclearScreens;
    struct {
        unsigned int timestamp:1;
        unsigned int audioLate:1;
        unsigned int audioLost:1;
        unsigned int audioUnrecovered:1;
        unsigned int avgAhead:1;
        unsigned int avgRTT:1;
        unsigned int avgReceiveMs:1;
        unsigned int caDrops:1;
        unsigned int caFrames:1;
        unsigned int clearScreens:1;
        unsigned int configChanges:1;
        unsigned int duration:1;
        unsigned int forcedRefreshes:1;
        unsigned int framesReceived:1;
        unsigned int negativeAheadFrames:1;
        unsigned int reason:1;
        unsigned int resumes:1;
        unsigned int suspends:1;
        unsigned int unclearScreens:1;
    } _has;
}

@property (nonatomic) unsigned int audioLate; // @synthesize audioLate=_audioLate;
@property (nonatomic) unsigned int audioLost; // @synthesize audioLost=_audioLost;
@property (nonatomic) unsigned int audioUnrecovered; // @synthesize audioUnrecovered=_audioUnrecovered;
@property (nonatomic) int avgAhead; // @synthesize avgAhead=_avgAhead;
@property (nonatomic) unsigned int avgRTT; // @synthesize avgRTT=_avgRTT;
@property (nonatomic) int avgReceiveMs; // @synthesize avgReceiveMs=_avgReceiveMs;
@property (nonatomic) unsigned int caDrops; // @synthesize caDrops=_caDrops;
@property (nonatomic) unsigned int caFrames; // @synthesize caFrames=_caFrames;
@property (nonatomic) unsigned int clearScreens; // @synthesize clearScreens=_clearScreens;
@property (nonatomic) unsigned int configChanges; // @synthesize configChanges=_configChanges;
@property (nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property (nonatomic) unsigned int forcedRefreshes; // @synthesize forcedRefreshes=_forcedRefreshes;
@property (nonatomic) unsigned int framesReceived; // @synthesize framesReceived=_framesReceived;
@property (nonatomic) BOOL hasAudioLate;
@property (nonatomic) BOOL hasAudioLost;
@property (nonatomic) BOOL hasAudioUnrecovered;
@property (nonatomic) BOOL hasAvgAhead;
@property (nonatomic) BOOL hasAvgRTT;
@property (nonatomic) BOOL hasAvgReceiveMs;
@property (nonatomic) BOOL hasCaDrops;
@property (nonatomic) BOOL hasCaFrames;
@property (nonatomic) BOOL hasClearScreens;
@property (nonatomic) BOOL hasConfigChanges;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasForcedRefreshes;
@property (nonatomic) BOOL hasFramesReceived;
@property (nonatomic) BOOL hasNegativeAheadFrames;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) BOOL hasResumes;
@property (readonly, nonatomic) BOOL hasSessionUUID;
@property (nonatomic) BOOL hasSuspends;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasUnclearScreens;
@property (nonatomic) unsigned int negativeAheadFrames; // @synthesize negativeAheadFrames=_negativeAheadFrames;
@property (nonatomic) int reason; // @synthesize reason=_reason;
@property (nonatomic) unsigned int resumes; // @synthesize resumes=_resumes;
@property (strong, nonatomic) NSString *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property (nonatomic) unsigned int suspends; // @synthesize suspends=_suspends;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property (nonatomic) unsigned int unclearScreens; // @synthesize unclearScreens=_unclearScreens;

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

