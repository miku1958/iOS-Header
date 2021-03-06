//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface AWDHomeKitSoftwareUpdateStarted : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _duration;
    unsigned int _resultErrorCode;
    BOOL _isAutomaticUpdateEnabled;
    struct {
        unsigned int timestamp:1;
        unsigned int duration:1;
        unsigned int resultErrorCode:1;
        unsigned int isAutomaticUpdateEnabled:1;
    } _has;
}

@property (nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasIsAutomaticUpdateEnabled;
@property (nonatomic) BOOL hasResultErrorCode;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL isAutomaticUpdateEnabled; // @synthesize isAutomaticUpdateEnabled=_isAutomaticUpdateEnabled;
@property (nonatomic) unsigned int resultErrorCode; // @synthesize resultErrorCode=_resultErrorCode;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

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

