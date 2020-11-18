//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <PassKit/CNContactPickerDelegate-Protocol.h>
#import <PassKit/CNPostalAddressEditorDelegate-Protocol.h>
#import <PassKit/UITextFieldDelegate-Protocol.h>

@class CNPostalAddressEditorNavigationController, NSString, PKPassSnapshotter, PKPaymentOptionsModel;
@protocol PKPaymentOptionsViewControllerDelegate;

@interface PKPaymentOptionsViewController : UITableViewController <CNContactPickerDelegate, CNPostalAddressEditorDelegate, UITextFieldDelegate>
{
    PKPaymentOptionsModel *_optionsModel;
    int _optionsStyle;
    CNPostalAddressEditorNavigationController *_addressEditorViewController;
    PKPassSnapshotter *_passSnapshotter;
    NSString *_title;
    BOOL _isEditable;
    BOOL _showDisclosureIndicators;
    id<PKPaymentOptionsViewControllerDelegate> _delegate;
    CDUnknownBlockType _pickedContactPropertyHandler;
    CDUnknownBlockType _pickedContactHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<PKPaymentOptionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) CDUnknownBlockType pickedContactHandler; // @synthesize pickedContactHandler=_pickedContactHandler;
@property (copy, nonatomic) CDUnknownBlockType pickedContactPropertyHandler; // @synthesize pickedContactPropertyHandler=_pickedContactPropertyHandler;
@property (nonatomic) BOOL showDisclosureIndicators; // @synthesize showDisclosureIndicators=_showDisclosureIndicators;
@property (readonly) Class superclass;

- (id)_passSnapshotter;
- (BOOL)_presentedModally;
- (void)_showAddressEntryViewControllerForOptionsGroup:(id)arg1;
- (BOOL)_showChinaDistrictAddressFlowIfRequiredWithOptionsGroup:(id)arg1 contact:(id)arg2 labeledValue:(id)arg3;
- (void)_showContactsPickerForProperty:(id)arg1 optionsGroup:(id)arg2;
- (void)_showEntryViewControllerForProperty:(id)arg1 optionsGroup:(id)arg2 contact:(id)arg3;
- (void)_updateContactName;
- (void)_updateNavigationBar;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (id)initWithTitle:(id)arg1 optionsStyle:(int)arg2;
- (id)initWithTitle:(id)arg1 optionsStyle:(int)arg2 editable:(BOOL)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)paymentPasses;
- (void)postalAddressEditor:(id)arg1 finishedEditingContact:(id)arg2;
- (void)postalAddressEditor:(id)arg1 finishedEditingProperty:(id)arg2;
- (void)postalAddressEditorDidCancel:(id)arg1;
- (void)setBillingAddressOptions:(id)arg1 selectedIndex:(long long)arg2 optionsChangedHandler:(CDUnknownBlockType)arg3;
- (void)setEmailOptions:(id)arg1 selectedIndex:(long long)arg2 optionsChangedHandler:(CDUnknownBlockType)arg3;
- (void)setNameOptions:(id)arg1 selectedIndex:(long long)arg2 optionsChangedHandler:(CDUnknownBlockType)arg3;
- (void)setPaymentPassOptions:(id)arg1 selectedIndex:(long long)arg2 unavailablePaymentPasses:(id)arg3 optionsChangedHandler:(CDUnknownBlockType)arg4;
- (void)setPhoneOptions:(id)arg1 selectedIndex:(long long)arg2 optionsChangedHandler:(CDUnknownBlockType)arg3;
- (void)setSelectedPaymentPass:(id)arg1;
- (void)setShippingAddressOptions:(id)arg1 selectedIndex:(long long)arg2 displayMode:(id)arg3 displayName:(id)arg4 optionsChangedHandler:(CDUnknownBlockType)arg5;
- (void)setShippingMethods:(id)arg1 currencyCode:(id)arg2 selectedIndex:(long long)arg3 displayMode:(id)arg4 optionsChangedHandler:(CDUnknownBlockType)arg5;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)textFieldDidBeginEditing:(id)arg1;
- (id)title;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end

