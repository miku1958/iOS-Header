//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SIMSetupSupport/TSSetupFlowItem-Protocol.h>
#import <SIMSetupSupport/UITextFieldDelegate-Protocol.h>

@class NSLayoutConstraint, NSString, TSCellularPlanTableViewCell, UILabel, UITableView;
@protocol TSSIMSetupFlowDelegate;

@interface TSCellularPlanConfirmationCodeViewController : UIViewController <UITextFieldDelegate, TSSetupFlowItem>
{
    TSCellularPlanTableViewCell *_confirmationCodeCell;
    NSString *_fauxCardData;
    long long _userConsentResponse;
    id<TSSIMSetupFlowDelegate> _delegate;
    UILabel *_confirmationCodeTitleLabel;
    UITableView *_infoTableView;
    NSLayoutConstraint *_infoTableViewHeightConstraint;
}

@property (weak, nonatomic) UILabel *confirmationCodeTitleLabel; // @synthesize confirmationCodeTitleLabel=_confirmationCodeTitleLabel;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<TSSIMSetupFlowDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) UITableView *infoTableView; // @synthesize infoTableView=_infoTableView;
@property (weak, nonatomic) NSLayoutConstraint *infoTableViewHeightConstraint; // @synthesize infoTableViewHeightConstraint=_infoTableViewHeightConstraint;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)confirm:(id)arg1;
- (id)initWithCardData:(id)arg1 userConsentResponse:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

