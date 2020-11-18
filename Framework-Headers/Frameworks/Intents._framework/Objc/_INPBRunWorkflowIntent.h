//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBRunWorkflowIntent-Protocol.h>

@class NSString, _INPBArchivedObject, _INPBDataString, _INPBIntentMetadata;

@interface _INPBRunWorkflowIntent : PBCodable <_INPBRunWorkflowIntent, NSSecureCoding, NSCopying>
{
    struct _has;
    BOOL __encodeLegacyGloryData;
    _INPBIntentMetadata *_intentMetadata;
    _INPBArchivedObject *_stepIntentResponse;
    _INPBDataString *_workflow;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasStepIntentResponse;
@property (readonly, nonatomic) BOOL hasWorkflow;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property (strong, nonatomic) _INPBArchivedObject *stepIntentResponse; // @synthesize stepIntentResponse=_stepIntentResponse;
@property (readonly) Class superclass;
@property (strong, nonatomic) _INPBDataString *workflow; // @synthesize workflow=_workflow;

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
