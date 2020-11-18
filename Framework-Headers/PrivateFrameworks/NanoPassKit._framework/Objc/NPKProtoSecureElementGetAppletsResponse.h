//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NPKProtoSecureElementGetAppletsResponse : PBCodable <NSCopying>
{
    CDStruct_9f2792e4 _activationStates;
    CDStruct_9f2792e4 _lifecycleStates;
    NSMutableArray *_appletsBytes;
    NSMutableArray *_cardAIDs;
    BOOL _pending;
    CDStruct_eab6c78c _has;
}

@property (readonly, nonatomic) unsigned int *activationStates;
@property (readonly, nonatomic) unsigned long long activationStatesCount;
@property (strong, nonatomic) NSMutableArray *appletsBytes; // @synthesize appletsBytes=_appletsBytes;
@property (strong, nonatomic) NSMutableArray *cardAIDs; // @synthesize cardAIDs=_cardAIDs;
@property (nonatomic) BOOL hasPending;
@property (readonly, nonatomic) unsigned int *lifecycleStates;
@property (readonly, nonatomic) unsigned long long lifecycleStatesCount;
@property (nonatomic) BOOL pending; // @synthesize pending=_pending;

- (void).cxx_destruct;
- (unsigned int)activationStatesAtIndex:(unsigned long long)arg1;
- (void)addActivationStates:(unsigned int)arg1;
- (void)addAppletsBytes:(id)arg1;
- (void)addCardAIDs:(id)arg1;
- (void)addLifecycleStates:(unsigned int)arg1;
- (id)appletsBytesAtIndex:(unsigned long long)arg1;
- (unsigned long long)appletsBytesCount;
- (id)cardAIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)cardAIDsCount;
- (void)clearActivationStates;
- (void)clearAppletsBytes;
- (void)clearCardAIDs;
- (void)clearLifecycleStates;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)lifecycleStatesAtIndex:(unsigned long long)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setActivationStates:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)setLifecycleStates:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end

