//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOEnrouteNotice : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_guidances;
    NSString *_objectIdentifier;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _highlightDistance;
    unsigned int _objectGroupId;
    unsigned int _priority;
    int _type;
    struct {
        unsigned int has_highlightDistance:1;
        unsigned int has_objectGroupId:1;
        unsigned int has_priority:1;
        unsigned int has_type:1;
        unsigned int read_unknownFields:1;
        unsigned int read_guidances:1;
        unsigned int read_objectIdentifier:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_guidances:1;
        unsigned int wrote_objectIdentifier:1;
        unsigned int wrote_highlightDistance:1;
        unsigned int wrote_objectGroupId:1;
        unsigned int wrote_priority:1;
        unsigned int wrote_type:1;
    } _flags;
}

@property (strong, nonatomic) NSMutableArray *guidances;
@property (nonatomic) BOOL hasHighlightDistance;
@property (nonatomic) BOOL hasObjectGroupId;
@property (readonly, nonatomic) BOOL hasObjectIdentifier;
@property (nonatomic) BOOL hasPriority;
@property (nonatomic) BOOL hasType;
@property (nonatomic) unsigned int highlightDistance;
@property (nonatomic) unsigned int objectGroupId;
@property (strong, nonatomic) NSString *objectIdentifier;
@property (nonatomic) unsigned int priority;
@property (nonatomic) int type;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)guidanceType;
+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)_addNoFlagsGuidance:(id)arg1;
- (void)_readGuidances;
- (void)_readObjectIdentifier;
- (void)addGuidance:(id)arg1;
- (void)clearGuidances;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)guidanceAtIndex:(unsigned long long)arg1;
- (unsigned long long)guidancesCount;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
