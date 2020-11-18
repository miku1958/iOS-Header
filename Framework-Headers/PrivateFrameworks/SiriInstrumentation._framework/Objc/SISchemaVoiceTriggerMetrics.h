//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaVoiceTriggerMetrics : PBCodable
{
    int _implicitUtterances;
    int _explicitUtterances;
    int _firstPassTriggers;
    struct {
        unsigned int implicitUtterances:1;
        unsigned int explicitUtterances:1;
        unsigned int firstPassTriggers:1;
    } _has;
}

@property (nonatomic) int explicitUtterances; // @synthesize explicitUtterances=_explicitUtterances;
@property (nonatomic) int firstPassTriggers; // @synthesize firstPassTriggers=_firstPassTriggers;
@property (nonatomic) BOOL hasExplicitUtterances;
@property (nonatomic) BOOL hasFirstPassTriggers;
@property (nonatomic) BOOL hasImplicitUtterances;
@property (nonatomic) int implicitUtterances; // @synthesize implicitUtterances=_implicitUtterances;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
