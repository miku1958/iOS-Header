//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUControllableItemCollectionViewController.h>

#import <HomeUI/HFItemManagerDelegate-Protocol.h>

@class HFWallpaperSlice, HUGridActionSetItemManager, HUGridLayoutOptions, HUWallpaperView, NSString, UILabel;
@protocol HUGridActionSetListViewControllerDelegate;

@interface HUGridActionSetListViewController : HUControllableItemCollectionViewController <HFItemManagerDelegate>
{
    BOOL _shouldAllowItemPresentation;
    id<HUGridActionSetListViewControllerDelegate> _actionSetListViewControllerDelegate;
    UILabel *_titleLabel;
}

@property (readonly, nonatomic) HUGridActionSetItemManager *actionSetItemManager;
@property (weak, nonatomic) id<HUGridActionSetListViewControllerDelegate> actionSetListViewControllerDelegate; // @synthesize actionSetListViewControllerDelegate=_actionSetListViewControllerDelegate;
@property (strong, nonatomic) HFWallpaperSlice *blurredWallpaperSlice;
@property (strong, nonatomic) HFWallpaperSlice *darkModeBlurredWallpaperSlice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) HUGridLayoutOptions *layoutOptions;
@property (nonatomic) BOOL shouldAllowItemPresentation; // @synthesize shouldAllowItemPresentation=_shouldAllowItemPresentation;
@property (readonly) Class superclass;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (strong, nonatomic) HUWallpaperView *wallpaperView;

+ (double)requiredHeightWithLayoutOptions:(id)arg1 numberOfItems:(unsigned long long)arg2;
+ (unsigned long long)updateMode;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (id)_detailsViewControllerForActionSetItem:(id)arg1;
- (void)_internalSetLayoutOptions:(id)arg1;
- (id)_performTapActionForItem:(id)arg1;
- (long long)_scrollDirectionForLayoutOptions:(id)arg1;
- (void)_updateLayoutScrollDirectionIfNeeded;
- (BOOL)canReorderItemAtIndexPath:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (id)detailsViewControllerForPresentationCoordinator:(id)arg1 item:(id)arg2;
- (BOOL)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2;
- (id)init;
- (id)initWithRoom:(id)arg1 onlyShowFavorites:(BOOL)arg2;
- (void)itemManager:(id)arg1 didInsertItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemManager:(id)arg1 didRemoveItem:(id)arg2 atIndexPath:(id)arg3;
- (id)itemManager:(id)arg1 futureToUpdateItems:(id)arg2 itemUpdateOptions:(id)arg3;
- (BOOL)presentationCoordinator:(id)arg1 shouldBeginPresentationWithContext:(id)arg2;
- (id)reorderableHomeKitItemListForSection:(long long)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)setReorderableHomeKitItemList:(id)arg1 forSection:(long long)arg2;
- (void)viewDidLoad;

@end
