//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreCDPUI/CDPTableViewController.h>

#import <CoreCDPUI/UITableViewDataSource-Protocol.h>
#import <CoreCDPUI/UITableViewDelegate-Protocol.h>

@class NSString, UIActivityIndicatorView, UIButton, UILabel;
@protocol CDPWaitingApprovalDelegate;

@interface CDPWaitingApprovalViewController : CDPTableViewController <UITableViewDataSource, UITableViewDelegate>
{
    id<CDPWaitingApprovalDelegate> _delegate;
    UIActivityIndicatorView *_spinner;
    UILabel *_waitingLabel;
    UIButton *_escapeButton;
    BOOL _shouldOfferDevicePicker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL shouldOfferDevicePicker; // @synthesize shouldOfferDevicePicker=_shouldOfferDevicePicker;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)escapeTapped:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end

