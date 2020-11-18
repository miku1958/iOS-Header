//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import <PhotosUICore/PXPeopleStripCollectionViewCellDataSource-Protocol.h>
#import <PhotosUICore/UICollectionViewDataSourcePrefetching-Protocol.h>
#import <PhotosUICore/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSString, PXPeopleDataSource, PXPeopleStripCollectionViewCell;
@protocol PXPeopleStripCollectionViewControllerDelegate;

@interface PXPeopleStripCollectionViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSourcePrefetching, PXPeopleStripCollectionViewCellDataSource>
{
    id<PXPeopleStripCollectionViewControllerDelegate> _delegate;
    PXPeopleDataSource *_dataSource;
    PXPeopleStripCollectionViewCell *_preloadedCell;
}

@property (weak, nonatomic) PXPeopleDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXPeopleStripCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) PXPeopleStripCollectionViewCell *preloadedCell; // @synthesize preloadedCell=_preloadedCell;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (struct CGPoint)collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint)arg2;
- (void)contentWidthChanged;
- (id)currentLabelFont;
- (id)initWithDataSource:(id)arg1 delegate:(id)arg2;
- (id)nameStringForPeople:(id)arg1 withWidth:(double)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (double)verticalSpacingForFaceAndText;
- (void)viewDidLoad;

@end

