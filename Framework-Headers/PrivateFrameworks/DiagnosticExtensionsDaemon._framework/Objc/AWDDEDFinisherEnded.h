//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <DiagnosticExtensionsDaemon/NSCopying-Protocol.h>

@interface AWDDEDFinisherEnded : PBCodable <NSCopying>
{
    unsigned long long _duration;
    unsigned long long _numbytes;
    unsigned long long _timestamp;
    int _state;
    int _type;
    struct {
        unsigned int duration:1;
        unsigned int numbytes:1;
        unsigned int timestamp:1;
        unsigned int state:1;
        unsigned int type:1;
    } _has;
}

@property (nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasNumbytes;
@property (nonatomic) BOOL hasState;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasType;
@property (nonatomic) unsigned long long numbytes; // @synthesize numbytes=_numbytes;
@property (nonatomic) int state; // @synthesize state=_state;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property (nonatomic) int type; // @synthesize type=_type;

- (int)StringAsState:(id)arg1;
- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)stateAsString:(int)arg1;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

