//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface AWDHomeKitSoftwareUpdateFetched : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _duration;
    unsigned int _resultErrorCode;
    int _source;
    BOOL _wasNewUpdateFetched;
    struct {
        unsigned int timestamp:1;
        unsigned int duration:1;
        unsigned int resultErrorCode:1;
        unsigned int source:1;
        unsigned int wasNewUpdateFetched:1;
    } _has;
}

@property (nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasResultErrorCode;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasWasNewUpdateFetched;
@property (nonatomic) unsigned int resultErrorCode; // @synthesize resultErrorCode=_resultErrorCode;
@property (nonatomic) int source; // @synthesize source=_source;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property (nonatomic) BOOL wasNewUpdateFetched; // @synthesize wasNewUpdateFetched=_wasNewUpdateFetched;

- (int)StringAsSource:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)sourceAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
