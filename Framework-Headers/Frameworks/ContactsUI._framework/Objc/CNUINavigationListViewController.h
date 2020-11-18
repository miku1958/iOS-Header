//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ContactsUI/CNUINavigationListViewDataSource-Protocol.h>
#import <ContactsUI/CNUINavigationListViewDelegate-Protocol.h>
#import <ContactsUI/UITableViewDataSource-Protocol.h>
#import <ContactsUI/UITableViewDelegate-Protocol.h>

@class CNUINavigationListItem, CNUINavigationListView, NSArray, NSString;
@protocol CNUINavigationListViewControllerDelegate;

@interface CNUINavigationListViewController : UIViewController <CNUINavigationListViewDataSource, CNUINavigationListViewDelegate, UITableViewDataSource, UITableViewDelegate>
{
    BOOL _ignoreParentControllerResize;
    CNUINavigationListView *_navigationListView;
    NSArray *_items;
    CNUINavigationListItem *_expandedItem;
    id<CNUINavigationListViewControllerDelegate> _delegate;
    CNUINavigationListItem *_displayedExpandedItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CNUINavigationListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) CNUINavigationListItem *displayedExpandedItem; // @synthesize displayedExpandedItem=_displayedExpandedItem;
@property (strong, nonatomic) CNUINavigationListItem *expandedItem; // @synthesize expandedItem=_expandedItem;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL ignoreParentControllerResize; // @synthesize ignoreParentControllerResize=_ignoreParentControllerResize;
@property (copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property (strong, nonatomic) CNUINavigationListView *navigationListView; // @synthesize navigationListView=_navigationListView;
@property (readonly) Class superclass;

+ (BOOL)itemRequiresDetailCell:(id)arg1;
- (void).cxx_destruct;
- (BOOL)canExpandItem:(id)arg1;
- (double)cellSeparatorHeight;
- (struct CGSize)contentSizeForExpandedItem:(id)arg1;
- (id)dequeueReusableDetailCell;
- (id)dequeueReusableStandardCell;
- (void)expandItem:(id)arg1;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)itemAtIndex:(long long)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (id)itemsForItem:(id)arg1;
- (void)loadView;
- (void)navigationListView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)navigationListView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)reloadNavigationListView;
- (void)startTrackingRolloverWithGestureRecognizer:(id)arg1;
- (void)stopTrackingRollover;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)toggleItem:(id)arg1;
- (void)updateNavigationListView;
- (void)updateNavigationListViewSeparatorStyle;
- (void)updateNavigationListViewStateAnimated:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

