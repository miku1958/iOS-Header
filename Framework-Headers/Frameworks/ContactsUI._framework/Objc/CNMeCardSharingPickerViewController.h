//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ContactsUI/CNMeCardSharingAvatarViewControllerDelegate-Protocol.h>
#import <ContactsUI/CNMeCardSharingEnabledDelegate-Protocol.h>
#import <ContactsUI/CNPhotoPickerViewControllerDelegate-Protocol.h>
#import <ContactsUI/UITableViewDataSource-Protocol.h>
#import <ContactsUI/UITableViewDelegate-Protocol.h>

@class CNContact, CNContactImage, CNContactStore, CNMeCardSharingAudienceDataSource, CNMeCardSharingAvatarViewController, CNMeCardSharingEnabledDataSource, CNMeCardSharingHeaderViewController, CNMeCardSharingPickerLayoutAttributes, CNMutableContact, CNPhotoPickerViewController, NSArray, NSString, OBBoldTrayButton, OBLinkTrayButton, UISwitch, UITableView, UIView;
@protocol CNMeCardSharingAvatarProvider, CNMeCardSharingPickerViewControllerDelegate;

@interface CNMeCardSharingPickerViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, CNMeCardSharingAvatarViewControllerDelegate, CNMeCardSharingEnabledDelegate, CNPhotoPickerViewControllerDelegate>
{
    BOOL _shouldSetMeContact;
    BOOL _sharingEnabled;
    unsigned long long _mode;
    id<CNMeCardSharingPickerViewControllerDelegate> _delegate;
    CNContactStore *_contactStore;
    CNContact *_contact;
    CNMutableContact *_draftContact;
    CNContactImage *_draftContactImage;
    CNMeCardSharingHeaderViewController *_headerViewController;
    id<CNMeCardSharingAvatarProvider> _avatarProvider;
    CNMeCardSharingAvatarViewController *_avatarViewController;
    CNMeCardSharingEnabledDataSource *_enabledDataSource;
    CNMeCardSharingAudienceDataSource *_sharingAudienceDataSource;
    CNMeCardSharingPickerLayoutAttributes *_layoutAttributes;
    CNPhotoPickerViewController *_photoPicker;
    NSArray *_sectionDataSources;
    UIView *_buttonTray;
    OBBoldTrayButton *_confirmButton;
    OBLinkTrayButton *_laterButton;
    UISwitch *_shareSwitch;
    UITableView *_tableView;
}

@property (strong, nonatomic) id<CNMeCardSharingAvatarProvider> avatarProvider; // @synthesize avatarProvider=_avatarProvider;
@property (strong, nonatomic) CNMeCardSharingAvatarViewController *avatarViewController; // @synthesize avatarViewController=_avatarViewController;
@property (strong, nonatomic) UIView *buttonTray; // @synthesize buttonTray=_buttonTray;
@property (strong, nonatomic) OBBoldTrayButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property (strong, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property (strong, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CNMeCardSharingPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) CNMutableContact *draftContact; // @synthesize draftContact=_draftContact;
@property (strong, nonatomic) CNContactImage *draftContactImage; // @synthesize draftContactImage=_draftContactImage;
@property (strong, nonatomic) CNMeCardSharingEnabledDataSource *enabledDataSource; // @synthesize enabledDataSource=_enabledDataSource;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) CNMeCardSharingHeaderViewController *headerViewController; // @synthesize headerViewController=_headerViewController;
@property (strong, nonatomic) OBLinkTrayButton *laterButton; // @synthesize laterButton=_laterButton;
@property (strong, nonatomic) CNMeCardSharingPickerLayoutAttributes *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
@property (nonatomic) unsigned long long meCardSharingStatus;
@property (readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property (strong, nonatomic) CNPhotoPickerViewController *photoPicker; // @synthesize photoPicker=_photoPicker;
@property (strong, nonatomic) NSArray *sectionDataSources; // @synthesize sectionDataSources=_sectionDataSources;
@property (readonly, nonatomic) unsigned long long selectedNameFormat;
@property (readonly, nonatomic) unsigned long long selectedSharingAudience;
@property (strong, nonatomic) UISwitch *shareSwitch; // @synthesize shareSwitch=_shareSwitch;
@property (readonly, nonatomic) NSString *sharedName;
@property (strong, nonatomic) CNMeCardSharingAudienceDataSource *sharingAudienceDataSource; // @synthesize sharingAudienceDataSource=_sharingAudienceDataSource;
@property (nonatomic) BOOL sharingEnabled; // @synthesize sharingEnabled=_sharingEnabled;
@property (nonatomic) BOOL shouldSetMeContact; // @synthesize shouldSetMeContact=_shouldSetMeContact;
@property (readonly) Class superclass;
@property (strong, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;

+ (id)descriptorForRequiredKeys;
- (void).cxx_destruct;
- (void)avatarViewControllerWasTapped:(id)arg1;
- (void)didTapDoneButton:(id)arg1;
- (void)didTapSetUpLaterButton:(id)arg1;
- (id)initWithContact:(id)arg1;
- (id)initWithContactStore:(id)arg1 contact:(id)arg2 nameProvider:(id)arg3 sharingEnabled:(BOOL)arg4 selectedNameFormat:(unsigned long long)arg5 selectedSharingAudience:(unsigned long long)arg6 mode:(unsigned long long)arg7;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)photoPicker:(id)arg1 didUpdatePhotoForContact:(id)arg2 withContactImage:(id)arg3;
- (void)photoPickerDidCancel:(id)arg1;
- (void)saveDraftContact;
- (void)sharingEnabledDataSource:(id)arg1 didChangeEnabledState:(BOOL)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end

