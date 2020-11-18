//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEONavCameraState : PBCodable <NSCopying>
{
    int _distanceToManeuver;
    int _speedBucket;
    int _upcomingManeuverType;
    BOOL _isGroupedManeuver;
    struct {
        unsigned int distanceToManeuver:1;
        unsigned int speedBucket:1;
        unsigned int upcomingManeuverType:1;
        unsigned int isGroupedManeuver:1;
    } _has;
}

@property (nonatomic) int distanceToManeuver; // @synthesize distanceToManeuver=_distanceToManeuver;
@property (nonatomic) BOOL hasDistanceToManeuver;
@property (nonatomic) BOOL hasIsGroupedManeuver;
@property (nonatomic) BOOL hasSpeedBucket;
@property (nonatomic) BOOL hasUpcomingManeuverType;
@property (nonatomic) BOOL isGroupedManeuver; // @synthesize isGroupedManeuver=_isGroupedManeuver;
@property (nonatomic) int speedBucket; // @synthesize speedBucket=_speedBucket;
@property (nonatomic) int upcomingManeuverType; // @synthesize upcomingManeuverType=_upcomingManeuverType;

- (int)StringAsDistanceToManeuver:(id)arg1;
- (int)StringAsSpeedBucket:(id)arg1;
- (int)StringAsUpcomingManeuverType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)distanceToManeuverAsString:(int)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)speedBucketAsString:(int)arg1;
- (id)upcomingManeuverTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

