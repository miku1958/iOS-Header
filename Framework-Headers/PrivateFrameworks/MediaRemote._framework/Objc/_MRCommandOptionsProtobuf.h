//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSData, NSString;

@interface _MRCommandOptionsProtobuf : PBCodable <NSCopying>
{
    double _playbackPosition;
    long long _radioStationID;
    unsigned long long _trackID;
    NSString *_contentItemID;
    NSString *_contextID;
    NSString *_destinationAppDisplayID;
    NSString *_mediaType;
    int _playbackQueueInsertionPosition;
    float _playbackRate;
    NSString *_radioStationHash;
    float _rating;
    int _repeatMode;
    unsigned int _sendOptions;
    int _shuffleMode;
    float _skipInterval;
    NSString *_sourceID;
    NSString *_stationURL;
    NSData *_systemAppPlaybackQueueData;
    BOOL _externalPlayerCommand;
    BOOL _negative;
    BOOL _requestDefermentToPlaybackQueuePosition;
    BOOL _shouldBeginRadioPlayback;
    BOOL _shouldOverrideManuallyCuratedQueue;
    struct {
        unsigned int playbackPosition:1;
        unsigned int radioStationID:1;
        unsigned int trackID:1;
        unsigned int playbackQueueInsertionPosition:1;
        unsigned int playbackRate:1;
        unsigned int rating:1;
        unsigned int repeatMode:1;
        unsigned int sendOptions:1;
        unsigned int shuffleMode:1;
        unsigned int skipInterval:1;
        unsigned int externalPlayerCommand:1;
        unsigned int negative:1;
        unsigned int requestDefermentToPlaybackQueuePosition:1;
        unsigned int shouldBeginRadioPlayback:1;
        unsigned int shouldOverrideManuallyCuratedQueue:1;
    } _has;
}

@property (strong, nonatomic) NSString *contentItemID; // @synthesize contentItemID=_contentItemID;
@property (strong, nonatomic) NSString *contextID; // @synthesize contextID=_contextID;
@property (strong, nonatomic) NSString *destinationAppDisplayID; // @synthesize destinationAppDisplayID=_destinationAppDisplayID;
@property (nonatomic) BOOL externalPlayerCommand; // @synthesize externalPlayerCommand=_externalPlayerCommand;
@property (readonly, nonatomic) BOOL hasContentItemID;
@property (readonly, nonatomic) BOOL hasContextID;
@property (readonly, nonatomic) BOOL hasDestinationAppDisplayID;
@property (nonatomic) BOOL hasExternalPlayerCommand;
@property (readonly, nonatomic) BOOL hasMediaType;
@property (nonatomic) BOOL hasNegative;
@property (nonatomic) BOOL hasPlaybackPosition;
@property (nonatomic) BOOL hasPlaybackQueueInsertionPosition;
@property (nonatomic) BOOL hasPlaybackRate;
@property (readonly, nonatomic) BOOL hasRadioStationHash;
@property (nonatomic) BOOL hasRadioStationID;
@property (nonatomic) BOOL hasRating;
@property (nonatomic) BOOL hasRepeatMode;
@property (nonatomic) BOOL hasRequestDefermentToPlaybackQueuePosition;
@property (nonatomic) BOOL hasSendOptions;
@property (nonatomic) BOOL hasShouldBeginRadioPlayback;
@property (nonatomic) BOOL hasShouldOverrideManuallyCuratedQueue;
@property (nonatomic) BOOL hasShuffleMode;
@property (nonatomic) BOOL hasSkipInterval;
@property (readonly, nonatomic) BOOL hasSourceID;
@property (readonly, nonatomic) BOOL hasStationURL;
@property (readonly, nonatomic) BOOL hasSystemAppPlaybackQueueData;
@property (nonatomic) BOOL hasTrackID;
@property (strong, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property (nonatomic) BOOL negative; // @synthesize negative=_negative;
@property (nonatomic) double playbackPosition; // @synthesize playbackPosition=_playbackPosition;
@property (nonatomic) int playbackQueueInsertionPosition; // @synthesize playbackQueueInsertionPosition=_playbackQueueInsertionPosition;
@property (nonatomic) float playbackRate; // @synthesize playbackRate=_playbackRate;
@property (strong, nonatomic) NSString *radioStationHash; // @synthesize radioStationHash=_radioStationHash;
@property (nonatomic) long long radioStationID; // @synthesize radioStationID=_radioStationID;
@property (nonatomic) float rating; // @synthesize rating=_rating;
@property (nonatomic) int repeatMode; // @synthesize repeatMode=_repeatMode;
@property (nonatomic) BOOL requestDefermentToPlaybackQueuePosition; // @synthesize requestDefermentToPlaybackQueuePosition=_requestDefermentToPlaybackQueuePosition;
@property (nonatomic) unsigned int sendOptions; // @synthesize sendOptions=_sendOptions;
@property (nonatomic) BOOL shouldBeginRadioPlayback; // @synthesize shouldBeginRadioPlayback=_shouldBeginRadioPlayback;
@property (nonatomic) BOOL shouldOverrideManuallyCuratedQueue; // @synthesize shouldOverrideManuallyCuratedQueue=_shouldOverrideManuallyCuratedQueue;
@property (nonatomic) int shuffleMode; // @synthesize shuffleMode=_shuffleMode;
@property (nonatomic) float skipInterval; // @synthesize skipInterval=_skipInterval;
@property (strong, nonatomic) NSString *sourceID; // @synthesize sourceID=_sourceID;
@property (strong, nonatomic) NSString *stationURL; // @synthesize stationURL=_stationURL;
@property (strong, nonatomic) NSData *systemAppPlaybackQueueData; // @synthesize systemAppPlaybackQueueData=_systemAppPlaybackQueueData;
@property (nonatomic) unsigned long long trackID; // @synthesize trackID=_trackID;

- (int)StringAsRepeatMode:(id)arg1;
- (int)StringAsShuffleMode:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)repeatModeAsString:(int)arg1;
- (id)shuffleModeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

