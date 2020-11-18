//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AirPlaySupport/NSCopying-Protocol.h>

@class NSString;

@interface APSAWDAirPlayAudioSessionEndedOnClient : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _duration;
    unsigned int _futileRetransmits;
    int _reason;
    unsigned int _retransmits;
    NSString *_sessionUUID;
    unsigned int _slowKeepAlives;
    struct {
        unsigned int timestamp:1;
        unsigned int duration:1;
        unsigned int futileRetransmits:1;
        unsigned int reason:1;
        unsigned int retransmits:1;
        unsigned int slowKeepAlives:1;
    } _has;
}

@property (nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property (nonatomic) unsigned int futileRetransmits; // @synthesize futileRetransmits=_futileRetransmits;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasFutileRetransmits;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) BOOL hasRetransmits;
@property (readonly, nonatomic) BOOL hasSessionUUID;
@property (nonatomic) BOOL hasSlowKeepAlives;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int reason; // @synthesize reason=_reason;
@property (nonatomic) unsigned int retransmits; // @synthesize retransmits=_retransmits;
@property (strong, nonatomic) NSString *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property (nonatomic) unsigned int slowKeepAlives; // @synthesize slowKeepAlives=_slowKeepAlives;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

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

