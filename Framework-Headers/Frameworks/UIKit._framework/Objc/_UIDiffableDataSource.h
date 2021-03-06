//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, __UIDiffableDataSource;

@interface _UIDiffableDataSource : NSObject
{
    __UIDiffableDataSource *_dsImpl;
}

@property (readonly, nonatomic) NSArray *itemIdentifiers;
@property (readonly, nonatomic) long long numberOfItems;
@property (readonly, nonatomic) long long numberOfSections;
@property (readonly, nonatomic) NSArray *sectionIdentifiers;

- (void).cxx_destruct;
- (id)_impl;
- (void)appendItemsWithIdentifiers:(id)arg1;
- (void)appendItemsWithIdentifiers:(id)arg1 intoSectionWithIdentifier:(id)arg2;
- (void)appendSectionWithIdentifier:(id)arg1;
- (void)appendSectionsWithIdentifiers:(id)arg1;
- (void)applyDifferencesFromSnapshot:(id)arg1;
- (void)applyDifferencesFromSnapshot:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)applySnapshot:(id)arg1;
- (long long)defaultRowAnimation;
- (void)deleteAllItems;
- (void)deleteItemsWithIdentifiers:(id)arg1;
- (void)deleteSectionsWithIdentifiers:(id)arg1;
- (id)dsImpl;
- (id)emptySnapshot;
- (long long)indexOfItemIdentifier:(id)arg1;
- (long long)indexOfSectionIdentifier:(id)arg1;
- (id)indexPathForItemIdentifier:(id)arg1;
- (id)init;
- (id)initWithCollectionView:(id)arg1 cellProvider:(CDUnknownBlockType)arg2;
- (id)initWithCollectionView:(id)arg1 reuseIdentifierProvider:(CDUnknownBlockType)arg2 cellConfigurationHandler:(CDUnknownBlockType)arg3;
- (id)initWithDiffableDataSource:(id)arg1;
- (id)initWithTableView:(id)arg1 cellProvider:(CDUnknownBlockType)arg2;
- (id)initWithTableView:(id)arg1 reuseIdentifierProvider:(CDUnknownBlockType)arg2 cellConfigurationHandler:(CDUnknownBlockType)arg3;
- (id)initWithViewUpdatesSink:(id)arg1;
- (void)insertItemsWithIdentifiers:(id)arg1 afterItemWithIdentifier:(id)arg2;
- (void)insertItemsWithIdentifiers:(id)arg1 beforeItemWithIdentifier:(id)arg2;
- (void)insertSectionWithIdentifier:(id)arg1 afterSectionWithIdentifier:(id)arg2;
- (void)insertSectionWithIdentifier:(id)arg1 beforeSectionWithIdentifier:(id)arg2;
- (void)insertSectionsWithIdentifiers:(id)arg1 afterSectionWithIdentifier:(id)arg2;
- (void)insertSectionsWithIdentifiers:(id)arg1 beforeSectionWithIdentifier:(id)arg2;
- (id)itemIdentifierForIndexPath:(id)arg1;
- (id)itemIdentifiersInSectionWithIdentifier:(id)arg1;
- (void)moveItemWithIdentifier:(id)arg1 afterItemWithIdentifier:(id)arg2;
- (void)moveItemWithIdentifier:(id)arg1 beforeItemWithIdentifier:(id)arg2;
- (void)moveSectionWithIdentifier:(id)arg1 afterSectionWithIdentifier:(id)arg2;
- (void)moveSectionWithIdentifier:(id)arg1 beforeSectionWithIdentifier:(id)arg2;
- (long long)numberOfItemsInSection:(id)arg1;
- (void)reloadFromSnapshot:(id)arg1;
- (void)reloadFromSnapshot:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reloadItemsWithIdentifiers:(id)arg1;
- (void)reloadSectionsWithIdentifiers:(id)arg1;
- (id)sectionIdentifierForSectionContainingItemIdentifier:(id)arg1;
- (void)setDefaultRowAnimation:(long long)arg1;
- (id)snapshot;

@end

