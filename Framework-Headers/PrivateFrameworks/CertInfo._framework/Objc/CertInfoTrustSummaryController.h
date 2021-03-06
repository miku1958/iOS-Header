//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class UIBarButtonItem, UITableViewCell;
@protocol CertInfoTrustDescription, CertInfoTrustSummaryControllerDelegate;

@interface CertInfoTrustSummaryController : UITableViewController
{
    id<CertInfoTrustDescription> _description;
    id<CertInfoTrustSummaryControllerDelegate> _delegate;
    UIBarButtonItem *_doneButton;
    UITableViewCell *_headerCell;
    UITableViewCell *_descriptionCell;
    unsigned int _showsDoneButton:1;
}

@property (weak, nonatomic) id<CertInfoTrustSummaryControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) BOOL showsDoneButton;

- (void).cxx_destruct;
- (void)_actionButtonPressed:(id)arg1;
- (id)_cellForReuseIdentifier:(id)arg1;
- (id)_descriptionCell;
- (void)_doneButtonPressed:(id)arg1;
- (id)_headerCell;
- (id)initWithTrustDescription:(id)arg1;
- (void)setActionButtonTitle:(id)arg1 destructive:(BOOL)arg2 animated:(BOOL)arg3;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidAppear:(BOOL)arg1;

@end

