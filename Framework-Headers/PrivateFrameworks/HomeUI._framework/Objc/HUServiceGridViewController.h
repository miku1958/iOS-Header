//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUControllableItemCollectionViewController.h>

#import <HomeUI/UICollectionViewDelegateFlowLayout-Protocol.h>

@class HUGridLayoutOptions, NSString;

@interface HUServiceGridViewController : HUControllableItemCollectionViewController <UICollectionViewDelegateFlowLayout>
{
    BOOL _shouldShowLoadingState;
    unsigned long long _contentMargins;
    long long _scrollDirection;
}

@property (nonatomic) unsigned long long contentMargins; // @synthesize contentMargins=_contentMargins;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HUGridLayoutOptions *layoutOptions;
@property (nonatomic) long long scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property (nonatomic) BOOL shouldShowLoadingState; // @synthesize shouldShowLoadingState=_shouldShowLoadingState;
@property (readonly) Class superclass;

- (id)_defaultLayoutOptionsForViewSize:(struct CGSize)arg1;
- (void)_layoutSectionHeaders;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (id)initWithItemManager:(id)arg1;
- (id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (void)layoutOptionsDidChange;
- (id)layoutOptionsForSection:(long long)arg1;
- (struct CGSize)preferredContentSizeForCollectionViewContentSize:(struct CGSize)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

