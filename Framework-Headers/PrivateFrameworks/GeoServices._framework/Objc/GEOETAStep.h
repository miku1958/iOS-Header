//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOTimeCheckpoints;

@interface GEOETAStep : PBCodable <NSCopying>
{
    unsigned int _distanceRemaining;
    unsigned int _expectedTime;
    unsigned int _stepID;
    GEOTimeCheckpoints *_timeCheckpoints;
    int _zilchPointIndex;
    struct {
        unsigned int distanceRemaining:1;
        unsigned int expectedTime:1;
        unsigned int stepID:1;
        unsigned int zilchPointIndex:1;
    } _has;
}

@property (nonatomic) unsigned int distanceRemaining;
@property (nonatomic) unsigned int expectedTime; // @synthesize expectedTime=_expectedTime;
@property (nonatomic) BOOL hasDistanceRemaining;
@property (nonatomic) BOOL hasExpectedTime;
@property (nonatomic) BOOL hasStepID;
@property (readonly, nonatomic) BOOL hasTimeCheckpoints;
@property (nonatomic) BOOL hasZilchPointIndex;
@property (nonatomic) unsigned int stepID; // @synthesize stepID=_stepID;
@property (strong, nonatomic) GEOTimeCheckpoints *timeCheckpoints; // @synthesize timeCheckpoints=_timeCheckpoints;
@property (nonatomic) int zilchPointIndex; // @synthesize zilchPointIndex=_zilchPointIndex;

- (void).cxx_destruct;
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

