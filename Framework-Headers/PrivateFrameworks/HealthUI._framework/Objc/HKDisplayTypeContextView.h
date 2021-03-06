//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HealthUI/HKDisplayTypeContextHorizontalCollectionViewCellDelegate-Protocol.h>
#import <HealthUI/UICollectionViewDataSource-Protocol.h>
#import <HealthUI/UICollectionViewDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, UICollectionView, UICollectionViewFlowLayout;
@protocol HKDisplayTypeContextViewDelegate;

@interface HKDisplayTypeContextView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, HKDisplayTypeContextHorizontalCollectionViewCellDelegate>
{
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewLayout;
    NSLayoutConstraint *_collectionHeightConstraint;
    long long _lastSelectedRow;
    NSArray *_displayTypeContextItems;
    id<HKDisplayTypeContextViewDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HKDisplayTypeContextViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSArray *displayTypeContextItems; // @synthesize displayTypeContextItems=_displayTypeContextItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_backgroundColor;
- (id)_buildCollectionViewLayout;
- (double)_contentHeight;
- (void)_handleSelection:(id)arg1 indexPath:(id)arg2 informDelegate:(BOOL)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)didTapOnInfoButtonForCollectionViewCell:(id)arg1;
- (id)init;
- (struct CGSize)intrinsicContentSize;
- (double)preferredHeight;
- (void)selectItemAtIndex:(long long)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned long long)arg3;

@end

