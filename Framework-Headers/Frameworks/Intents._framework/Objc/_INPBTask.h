//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBTask-Protocol.h>

@class NSString, _INPBDataString, _INPBDateTime, _INPBSpatialEventTrigger, _INPBTemporalEventTrigger;

@interface _INPBTask : PBCodable <_INPBTask, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int status:1;
        unsigned int taskType:1;
    } _has;
    int _status;
    int _taskType;
    _INPBDateTime *_createdDateTime;
    NSString *_identifier;
    _INPBDateTime *_modifiedDateTime;
    _INPBSpatialEventTrigger *_spatialEventTrigger;
    _INPBTemporalEventTrigger *_temporalEventTrigger;
    _INPBDataString *_title;
}

@property (strong, nonatomic) _INPBDateTime *createdDateTime; // @synthesize createdDateTime=_createdDateTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasCreatedDateTime;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasModifiedDateTime;
@property (readonly, nonatomic) BOOL hasSpatialEventTrigger;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL hasTaskType;
@property (readonly, nonatomic) BOOL hasTemporalEventTrigger;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) _INPBDateTime *modifiedDateTime; // @synthesize modifiedDateTime=_modifiedDateTime;
@property (strong, nonatomic) _INPBSpatialEventTrigger *spatialEventTrigger; // @synthesize spatialEventTrigger=_spatialEventTrigger;
@property (nonatomic) int status; // @synthesize status=_status;
@property (readonly) Class superclass;
@property (nonatomic) int taskType; // @synthesize taskType=_taskType;
@property (strong, nonatomic) _INPBTemporalEventTrigger *temporalEventTrigger; // @synthesize temporalEventTrigger=_temporalEventTrigger;
@property (strong, nonatomic) _INPBDataString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (int)StringAsTaskType:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)statusAsString:(int)arg1;
- (id)taskTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

