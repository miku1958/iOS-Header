//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@interface AWDCoreRoutineFMCVehicleConnectionEventInstance : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _eventType;
    int _value;
    struct {
        unsigned int timestamp:1;
        unsigned int eventType:1;
        unsigned int value:1;
    } _has;
}

@property (nonatomic) int eventType; // @synthesize eventType=_eventType;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property (nonatomic) int value; // @synthesize value=_value;

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

