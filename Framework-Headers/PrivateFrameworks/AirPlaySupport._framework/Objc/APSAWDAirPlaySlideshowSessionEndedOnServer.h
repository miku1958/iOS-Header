//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AirPlaySupport/NSCopying-Protocol.h>

@class NSString;

@interface APSAWDAirPlaySlideshowSessionEndedOnServer : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _duration;
    unsigned int _maxBPS;
    unsigned int _maxPhotoBytes;
    unsigned int _minBPS;
    unsigned int _minPhotoBytes;
    unsigned int _pauses;
    int _reason;
    NSString *_sessionUUID;
    unsigned int _skipAheads;
    unsigned int _skipBacks;
    unsigned int _totalPhotos;
    struct {
        unsigned int timestamp:1;
        unsigned int duration:1;
        unsigned int maxBPS:1;
        unsigned int maxPhotoBytes:1;
        unsigned int minBPS:1;
        unsigned int minPhotoBytes:1;
        unsigned int pauses:1;
        unsigned int reason:1;
        unsigned int skipAheads:1;
        unsigned int skipBacks:1;
        unsigned int totalPhotos:1;
    } _has;
}

@property (nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasMaxBPS;
@property (nonatomic) BOOL hasMaxPhotoBytes;
@property (nonatomic) BOOL hasMinBPS;
@property (nonatomic) BOOL hasMinPhotoBytes;
@property (nonatomic) BOOL hasPauses;
@property (nonatomic) BOOL hasReason;
@property (readonly, nonatomic) BOOL hasSessionUUID;
@property (nonatomic) BOOL hasSkipAheads;
@property (nonatomic) BOOL hasSkipBacks;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTotalPhotos;
@property (nonatomic) unsigned int maxBPS; // @synthesize maxBPS=_maxBPS;
@property (nonatomic) unsigned int maxPhotoBytes; // @synthesize maxPhotoBytes=_maxPhotoBytes;
@property (nonatomic) unsigned int minBPS; // @synthesize minBPS=_minBPS;
@property (nonatomic) unsigned int minPhotoBytes; // @synthesize minPhotoBytes=_minPhotoBytes;
@property (nonatomic) unsigned int pauses; // @synthesize pauses=_pauses;
@property (nonatomic) int reason; // @synthesize reason=_reason;
@property (strong, nonatomic) NSString *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property (nonatomic) unsigned int skipAheads; // @synthesize skipAheads=_skipAheads;
@property (nonatomic) unsigned int skipBacks; // @synthesize skipBacks=_skipBacks;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property (nonatomic) unsigned int totalPhotos; // @synthesize totalPhotos=_totalPhotos;

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
