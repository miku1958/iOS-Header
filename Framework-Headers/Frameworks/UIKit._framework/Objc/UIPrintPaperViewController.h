//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITableViewController.h>

@class UIPrintPanelViewController;

__attribute__((visibility("hidden")))
@interface UIPrintPaperViewController : UITableViewController
{
    UIPrintPanelViewController *_printPanelViewController;
}

- (void).cxx_destruct;
- (void)adjustPopoverSize;
- (id)initWithPrintPanelViewController:(id)arg1;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateScaleUp:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;

@end

