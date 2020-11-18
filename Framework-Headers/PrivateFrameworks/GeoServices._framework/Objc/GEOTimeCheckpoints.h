//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOTimeCheckpoints : PBCodable <NSCopying>
{
    CDStruct_9f2792e4 _distToNextCheckpoints;
    CDStruct_9f2792e4 _timeToNextCheckpoints;
}

@property (readonly, nonatomic) unsigned int *distToNextCheckpoints;
@property (readonly, nonatomic) unsigned long long distToNextCheckpointsCount;
@property (readonly, nonatomic) unsigned int *timeToNextCheckpoints;
@property (readonly, nonatomic) unsigned long long timeToNextCheckpointsCount;

- (void)addDistToNextCheckpoint:(unsigned int)arg1;
- (void)addTimeToNextCheckpoint:(unsigned int)arg1;
- (void)clearDistToNextCheckpoints;
- (void)clearTimeToNextCheckpoints;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)distToNextCheckpointAtIndex:(unsigned long long)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDistToNextCheckpoints:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)setTimeToNextCheckpoints:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)timeToNextCheckpointAtIndex:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end

