//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBChangeAlarmStatusIntentResponse-Protocol.h>

@class NSArray, NSString;

@interface _INPBChangeAlarmStatusIntentResponse : PBCodable <_INPBChangeAlarmStatusIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;
    NSArray *_modifiedAlarms;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *modifiedAlarms; // @synthesize modifiedAlarms=_modifiedAlarms;
@property (readonly, nonatomic) unsigned long long modifiedAlarmsCount;
@property (readonly) Class superclass;

+ (Class)modifiedAlarmsType;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)addModifiedAlarms:(id)arg1;
- (void)clearModifiedAlarms;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)modifiedAlarmsAtIndex:(unsigned long long)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

