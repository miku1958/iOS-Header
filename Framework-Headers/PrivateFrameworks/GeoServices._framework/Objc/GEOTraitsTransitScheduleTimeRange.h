//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOTraitsTransitScheduleTimeRange : PBCodable <NSCopying>
{
    double _duration;
    double _startTime;
    CDStruct_beabc505 _has;
}

@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) double startTime; // @synthesize startTime=_startTime;

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
