//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNContactPickerDelegate-Protocol.h>
#import <ContactsUI/CNContactViewControllerPrivateDelegate-Protocol.h>
#import <ContactsUI/CNFamilyMemberAddContactsToWhitelistOptionSheetDelegate-Protocol.h>
#import <ContactsUI/CNUICoreFamilyMemberContactsObserver-Protocol.h>
#import <ContactsUI/CNUIFamilyMemberDowntimeContactPickerControllerDelegate-Protocol.h>

@class CNContactFormatter, CNContactStore, CNContactViewController, FAFamilyMember, NSArray, NSString;
@protocol CNDowntimeWhitelistContainerFetching, CNSchedulerProvider, CNUICoreContactManagementConsentCheck, CNUICoreFamilyMemberWhitelistedContactsDataSource, CNUIFamilyMemberContactsPresentation, CNUIFamilyMemberWhitelistedContactsControllerDelegate;

@interface CNUIFamilyMemberWhitelistedContactsController : NSObject <CNContactViewControllerPrivateDelegate, CNContactPickerDelegate, CNFamilyMemberAddContactsToWhitelistOptionSheetDelegate, CNUIFamilyMemberDowntimeContactPickerControllerDelegate, CNUICoreFamilyMemberContactsObserver>
{
    id<CNUIFamilyMemberContactsPresentation> _familyMemberContactsPresentation;
    FAFamilyMember *_familyMember;
    id<CNUIFamilyMemberWhitelistedContactsControllerDelegate> _delegate;
    CNContactStore *_familyMemberScopedContactStore;
    CNContactFormatter *_contactCardWarningFormatter;
    id<CNUICoreFamilyMemberWhitelistedContactsDataSource> _dataSource;
    id<CNUICoreContactManagementConsentCheck> _contactManagentConsentCheck;
    id<CNDowntimeWhitelistContainerFetching> _downtimeContaienerFetcher;
    id<CNSchedulerProvider> _schedulerProvider;
    CNContactViewController *_contactViewControllerPresentingItemDetails;
}

@property (readonly, nonatomic) CNContactFormatter *contactCardWarningFormatter; // @synthesize contactCardWarningFormatter=_contactCardWarningFormatter;
@property (readonly, nonatomic) id<CNUICoreContactManagementConsentCheck> contactManagentConsentCheck; // @synthesize contactManagentConsentCheck=_contactManagentConsentCheck;
@property (weak, nonatomic) CNContactViewController *contactViewControllerPresentingItemDetails; // @synthesize contactViewControllerPresentingItemDetails=_contactViewControllerPresentingItemDetails;
@property (readonly, nonatomic) id<CNUICoreFamilyMemberWhitelistedContactsDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CNUIFamilyMemberWhitelistedContactsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id<CNDowntimeWhitelistContainerFetching> downtimeContaienerFetcher; // @synthesize downtimeContaienerFetcher=_downtimeContaienerFetcher;
@property (readonly, nonatomic) FAFamilyMember *familyMember; // @synthesize familyMember=_familyMember;
@property (readonly, nonatomic) NSArray *familyMemberContactItems;
@property (readonly, nonatomic) id<CNUIFamilyMemberContactsPresentation> familyMemberContactsPresentation; // @synthesize familyMemberContactsPresentation=_familyMemberContactsPresentation;
@property (readonly, nonatomic) CNContactStore *familyMemberScopedContactStore; // @synthesize familyMemberScopedContactStore=_familyMemberScopedContactStore;
@property (readonly, nonatomic) long long fetchStatus;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property (readonly, nonatomic) long long status;
@property (readonly) Class superclass;

+ (id)contactPickerWithDelegate:(id)arg1 familyMember:(id)arg2 parentContainer:(id)arg3;
- (void).cxx_destruct;
- (void)addContactsToWhitelist:(id)arg1;
- (void)addContactsToWhitelistOptionsSheetDidCancel:(id)arg1;
- (void)addContactsToWhitelistOptionsSheetDidSelectAddFromFamilyMemberContacts:(id)arg1;
- (void)addContactsToWhitelistOptionsSheetDidSelectAddFromMainContacts:(id)arg1;
- (void)addContactsToWhitelistOptionsSheetDidSelectAddNewContact:(id)arg1;
- (id)anchorViewForDefaultInteraction;
- (void)cancelPresentationOfDetailsOfFamilyMemberContactItem:(id)arg1;
- (BOOL)contactManagementEnabled;
- (void)contactPicker:(id)arg1 didSelectContacts:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)contactViewController:(id)arg1 didDeleteContact:(id)arg2;
- (void)contactViewControllerDidExecuteDeleteFromDowntimeWhitelistAction:(id)arg1;
- (void)deleteFamilyMemberContactItem:(id)arg1;
- (void)downtimePickerController:(id)arg1 didFinishWithContacts:(id)arg2;
- (void)familyMemberContactItemsDidChange;
- (id)generateContactSourceOptionSheet;
- (id)init;
- (id)initWithFamilyMember:(id)arg1 familyMemberContactsPresentation:(id)arg2;
- (void)performAddFromFamilyMemberContacts;
- (void)performAddFromMainContacts;
- (void)performAddFromMainContactsForFamilyMember;
- (void)performAddFromMainContactsForThisDevice;
- (void)performAddNewContact;
- (void)performDefaultInteraction;
- (void)performInteraction:(long long)arg1;
- (void)presentDetailsOfFamilyMemberContactItem:(id)arg1;
- (id)warningMessageForContact:(id)arg1;

@end

