//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class SFEditableTableViewCell, UIBarButtonItem, WBSSavedPassword;
@protocol SFPasswordDetailViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SFPasswordDetailViewController : UITableViewController
{
    WBSSavedPassword *_savedPassword;
    BOOL _hidesPassword;
    unsigned long long _type;
    UIBarButtonItem *_editBarButtonItem;
    UIBarButtonItem *_cancelBarButtonItem;
    UIBarButtonItem *_doneBarButtonItem;
    UIBarButtonItem *_backBarButtonItem;
    SFEditableTableViewCell *_userCell;
    SFEditableTableViewCell *_passwordCell;
    id<SFPasswordDetailViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id<SFPasswordDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (BOOL)_allowEditing;
- (void)_appDidBecomeActive:(id)arg1;
- (void)_appWillResignActive:(id)arg1;
- (void)_cancelBarButtonItemTapped:(id)arg1;
- (void)_configureCell:(id)arg1 withText:(id)arg2 detailText:(id)arg3 detailPlaceholderText:(id)arg4;
- (void)_configurePasswordCell:(id)arg1;
- (void)_configureUserCell:(id)arg1;
- (void)_doneBarButtonItemTapped:(id)arg1;
- (void)_editBarButtonItemTapped:(id)arg1;
- (id)_editableCellWithCell:(id)arg1;
- (void)_setHighLyLegibleFontForDetailTextInCell:(id)arg1;
- (void)_textFieldChanged:(id)arg1;
- (void)_willHideUIMenuController:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)dealloc;
- (id)initWithSavedPassword:(id)arg1 type:(unsigned long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)safari_copyPassword:(id)arg1;
- (void)safari_copyUserName:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;

@end

