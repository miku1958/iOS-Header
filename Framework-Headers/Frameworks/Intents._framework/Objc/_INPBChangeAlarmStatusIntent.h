//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBChangeAlarmStatusIntent-Protocol.h>

@class NSArray, NSString, _INPBAlarmSearch, _INPBIntentMetadata;

@interface _INPBChangeAlarmStatusIntent : PBCodable <_INPBChangeAlarmStatusIntent, NSSecureCoding, NSCopying>
{
    CDStruct_ae16c3b5 _has;
    int _operation;
    _INPBAlarmSearch *_alarmSearch;
    NSArray *_alarms;
    _INPBIntentMetadata *_intentMetadata;
}

@property (strong, nonatomic) _INPBAlarmSearch *alarmSearch; // @synthesize alarmSearch=_alarmSearch;
@property (copy, nonatomic) NSArray *alarms; // @synthesize alarms=_alarms;
@property (readonly, nonatomic) unsigned long long alarmsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAlarmSearch;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) BOOL hasOperation;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property (nonatomic) int operation; // @synthesize operation=_operation;
@property (readonly) Class superclass;

+ (Class)alarmsType;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (int)StringAsOperation:(id)arg1;
- (void)addAlarms:(id)arg1;
- (id)alarmsAtIndex:(unsigned long long)arg1;
- (void)clearAlarms;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)operationAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

