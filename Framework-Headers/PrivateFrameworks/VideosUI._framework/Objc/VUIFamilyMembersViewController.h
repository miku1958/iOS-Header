//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <VideosUI/UICollectionViewDelegate-Protocol.h>
#import <VideosUI/VUICollectionViewDelegate-Protocol.h>
#import <VideosUI/VUILibraryDataSourceDelegate-Protocol.h>

@class NSDictionary, NSString, UICollectionViewDiffableDataSource, VUICollectionView, VUIFamilyMemberCell, VUILibraryFamilyMembersDataSource, VUIViewControllerContentPresenter;
@protocol VUIFamilyMembersViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VUIFamilyMembersViewController : UIViewController <VUILibraryDataSourceDelegate, UICollectionViewDelegate, VUICollectionViewDelegate>
{
    BOOL _requiresRelayout;
    id<VUIFamilyMembersViewControllerDelegate> _delegate;
    VUILibraryFamilyMembersDataSource *_dataSource;
    UICollectionViewDiffableDataSource *_diffableDataSource;
    VUIViewControllerContentPresenter *_contentPresenter;
    VUICollectionView *_collectionView;
    VUIFamilyMemberCell *_sizingCell;
    NSDictionary *_familyMemberHashToFamilyMemberDictionary;
    long long _gridType;
    long long _gridStyle;
    double _tvCellWidth;
}

@property (strong, nonatomic) VUICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property (strong, nonatomic) VUIViewControllerContentPresenter *contentPresenter; // @synthesize contentPresenter=_contentPresenter;
@property (strong, nonatomic) VUILibraryFamilyMembersDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<VUIFamilyMembersViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property (strong, nonatomic) NSDictionary *familyMemberHashToFamilyMemberDictionary; // @synthesize familyMemberHashToFamilyMemberDictionary=_familyMemberHashToFamilyMemberDictionary;
@property (nonatomic) long long gridStyle; // @synthesize gridStyle=_gridStyle;
@property (nonatomic) long long gridType; // @synthesize gridType=_gridType;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL requiresRelayout; // @synthesize requiresRelayout=_requiresRelayout;
@property (strong, nonatomic) VUIFamilyMemberCell *sizingCell; // @synthesize sizingCell=_sizingCell;
@property (readonly) Class superclass;
@property (nonatomic) double tvCellWidth; // @synthesize tvCellWidth=_tvCellWidth;

- (void).cxx_destruct;
- (void)_clearCollectionViewSelections:(BOOL)arg1;
- (id)_createCollectionView;
- (id)_createDiffableDataSource;
- (id)_createDiffableDataSourceSnapshot;
- (id)_generateFamilyMemberHashToFamilyMemberDictionaryForFamilyMembers:(id)arg1;
- (id)_getFamilyMemberIdentifiersFromFamilyMembers;
- (void)_updateCurrentViewIfNeeded;
- (void)_updateLayoutForSize:(struct CGSize)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)dataSourceDidFinishFetching:(id)arg1;
- (id)initWithDataSource:(id)arg1;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end
