//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <PhotosUI/UICollectionViewDataSource-Protocol.h>
#import <PhotosUI/UICollectionViewDelegateFlowLayout-Protocol.h>
#import <PhotosUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, UICollectionView;
@protocol PUTopResultDelegate;

@interface PUSearchResultsTopResultTableViewCell : UITableViewCell <UIGestureRecognizerDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    id<PUTopResultDelegate> _delegate;
    NSArray *_localAssetIdentifiers;
    UICollectionView *_collectionView;
    NSMutableDictionary *_items;
}

@property (strong, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PUTopResultDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableDictionary *items; // @synthesize items=_items;
@property (copy, nonatomic) NSArray *localAssetIdentifiers; // @synthesize localAssetIdentifiers=_localAssetIdentifiers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGSize)_collectionViewCellSize;
- (void)_setupCollectionView;
- (void)_setupGestureRecognizer;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (struct CGRect)frameForItemAtIndex:(unsigned long long)arg1;
- (void)handleTap:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (long long)numberOfItemsInCollectionView;
- (void)setAsset:(id)arg1 image:(id)arg2 forIndex:(unsigned long long)arg3;

@end
