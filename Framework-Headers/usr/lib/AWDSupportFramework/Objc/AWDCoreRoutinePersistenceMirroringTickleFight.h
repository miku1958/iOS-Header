//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@interface AWDCoreRoutinePersistenceMirroringTickleFight : PBCodable <NSCopying>
{
    CDStruct_95bda58d _tickleTimes;
    unsigned long long _timestamp;
    int _operationType;
    int _recordType;
    struct {
        unsigned int timestamp:1;
        unsigned int operationType:1;
        unsigned int recordType:1;
    } _has;
}

@property (nonatomic) BOOL hasOperationType;
@property (nonatomic) BOOL hasRecordType;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int operationType; // @synthesize operationType=_operationType;
@property (nonatomic) int recordType; // @synthesize recordType=_recordType;
@property (readonly, nonatomic) int *tickleTimes;
@property (readonly, nonatomic) unsigned long long tickleTimesCount;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

- (void)addTickleTimes:(int)arg1;
- (void)clearTickleTimes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setTickleTimes:(int *)arg1 count:(unsigned long long)arg2;
- (int)tickleTimesAtIndex:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
