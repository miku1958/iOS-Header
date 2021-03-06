//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSnoozeTasksIntent-Protocol.h>

@class NSArray, NSString, _INPBDateTimeRange, _INPBIntentMetadata;

@interface _INPBSnoozeTasksIntent : PBCodable <_INPBSnoozeTasksIntent, NSSecureCoding, NSCopying>
{
    CDStruct_eff9c538 _has;
    BOOL _all;
    _INPBIntentMetadata *_intentMetadata;
    _INPBDateTimeRange *_nextTriggerTime;
    NSArray *_tasks;
}

@property (nonatomic) BOOL all; // @synthesize all=_all;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAll;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasNextTriggerTime;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property (strong, nonatomic) _INPBDateTimeRange *nextTriggerTime; // @synthesize nextTriggerTime=_nextTriggerTime;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *tasks; // @synthesize tasks=_tasks;
@property (readonly, nonatomic) unsigned long long tasksCount;

+ (BOOL)supportsSecureCoding;
+ (Class)tasksType;
- (void).cxx_destruct;
- (void)addTasks:(id)arg1;
- (void)clearTasks;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)tasksAtIndex:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end

