//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/NSCopying-Protocol.h>

@class NSArray, NSDictionary, NSDiffableDataSourceSnapshot, NSSet, SBHIconLibraryQuery, SBHLocalizedIndexedCollation;

@interface SBHIconLibraryQueryResult : NSObject <NSCopying>
{
    NSDictionary *_iconForItemIdentifier;
    unsigned long long _totalNumberOfItems;
    unsigned long long _queryResultIdx;
    SBHIconLibraryQuery *_query;
    NSSet *_icons;
    SBHLocalizedIndexedCollation *_collation;
    NSDiffableDataSourceSnapshot *_snapshot;
    unsigned long long _sortMethodology;
}

@property (strong, nonatomic) SBHLocalizedIndexedCollation *collation; // @synthesize collation=_collation;
@property (readonly, copy, nonatomic) NSSet *icons; // @synthesize icons=_icons;
@property (readonly, nonatomic, getter=isNullQueryResult) BOOL nullQueryResult;
@property (readonly, nonatomic) SBHIconLibraryQuery *query; // @synthesize query=_query;
@property (readonly, nonatomic) NSArray *sectionIdentifiers;
@property (readonly, copy, nonatomic) NSArray *sectionIndexTitles;
@property (copy, nonatomic) NSDiffableDataSourceSnapshot *snapshot; // @synthesize snapshot=_snapshot;
@property (readonly, nonatomic) unsigned long long sortMethodology; // @synthesize sortMethodology=_sortMethodology;
@property (readonly, nonatomic) unsigned long long totalNumberOfItems;

+ (void)_hydrateSnapshot:(id)arg1 fromIcons:(id)arg2 query:(id)arg3 outCollation:(id *)arg4 outIconForItemIdentifier:(id *)arg5 outSortMethodology:(unsigned long long *)arg6 sortComparator:(CDUnknownBlockType)arg7;
+ (id)nullQueryResults;
- (void).cxx_destruct;
- (id)_firstExtantSectionWithCollationIndexGreaterThan:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)iconAtIndexPath:(id)arg1;
- (id)iconForItemIdentifier:(id)arg1;
- (id)iconsForSectionAtIndex:(unsigned long long)arg1;
- (long long)indexOfSectionForSectionIndexTitleAtIndex:(long long)arg1;
- (long long)indexOfSectionIdentifier:(id)arg1;
- (id)indexPathForIcon:(id)arg1;
- (id)initWithQuery:(id)arg1 icons:(id)arg2 snapshot:(id)arg3 collation:(id)arg4 iconForitemIdentifier:(id)arg5 sortMethodology:(unsigned long long)arg6;
- (id)initWithQuery:(id)arg1 icons:(id)arg2 sortComparator:(CDUnknownBlockType)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToQueryResult:(id)arg1;
- (id)itemIdentifierForIcon:(id)arg1;
- (id)sectionIdentifierAtIndex:(unsigned long long)arg1;
- (id)sectionIdentifierForIcon:(id)arg1;
- (id)titleForSectionAtIndex:(long long)arg1;
- (id)titleForSectionIdentifier:(id)arg1;

@end

