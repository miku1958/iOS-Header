//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <CoreAudioKit/BTLEConnectionTable-Protocol.h>
#import <CoreAudioKit/UITableViewDataSource-Protocol.h>
#import <CoreAudioKit/UITableViewDelegate-Protocol.h>

@class AMSBTLEConnectionManager, NSMutableArray, NSString, NSTimer, UIActivityIndicatorView, UIBarButtonItem;

@interface CABTMIDICentralViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource, BTLEConnectionTable>
{
    NSMutableArray *peripheralList;
    AMSBTLEConnectionManager *connectionManager;
    UIActivityIndicatorView *indicator;
    BOOL didCleanup;
    BOOL inEditingMode;
    NSTimer *connectionTimer;
    NSMutableArray *incompleteConnectionList;
    UIBarButtonItem *editButton;
    UIBarButtonItem *cancelButton;
    UIBarButtonItem *forgetButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)activateController:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)centralTimerFired:(id)arg1;
- (void)cleanup;
- (void)deactivateController:(id)arg1;
- (void)dealloc;
- (void)didChangePreferredContentSize:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)editAction:(id)arg1;
- (void)forgetAction:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)peripheralAtIndex:(unsigned long long)arg1;
- (unsigned long long)peripheralCount;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setUIEnabled:(BOOL)arg1;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)title;
- (void)updateButtonsToMatchTableState;
- (void)updatePeripheralTable;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

