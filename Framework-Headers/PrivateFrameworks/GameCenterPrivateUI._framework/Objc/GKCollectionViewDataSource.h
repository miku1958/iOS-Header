//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GameCenterPrivateUI/GKCollectionViewDataSourceDelegate-Protocol.h>
#import <GameCenterPrivateUI/UICollectionViewDataSource-Protocol.h>

@class GKGridLayoutMetrics, GKSectionMetrics, NSHashTable, NSMutableDictionary, NSString;
@protocol GKCollectionViewDataSourceDelegate;

@interface GKCollectionViewDataSource : NSObject <GKCollectionViewDataSourceDelegate, UICollectionViewDataSource>
{
    id<GKCollectionViewDataSourceDelegate> _delegate;
    NSMutableDictionary *_kindsToFactories;
    NSHashTable *_listeners;
    NSMutableDictionary *_sectionsToMetrics;
    NSMutableDictionary *_sectionsToSearchKeys;
    GKGridLayoutMetrics *_dataSourceMetricsInternal;
    GKSectionMetrics *_defaultSectionMetricsInternal;
    NSString *_defaultSearchKey;
}

@property (copy, nonatomic) GKGridLayoutMetrics *dataSourceMetrics; // @dynamic dataSourceMetrics;
@property (strong, nonatomic) GKGridLayoutMetrics *dataSourceMetricsInternal; // @synthesize dataSourceMetricsInternal=_dataSourceMetricsInternal;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) NSString *defaultSearchKey; // @synthesize defaultSearchKey=_defaultSearchKey;
@property (copy, nonatomic) GKSectionMetrics *defaultSectionMetrics; // @dynamic defaultSectionMetrics;
@property (strong, nonatomic) GKSectionMetrics *defaultSectionMetricsInternal; // @synthesize defaultSectionMetricsInternal=_defaultSectionMetricsInternal;
@property (nonatomic) id<GKCollectionViewDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isRootDataSource;
@property (readonly, nonatomic) BOOL isSearchable;
@property (strong, nonatomic) NSMutableDictionary *kindsToFactories; // @synthesize kindsToFactories=_kindsToFactories;
@property (strong, nonatomic) NSHashTable *listeners; // @synthesize listeners=_listeners;
@property (strong, nonatomic) NSMutableDictionary *sectionsToMetrics; // @synthesize sectionsToMetrics=_sectionsToMetrics;
@property (strong, nonatomic) NSMutableDictionary *sectionsToSearchKeys; // @synthesize sectionsToSearchKeys=_sectionsToSearchKeys;
@property (readonly) Class superclass;

- (id)_gkDescriptionWithChildren:(int)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 defaultViewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 evaluateFactoryForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 isRecursive:(BOOL)arg4;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionViewDidBecomeInactive:(id)arg1;
- (void)collectionViewWillBecomeActive:(id)arg1;
- (void)configureCollectionView:(id)arg1;
- (BOOL)containsDataSource:(id)arg1;
- (id)createMetricsTreeWithGridLayout:(id)arg1;
- (id)dataSourceForSection:(unsigned long long)arg1;
- (void)dealloc;
- (void)enumerateItemsAndIndexPathsUsingBlock:(CDUnknownBlockType)arg1;
- (id)indexPathsForItem:(id)arg1;
- (id)init;
- (BOOL)item:(id)arg1 matchesSearchTerms:(id)arg2 inSection:(long long)arg3;
- (id)itemAtIndexPath:(id)arg1;
- (void)loadDataWithCompletionHandlerAndError:(CDUnknownBlockType)arg1;
- (id)localDescription;
- (id)metricsForSection:(long long)arg1;
- (id)metricsForSectionInternal:(long long)arg1;
- (void)notifyBatchUpdate:(CDUnknownBlockType)arg1;
- (void)notifyBatchUpdate:(CDUnknownBlockType)arg1 complete:(CDUnknownBlockType)arg2;
- (void)notifyDidReloadData;
- (void)notifyItemMovedFromIndexPath:(id)arg1 toIndexPaths:(id)arg2;
- (void)notifyItemsInsertedAtIndexPaths:(id)arg1;
- (void)notifyItemsRefreshedAtIndexPaths:(id)arg1;
- (void)notifyItemsRemovedAtIndexPaths:(id)arg1;
- (void)notifyPlaceholderUpdated:(BOOL)arg1;
- (void)notifySectionMovedFrom:(long long)arg1 to:(long long)arg2;
- (void)notifySectionsInserted:(id)arg1;
- (void)notifySectionsMovedWithItems;
- (void)notifySectionsRefreshed:(id)arg1;
- (void)notifySectionsRemoved:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;
- (void)registerSupplementaryViewOfKind:(id)arg1 withClass:(Class)arg2 target:(id)arg3 configurator:(SEL)arg4;
- (void)registerSupplementaryViewOfKind:(id)arg1 withFactory:(id)arg2;
- (void)removeItemAtIndexPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)searchKeyForSection:(long long)arg1;
- (unsigned long long)sectionForDataSource:(id)arg1;
- (void)setMetrics:(id)arg1 forSection:(long long)arg2;
- (void)setSearchKey:(id)arg1 forSection:(long long)arg2;
- (id)supplementaryViewFactoryForKind:(id)arg1;
- (id)targetForAction:(SEL)arg1;
- (long long)totalItemCount;
- (void)updateSupplementaryMetricsForKey:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end

