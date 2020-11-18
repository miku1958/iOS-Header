//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceLookupParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_62a50c50 _muids;
    NSMutableArray *_identifiers;
    int _resultProviderId;
    BOOL _enablePartialClientization;
    CDStruct_2527025c _has;
}

@property (nonatomic) BOOL enablePartialClientization; // @synthesize enablePartialClientization=_enablePartialClientization;
@property (nonatomic) BOOL hasEnablePartialClientization;
@property (nonatomic) BOOL hasResultProviderId;
@property (strong, nonatomic) NSMutableArray *identifiers;
@property (readonly, nonatomic) unsigned long long *muids;
@property (readonly, nonatomic) unsigned long long muidsCount;
@property (nonatomic) int resultProviderId; // @synthesize resultProviderId=_resultProviderId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)identifierType;
- (void).cxx_destruct;
- (void)addIdentifier:(id)arg1;
- (void)addMuid:(unsigned long long)arg1;
- (void)clearIdentifiers;
- (void)clearMuids;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)identifierAtIndex:(unsigned long long)arg1;
- (unsigned long long)identifiersCount;
- (id)initWithIdentifiers:(id)arg1 resultProviderID:(int)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muidAtIndex:(unsigned long long)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setMuids:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end

