//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class AWDHomeKitPredicate, NSMutableArray;

@interface AWDHomeKitEventTrigger : PBCodable <NSCopying>
{
    int _activationState;
    int _activationType;
    NSMutableArray *_events;
    AWDHomeKitPredicate *_predicate;
    BOOL _containsRecurrences;
    BOOL _executeOnce;
    struct {
        unsigned int activationState:1;
        unsigned int activationType:1;
        unsigned int containsRecurrences:1;
        unsigned int executeOnce:1;
    } _has;
}

@property (nonatomic) int activationState; // @synthesize activationState=_activationState;
@property (nonatomic) int activationType; // @synthesize activationType=_activationType;
@property (nonatomic) BOOL containsRecurrences; // @synthesize containsRecurrences=_containsRecurrences;
@property (strong, nonatomic) NSMutableArray *events; // @synthesize events=_events;
@property (nonatomic) BOOL executeOnce; // @synthesize executeOnce=_executeOnce;
@property (nonatomic) BOOL hasActivationState;
@property (nonatomic) BOOL hasActivationType;
@property (nonatomic) BOOL hasContainsRecurrences;
@property (nonatomic) BOOL hasExecuteOnce;
@property (readonly, nonatomic) BOOL hasPredicate;
@property (strong, nonatomic) AWDHomeKitPredicate *predicate; // @synthesize predicate=_predicate;

+ (Class)eventsType;
- (void).cxx_destruct;
- (int)StringAsActivationState:(id)arg1;
- (int)StringAsActivationType:(id)arg1;
- (id)activationStateAsString:(int)arg1;
- (id)activationTypeAsString:(int)arg1;
- (void)addEvents:(id)arg1;
- (void)clearEvents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)eventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventsCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
