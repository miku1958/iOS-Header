//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBTimer-Protocol.h>

@class NSString, _INPBDataString;

@interface _INPBTimer : PBCodable <_INPBTimer, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int duration:1;
        unsigned int remainingTime:1;
        unsigned int state:1;
        unsigned int type:1;
    } _has;
    int _state;
    int _type;
    double _duration;
    NSString *_identifier;
    _INPBDataString *_label;
    double _remainingTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (nonatomic) BOOL hasDuration;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasLabel;
@property (nonatomic) BOOL hasRemainingTime;
@property (nonatomic) BOOL hasState;
@property (nonatomic) BOOL hasType;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) _INPBDataString *label; // @synthesize label=_label;
@property (nonatomic) double remainingTime; // @synthesize remainingTime=_remainingTime;
@property (nonatomic) int state; // @synthesize state=_state;
@property (readonly) Class superclass;
@property (nonatomic) int type; // @synthesize type=_type;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (int)StringAsState:(id)arg1;
- (int)StringAsType:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)stateAsString:(int)arg1;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

