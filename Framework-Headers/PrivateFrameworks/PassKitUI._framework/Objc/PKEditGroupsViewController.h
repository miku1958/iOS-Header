//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKEditTableViewController.h>

#import <PassKitUI/PKEditGroupViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKEditTableViewControllerCachingDelegate-Protocol.h>
#import <PassKitUI/PKGroupDelegate-Protocol.h>
#import <PassKitUI/PKGroupsControllerDelegate-Protocol.h>
#import <PassKitUI/UIViewControllerPreviewingDelegate-Protocol.h>

@class NSMutableArray, NSString, PKGroup, PKGroupsController, PKPass, UITableView;
@protocol UIViewControllerPreviewing;

@interface PKEditGroupsViewController : PKEditTableViewController <PKGroupsControllerDelegate, PKGroupDelegate, PKEditTableViewControllerCachingDelegate, PKEditGroupViewControllerDelegate, UIViewControllerPreviewingDelegate>
{
    BOOL _editingMode;
    PKGroupsController *_groupsController;
    PKPass *_viewingPass;
    PKGroup *_viewingGroup;
    PKGroup *_deletingGroup;
    UITableView *_tableView;
    id<UIViewControllerPreviewing> _previewingContext;
    NSMutableArray *_actions;
    struct CGSize _imageSizeNeeded;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_showNoPassesViewIfNoGroupsToShow;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2 withGroup:(id)arg3;
- (void)group:(id)arg1 didInsertPass:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)group:(id)arg1 didMovePassFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)group:(id)arg1 didRemovePass:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)group:(id)arg1 didUpdatePass:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)groupAtIndexPath:(id)arg1;
- (void)groupViewController:(id)arg1 isDeletingGroup:(id)arg2;
- (void)groupsController:(id)arg1 didInsertGroup:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)groupsController:(id)arg1 didMoveGroup:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)groupsController:(id)arg1 didRemoveGroup:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)groupsController:(id)arg1 didUpdateGroup:(id)arg2;
- (id)indexPathForGroup:(id)arg1;
- (id)initInEditingMode:(BOOL)arg1 existingGroupsController:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)passAtIndexPath:(id)arg1;
- (BOOL)passExistsWithUniqueIdentifier:(id)arg1;
- (void)prefetchItemsAtIndexPaths:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)viewControllerForRowAtIndexPath:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

