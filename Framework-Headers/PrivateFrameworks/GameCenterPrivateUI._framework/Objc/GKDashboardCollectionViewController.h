//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterPrivateUI/GKLoadingViewController.h>

#import <GameCenterPrivateUI/NSPopoverDelegate-Protocol.h>
#import <GameCenterPrivateUI/UICollectionViewDataSource-Protocol.h>
#import <GameCenterPrivateUI/UICollectionViewDelegate-Protocol.h>

@class GKCollectionDataSource, GKNoContentView, NSLayoutConstraint, NSMutableIndexSet, NSString, UICollectionView, UIView;

@interface GKDashboardCollectionViewController : GKLoadingViewController <NSPopoverDelegate, UICollectionViewDataSource, UICollectionViewDelegate>
{
    BOOL _autoWidthUsesTwoColumnsWhenSpace;
    UICollectionView *_collectionView;
    GKCollectionDataSource *_dataSource;
    NSMutableIndexSet *_sectionsToReload;
    GKNoContentView *_noContentView;
    NSLayoutConstraint *_keyboardConstraint;
    double _keyboardConstraintDefaultConstant;
    UIView *_keyboardAdjustedView;
    UIView *_collectionContainerView;
    struct UIEdgeInsets _contentInsetsBeforeKeyboard;
    struct UIEdgeInsets _scrollInsetsBeforeKeyboard;
}

@property (nonatomic) BOOL autoWidthUsesTwoColumnsWhenSpace; // @synthesize autoWidthUsesTwoColumnsWhenSpace=_autoWidthUsesTwoColumnsWhenSpace;
@property (nonatomic) UIView *collectionContainerView; // @synthesize collectionContainerView=_collectionContainerView;
@property (strong, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property (nonatomic) struct UIEdgeInsets contentInsetsBeforeKeyboard; // @synthesize contentInsetsBeforeKeyboard=_contentInsetsBeforeKeyboard;
@property (strong, nonatomic) GKCollectionDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isLoading; // @dynamic isLoading;
@property (nonatomic) UIView *keyboardAdjustedView; // @synthesize keyboardAdjustedView=_keyboardAdjustedView;
@property (nonatomic) NSLayoutConstraint *keyboardConstraint; // @synthesize keyboardConstraint=_keyboardConstraint;
@property (nonatomic) double keyboardConstraintDefaultConstant; // @synthesize keyboardConstraintDefaultConstant=_keyboardConstraintDefaultConstant;
@property (strong, nonatomic) GKNoContentView *noContentView; // @synthesize noContentView=_noContentView;
@property (nonatomic) struct UIEdgeInsets scrollInsetsBeforeKeyboard; // @synthesize scrollInsetsBeforeKeyboard=_scrollInsetsBeforeKeyboard;
@property (strong, nonatomic) NSMutableIndexSet *sectionsToReload; // @synthesize sectionsToReload=_sectionsToReload;
@property (readonly) Class superclass;

- (void)clearSelection;
- (void)clearSelectionForCollectionView:(id)arg1;
- (BOOL)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didFocusItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnfocusItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)createCollectionViewInsideView:(id)arg1;
- (void)dataUpdated:(BOOL)arg1 withError:(id)arg2;
- (void)dealloc;
- (void)didEnterLoadingState;
- (void)didEnterRefreshingState;
- (void)didExitRefreshingState;
- (BOOL)hasData;
- (void)hideNoContentPlaceholder;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)loadData;
- (void)loadView;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)popoverDidClose:(id)arg1;
- (id)preferredFocusEnvironments;
- (void)setAutoWidthColumns:(long long)arg1;
- (void)setNeedsRefresh;
- (void)setToHorizontalLayout:(BOOL)arg1;
- (void)setupDataSource;
- (void)setupNoContentView:(id)arg1 withError:(id)arg2;
- (void)showNoContentPlaceholderForError:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)windowDidEndSheet:(id)arg1;

@end

