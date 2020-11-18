//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAddress, GEOPDIndexQueryNode, GEOPDRecentRouteInfo, GEOPDViewportInfo, NSMutableArray, NSString, PBUnknownFields;

@interface GEOPDSiriSearchParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOAddress *_address;
    NSMutableArray *_businessCategoryFilters;
    GEOPDIndexQueryNode *_indexFilter;
    unsigned int _maxResultCount;
    GEOPDRecentRouteInfo *_recentRouteInfo;
    NSString *_searchString;
    NSMutableArray *_searchSubstringDescriptors;
    int _sortOrder;
    GEOPDViewportInfo *_viewportInfo;
    BOOL _isStrictMapRegion;
    BOOL _structuredSearch;
    struct {
        unsigned int maxResultCount:1;
        unsigned int sortOrder:1;
        unsigned int isStrictMapRegion:1;
        unsigned int structuredSearch:1;
    } _has;
}

@property (strong, nonatomic) GEOAddress *address; // @synthesize address=_address;
@property (strong, nonatomic) NSMutableArray *businessCategoryFilters; // @synthesize businessCategoryFilters=_businessCategoryFilters;
@property (readonly, nonatomic) BOOL hasAddress;
@property (readonly, nonatomic) BOOL hasIndexFilter;
@property (nonatomic) BOOL hasIsStrictMapRegion;
@property (nonatomic) BOOL hasMaxResultCount;
@property (readonly, nonatomic) BOOL hasRecentRouteInfo;
@property (readonly, nonatomic) BOOL hasSearchString;
@property (nonatomic) BOOL hasSortOrder;
@property (nonatomic) BOOL hasStructuredSearch;
@property (readonly, nonatomic) BOOL hasViewportInfo;
@property (strong, nonatomic) GEOPDIndexQueryNode *indexFilter; // @synthesize indexFilter=_indexFilter;
@property (nonatomic) BOOL isStrictMapRegion; // @synthesize isStrictMapRegion=_isStrictMapRegion;
@property (nonatomic) unsigned int maxResultCount; // @synthesize maxResultCount=_maxResultCount;
@property (strong, nonatomic) GEOPDRecentRouteInfo *recentRouteInfo; // @synthesize recentRouteInfo=_recentRouteInfo;
@property (strong, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property (strong, nonatomic) NSMutableArray *searchSubstringDescriptors; // @synthesize searchSubstringDescriptors=_searchSubstringDescriptors;
@property (nonatomic) int sortOrder; // @synthesize sortOrder=_sortOrder;
@property (nonatomic) BOOL structuredSearch; // @synthesize structuredSearch=_structuredSearch;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (strong, nonatomic) GEOPDViewportInfo *viewportInfo; // @synthesize viewportInfo=_viewportInfo;

+ (Class)businessCategoryFilterType;
+ (Class)searchSubstringDescriptorType;
- (int)StringAsSortOrder:(id)arg1;
- (void)addBusinessCategoryFilter:(id)arg1;
- (void)addSearchSubstringDescriptor:(id)arg1;
- (id)businessCategoryFilterAtIndex:(unsigned long long)arg1;
- (unsigned long long)businessCategoryFiltersCount;
- (void)clearBusinessCategoryFilters;
- (void)clearSearchSubstringDescriptors;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)searchSubstringDescriptorAtIndex:(unsigned long long)arg1;
- (unsigned long long)searchSubstringDescriptorsCount;
- (id)sortOrderAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
