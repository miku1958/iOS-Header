//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSMutableArray;

@interface AWDCoreRoutineModelClusterMovementNoiseSet : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    NSMutableArray *_instances;
    CDStruct_b5306035 _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (strong, nonatomic) NSMutableArray *instances; // @synthesize instances=_instances;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

+ (Class)instanceType;
- (void)addInstance:(id)arg1;
- (void)clearInstances;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)instanceAtIndex:(unsigned long long)arg1;
- (unsigned long long)instancesCount;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

