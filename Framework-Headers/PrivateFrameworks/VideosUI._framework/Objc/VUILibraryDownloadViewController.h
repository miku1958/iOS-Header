//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUILibraryStackViewController.h>

#import <VideosUI/UICollectionViewDataSource-Protocol.h>
#import <VideosUI/VUILibraryShelfCollectionViewControllerDelegate-Protocol.h>
#import <VideosUI/VUIMediaEntitiesFetchControllerDelegate-Protocol.h>

@class NSString, UIBarButtonItem, VUILibraryBannerCollectionViewCell, VUILibraryMediaEntityShelvesViewModel, _VUIDownloadSeeAllController;

__attribute__((visibility("hidden")))
@interface VUILibraryDownloadViewController : VUILibraryStackViewController <UICollectionViewDataSource, VUIMediaEntitiesFetchControllerDelegate, VUILibraryShelfCollectionViewControllerDelegate>
{
    VUILibraryBannerCollectionViewCell *_bannerViewSizingCell;
    BOOL _isPhone;
    UIBarButtonItem *_libraryBarButton;
    VUILibraryMediaEntityShelvesViewModel *_viewModel;
    UIBarButtonItem *_currentNavBarButtonItem;
    _VUIDownloadSeeAllController *_currentSeeAllController;
}

@property (strong, nonatomic) UIBarButtonItem *currentNavBarButtonItem; // @synthesize currentNavBarButtonItem=_currentNavBarButtonItem;
@property (strong, nonatomic) _VUIDownloadSeeAllController *currentSeeAllController; // @synthesize currentSeeAllController=_currentSeeAllController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIBarButtonItem *libraryBarButton; // @synthesize libraryBarButton=_libraryBarButton;
@property (readonly) Class superclass;
@property (strong, nonatomic) VUILibraryMediaEntityShelvesViewModel *viewModel; // @synthesize viewModel=_viewModel;

+ (id)_localizedTitleForMediaEntityType:(id)arg1;
- (void).cxx_destruct;
- (id)_localizedBannerString;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)configureWithCollectionView:(id)arg1;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3;
- (id)initWithMediaLibrary:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)seeAllButtonPressed:(id)arg1;
- (void)shelfCollectionViewController:(id)arg1 collectionView:(id)arg2 didSelectMediaEntity:(id)arg3 atIndexPath:(id)arg4;
- (void)start;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end

