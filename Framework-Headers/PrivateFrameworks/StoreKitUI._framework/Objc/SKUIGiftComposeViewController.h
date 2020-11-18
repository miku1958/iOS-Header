//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIGiftStepViewController.h>

#import <StoreKitUI/UIPopoverControllerDelegate-Protocol.h>
#import <StoreKitUI/UITableViewDataSource-Protocol.h>
#import <StoreKitUI/UITableViewDelegate-Protocol.h>
#import <StoreKitUI/UITextFieldDelegate-Protocol.h>

@class NSIndexPath, NSMutableArray, NSObject, NSString, SKUIGiftAddressingSection, SKUIGiftAmountSection, SKUIGiftItemView, SKUIGiftSendDateSection, SKUIGiftTermsAndConditionsSection, SKUIGiftValidationResponse, SKUIGiftValidator, UIDatePicker, UIImage, UIPopoverController, UITableView, UIView;
@protocol OS_dispatch_source;

@interface SKUIGiftComposeViewController : SKUIGiftStepViewController <UIPopoverControllerDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate>
{
    SKUIGiftAddressingSection *_addressingSection;
    SKUIGiftAmountSection *_amountSection;
    UIDatePicker *_datePicker;
    UIImage *_itemImage;
    SKUIGiftItemView *_itemView;
    SKUIGiftValidationResponse *_lastValidationResponse;
    UIView *_searchResultsView;
    NSMutableArray *_sections;
    SKUIGiftSendDateSection *_sendDateSection;
    NSIndexPath *_showDatePickerIndexPathAfterKeyboardDismiss;
    UITableView *_tableView;
    BOOL _tappedNextWhileValidating;
    SKUIGiftTermsAndConditionsSection *_termsSection;
    NSObject<OS_dispatch_source> *_validationTimer;
    SKUIGiftValidator *_validator;
    UIPopoverController *_datePickerPopover;
    UIPopoverController *_peoplePickerPopover;
    UIPopoverController *_searchResultsPopover;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_amountControlAction:(id)arg1;
- (void)_cancelAction:(id)arg1;
- (void)_datePickerAction:(id)arg1;
- (void)_finishValidationWithResponse:(id)arg1 error:(id)arg2;
- (id)_headerView;
- (id)_itemImage;
- (id)_itemView;
- (void)_keyboardChangeNotification:(id)arg1;
- (void)_nextAction:(id)arg1;
- (void)_pushThemePickerOrShowInvalidAlert;
- (void)_recipientsDidChangeNotification:(id)arg1;
- (void)_reloadSections;
- (void)_removeDatePickerIfPossible;
- (void)_setItemImage:(id)arg1 error:(id)arg2;
- (void)_showDatePickerForRowAtIndexPath:(id)arg1;
- (void)_showDatePickerPopoverForRowAtIndexPath:(id)arg1;
- (void)_textFieldChangeNotification:(id)arg1;
- (void)_textViewChangeNotification:(id)arg1;
- (void)_textViewDidEndEditingNotification:(id)arg1;
- (void)_validateGift;
- (void)_validateGiftThrottled:(BOOL)arg1;
- (void)dealloc;
- (id)initWithGift:(id)arg1 configuration:(id)arg2;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (BOOL)popoverControllerShouldDismissPopover:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 giftRecipientCell:(id)arg2 didUpdateSearchController:(id)arg3;
- (void)tableView:(id)arg1 giftRecipientCell:(id)arg2 dismissContactPicker:(id)arg3;
- (void)tableView:(id)arg1 giftRecipientCell:(id)arg2 presentContactPicker:(id)arg3;
- (void)tableView:(id)arg1 giftRecipientCellDidChangeRecipients:(id)arg2;
- (void)tableView:(id)arg1 giftRecipientCellDidChangeSize:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

