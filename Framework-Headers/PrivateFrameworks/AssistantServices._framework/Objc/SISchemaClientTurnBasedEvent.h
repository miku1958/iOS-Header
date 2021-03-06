//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AssistantServices/NSCopying-Protocol.h>

@class SISchemaClientAnyEvent, SISchemaClientTurnContext;

@interface SISchemaClientTurnBasedEvent : PBCodable <NSCopying>
{
    SISchemaClientAnyEvent *_event;
    SISchemaClientTurnContext *_turnContext;
}

@property (strong, nonatomic) SISchemaClientAnyEvent *event; // @synthesize event=_event;
@property (readonly, nonatomic) BOOL hasEvent;
@property (readonly, nonatomic) BOOL hasTurnContext;
@property (strong, nonatomic) SISchemaClientTurnContext *turnContext; // @synthesize turnContext=_turnContext;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)si_dictionaryRepresentation;
- (void)writeTo:(id)arg1;

@end

