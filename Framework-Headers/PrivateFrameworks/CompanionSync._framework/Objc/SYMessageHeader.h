//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CompanionSync/NSCopying-Protocol.h>

@class SYPeer, SYVectorClock;

@interface SYMessageHeader : PBCodable <NSCopying>
{
    unsigned long long _sequenceNumber;
    double _timeout;
    double _timestamp;
    SYPeer *_sender;
    SYVectorClock *_state;
    unsigned int _version;
    struct {
        unsigned int timeout:1;
    } _has;
}

@property (nonatomic) BOOL hasTimeout;
@property (strong, nonatomic) SYPeer *sender; // @synthesize sender=_sender;
@property (nonatomic) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property (strong, nonatomic) SYVectorClock *state; // @synthesize state=_state;
@property (nonatomic) double timeout; // @synthesize timeout=_timeout;
@property (nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property (nonatomic) unsigned int version; // @synthesize version=_version;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
