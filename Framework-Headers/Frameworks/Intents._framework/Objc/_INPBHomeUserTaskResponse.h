//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBHomeUserTaskResponse-Protocol.h>

@class NSString, _INPBHomeUserTask;

@interface _INPBHomeUserTaskResponse : PBCodable <_INPBHomeUserTaskResponse, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int taskOutcome:1;
    } _has;
    int _taskOutcome;
    _INPBHomeUserTask *_userTask;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasTaskOutcome;
@property (readonly, nonatomic) BOOL hasUserTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) int taskOutcome; // @synthesize taskOutcome=_taskOutcome;
@property (strong, nonatomic) _INPBHomeUserTask *userTask; // @synthesize userTask=_userTask;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (int)StringAsTaskOutcome:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)taskOutcomeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

