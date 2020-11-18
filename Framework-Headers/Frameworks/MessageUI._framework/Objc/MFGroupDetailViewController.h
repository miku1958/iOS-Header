//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class MFRecentComposeRecipientGroup;
@protocol MFGroupDetailViewControllerDelegate;

@interface MFGroupDetailViewController : UITableViewController
{
    id<MFGroupDetailViewControllerDelegate> _delegate;
    MFRecentComposeRecipientGroup *_group;
}

@property (nonatomic) id<MFGroupDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) MFRecentComposeRecipientGroup *group; // @synthesize group=_group;

- (void)_removeButtonTapped:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillDisappear:(BOOL)arg1;

@end

