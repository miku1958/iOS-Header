//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSString, PBUnknownFields, _INPBDataString, _INPBDateTime, _INPBSpatialEventTrigger, _INPBTemporalEventTrigger;

@interface _INPBTask : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBDateTime *_createdDateTime;
    NSString *_identifier;
    _INPBDateTime *_modifiedDateTime;
    _INPBSpatialEventTrigger *_spatialEventTrigger;
    int _status;
    int _taskType;
    _INPBTemporalEventTrigger *_temporalEventTrigger;
    _INPBDataString *_title;
    struct {
        unsigned int status:1;
        unsigned int taskType:1;
    } _has;
}

@property (strong, nonatomic) _INPBDateTime *createdDateTime; // @synthesize createdDateTime=_createdDateTime;
@property (readonly, nonatomic) BOOL hasCreatedDateTime;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasModifiedDateTime;
@property (readonly, nonatomic) BOOL hasSpatialEventTrigger;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL hasTaskType;
@property (readonly, nonatomic) BOOL hasTemporalEventTrigger;
@property (readonly, nonatomic) BOOL hasTitle;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) _INPBDateTime *modifiedDateTime; // @synthesize modifiedDateTime=_modifiedDateTime;
@property (strong, nonatomic) _INPBSpatialEventTrigger *spatialEventTrigger; // @synthesize spatialEventTrigger=_spatialEventTrigger;
@property (nonatomic) int status; // @synthesize status=_status;
@property (nonatomic) int taskType; // @synthesize taskType=_taskType;
@property (strong, nonatomic) _INPBTemporalEventTrigger *temporalEventTrigger; // @synthesize temporalEventTrigger=_temporalEventTrigger;
@property (strong, nonatomic) _INPBDataString *title; // @synthesize title=_title;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)options;
- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (int)StringAsTaskType:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)statusAsString:(int)arg1;
- (id)taskTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

