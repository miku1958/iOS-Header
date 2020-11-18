//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ContactsUI/CNMeCardSharingEnabledDelegate-Protocol.h>
#import <ContactsUI/CNMeCardSharingSettingsHeaderViewControllerDelegate-Protocol.h>
#import <ContactsUI/CNPhotoPickerViewControllerDelegate-Protocol.h>
#import <ContactsUI/UITableViewDataSource-Protocol.h>
#import <ContactsUI/UITableViewDelegate-Protocol.h>
#import <ContactsUI/UITextFieldDelegate-Protocol.h>

@class CNContact, CNContactImage, CNContactStore, CNMeCardSharingAudienceDataSource, CNMeCardSharingContactAvatarProvider, CNMeCardSharingEnabledDataSource, CNMeCardSharingPickerLayoutAttributes, CNMeCardSharingSettingsHeaderViewController, CNMeCardSharingSettingsNameDataSource, CNMutableContact, CNPhotoPickerViewController, CNSharingProfileLogger, CNSharingProfileMeCardUpdater, NSArray, NSString, UISwitch, UITableView, UITextField;
@protocol CNMeCardSharingAvatarProvider, CNMeCardSharingNameProvider, CNMeCardSharingSettingsViewControllerDelegate;

@interface CNMeCardSharingSettingsViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, CNMeCardSharingSettingsHeaderViewControllerDelegate, CNMeCardSharingEnabledDelegate, CNPhotoPickerViewControllerDelegate>
{
    BOOL _shouldSetAsMeContact;
    id<CNMeCardSharingSettingsViewControllerDelegate> _delegate;
    CNContactStore *_contactStore;
    CNContact *_contact;
    CNMutableContact *_editingContact;
    CNContactImage *_editingContactImage;
    NSString *_editingGivenName;
    NSString *_editingFamilyName;
    CNSharingProfileMeCardUpdater *_meCardUpdater;
    CNMeCardSharingPickerLayoutAttributes *_layoutAttributes;
    CNMeCardSharingSettingsHeaderViewController *_headerViewController;
    id<CNMeCardSharingAvatarProvider> _avatarProvider;
    id<CNMeCardSharingNameProvider> _nameProvider;
    CNMeCardSharingSettingsNameDataSource *_nameDataSource;
    CNMeCardSharingEnabledDataSource *_enabledDataSource;
    CNMeCardSharingAudienceDataSource *_sharingAudienceDataSource;
    CNPhotoPickerViewController *_photoPicker;
    NSArray *_sectionDataSources;
    UISwitch *_shareSwitch;
    UITableView *_tableView;
    long long _nameOrder;
    UITextField *_givenNameField;
    UITextField *_familyNameField;
    CNMeCardSharingContactAvatarProvider *_editingContactAvatarProvider;
    CNSharingProfileLogger *_logger;
    double _keyboardHeight;
}

@property (readonly, nonatomic) id<CNMeCardSharingAvatarProvider> avatarProvider; // @synthesize avatarProvider=_avatarProvider;
@property (strong, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property (readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CNMeCardSharingSettingsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) CNMutableContact *editingContact; // @synthesize editingContact=_editingContact;
@property (strong, nonatomic) CNMeCardSharingContactAvatarProvider *editingContactAvatarProvider; // @synthesize editingContactAvatarProvider=_editingContactAvatarProvider;
@property (strong, nonatomic) CNContactImage *editingContactImage; // @synthesize editingContactImage=_editingContactImage;
@property (strong, nonatomic) NSString *editingFamilyName; // @synthesize editingFamilyName=_editingFamilyName;
@property (strong, nonatomic) NSString *editingGivenName; // @synthesize editingGivenName=_editingGivenName;
@property (readonly, nonatomic) CNMeCardSharingEnabledDataSource *enabledDataSource; // @synthesize enabledDataSource=_enabledDataSource;
@property (strong, nonatomic) UITextField *familyNameField; // @synthesize familyNameField=_familyNameField;
@property (strong, nonatomic) UITextField *givenNameField; // @synthesize givenNameField=_givenNameField;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) CNMeCardSharingSettingsHeaderViewController *headerViewController; // @synthesize headerViewController=_headerViewController;
@property (nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property (readonly, nonatomic) CNMeCardSharingPickerLayoutAttributes *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
@property (readonly, nonatomic) CNSharingProfileLogger *logger; // @synthesize logger=_logger;
@property (strong, nonatomic) CNSharingProfileMeCardUpdater *meCardUpdater; // @synthesize meCardUpdater=_meCardUpdater;
@property (readonly, nonatomic) CNMeCardSharingSettingsNameDataSource *nameDataSource; // @synthesize nameDataSource=_nameDataSource;
@property (nonatomic) long long nameOrder; // @synthesize nameOrder=_nameOrder;
@property (readonly, nonatomic) id<CNMeCardSharingNameProvider> nameProvider; // @synthesize nameProvider=_nameProvider;
@property (strong, nonatomic) CNPhotoPickerViewController *photoPicker; // @synthesize photoPicker=_photoPicker;
@property (strong, nonatomic) NSArray *sectionDataSources; // @synthesize sectionDataSources=_sectionDataSources;
@property (readonly, nonatomic) unsigned long long selectedSharingAudience;
@property (strong, nonatomic) UISwitch *shareSwitch; // @synthesize shareSwitch=_shareSwitch;
@property (readonly, nonatomic) CNMeCardSharingAudienceDataSource *sharingAudienceDataSource; // @synthesize sharingAudienceDataSource=_sharingAudienceDataSource;
@property (readonly, nonatomic) BOOL sharingEnabled;
@property (nonatomic) BOOL shouldSetAsMeContact; // @synthesize shouldSetAsMeContact=_shouldSetAsMeContact;
@property (readonly) Class superclass;
@property (strong, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;

+ (id)descriptorForRequiredKeys;
- (void).cxx_destruct;
- (void)adjustInsetsForKeyboardOverlap:(double)arg1;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)dealloc;
- (void)familyNameDidChange:(id)arg1;
- (void)givenNameDidChange:(id)arg1;
- (id)initWithContactStore:(id)arg1 contact:(id)arg2 avatarProvider:(id)arg3 nameProvider:(id)arg4 sharingEnabled:(BOOL)arg5 selectedSharingAudience:(unsigned long long)arg6;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)notifyDelegateOfChangesWithDidSaveToMeCard:(BOOL)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)photoPicker:(id)arg1 didUpdatePhotoForContact:(id)arg2 withContactImage:(id)arg3;
- (void)photoPickerDidCancel:(id)arg1;
- (void)presentErrorAlertForEmptyPhotoIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentPhotoPickerControllerForContact:(id)arg1;
- (void)processSelectionForTableView:(id)arg1 indexPath:(id)arg2;
- (void)promptForSavingToMeCard;
- (void)saveDraftContact;
- (void)sharingEnabledDataSource:(id)arg1 didChangeEnabledState:(BOOL)arg2;
- (void)sharingSettingsHeaderWasTapped:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)textFieldDidEndEditing:(id)arg1;
- (id)textFieldForIndex:(long long)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateContact:(id)arg1 withImagePropertiesFromContact:(id)arg2;
- (void)updateVisibilityOfAudienceSection;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
