//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUILibraryStackViewController.h>

#import <VideosUI/TVShelfViewLayoutDelegate-Protocol.h>
#import <VideosUI/UICollectionViewDelegate-Protocol.h>
#import <VideosUI/VUILibraryDataSourceDelegate-Protocol.h>
#import <VideosUI/VUILibraryEpisodeFooterCellDelegate-Protocol.h>
#import <VideosUI/VUILibraryEpisodeShelfViewControllerDelegate-Protocol.h>
#import <VideosUI/VUIProductLockupViewDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, UICollectionViewDiffableDataSource, VUILibraryMediaCollectionViewModel, VUIMediaCollection, VUIMediaEntitiesDataSource, VUIViewControllerContentPresenter;

__attribute__((visibility("hidden")))
@interface VUILibraryMediaCollectionViewController : VUILibraryStackViewController <UICollectionViewDelegate, VUIProductLockupViewDelegate, TVShelfViewLayoutDelegate, VUILibraryEpisodeFooterCellDelegate, VUILibraryEpisodeShelfViewControllerDelegate, VUILibraryDataSourceDelegate>
{
    BOOL _canShowMultipleSeasons;
    BOOL _seasonsFetchHasCompleted;
    BOOL _episodesFetchHasCompleted;
    VUIMediaCollection *_mediaCollection;
    VUIViewControllerContentPresenter *_contentPresenter;
    NSArray *_seasons;
    NSArray *_episodes;
    NSArray *_episodeGroups;
    VUILibraryMediaCollectionViewModel *_mediaCollectionViewModel;
    NSMutableDictionary *_downloadButtonBySeasonIdentifier;
    NSString *_showTitle;
    VUIMediaEntitiesDataSource *_seasonsDataSource;
    VUIMediaEntitiesDataSource *_episodesDataSource;
    UICollectionViewDiffableDataSource *_diffableDataSource;
}

@property (nonatomic) BOOL canShowMultipleSeasons; // @synthesize canShowMultipleSeasons=_canShowMultipleSeasons;
@property (strong, nonatomic) VUIViewControllerContentPresenter *contentPresenter; // @synthesize contentPresenter=_contentPresenter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property (strong, nonatomic) NSMutableDictionary *downloadButtonBySeasonIdentifier; // @synthesize downloadButtonBySeasonIdentifier=_downloadButtonBySeasonIdentifier;
@property (strong, nonatomic) NSArray *episodeGroups; // @synthesize episodeGroups=_episodeGroups;
@property (strong, nonatomic) NSArray *episodes; // @synthesize episodes=_episodes;
@property (strong, nonatomic) VUIMediaEntitiesDataSource *episodesDataSource; // @synthesize episodesDataSource=_episodesDataSource;
@property (nonatomic) BOOL episodesFetchHasCompleted; // @synthesize episodesFetchHasCompleted=_episodesFetchHasCompleted;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) VUIMediaCollection *mediaCollection; // @synthesize mediaCollection=_mediaCollection;
@property (strong, nonatomic) VUILibraryMediaCollectionViewModel *mediaCollectionViewModel; // @synthesize mediaCollectionViewModel=_mediaCollectionViewModel;
@property (strong, nonatomic) NSArray *seasons; // @synthesize seasons=_seasons;
@property (strong, nonatomic) VUIMediaEntitiesDataSource *seasonsDataSource; // @synthesize seasonsDataSource=_seasonsDataSource;
@property (nonatomic) BOOL seasonsFetchHasCompleted; // @synthesize seasonsFetchHasCompleted=_seasonsFetchHasCompleted;
@property (strong, nonatomic) NSString *showTitle; // @synthesize showTitle=_showTitle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_allFetchesHaveCompleted;
- (void)_buildMediaCollectionViewModel;
- (id)_createDiffableDataSourceForCollectionView:(id)arg1;
- (id)_createDiffableDataSourceSnapshot;
- (id)_episodeShelfViewControllerWithSeason:(id)arg1 episodes:(id)arg2;
- (id)_episodesBySeasonIdentifier;
- (id)_productLockupViewWithSeason:(id)arg1;
- (id)_seasonViewModelByIdentifier:(id)arg1;
- (id)_seasonViewModelIdentifiers;
- (void)_updateAfterContentWasManuallyDeleted:(BOOL)arg1;
- (void)_updateDeletedContentErrorMessage;
- (void)_updateEpisodeShelvesWithLatestEpisodes;
- (void)_updateMediaCollectionViewModelForSeasons;
- (void)_updateProductLockupView:(id)arg1 withSeason:(id)arg2;
- (void)_updateProductLockupViewWithSeasonIdentifier:(id)arg1;
- (BOOL)_usingEpisodesGroupFetch;
- (void)addDownloadButtonToProductLockupView:(id)arg1 forSeason:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)configureWithCollectionView:(id)arg1;
- (void)contentDescriptionExpanded;
- (void)dataSourceDidFinishFetching:(id)arg1;
- (id)initWithTitle:(id)arg1 withSeasonsDataSource:(id)arg2 withEpisodesDataSource:(id)arg3;
- (void)libraryEpisodesShelfViewController:(id)arg1 didRemoveDownloadForAssetController:(id)arg2;
- (void)loadView;
- (void)start;
- (void)titleButtonPressedForStoreId:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
