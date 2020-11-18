//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <FuseUI/MusicActionableHeaderViewDelegate-Protocol.h>
#import <FuseUI/MusicClientContextConsuming-Protocol.h>
#import <FuseUI/MusicLibraryBrowseCollectionViewControllerDelegate-Protocol.h>
#import <FuseUI/MusicSplitInitialStateProviding-Protocol.h>
#import <FuseUI/MusicVerticalScrollingContainerViewControllerDelegate-Protocol.h>
#import <FuseUI/SKUIIndexBarControlDataSource-Protocol.h>
#import <FuseUI/SKUIIndexBarControlDelegate-Protocol.h>
#import <FuseUI/SKUIProxyScrollViewDelegate-Protocol.h>
#import <FuseUI/SKUITabBarItemRootViewController-Protocol.h>
#import <FuseUI/UIViewControllerRestoration-Protocol.h>

@class MusicActionableHeaderView, MusicClientContext, MusicHairlineView, MusicLibraryArtistsViewConfiguration, MusicLibraryBrowseCollectionViewController, MusicLibraryViewConfiguration, MusicStandaloneShuffleViewController, MusicSwitcherButtonContainerView, MusicVerticalScrollingContainerItem, MusicVerticalScrollingContainerViewController, NSArray, NSMutableArray, NSString, SKUIClientContext, SKUIIndexBarControl, SKUIProxyScrollView;
@protocol MusicIndexBarDataSource><MusicIndexBarScrollDelegate;

@interface MusicLibraryViewController : UIViewController <MusicActionableHeaderViewDelegate, MusicClientContextConsuming, MusicLibraryBrowseCollectionViewControllerDelegate, MusicVerticalScrollingContainerViewControllerDelegate, SKUIIndexBarControlDataSource, SKUIIndexBarControlDelegate, SKUIProxyScrollViewDelegate, UIViewControllerRestoration, MusicSplitInitialStateProviding, SKUITabBarItemRootViewController>
{
    MusicLibraryArtistsViewConfiguration *_artistsViewConfiguration;
    NSMutableArray *_entityProviderNotificationObservers;
    BOOL _hasIndexBarEntries;
    MusicHairlineView *_hairlineView;
    SKUIIndexBarControl *_indexBarControl;
    long long _indexBarControlVisibleTransactionCount;
    MusicVerticalScrollingContainerItem *_indexBarMinimumVerticalScrollingContainerItem;
    id<MusicIndexBarDataSource><MusicIndexBarScrollDelegate> _indexBarSupportDataSource;
    double _indexBarTrailingLayoutInsetAddition;
    BOOL _isContainedWithinSplitViewPrimary;
    BOOL _isIndexBarTracking;
    BOOL _isIndexBarVisible;
    UIViewController *_libraryBrowseViewController;
    BOOL _needsIndexBarVisibilityUpdate;
    SKUIProxyScrollView *_proxyScrollView;
    struct UIEdgeInsets _proxyScrollViewContentInsetAdditions;
    MusicActionableHeaderView *_recentlyAddedHeaderView;
    MusicLibraryBrowseCollectionViewController *_recentlyAddedViewController;
    MusicLibraryViewConfiguration *_selectedViewConfiguration;
    BOOL _shouldAnimatePendingIndexBarVisibilityUpdate;
    MusicStandaloneShuffleViewController *_shuffleAllViewController;
    MusicVerticalScrollingContainerViewController *_verticalScrollingContainerViewController;
    NSArray *_viewConfigurations;
    MusicClientContext *_clientContext;
    MusicSwitcherButtonContainerView *_switcherButtonContainerView;
}

@property (strong, nonatomic) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasPopulatedViewConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSArray *populatedViewConfigurations;
@property (readonly, copy, nonatomic) NSString *preferredSelectedViewIdentifier;
@property (readonly, nonatomic) MusicLibraryViewConfiguration *selectedViewConfiguration;
@property (readonly, nonatomic) UIViewController *selectedViewConfigurationViewController;
@property (readonly) Class superclass;
@property (strong, nonatomic) MusicSwitcherButtonContainerView *switcherButtonContainerView; // @synthesize switcherButtonContainerView=_switcherButtonContainerView;

+ (id)_recentlyAddedViewControllerWithClientContext:(id)arg1;
+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
- (void).cxx_destruct;
- (id)_calculateIndexBarBackgroundColor;
- (double)_calculateIndexBarControlWidth;
- (struct UIEdgeInsets)_calculateLayoutInsets;
- (void)_handleContentSizeCategoryDidChangeNotification:(id)arg1;
- (BOOL)_hasContentForViewConfiguration:(id)arg1;
- (void)_indexBarControlTouchAction:(id)arg1;
- (id)_indexBarControllingScrollView;
- (void)_indexBarDataSourceDidInvalidateNotification:(id)arg1;
- (void)_musicLibraryViewControllerCommonInitialization;
- (void)_recentlyAddedEntityProviderDidInvalidateNotification:(id)arg1;
- (void)_registerEntityProviderChangeNotifications;
- (void)_registerForNotificationsForIndexBarSupportDataSource:(id)arg1;
- (void)_reloadIndexBarControlAnimated:(BOOL)arg1;
- (void)_reloadLibraryBrowseViewController;
- (void)_switchToViewWithConfiguration:(id)arg1;
- (void)_unregisterEntityProviderChangeNotifications;
- (void)_unregisterForNotificationsForIndexBarSupportDataSource:(id)arg1;
- (void)_updateHairlineViewSize;
- (void)_updateIndexBarLayoutInsetsForVisibleIndexBarControl:(BOOL)arg1;
- (void)_updateIndexBarSupportDataSource;
- (void)_updateIndexBarVisibilityAnimated:(BOOL)arg1;
- (void)_updateRecentlyAddedHeaderMetricsAllowingInvalidationOfVerticalScrollingContainerLayout:(BOOL)arg1;
- (void)_updateRecentlyAddedHeaderViewSize;
- (void)_updateRecentlyAddedViewMoreButton;
- (void)_updateRecentlyAddedViewSize;
- (void)_updateSwitcherButtonContainerViewSize;
- (void)_updateVerticalScrollingContainerItems;
- (void)_updateViewLayoutInsets;
- (id)_verticalScrollingContainerViewController;
- (id)_viewConfigurations;
- (void)actionableHeaderViewDidSelectButton:(id)arg1;
- (void)collectionViewFlowLayoutLayoutMetricsWereUpdatedForLibraryBrowseCollectionViewController:(id)arg1;
- (id)contentScrollView;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)indexBarControl:(id)arg1 didSelectEntryAtIndexPath:(id)arg2;
- (id)indexBarControl:(id)arg1 entryAtIndexPath:(id)arg2;
- (long long)indexBarControl:(id)arg1 numberOfEntriesInSection:(long long)arg2;
- (void)indexBarControlDidSelectBeyondBottom:(id)arg1;
- (void)indexBarControlDidSelectBeyondTop:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithTabBarItem:(id)arg1;
- (BOOL)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2;
- (void)music_viewInheritedLayoutInsetsDidChange;
- (id)populatedIdentifierForUserActivityContainerItemType:(long long)arg1;
- (void)pushMoreRecentlyAddedView;
- (void)scrollViewDidChangeContentInset:(id)arg1;
- (id)selectViewConfigurationWithIdentifier:(id)arg1;
- (void)showInitialStateForSplitViewController;
- (unsigned long long)supportedInterfaceOrientations;
- (void)traitCollectionDidChange:(id)arg1;
- (void)verticalScrollingContainerViewControllerDidLayoutSubviews:(id)arg1;
- (void)verticalScrollingContainerViewControllerDidScroll:(id)arg1;
- (id)viewConfigurationForIdentifier:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

