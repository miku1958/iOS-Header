//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBResetTimerIntent-Protocol.h>

@class NSString, _INPBIntentMetadata, _INPBTimer;

@interface _INPBResetTimerIntent : PBCodable <_INPBResetTimerIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int resetMultiple:1;
    } _has;
    BOOL _resetMultiple;
    _INPBIntentMetadata *_intentMetadata;
    _INPBTimer *_targetTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) BOOL hasResetMultiple;
@property (readonly, nonatomic) BOOL hasTargetTimer;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property (nonatomic) BOOL resetMultiple; // @synthesize resetMultiple=_resetMultiple;
@property (readonly) Class superclass;
@property (strong, nonatomic) _INPBTimer *targetTimer; // @synthesize targetTimer=_targetTimer;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
