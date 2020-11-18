//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields, _INPBContact, _INPBDateTimeRange, _INPBIntentMetadata;

@interface _INPBSearchCallHistoryIntent : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _callCapabilities;
    CDStruct_95bda58d _callTypes;
    _INPBDateTimeRange *_dateCreated;
    _INPBIntentMetadata *_intentMetadata;
    int _preferredCallProvider;
    _INPBContact *_recipient;
    BOOL _unseen;
    struct {
        unsigned int preferredCallProvider:1;
        unsigned int unseen:1;
    } _has;
}

@property (readonly, nonatomic) int *callCapabilities;
@property (readonly, nonatomic) unsigned long long callCapabilitiesCount;
@property (readonly, nonatomic) int *callTypes;
@property (readonly, nonatomic) unsigned long long callTypesCount;
@property (strong, nonatomic) _INPBDateTimeRange *dateCreated; // @synthesize dateCreated=_dateCreated;
@property (readonly, nonatomic) BOOL hasDateCreated;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) BOOL hasPreferredCallProvider;
@property (readonly, nonatomic) BOOL hasRecipient;
@property (nonatomic) BOOL hasUnseen;
@property (strong, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property (nonatomic) int preferredCallProvider; // @synthesize preferredCallProvider=_preferredCallProvider;
@property (strong, nonatomic) _INPBContact *recipient; // @synthesize recipient=_recipient;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (nonatomic) BOOL unseen; // @synthesize unseen=_unseen;

+ (id)options;
- (void).cxx_destruct;
- (int)StringAsCallCapabilities:(id)arg1;
- (int)StringAsCallTypes:(id)arg1;
- (int)StringAsPreferredCallProvider:(id)arg1;
- (void)addCallCapabilities:(int)arg1;
- (void)addCallTypes:(int)arg1;
- (id)callCapabilitiesAsString:(int)arg1;
- (int)callCapabilitiesAtIndex:(unsigned long long)arg1;
- (id)callTypesAsString:(int)arg1;
- (int)callTypesAtIndex:(unsigned long long)arg1;
- (void)clearCallCapabilities;
- (void)clearCallTypes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)preferredCallProviderAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCallCapabilities:(int *)arg1 count:(unsigned long long)arg2;
- (void)setCallTypes:(int *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end

