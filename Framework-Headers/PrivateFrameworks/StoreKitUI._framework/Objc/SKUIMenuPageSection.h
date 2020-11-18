//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIStorePageSection.h>

#import <StoreKitUI/SKUIMenuViewControllerDelegate-Protocol.h>
#import <StoreKitUI/SKUIPopupMenuDelegate-Protocol.h>
#import <StoreKitUI/SKUISortDataRequestDelegate-Protocol.h>
#import <StoreKitUI/UIPopoverControllerDelegate-Protocol.h>

@class NSMutableIndexSet, NSString, SKUIMenuPageComponent, SKUIMenuViewController, SKUIPillsControl, SKUIPopupMenuHeaderView, UIBarButtonItem, UIPopoverController;

@interface SKUIMenuPageSection : SKUIStorePageSection <SKUIMenuViewControllerDelegate, SKUIPopupMenuDelegate, SKUISortDataRequestDelegate, UIPopoverControllerDelegate>
{
    UIBarButtonItem *_cancelMenuItem;
    SKUIPillsControl *_pillsControl;
    SKUIMenuViewController *_moreListMenuViewController;
    UIPopoverController *_moreListPopoverController;
    SKUIPopupMenuHeaderView *_popupHeaderView;
    long long _selectedIndex;
    NSMutableIndexSet *_sortRequestIndexSet;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) SKUIMenuPageComponent *pageComponent; // @dynamic pageComponent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelMenuAction:(id)arg1;
- (id)_contentChildView;
- (void)_dismissMenuViewController;
- (void)_loadSortDataIfNecessaryForMenuIndex:(long long)arg1 reason:(long long)arg2;
- (id)_newMenuViewController;
- (void)_pillAction:(id)arg1;
- (id)_pillsControl;
- (id)_popupHeaderView;
- (void)_restorePreviousSelection;
- (void)_setSelectedIndex:(long long)arg1;
- (void)_showMenuViewController;
- (void)_showMoreList;
- (void)_showPopoverController;
- (id)backgroundColorForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (long long)numberOfCells;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)popupMenuHeader:(id)arg1 didSelectMenuItemAtIndex:(long long)arg2;
- (struct UIEdgeInsets)sectionContentInset;
- (void)sortDataRequest:(id)arg1 didFinishWithLockups:(id)arg2;
- (void)willAppearInContext:(id)arg1;

@end

