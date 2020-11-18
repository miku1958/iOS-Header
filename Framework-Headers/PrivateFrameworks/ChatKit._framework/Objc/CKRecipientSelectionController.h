//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKViewController.h>

#import <ChatKit/ABPeoplePickerNavigationControllerDelegate-Protocol.h>
#import <ChatKit/CKRecipientSearchListControllerDelegate-Protocol.h>
#import <ChatKit/MFComposeRecipientTextViewDelegate-Protocol.h>
#import <ChatKit/MFGroupDetailViewControllerDelegate-Protocol.h>

@class ABPeoplePickerNavigationController, CKComposeRecipientView, CKPendingConversation, CKRecipientSearchListController, MFComposeRecipient, NSArray, NSMutableDictionary, NSString, UIScrollView, UIView;
@protocol CKRecipientSelectionControllerDelegate;

@interface CKRecipientSelectionController : CKViewController <MFComposeRecipientTextViewDelegate, CKRecipientSearchListControllerDelegate, MFGroupDetailViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate>
{
    double _keyboardHeightWithAccessoryView;
    BOOL _peoplePickerHidden;
    BOOL _editable;
    BOOL _forceMMS;
    BOOL _preventAtomization;
    BOOL _didShowOneTimeErrorAlert;
    BOOL _homogenizePreferredServiceForiMessage;
    BOOL _shouldSuppressSearchResultsTable;
    id<CKRecipientSelectionControllerDelegate> _delegate;
    CKPendingConversation *_conversation;
    CKComposeRecipientView *_toField;
    UIView *_toFieldContainerView;
    CKRecipientSearchListController *_searchListController;
    UIScrollView *_toFieldScrollingView;
    ABPeoplePickerNavigationController *_peoplePickerController;
    NSArray *_addressBookProperties;
    MFComposeRecipient *_recentContactForPresentedABCard;
    NSMutableDictionary *_recipientAvailibityTimers;
    NSMutableDictionary *_recipientAvailabilities;
}

@property (strong, nonatomic) NSArray *addressBookProperties; // @synthesize addressBookProperties=_addressBookProperties;
@property (readonly, nonatomic) double collapsedHeight;
@property (strong, nonatomic) CKPendingConversation *conversation; // @synthesize conversation=_conversation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<CKRecipientSelectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didShowOneTimeErrorAlert; // @synthesize didShowOneTimeErrorAlert=_didShowOneTimeErrorAlert;
@property (nonatomic, getter=isEditable) BOOL editable; // @synthesize editable=_editable;
@property (nonatomic) BOOL forceMMS; // @synthesize forceMMS=_forceMMS;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL homogenizePreferredServiceForiMessage; // @synthesize homogenizePreferredServiceForiMessage=_homogenizePreferredServiceForiMessage;
@property (strong, nonatomic) ABPeoplePickerNavigationController *peoplePickerController; // @synthesize peoplePickerController=_peoplePickerController;
@property (nonatomic, getter=isPeoplePickerHidden) BOOL peoplePickerHidden; // @synthesize peoplePickerHidden=_peoplePickerHidden;
@property (nonatomic) BOOL preventAtomization; // @synthesize preventAtomization=_preventAtomization;
@property (strong, nonatomic) MFComposeRecipient *recentContactForPresentedABCard; // @synthesize recentContactForPresentedABCard=_recentContactForPresentedABCard;
@property (strong, nonatomic) NSMutableDictionary *recipientAvailabilities; // @synthesize recipientAvailabilities=_recipientAvailabilities;
@property (strong, nonatomic) NSMutableDictionary *recipientAvailibityTimers; // @synthesize recipientAvailibityTimers=_recipientAvailibityTimers;
@property (strong, nonatomic) CKRecipientSearchListController *searchListController; // @synthesize searchListController=_searchListController;
@property (nonatomic, getter=isSearchResultsHidden) BOOL searchResultsHidden;
@property (readonly, nonatomic) BOOL shouldSuppressSearchResultsTable; // @synthesize shouldSuppressSearchResultsTable=_shouldSuppressSearchResultsTable;
@property (readonly) Class superclass;
@property (strong, nonatomic) CKComposeRecipientView *toField; // @synthesize toField=_toField;
@property (strong, nonatomic) UIView *toFieldContainerView; // @synthesize toFieldContainerView=_toFieldContainerView;
@property (readonly, nonatomic) BOOL toFieldIsFirstResponder;
@property (strong, nonatomic) UIScrollView *toFieldScrollingView; // @synthesize toFieldScrollingView=_toFieldScrollingView;

- (void)_adjustToFieldPositionIfNecessary;
- (id)_alternateAddressesForRecipient:(id)arg1;
- (id)_alternateiMessagableAddressesForRecipient:(id)arg1;
- (unsigned long long)_atomPresentationOptionsForRecipient:(id)arg1;
- (BOOL)_availibilityForRecipient:(id)arg1 onService:(id)arg2;
- (id)_canonicalRecipientAddresses;
- (void)_dismissPeoplePicker;
- (void)_handleConversationPreferredServiceDidChangeNotification:(id)arg1;
- (void)_handleRecipientAvailabilityTimeout:(id)arg1;
- (void)_handleRecipientViewChanged:(id)arg1;
- (void)_hideSearchField;
- (BOOL)_isToFieldPushedUp;
- (void)_keyboardWillShowOrHide:(id)arg1;
- (struct UIEdgeInsets)_navigationBarInsets;
- (id)_recipientCausingTooManyRecipientsError;
- (void)_refreshActionSheet;
- (void)_removeAvailabilityTimeoutTimerForRecipient:(id)arg1;
- (void)_removeRecent;
- (void)_resetSearchResultsInsets;
- (void)_showActionSheetForRecipient:(id)arg1 animated:(BOOL)arg2;
- (void)_showDetailsForGroup:(id)arg1;
- (void)_showDetailsForRecipient:(id)arg1 canDelete:(BOOL)arg2;
- (void)_showOneTimeErrorAlertForAddedRecipient:(id)arg1 service:(id)arg2 withError:(BOOL)arg3;
- (void)_showSearchField;
- (void)_startAvailabilityTimeoutTimerForRecipient:(id)arg1;
- (id)_toFieldCollapsedTextColor;
- (void)_updateAddressBookProperties;
- (void)_updateRecipientViewLayouts;
- (void)_updateSearchResultsTable;
- (void)_updateShowingSearch;
- (void)_updateToField;
- (void)addRecipient:(id)arg1;
- (void)addRecipients:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)autocompleteResultsController:(id)arg1 didRequestInfoAboutRecipient:(id)arg2;
- (void)autocompleteResultsController:(id)arg1 didSelectRecipient:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didSelectRecipients:(id)arg2;
- (void)composeRecipientView:(id)arg1 showPersonCardForAtom:(id)arg2;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (void)composeRecipientViewReturnPressed:(id)arg1;
- (void)dealloc;
- (void)didMoveToParentViewController:(id)arg1;
- (BOOL)finishedComposingRecipients;
- (void)groupDetailViewController:(id)arg1 didAskToRemoveGroup:(id)arg2;
- (void)groupDetailViewController:(id)arg1 didTapComposeRecipient:(id)arg2;
- (void)groupDetailViewControllerDidCancel:(id)arg1;
- (BOOL)hasFailediMessageRecipients;
- (BOOL)hasPendingiMessageRecipients;
- (BOOL)hasTimedOutRecipients;
- (BOOL)hasUnreachableEmergencyRecipient;
- (id)init;
- (id)initWithConversation:(id)arg1;
- (void)invalidateOutstandingIDStatusRequests;
- (void)loadView;
- (void)parentControllerDidResume:(BOOL)arg1 animating:(BOOL)arg2;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(const void *)arg2;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (unsigned long long)presentationOptionsForRecipient:(id)arg1;
- (void)recipientAvailibilitiesDidUpdate;
- (void)recipientSelectionControllerDidChange;
- (void)recipientViewDidBecomeFirstResponder:(id)arg1;
- (void)recipientViewDidResignFirstResponder:(id)arg1;
- (BOOL)recipientViewShouldIgnoreFirstResponderChanges:(id)arg1;
- (id)recipients;
- (void)refreshComposeSendingServiceForAddresses:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)removeRecipient:(id)arg1;
- (void)reset;
- (void)searchListController:(id)arg1 destinationsUpdated:(id)arg2;
- (long long)searchListController:(id)arg1 idStatusForIDSID:(id)arg2;
- (void)searchListControllerDidFinishSearch:(id)arg1;
- (void)searchListControllerDidScroll:(id)arg1;
- (void)stopCheckingRecipientAvailabilityAndRemoveAllTimers;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppearDeferredSetup;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

