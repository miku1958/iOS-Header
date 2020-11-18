//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@interface AWDCallHistoryNilUuid : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _callStatus;
    unsigned int _callType;
    struct {
        unsigned int timestamp:1;
        unsigned int callStatus:1;
        unsigned int callType:1;
    } _has;
}

@property (nonatomic) unsigned int callStatus; // @synthesize callStatus=_callStatus;
@property (nonatomic) unsigned int callType; // @synthesize callType=_callType;
@property (nonatomic) BOOL hasCallStatus;
@property (nonatomic) BOOL hasCallType;
@property (nonatomic) BOOL hasTimestamp;
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
