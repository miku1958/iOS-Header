//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPIdentifier, CKDPRecordZoneIdentifier, CKDPSubscriptionNotification, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPSubscription : PBCodable <NSCopying>
{
    struct {
        int *list;
        unsigned long long count;
        unsigned long long size;
    } _mutationTriggers;
    int _evaluationType;
    NSMutableArray *_filters;
    CKDPIdentifier *_identifier;
    CKDPSubscriptionNotification *_notification;
    int _owner;
    NSMutableArray *_recordTypes;
    CKDPRecordZoneIdentifier *_zoneIdentifier;
    BOOL _fireOnce;
    struct {
        unsigned int evaluationType:1;
        unsigned int owner:1;
        unsigned int fireOnce:1;
    } _has;
}

@property (nonatomic) int evaluationType; // @synthesize evaluationType=_evaluationType;
@property (strong, nonatomic) NSMutableArray *filters; // @synthesize filters=_filters;
@property (nonatomic) BOOL fireOnce; // @synthesize fireOnce=_fireOnce;
@property (nonatomic) BOOL hasEvaluationType;
@property (nonatomic) BOOL hasFireOnce;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasNotification;
@property (nonatomic) BOOL hasOwner;
@property (readonly, nonatomic) BOOL hasZoneIdentifier;
@property (strong, nonatomic) CKDPIdentifier *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) int *mutationTriggers;
@property (readonly, nonatomic) unsigned long long mutationTriggersCount;
@property (strong, nonatomic) CKDPSubscriptionNotification *notification; // @synthesize notification=_notification;
@property (nonatomic) int owner; // @synthesize owner=_owner;
@property (strong, nonatomic) NSMutableArray *recordTypes; // @synthesize recordTypes=_recordTypes;
@property (strong, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier; // @synthesize zoneIdentifier=_zoneIdentifier;

+ (Class)filtersType;
+ (Class)recordTypesType;
- (void).cxx_destruct;
- (int)StringAsEvaluationType:(id)arg1;
- (int)StringAsMutationTriggers:(id)arg1;
- (int)StringAsOwner:(id)arg1;
- (void)addFilters:(id)arg1;
- (void)addMutationTriggers:(int)arg1;
- (void)addRecordTypes:(id)arg1;
- (void)clearFilters;
- (void)clearMutationTriggers;
- (void)clearRecordTypes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)evaluationTypeAsString:(int)arg1;
- (id)filtersAtIndex:(unsigned long long)arg1;
- (unsigned long long)filtersCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)mutationTriggersAsString:(int)arg1;
- (int)mutationTriggersAtIndex:(unsigned long long)arg1;
- (id)ownerAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)recordTypesAtIndex:(unsigned long long)arg1;
- (unsigned long long)recordTypesCount;
- (void)setMutationTriggers:(int *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end
