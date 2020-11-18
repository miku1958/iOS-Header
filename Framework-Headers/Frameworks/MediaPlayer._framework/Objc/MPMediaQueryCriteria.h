//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@class NSArray, NSDictionary, NSMutableSet, NSSet;

@interface MPMediaQueryCriteria : NSObject <NSCopying>
{
    NSMutableSet *_filterPredicates;
    unsigned long long _entityOrder;
    long long _groupingType;
    unsigned long long _entityLimit;
    NSArray *_orderingProperties;
    NSSet *_itemPropertiesToFetch;
    NSSet *_collectionPropertiesToFetch;
    BOOL _useSections;
    BOOL _ignoreSystemFilterPredicates;
    BOOL _ignoreRestrictionsPredicates;
    BOOL _includeNonLibraryEntities;
    BOOL _includeEntitiesWithBlankNames;
    NSDictionary *_orderingDirectionMappings;
}

@property (copy, nonatomic) NSSet *collectionPropertiesToFetch; // @synthesize collectionPropertiesToFetch=_collectionPropertiesToFetch;
@property (nonatomic) unsigned long long entityLimit; // @synthesize entityLimit=_entityLimit;
@property (nonatomic) unsigned long long entityOrder; // @synthesize entityOrder=_entityOrder;
@property (readonly, nonatomic) BOOL excludesEntitiesWithBlankNames;
@property (copy, nonatomic) NSSet *filterPredicates; // @synthesize filterPredicates=_filterPredicates;
@property (nonatomic) long long groupingType; // @synthesize groupingType=_groupingType;
@property (nonatomic) BOOL ignoreRestrictionsPredicates; // @synthesize ignoreRestrictionsPredicates=_ignoreRestrictionsPredicates;
@property (nonatomic) BOOL ignoreSystemFilterPredicates; // @synthesize ignoreSystemFilterPredicates=_ignoreSystemFilterPredicates;
@property (nonatomic) BOOL includeEntitiesWithBlankNames; // @synthesize includeEntitiesWithBlankNames=_includeEntitiesWithBlankNames;
@property (nonatomic) BOOL includeNonLibraryEntities; // @synthesize includeNonLibraryEntities=_includeNonLibraryEntities;
@property (copy, nonatomic) NSSet *itemPropertiesToFetch; // @synthesize itemPropertiesToFetch=_itemPropertiesToFetch;
@property (copy, nonatomic) NSDictionary *orderingDirectionMappings; // @synthesize orderingDirectionMappings=_orderingDirectionMappings;
@property (copy, nonatomic) NSArray *orderingProperties; // @synthesize orderingProperties=_orderingProperties;
@property (readonly, nonatomic) BOOL specifiesPlaylistItems;

- (void).cxx_destruct;
- (id)ML3CollectionsQueryInLibrary:(id)arg1;
- (id)ML3ItemsQueryInLibrary:(id)arg1;
- (id)ML3ItemsQueryInLibrary:(id)arg1 orderingTerms:(id)arg2 nameBlankProperty:(id)arg3;
- (id)ML3OrderingTermsForGroupingType:(long long)arg1;
- (id)ML3OrderingTermsForMPOrderingProperties:(id)arg1 directionalityMapping:(id)arg2 entityClass:(Class)arg3;
- (void)addFilterPredicate:(id)arg1;
- (void)addFilterPredicates:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)predicateForProperty:(id)arg1;
- (void)removeFilterPredicate:(id)arg1;
- (void)removePredicatesForProperty:(id)arg1;

@end

