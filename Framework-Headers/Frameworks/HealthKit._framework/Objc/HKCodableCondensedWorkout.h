//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthKit/NSCopying-Protocol.h>

@class NSData;

@interface HKCodableCondensedWorkout : PBCodable <NSCopying>
{
    double _condenserDate;
    long long _condenserVersion;
    double _creationDate;
    double _duration;
    double _endDate;
    long long _persistentID;
    double _startDate;
    long long _type;
    NSData *_uuid;
    struct {
        unsigned int condenserDate:1;
        unsigned int condenserVersion:1;
        unsigned int creationDate:1;
        unsigned int duration:1;
        unsigned int endDate:1;
        unsigned int persistentID:1;
        unsigned int startDate:1;
        unsigned int type:1;
    } _has;
}

@property (nonatomic) double condenserDate; // @synthesize condenserDate=_condenserDate;
@property (nonatomic) long long condenserVersion; // @synthesize condenserVersion=_condenserVersion;
@property (nonatomic) double creationDate; // @synthesize creationDate=_creationDate;
@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (nonatomic) double endDate; // @synthesize endDate=_endDate;
@property (nonatomic) BOOL hasCondenserDate;
@property (nonatomic) BOOL hasCondenserVersion;
@property (nonatomic) BOOL hasCreationDate;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) BOOL hasPersistentID;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) BOOL hasType;
@property (readonly, nonatomic) BOOL hasUuid;
@property (nonatomic) long long persistentID; // @synthesize persistentID=_persistentID;
@property (nonatomic) double startDate; // @synthesize startDate=_startDate;
@property (nonatomic) long long type; // @synthesize type=_type;
@property (strong, nonatomic) NSData *uuid; // @synthesize uuid=_uuid;

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
