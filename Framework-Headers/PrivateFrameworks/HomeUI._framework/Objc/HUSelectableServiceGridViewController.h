//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUServiceGridViewController.h>

#import <HomeUI/HUServiceGridItemManagerDelegate-Protocol.h>

@class HFMutableSetDiff, HFSetDiff, HUServiceGridItemManager, NSString;

@interface HUSelectableServiceGridViewController : HUServiceGridViewController <HUServiceGridItemManagerDelegate>
{
    BOOL _allowsEmptySelection;
    BOOL _allowsMultipleSelection;
    HUServiceGridItemManager *_serviceGridItemManager;
    HFMutableSetDiff *_mutableSelectedItems;
}

@property (nonatomic) BOOL allowsEmptySelection; // @synthesize allowsEmptySelection=_allowsEmptySelection;
@property (nonatomic) BOOL allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HFMutableSetDiff *mutableSelectedItems; // @synthesize mutableSelectedItems=_mutableSelectedItems;
@property (strong, nonatomic) HFSetDiff *selectedItems;
@property (weak, nonatomic) HUServiceGridItemManager *serviceGridItemManager; // @synthesize serviceGridItemManager=_serviceGridItemManager;
@property (readonly) Class superclass;

+ (CDUnknownBlockType)defaultItemProviderCreatorWithOptions:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)_addAllServicesInSectionFromButton:(id)arg1;
- (void)_addItemToSelection:(id)arg1;
- (void)_deleteItemFromSelection:(id)arg1;
- (void)_removeAllServicesInSectionFromButton:(id)arg1;
- (void)_setSelected:(BOOL)arg1 forItemsInSection:(long long)arg2;
- (void)_updateSelectionState:(BOOL)arg1 forCell:(id)arg2;
- (void)_updateToggleStateForSection:(long long)arg1 headerView:(id)arg2;
- (BOOL)canSelectItem:(id)arg1 indexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (void)didChangeSelection;
- (void)didDeselectItem:(id)arg1;
- (void)didSelectItem:(id)arg1;
- (id)initWithItemManager:(id)arg1;
- (id)initWithServiceGridItemManager:(id)arg1;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (BOOL)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint)arg2;

@end

