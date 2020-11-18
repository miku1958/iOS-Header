//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/CNContactPickerDelegate-Protocol.h>
#import <PassKitUI/PKAddressEditorViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKAddressSearcherViewControllerDelegate-Protocol.h>
#import <PassKitUI/UITableViewDataSource-Protocol.h>
#import <PassKitUI/UITableViewDelegate-Protocol.h>
#import <PassKitUI/UITextFieldDelegate-Protocol.h>

@class NSArray, NSIndexPath, NSString, PKPassSnapshotter, PKPaymentPass, PKPaymentPreferenceButtonCell, UISwitch, UITableView, UITextField;

@interface PKPaymentPreferencesViewController : UIViewController <CNContactPickerDelegate, UITextFieldDelegate, PKAddressSearcherViewControllerDelegate, PKAddressEditorViewControllerDelegate, UITableViewDataSource, UITableViewDelegate>
{
    PKPassSnapshotter *_passSnapshotter;
    UITextField *_currentEditingField;
    NSIndexPath *_currentEditingIndexPath;
    PKPaymentPreferenceButtonCell *_sizingButtonCell;
    PKPaymentPass *_paymentPassForBillingErrors;
    PKPaymentPass *_currentlySelectedPaymentPass;
    UISwitch *_peerPaymentAccountPaymentSwitch;
    NSArray *_latestPreferences;
    NSArray *_preferences;
    long long _style;
    UITableView *_tableView;
    CDUnknownBlockType _handler;
    CDUnknownBlockType _pickedContactPropertyHandler;
    CDUnknownBlockType _pickedContactHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) CDUnknownBlockType pickedContactHandler; // @synthesize pickedContactHandler=_pickedContactHandler;
@property (copy, nonatomic) CDUnknownBlockType pickedContactPropertyHandler; // @synthesize pickedContactPropertyHandler=_pickedContactPropertyHandler;
@property (strong, nonatomic) NSArray *preferences; // @synthesize preferences=_preferences;
@property (readonly, nonatomic) long long style; // @synthesize style=_style;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;

- (void).cxx_destruct;
- (id)_cellForNamePreference:(id)arg1 row:(unsigned long long)arg2;
- (id)_cellForPreference:(id)arg1 row:(unsigned long long)arg2;
- (id)_cellOfClass:(Class)arg1;
- (void)_cleanupInlineEdits;
- (void)_editPreferenceAtIndexPath:(id)arg1;
- (id)_hyperlinkFooterViewForPreference:(id)arg1;
- (BOOL)_isPaymentStyle;
- (BOOL)_isViewTranslucent;
- (void)_keyboardDidShow:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (id)_peerPaymentAccountPaymentSwitch;
- (void)_presentMeCardAlertControllerWithContact:(id)arg1 contactKey:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)_requiredKeysForPreference:(id)arg1 contact:(id)arg2;
- (void)_savePickedContact:(id)arg1 inPreference:(id)arg2;
- (BOOL)_saveUpdatedContact:(id)arg1 contactKey:(id)arg2 preference:(id)arg3 atIndex:(long long)arg4;
- (void)_setContactHandlersForPreference:(id)arg1;
- (void)_showAddressEditorForContact:(id)arg1 title:(id)arg2 requiredKeys:(id)arg3 highlightedKeys:(id)arg4 errors:(id)arg5;
- (void)_showAddressPickerForPreference:(id)arg1;
- (void)_showContactsPickerForPreference:(id)arg1;
- (void)_startInlineEditingForPreference:(id)arg1 inSection:(unsigned long long)arg2;
- (void)_updateContactAndForceSelection:(BOOL)arg1;
- (BOOL)_updateMeCardWithNewContact:(id)arg1 oldContact:(id)arg2 forKey:(id)arg3 usingPreference:(id)arg4;
- (void)_updateNavigationBarButtons;
- (void)_updatePreferredContentSize;
- (void)addressEditorViewController:(id)arg1 selectedContact:(id)arg2;
- (void)addressEditorViewControllerDidCancel:(id)arg1;
- (void)addressSearcherViewController:(id)arg1 selectedContact:(id)arg2;
- (void)addressSearcherViewControllerDidCancel:(id)arg1;
- (void)applePayCashSwitchValueChanged:(id)arg1;
- (void)clearErrorsForPreference:(Class)arg1;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)dealloc;
- (void)hideTextField:(id)arg1;
- (id)initWithStyle:(long long)arg1 preferences:(id)arg2 title:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)pk_childrenForAppearance;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setErrors:(id)arg1 animated:(BOOL)arg2;
- (void)setErrors:(id)arg1 otherPass:(id)arg2 animated:(BOOL)arg3;
- (void)setErrors:(id)arg1 selectedPass:(id)arg2 animated:(BOOL)arg3;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableViewDidFinishReload:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end

