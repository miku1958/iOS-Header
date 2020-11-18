//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableRoutineLocation;

@interface HDCodableRoutineScenarioTriggeredRequest : PBRequest <NSCopying>
{
    unsigned long long _triggerTypes;
    HDCodableRoutineLocation *_currentLocation;
    struct {
        unsigned int triggerTypes:1;
    } _has;
}

@property (strong, nonatomic) HDCodableRoutineLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property (readonly, nonatomic) BOOL hasCurrentLocation;
@property (nonatomic) BOOL hasTriggerTypes;
@property (nonatomic) unsigned long long triggerTypes; // @synthesize triggerTypes=_triggerTypes;

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

