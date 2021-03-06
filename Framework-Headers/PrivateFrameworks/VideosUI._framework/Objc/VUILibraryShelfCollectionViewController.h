//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIShelfViewController.h>

@class NSArray, NSString, UICollectionViewDiffableDataSource, VUILibraryLockupViewCell, VUIMediaEntitiesDataSource;
@protocol VUILibraryShelfCollectionViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VUILibraryShelfCollectionViewController : VUIShelfViewController
{
    VUILibraryLockupViewCell *_sizingCell;
    BOOL _disableSeeAllButton;
    NSString *_headerTitle;
    NSString *_headerSubtitle;
    id<VUILibraryShelfCollectionViewControllerDelegate> _delegate;
    NSArray *_fetchResults;
    VUIMediaEntitiesDataSource *_dataSource;
    UICollectionViewDiffableDataSource *_diffableDataSource;
}

@property (readonly, nonatomic) VUIMediaEntitiesDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property (weak, nonatomic) id<VUILibraryShelfCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property (nonatomic) BOOL disableSeeAllButton; // @synthesize disableSeeAllButton=_disableSeeAllButton;
@property (copy, nonatomic) NSArray *fetchResults; // @synthesize fetchResults=_fetchResults;
@property (strong, nonatomic) NSString *headerSubtitle; // @synthesize headerSubtitle=_headerSubtitle;
@property (strong, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;

- (void).cxx_destruct;
- (double)_computeBottomMargin;
- (struct CGSize)_configureSizingCellWithEntity:(id)arg1;
- (id)_createDiffableDataSourceForCollectionView:(id)arg1;
- (id)_createDiffableDataSourceSnapshot;
- (void)_didPressSeeAllButton:(id)arg1;
- (id)_getEntityIdentifiersFromEntities;
- (BOOL)_hideSeeAllButton;
- (void)_updateHeaderView;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)configureWithCollectionView:(id)arg1;
- (id)initWithDataSource:(id)arg1;
- (void)setHeaderTitle:(id)arg1 andSubtitle:(id)arg2;
- (void)updateWithDataSource:(id)arg1;

@end

