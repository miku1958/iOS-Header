//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBResumeTimerIntent-Protocol.h>

@class NSString, _INPBIntentMetadata, _INPBTimer;

@interface _INPBResumeTimerIntent : PBCodable <_INPBResumeTimerIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int resumeMultiple:1;
    } _has;
    BOOL _resumeMultiple;
    _INPBIntentMetadata *_intentMetadata;
    _INPBTimer *_targetTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) BOOL hasResumeMultiple;
@property (readonly, nonatomic) BOOL hasTargetTimer;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property (nonatomic) BOOL resumeMultiple; // @synthesize resumeMultiple=_resumeMultiple;
@property (readonly) Class superclass;
@property (strong, nonatomic) _INPBTimer *targetTimer; // @synthesize targetTimer=_targetTimer;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

