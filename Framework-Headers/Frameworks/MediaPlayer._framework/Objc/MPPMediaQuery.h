//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@class NSMutableArray;

@interface MPPMediaQuery : PBCodable <NSCopying>
{
    int _entityOrder;
    NSMutableArray *_filterPredicates;
    int _groupingType;
    NSMutableArray *_staticEntityIdentifiers;
    int _staticEntityType;
    BOOL _filteringDisabled;
    BOOL _includeNonLibraryEntities;
    struct {
        unsigned int entityOrder:1;
        unsigned int groupingType:1;
        unsigned int staticEntityType:1;
        unsigned int filteringDisabled:1;
        unsigned int includeNonLibraryEntities:1;
    } _has;
}

@property (nonatomic) int entityOrder; // @synthesize entityOrder=_entityOrder;
@property (strong, nonatomic) NSMutableArray *filterPredicates; // @synthesize filterPredicates=_filterPredicates;
@property (nonatomic) BOOL filteringDisabled; // @synthesize filteringDisabled=_filteringDisabled;
@property (nonatomic) int groupingType; // @synthesize groupingType=_groupingType;
@property (nonatomic) BOOL hasEntityOrder;
@property (nonatomic) BOOL hasFilteringDisabled;
@property (nonatomic) BOOL hasGroupingType;
@property (nonatomic) BOOL hasIncludeNonLibraryEntities;
@property (nonatomic) BOOL hasStaticEntityType;
@property (nonatomic) BOOL includeNonLibraryEntities; // @synthesize includeNonLibraryEntities=_includeNonLibraryEntities;
@property (strong, nonatomic) NSMutableArray *staticEntityIdentifiers; // @synthesize staticEntityIdentifiers=_staticEntityIdentifiers;
@property (nonatomic) int staticEntityType; // @synthesize staticEntityType=_staticEntityType;

+ (Class)filterPredicatesType;
+ (Class)staticEntityIdentifiersType;
- (void).cxx_destruct;
- (int)StringAsEntityOrder:(id)arg1;
- (int)StringAsGroupingType:(id)arg1;
- (int)StringAsStaticEntityType:(id)arg1;
- (void)addFilterPredicates:(id)arg1;
- (void)addStaticEntityIdentifiers:(id)arg1;
- (void)clearFilterPredicates;
- (void)clearStaticEntityIdentifiers;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entityOrderAsString:(int)arg1;
- (id)filterPredicatesAtIndex:(unsigned long long)arg1;
- (unsigned long long)filterPredicatesCount;
- (id)groupingTypeAsString:(int)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)staticEntityIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)staticEntityIdentifiersCount;
- (id)staticEntityTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

