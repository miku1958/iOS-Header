//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSMutableArray;

@interface AWDCoreRoutineLMPScoreBoard : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    NSMutableArray *_instances;
    NSMutableArray *_secondaryInstances;
    CDStruct_b5306035 _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (strong, nonatomic) NSMutableArray *instances; // @synthesize instances=_instances;
@property (strong, nonatomic) NSMutableArray *secondaryInstances; // @synthesize secondaryInstances=_secondaryInstances;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

+ (Class)instancesType;
+ (Class)secondaryInstancesType;
- (void)addInstances:(id)arg1;
- (void)addSecondaryInstances:(id)arg1;
- (void)clearInstances;
- (void)clearSecondaryInstances;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)instancesAtIndex:(unsigned long long)arg1;
- (unsigned long long)instancesCount;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)secondaryInstancesAtIndex:(unsigned long long)arg1;
- (unsigned long long)secondaryInstancesCount;
- (void)writeTo:(id)arg1;

@end

