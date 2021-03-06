//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@interface CLPIndoorCMPedometer : PBCodable <NSCopying>
{
    double _firstStepTime;
    double _timestamp;
    float _activeTime;
    float _distance;
    int _floorsAscended;
    int _floorsDescended;
    int _numberOfSteps;
    struct {
        unsigned int firstStepTime:1;
        unsigned int timestamp:1;
        unsigned int activeTime:1;
        unsigned int distance:1;
        unsigned int floorsAscended:1;
        unsigned int floorsDescended:1;
        unsigned int numberOfSteps:1;
    } _has;
}

@property (nonatomic) float activeTime; // @synthesize activeTime=_activeTime;
@property (nonatomic) float distance; // @synthesize distance=_distance;
@property (nonatomic) double firstStepTime; // @synthesize firstStepTime=_firstStepTime;
@property (nonatomic) int floorsAscended; // @synthesize floorsAscended=_floorsAscended;
@property (nonatomic) int floorsDescended; // @synthesize floorsDescended=_floorsDescended;
@property (nonatomic) BOOL hasActiveTime;
@property (nonatomic) BOOL hasDistance;
@property (nonatomic) BOOL hasFirstStepTime;
@property (nonatomic) BOOL hasFloorsAscended;
@property (nonatomic) BOOL hasFloorsDescended;
@property (nonatomic) BOOL hasNumberOfSteps;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int numberOfSteps; // @synthesize numberOfSteps=_numberOfSteps;
@property (nonatomic) double timestamp; // @synthesize timestamp=_timestamp;

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

