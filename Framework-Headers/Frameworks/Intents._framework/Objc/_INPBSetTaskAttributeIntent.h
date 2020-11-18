//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSetTaskAttributeIntent-Protocol.h>

@class NSString, _INPBContactEventTrigger, _INPBDataString, _INPBIntentMetadata, _INPBSpatialEventTrigger, _INPBTask, _INPBTemporalEventTrigger;

@interface _INPBSetTaskAttributeIntent : PBCodable <_INPBSetTaskAttributeIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int priority:1;
        unsigned int status:1;
    } _has;
    BOOL __encodeLegacyGloryData;
    int _priority;
    int _status;
    _INPBContactEventTrigger *_contactEventTrigger;
    _INPBIntentMetadata *_intentMetadata;
    _INPBSpatialEventTrigger *_spatialEventTrigger;
    _INPBTask *_targetTask;
    _INPBDataString *_taskTitle;
    _INPBTemporalEventTrigger *_temporalEventTrigger;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property (strong, nonatomic) _INPBContactEventTrigger *contactEventTrigger; // @synthesize contactEventTrigger=_contactEventTrigger;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasContactEventTrigger;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) BOOL hasPriority;
@property (readonly, nonatomic) BOOL hasSpatialEventTrigger;
@property (nonatomic) BOOL hasStatus;
@property (readonly, nonatomic) BOOL hasTargetTask;
@property (readonly, nonatomic) BOOL hasTaskTitle;
@property (readonly, nonatomic) BOOL hasTemporalEventTrigger;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property (nonatomic) int priority; // @synthesize priority=_priority;
@property (strong, nonatomic) _INPBSpatialEventTrigger *spatialEventTrigger; // @synthesize spatialEventTrigger=_spatialEventTrigger;
@property (nonatomic) int status; // @synthesize status=_status;
@property (readonly) Class superclass;
@property (strong, nonatomic) _INPBTask *targetTask; // @synthesize targetTask=_targetTask;
@property (strong, nonatomic) _INPBDataString *taskTitle; // @synthesize taskTitle=_taskTitle;
@property (strong, nonatomic) _INPBTemporalEventTrigger *temporalEventTrigger; // @synthesize temporalEventTrigger=_temporalEventTrigger;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (int)StringAsPriority:(id)arg1;
- (int)StringAsStatus:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)priorityAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)statusAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
