//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface AWDHomeKitRelaySession : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _actionType;
    unsigned int _duration;
    int _errorCode;
    int _statusCode;
    struct {
        unsigned int timestamp:1;
        unsigned int actionType:1;
        unsigned int duration:1;
        unsigned int errorCode:1;
        unsigned int statusCode:1;
    } _has;
}

@property (nonatomic) int actionType; // @synthesize actionType=_actionType;
@property (nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property (nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property (nonatomic) BOOL hasActionType;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) BOOL hasStatusCode;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

- (int)StringAsActionType:(id)arg1;
- (id)actionTypeAsString:(int)arg1;
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
