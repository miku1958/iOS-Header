//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKPaymentSetupTableViewController.h>

#import <PassKitUI/PKPaymentSetupActivitySpinnerViewControllerProtocol-Protocol.h>

@class NSArray, NSMutableArray, NSString, PKPaymentSetupCardDetailsFooterView, PKPaymentWebService, PKTableHeaderView;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentSetupFlowPickerViewController : PKPaymentSetupTableViewController <PKPaymentSetupActivitySpinnerViewControllerProtocol>
{
    PKTableHeaderView *_headerView;
    PKPaymentSetupCardDetailsFooterView *_footerView;
    NSMutableArray *_pickerItems;
    PKPaymentWebService *_webService;
    id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) PKTableHeaderView *headerView;
@property (readonly, nonatomic) NSArray *pickerItems;
@property (readonly, weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> setupDelegate; // @synthesize setupDelegate=_setupDelegate;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PKPaymentWebService *webService; // @synthesize webService=_webService;

- (void).cxx_destruct;
- (void)_setNavigationBarEnabled:(BOOL)arg1;
- (void)_setupLater:(id)arg1;
- (void)addPickerItem:(id)arg1;
- (id)footerView;
- (void)hideActivitySpinner;
- (id)initWithWebService:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)showActivitySpinner;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

