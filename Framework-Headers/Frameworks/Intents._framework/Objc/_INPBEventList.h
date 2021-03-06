//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBEventList-Protocol.h>

@class NSArray, NSString, _INPBCondition;

@interface _INPBEventList : PBCodable <_INPBEventList, NSSecureCoding, NSCopying>
{
    struct _has;
    _INPBCondition *_condition;
    NSArray *_events;
}

@property (strong, nonatomic) _INPBCondition *condition; // @synthesize condition=_condition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *events; // @synthesize events=_events;
@property (readonly, nonatomic) unsigned long long eventsCount;
@property (readonly, nonatomic) BOOL hasCondition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)eventType;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)addEvent:(id)arg1;
- (void)clearEvents;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)eventAtIndex:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

