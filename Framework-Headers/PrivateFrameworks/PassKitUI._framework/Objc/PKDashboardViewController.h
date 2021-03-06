//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import <PassKitUI/PKDashboardDataSourceDelegate-Protocol.h>
#import <PassKitUI/PKDashboardViewControllerDelegateFlowLayout-Protocol.h>
#import <PassKitUI/UICollectionViewDataSourcePrefetching-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSSet, NSString, PKDashboardFooterTextView, PKDashboardTitleHeaderView, PKUISpringAnimationFactory, UICollectionViewLayout;
@protocol PKDashboardDataSource, PKDashboardDelegate, PKDashboardLayout;

@interface PKDashboardViewController : UICollectionViewController <UICollectionViewDataSourcePrefetching, PKDashboardDataSourceDelegate, PKDashboardViewControllerDelegateFlowLayout>
{
    NSDictionary *_presentersPerIdentifier;
    CDStruct_8bc48212 *_presentersOptionalMethods;
    NSDictionary *_presenterMethodsIndexPerIdentifier;
    PKDashboardTitleHeaderView *_sampleHeaderView;
    NSMutableDictionary *_titlesForSection;
    PKDashboardFooterTextView *_sampleFooterView;
    NSMutableDictionary *_footerTextItemsBySection;
    double _lastScrollOffset;
    BOOL _inScrollViewDidScroll;
    NSSet *_visibleCellsExcludingSafeArea;
    UICollectionViewLayout<PKDashboardLayout> *_customLayout;
    BOOL _contentIsLoaded;
    BOOL _shouldPresentAllContent;
    BOOL _presentationAnimated;
    BOOL _isPresentingContent;
    BOOL _isHidingContent;
    PKUISpringAnimationFactory *_collectionViewFactory;
    NSMutableDictionary *_blocksOnVisibilityChange;
    BOOL _shouldUseClearNavigationBar;
    id<PKDashboardDataSource> _dataSource;
    id<PKDashboardDelegate> _delegate;
}

@property (readonly, nonatomic) id<PKDashboardDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PKDashboardDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isPresentingContent; // @synthesize isPresentingContent=_isPresentingContent;
@property (nonatomic) BOOL shouldUseClearNavigationBar; // @synthesize shouldUseClearNavigationBar=_shouldUseClearNavigationBar;
@property (readonly) Class superclass;

+ (id)backgroundColor;
- (void).cxx_destruct;
- (id)_actualItemIndexPathForIndexPath:(id)arg1;
- (void)_hideAllContentAnimated:(BOOL)arg1;
- (id)_internalIndexPathForItemIndexPath:(id)arg1;
- (BOOL)_isCellVisibleAtIndexPath:(id)arg1 withTopSafeArea:(double)arg2 contentOffset:(double)arg3;
- (BOOL)_isIndexPathAFooter:(id)arg1;
- (BOOL)_isIndexPathAHeader:(id)arg1;
- (void)_presentAllContent;
- (void)_setupPresenters:(id)arg1;
- (void)_updateNavigationBarAppearance;
- (void)_updateNavigationBarVisibility;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)contentIsLoaded;
- (void)dealloc;
- (void)deleteSections:(id)arg1;
- (id)initWithDataSource:(id)arg1 presenters:(id)arg2 layout:(id)arg3;
- (void)insertSections:(id)arg1;
- (void)itemChanged:(id)arg1 atIndexPath:(id)arg2;
- (BOOL)itemIsIndependentInCollectionView:(id)arg1 atIndexPath:(id)arg2;
- (BOOL)itemIsStackableInCollectionView:(id)arg1 atIndexPath:(id)arg2;
- (CDStruct_8bc48212)methodsForItemIdentifier:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)preferredStatusBarStyle;
- (void)reloadSections:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setActionForVisibilityChange:(CDUnknownBlockType)arg1 indexPath:(id)arg2;
- (void)shouldPresentAllContent:(BOOL)arg1 animated:(BOOL)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateContent;
- (void)viewDidLoad;

@end

