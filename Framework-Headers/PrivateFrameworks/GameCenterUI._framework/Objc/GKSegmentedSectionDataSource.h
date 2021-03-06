//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKCollectionViewDataSource.h>

#import <GameCenterUI/GKSegmentInfoDelegagte-Protocol.h>

@class GKCollectionViewPlaceholderView, GKSegmentInfo, GKSegmentedSectionHeaderView, NSArray, NSMutableArray, NSString;

@interface GKSegmentedSectionDataSource : GKCollectionViewDataSource <GKSegmentInfoDelegagte>
{
    BOOL _usePlaceholder;
    BOOL _shouldHideSegment;
    BOOL _waitingForAnimation;
    NSString *_noContentTitle;
    NSString *_noContentMessage;
    NSString *_noContentButtonTitle;
    id _noContentButtonTarget;
    SEL _noContentButtonAction;
    Class _segmentedHeaderClass;
    NSMutableArray *_segmentInfos;
    GKSegmentedSectionHeaderView *_headerView;
    GKCollectionViewPlaceholderView *_placeholderView;
    GKSegmentInfo *_selectedSegmentInfo;
    GKCollectionViewDataSource *_rootDataSource;
}

@property (readonly, nonatomic) NSArray *dataSources;
@property (strong, nonatomic) GKSegmentedSectionHeaderView *headerView; // @synthesize headerView=_headerView;
@property (nonatomic) SEL noContentButtonAction; // @synthesize noContentButtonAction=_noContentButtonAction;
@property (nonatomic) id noContentButtonTarget; // @synthesize noContentButtonTarget=_noContentButtonTarget;
@property (strong, nonatomic) NSString *noContentButtonTitle; // @synthesize noContentButtonTitle=_noContentButtonTitle;
@property (strong, nonatomic) NSString *noContentMessage; // @synthesize noContentMessage=_noContentMessage;
@property (strong, nonatomic) NSString *noContentTitle; // @synthesize noContentTitle=_noContentTitle;
@property (strong, nonatomic) GKCollectionViewPlaceholderView *placeholderView; // @synthesize placeholderView=_placeholderView;
@property (strong, nonatomic) GKCollectionViewDataSource *rootDataSource; // @synthesize rootDataSource=_rootDataSource;
@property (strong, nonatomic) NSMutableArray *segmentInfos; // @synthesize segmentInfos=_segmentInfos;
@property (nonatomic) Class segmentedHeaderClass; // @synthesize segmentedHeaderClass=_segmentedHeaderClass;
@property (nonatomic) GKCollectionViewDataSource *selectedDataSource;
@property (nonatomic) unsigned long long selectedDataSourceIndex;
@property (strong, nonatomic) GKSegmentInfo *selectedSegmentInfo; // @synthesize selectedSegmentInfo=_selectedSegmentInfo;
@property (nonatomic) BOOL shouldHideSegment; // @synthesize shouldHideSegment=_shouldHideSegment;
@property (nonatomic) BOOL usePlaceholder; // @synthesize usePlaceholder=_usePlaceholder;
@property (nonatomic) BOOL waitingForAnimation; // @synthesize waitingForAnimation=_waitingForAnimation;

- (void).cxx_destruct;
- (id)_gkDescriptionWithChildren:(long long)arg1;
- (void)addDataSource:(id)arg1;
- (id)allTitles;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 evaluateFactoryForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 isRecursive:(BOOL)arg4;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionViewDidBecomeInactive:(id)arg1;
- (void)collectionViewWillBecomeActive:(id)arg1;
- (void)configureCollectionView:(id)arg1;
- (void)configureSegmentedHeader:(id)arg1;
- (BOOL)containsDataSource:(id)arg1;
- (id)createMetricsTreeWithGridLayout:(id)arg1;
- (void)dataSource:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;
- (void)dataSource:(id)arg1 didInsertSections:(id)arg2;
- (void)dataSource:(id)arg1 didMoveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)dataSource:(id)arg1 didMoveSection:(long long)arg2 toSection:(long long)arg3;
- (void)dataSource:(id)arg1 didRefreshItemsAtIndexPaths:(id)arg2;
- (void)dataSource:(id)arg1 didRefreshSections:(id)arg2;
- (void)dataSource:(id)arg1 didRemoveItemsAtIndexPaths:(id)arg2;
- (void)dataSource:(id)arg1 didRemoveSections:(id)arg2;
- (void)dataSource:(id)arg1 performBatchUpdate:(CDUnknownBlockType)arg2 complete:(CDUnknownBlockType)arg3;
- (void)dataSourceDidLoad;
- (void)dataSourceDidReloadData:(id)arg1;
- (id)dataSourceForSection:(unsigned long long)arg1;
- (void)dataSourceWillLoad;
- (id)description;
- (void)groupDidLoad:(id)arg1;
- (void)hoistSegmentedFactoryToRoot;
- (id)indexPathsForItem:(id)arg1;
- (id)infoForDataSource:(id)arg1;
- (id)infoForSegment:(long long)arg1;
- (void)infosChanged;
- (id)initWithDataSources:(id)arg1;
- (id)initWithDataSources:(id)arg1 rootDataSource:(id)arg2;
- (BOOL)item:(id)arg1 matchesSearchTerms:(id)arg2 inSection:(long long)arg3;
- (id)itemAtIndexPath:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;
- (void)removeDataSource:(id)arg1;
- (void)removeItemAtIndexPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)sectionForDataSource:(id)arg1;
- (void)segmentDidChangeLoadingState:(id)arg1;
- (void)selectedSegmentChanged:(id)arg1;
- (void)setSelectedDataSourceIndex:(unsigned long long)arg1 reload:(BOOL)arg2;
- (void)setTitle:(id)arg1 forDataSource:(id)arg2;
- (void)updatePlaceholderNotify:(BOOL)arg1;

@end

