//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSArray, __UIDiffableDataSourceSnapshot;

@interface NSDiffableDataSourceSnapshot : NSObject <NSCopying>
{
    __UIDiffableDataSourceSnapshot *_impl;
}

@property (readonly, nonatomic) __UIDiffableDataSourceSnapshot *impl; // @synthesize impl=_impl;
@property (readonly, nonatomic) NSArray *itemIdentifiers;
@property (readonly, nonatomic) long long numberOfItems;
@property (readonly, nonatomic) long long numberOfSections;
@property (readonly, nonatomic) NSArray *sectionIdentifiers;

- (void).cxx_destruct;
- (id)_identifierAfterIdentifier:(id)arg1;
- (id)_identifierBeforeIdentifier:(id)arg1;
- (void)appendItemsWithIdentifiers:(id)arg1;
- (void)appendItemsWithIdentifiers:(id)arg1 intoSectionWithIdentifier:(id)arg2;
- (void)appendSectionsWithIdentifiers:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)deleteAllItems;
- (void)deleteItemsWithIdentifiers:(id)arg1;
- (void)deleteSectionsWithIdentifiers:(id)arg1;
- (id)description;
- (id)identifierForIndexPath:(id)arg1;
- (long long)indexOfItemIdentifier:(id)arg1;
- (long long)indexOfSectionIdentifier:(id)arg1;
- (id)indexPathForIdentifier:(id)arg1;
- (id)init;
- (id)initWithDataSource:(id)arg1;
- (id)initWithState:(id)arg1;
- (void)insertItemsWithIdentifiers:(id)arg1 afterItemWithIdentifier:(id)arg2;
- (void)insertItemsWithIdentifiers:(id)arg1 beforeItemWithIdentifier:(id)arg2;
- (void)insertSectionsWithIdentifiers:(id)arg1 afterSectionWithIdentifier:(id)arg2;
- (void)insertSectionsWithIdentifiers:(id)arg1 beforeSectionWithIdentifier:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)itemIdentifiersInSectionWithIdentifier:(id)arg1;
- (void)moveItemWithIdentifier:(id)arg1 afterItemWithIdentifier:(id)arg2;
- (void)moveItemWithIdentifier:(id)arg1 beforeItemWithIdentifier:(id)arg2;
- (void)moveSectionWithIdentifier:(id)arg1 afterSectionWithIdentifier:(id)arg2;
- (void)moveSectionWithIdentifier:(id)arg1 beforeSectionWithIdentifier:(id)arg2;
- (long long)numberOfItemsInSection:(id)arg1;
- (void)reloadItemsWithIdentifiers:(id)arg1;
- (void)reloadSectionsWithIdentifiers:(id)arg1;
- (struct _NSRange)sectionGlobalItemRangeForSection:(long long)arg1;
- (id)sectionIdentifierForSectionContainingItemIdentifier:(id)arg1;
- (id)state;

@end

