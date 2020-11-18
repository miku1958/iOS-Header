//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBTableWelcomeController.h>

#import <ContactsUI/UITableViewDataSource-Protocol.h>
#import <ContactsUI/UITableViewDelegate-Protocol.h>
#import <ContactsUI/UITextFieldDelegate-Protocol.h>

@class CNMutableContact, CNSharingProfileAudienceDataSource, NSLayoutConstraint, NSString, OBBoldTrayButton, UITextField;
@protocol CNSharingProfileOnboardingAudienceViewControllerDelegate;

@interface CNSharingProfileOnboardingAudienceViewController : OBTableWelcomeController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate>
{
    id<CNSharingProfileOnboardingAudienceViewControllerDelegate> _delegate;
    NSLayoutConstraint *_tableViewHeightConstraint;
    OBBoldTrayButton *_confirmButton;
    UITextField *_givenNameField;
    UITextField *_familyNameField;
    CNMutableContact *_contact;
    CNSharingProfileAudienceDataSource *_sharingAudienceDataSource;
    double _keyboardHeight;
    long long _nameOrder;
}

@property (strong, nonatomic) OBBoldTrayButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property (strong, nonatomic) CNMutableContact *contact; // @synthesize contact=_contact;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CNSharingProfileOnboardingAudienceViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UITextField *familyNameField; // @synthesize familyNameField=_familyNameField;
@property (strong, nonatomic) UITextField *givenNameField; // @synthesize givenNameField=_givenNameField;
@property (readonly) unsigned long long hash;
@property (nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property (nonatomic) long long nameOrder; // @synthesize nameOrder=_nameOrder;
@property (strong, nonatomic) CNSharingProfileAudienceDataSource *sharingAudienceDataSource; // @synthesize sharingAudienceDataSource=_sharingAudienceDataSource;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSLayoutConstraint *tableViewHeightConstraint; // @synthesize tableViewHeightConstraint=_tableViewHeightConstraint;

+ (id)descriptorForRequiredKeys;
+ (id)headerText;
- (void).cxx_destruct;
- (void)adjustInsetsForKeyboardOverlap:(double)arg1;
- (id)cellForNameInTableView:(id)arg1;
- (id)confirmButtonTitle;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)dealloc;
- (void)familyNameDidChange:(id)arg1;
- (void)givenNameDidChange:(id)arg1;
- (void)handleConfirmButtonTapped:(id)arg1;
- (id)initWithContact:(id)arg1 selectedSharingAudience:(unsigned long long)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
