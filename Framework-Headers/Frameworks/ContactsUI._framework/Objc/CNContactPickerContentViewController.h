//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ContactsUI/CNContactNavigationControllerDelegate-Protocol.h>
#import <ContactsUI/CNContactPickerContentViewController-Protocol.h>

@class CNContactNavigationController, CNContactStoreDataSource, CNManagedConfiguration, FAFamilyMember, NSArray, NSMutableArray, NSPredicate, NSString, UIBarButtonItem, UINavigationController;
@protocol CNContactPickerContentDelegate;

__attribute__((visibility("hidden")))
@interface CNContactPickerContentViewController : UIViewController <CNContactNavigationControllerDelegate, CNContactPickerContentViewController>
{
    BOOL _clientWantsSingleContact;
    BOOL _clientWantsSingleProperty;
    BOOL _clientWantsMultipleContacts;
    BOOL _clientWantsMultipleProperties;
    BOOL _clientHasContactsAccess;
    BOOL _hidesSearchableSources;
    BOOL _onlyRealContacts;
    BOOL _ignoresParentalRestrictions;
    BOOL _allowsEditing;
    BOOL _allowsCancel;
    BOOL _allowsDeletion;
    BOOL _hidesPromptInLandscape;
    id<CNContactPickerContentDelegate> _delegate;
    CNContactNavigationController *_contactNavigationController;
    CNContactStoreDataSource *_dataSource;
    NSMutableArray *_contactProperties;
    NSArray *_displayedPropertyKeys;
    long long _cardActions;
    NSString *_prompt;
    NSString *_bannerTitle;
    NSString *_bannerValue;
    NSPredicate *_predicateForEnablingContact;
    NSPredicate *_predicateForSelectionOfContact;
    NSPredicate *_predicateForSelectionOfProperty;
    CNManagedConfiguration *_managedConfiguration;
    FAFamilyMember *_familyMember;
    NSArray *_prohibitedPropertyKeys;
}

@property (readonly, nonatomic) UIBarButtonItem *addContactBarButtonItem;
@property (nonatomic) BOOL allowsCancel; // @synthesize allowsCancel=_allowsCancel;
@property (nonatomic) BOOL allowsDeletion; // @synthesize allowsDeletion=_allowsDeletion;
@property (nonatomic) BOOL allowsEditing; // @synthesize allowsEditing=_allowsEditing;
@property (copy, nonatomic) NSString *bannerTitle; // @synthesize bannerTitle=_bannerTitle;
@property (copy, nonatomic) NSString *bannerValue; // @synthesize bannerValue=_bannerValue;
@property (nonatomic) long long cardActions; // @synthesize cardActions=_cardActions;
@property (nonatomic) BOOL clientHasContactsAccess; // @synthesize clientHasContactsAccess=_clientHasContactsAccess;
@property (nonatomic) BOOL clientWantsMultipleContacts; // @synthesize clientWantsMultipleContacts=_clientWantsMultipleContacts;
@property (nonatomic) BOOL clientWantsMultipleProperties; // @synthesize clientWantsMultipleProperties=_clientWantsMultipleProperties;
@property (nonatomic) BOOL clientWantsSingleContact; // @synthesize clientWantsSingleContact=_clientWantsSingleContact;
@property (nonatomic) BOOL clientWantsSingleProperty; // @synthesize clientWantsSingleProperty=_clientWantsSingleProperty;
@property (strong, nonatomic) CNContactNavigationController *contactNavigationController; // @synthesize contactNavigationController=_contactNavigationController;
@property (strong, nonatomic) NSMutableArray *contactProperties; // @synthesize contactProperties=_contactProperties;
@property (strong, nonatomic) CNContactStoreDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CNContactPickerContentDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *displayedPropertyKeys; // @synthesize displayedPropertyKeys=_displayedPropertyKeys;
@property (strong, nonatomic) FAFamilyMember *familyMember; // @synthesize familyMember=_familyMember;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL hidesPromptInLandscape; // @synthesize hidesPromptInLandscape=_hidesPromptInLandscape;
@property (nonatomic) BOOL hidesSearchableSources; // @synthesize hidesSearchableSources=_hidesSearchableSources;
@property (nonatomic) BOOL ignoresParentalRestrictions; // @synthesize ignoresParentalRestrictions=_ignoresParentalRestrictions;
@property (strong, nonatomic) CNManagedConfiguration *managedConfiguration; // @synthesize managedConfiguration=_managedConfiguration;
@property (readonly, nonatomic) UINavigationController *navigationController;
@property (nonatomic) BOOL onlyRealContacts; // @synthesize onlyRealContacts=_onlyRealContacts;
@property (copy, nonatomic) NSPredicate *predicateForEnablingContact; // @synthesize predicateForEnablingContact=_predicateForEnablingContact;
@property (copy, nonatomic) NSPredicate *predicateForSelectionOfContact; // @synthesize predicateForSelectionOfContact=_predicateForSelectionOfContact;
@property (copy, nonatomic) NSPredicate *predicateForSelectionOfProperty; // @synthesize predicateForSelectionOfProperty=_predicateForSelectionOfProperty;
@property (strong, nonatomic) NSArray *prohibitedPropertyKeys; // @synthesize prohibitedPropertyKeys=_prohibitedPropertyKeys;
@property (copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property (readonly) Class superclass;

+ (id)descriptorForContactPropertiesSupportingPredicateEvaluation;
- (void).cxx_destruct;
- (void)_selectedContact:(id)arg1;
- (void)_selectedContacts:(id)arg1;
- (void)_selectedProperties:(id)arg1;
- (void)_selectedProperty:(id)arg1;
- (void)_updatePromptWithViewSize:(struct CGSize)arg1 transitionCoordinator:(id)arg2;
- (id)_validatePredicatesWithError:(id *)arg1;
- (BOOL)contactNavigationController:(id)arg1 canSelectContact:(id)arg2;
- (BOOL)contactNavigationController:(id)arg1 presentViewController:(id)arg2 animated:(BOOL)arg3;
- (BOOL)contactNavigationController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
- (BOOL)contactNavigationController:(id)arg1 shouldSelectContact:(id)arg2 atIndexPath:(id)arg3;
- (BOOL)contactNavigationController:(id)arg1 shouldShowCardForContact:(id)arg2;
- (void)contactNavigationControllerDidCancel:(id)arg1;
- (void)contactNavigationControllerDidComplete:(id)arg1;
- (BOOL)contactNavigationControllerShouldAddNewContact:(id)arg1;
- (BOOL)contactNavigationControllerShouldShowContactsOnKeyCommands:(id)arg1;
- (id)descriptorsForKeysRequiredByDelegate;
- (id)init;
- (void)invalidate;
- (void)invalidateSelectionAnimated:(BOOL)arg1;
- (void)setupWithOptions:(id)arg1 readyBlock:(CDUnknownBlockType)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end
