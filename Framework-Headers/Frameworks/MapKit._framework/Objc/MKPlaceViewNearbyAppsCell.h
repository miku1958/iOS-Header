//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKTableViewCell.h>

#import <MapKit/UICollectionViewDataSource-Protocol.h>
#import <MapKit/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, UICollectionView, UILabel, _MKNearbyAppsFlowLayout;
@protocol MKPlaceViewNearbyAppsCellDelegate;

__attribute__((visibility("hidden")))
@interface MKPlaceViewNearbyAppsCell : MKTableViewCell <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    UILabel *_headerLabel;
    UICollectionView *_collectionView;
    _MKNearbyAppsFlowLayout *_flowLayout;
    NSLayoutConstraint *_headerBaselineConstraint;
    NSLayoutConstraint *_collectionHeightConstraint;
    struct CGSize _iconSize;
    NSArray *_storeItems;
    id<MKPlaceViewNearbyAppsCellDelegate> _delegate;
    NSArray *_marginConstraints;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MKPlaceViewNearbyAppsCellDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSArray *marginConstraints; // @synthesize marginConstraints=_marginConstraints;
@property (strong, nonatomic) NSArray *storeItems; // @synthesize storeItems=_storeItems;
@property (readonly) Class superclass;

+ (double)_headerBaselineOffsetFromTop;
+ (id)_headerLabelFont;
+ (struct CGSize)_iconSize;
+ (double)contentHeight;
+ (BOOL)requiresConstraintBasedLayout;
+ (id)reuseIdentifier;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)contentSizeDidChange;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutMarginsDidChange;
- (void)refreshMarginConstraints;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;

@end

