//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKPaymentSetupTableViewController.h>

#import <PassKitUI/PKPaymentSetupActivitySpinnerProtocol-Protocol.h>
#import <PassKitUI/PKPaymentSetupBrowseProductsViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKPaymentSetupHideSetupLaterButtonProtocol-Protocol.h>

@class NSArray, NSMutableArray, NSString, PKPaymentProvisioningController, PKPaymentSetupFooterView, PKTableHeaderView;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentSetupFlowPickerViewController : PKPaymentSetupTableViewController <PKPaymentSetupActivitySpinnerProtocol, PKPaymentSetupBrowseProductsViewControllerDelegate, PKPaymentSetupHideSetupLaterButtonProtocol>
{
    PKTableHeaderView *_headerView;
    PKPaymentSetupFooterView *_footerView;
    NSMutableArray *_pickerSections;
    NSArray *_betaTransitNetworks;
    BOOL _hideSetupLaterButton;
    BOOL _allowsManualEntry;
    PKPaymentProvisioningController *_provisioningController;
    id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
    long long _setupContext;
}

@property (nonatomic) BOOL allowsManualEntry; // @synthesize allowsManualEntry=_allowsManualEntry;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) PKTableHeaderView *headerView;
@property (nonatomic) BOOL hideSetupLaterButton; // @synthesize hideSetupLaterButton=_hideSetupLaterButton;
@property (readonly, nonatomic) PKPaymentProvisioningController *provisioningController; // @synthesize provisioningController=_provisioningController;
@property (readonly, nonatomic) long long setupContext; // @synthesize setupContext=_setupContext;
@property (readonly, weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> setupDelegate; // @synthesize setupDelegate=_setupDelegate;
@property (readonly) Class superclass;

+ (id)_filteredPaymentSetupProducts:(id)arg1 localCredential:(id)arg2 setupContext:(long long)arg3 webService:(id)arg4 mobileCarrierRegion:(id)arg5;
+ (BOOL)_localCredentials:(id)arg1 containProduct:(id)arg2;
+ (id)paymentSetupFlowPickerWithSetupDelegate:(id)arg1 context:(long long)arg2 provisioningController:(id)arg3;
- (void).cxx_destruct;
- (void)_didSelectProducts:(id)arg1;
- (void)_setNavigationBarEnabled:(BOOL)arg1;
- (void)_setupLater:(id)arg1;
- (void)_terminateSetupFlow;
- (void)addPickerItem:(id)arg1 toSection:(id)arg2;
- (void)addPickerSection:(id)arg1;
- (void)browseProductsViewController:(id)arg1 didSelectProduct:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)footerView;
- (void)hideActivitySpinner;
- (id)initWithSetupDelegate:(id)arg1 context:(long long)arg2 provisioningController:(id)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)productSelectionViewController:(id)arg1 didSelectProduct:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)productSelectionViewController:(id)arg1 pushViewController:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)showActivitySpinner;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

