//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPSectionedCollection.h>

@class _MPLazySectionedCollectionStorage;
@protocol MPLazySectionedCollectionDataSource;

@interface MPLazySectionedCollection : MPSectionedCollection
{
    _MPLazySectionedCollectionStorage *_storage;
    struct os_unfair_lock_s _mapLock;
    id<MPLazySectionedCollectionDataSource> _dataSource;
}

@property (strong, nonatomic) id<MPLazySectionedCollectionDataSource> dataSource; // @synthesize dataSource=_dataSource;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_cachedObjectAtIndexPath:(id)arg1;
- (void)_updateCacheWithObject:(id)arg1 atIndexPath:(id)arg2;
- (id)allItems;
- (id)allSections;
- (void)dealloc;
- (void)enumerateItemsInSectionAtIndex:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSectionsUsingBlock:(CDUnknownBlockType)arg1;
- (id)firstItem;
- (id)firstSection;
- (BOOL)hasSameContentAsSectionedCollection:(id)arg1;
- (id)identifiersForItemAtIndexPath:(id)arg1;
- (id)identifiersForSectionAtIndex:(long long)arg1;
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1;
- (id)initWithDataSource:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (id)itemsInSectionAtIndex:(long long)arg1;
- (id)lastItem;
- (id)lastSection;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)sectionAtIndex:(long long)arg1;

@end
