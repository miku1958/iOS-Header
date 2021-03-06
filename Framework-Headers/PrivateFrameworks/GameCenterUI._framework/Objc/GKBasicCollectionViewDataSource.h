//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKCollectionViewDataSource.h>

#import <GameCenterUI/NSCopying-Protocol.h>

@class NSArray, NSPredicate;

@interface GKBasicCollectionViewDataSource : GKCollectionViewDataSource <NSCopying>
{
    NSArray *_items;
    SEL _showAllAction;
    unsigned long long _pageSize;
    NSPredicate *_filterPredicate;
    struct _NSRange _preloadedRange;
}

@property (strong, nonatomic) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property (copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property (nonatomic) unsigned long long pageSize; // @synthesize pageSize=_pageSize;
@property (nonatomic) struct _NSRange preloadedRange; // @synthesize preloadedRange=_preloadedRange;
@property (nonatomic) SEL showAllAction; // @synthesize showAllAction=_showAllAction;

- (id)_gkDescriptionWithChildren:(long long)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionViewDidBecomeInactive:(id)arg1;
- (void)configureCollectionView:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)countOfItems;
- (void)dealloc;
- (id)indexPathsForItem:(id)arg1;
- (id)init;
- (void)insertItems:(id)arg1 atIndexes:(id)arg2;
- (id)itemAtIndexPath:(id)arg1;
- (id)itemsAtIndexes:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)preloadImagesForItems:(id)arg1 startingAtIndex:(unsigned long long)arg2 loadBlock:(CDUnknownBlockType)arg3;
- (void)removeItemAtIndexPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeItemsAtIndexes:(id)arg1;
- (void)replaceItemsAtIndexes:(id)arg1 withItems:(id)arg2;
- (id)sectionTitle;
- (void)setItems:(id)arg1 animated:(BOOL)arg2 complete:(CDUnknownBlockType)arg3;
- (void)setItemsNoNotify:(id)arg1;

@end

