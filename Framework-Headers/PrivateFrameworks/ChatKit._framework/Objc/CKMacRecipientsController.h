//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKViewController.h>

#import <ChatKit/CKDetailsContactsManagerDelegate-Protocol.h>
#import <ChatKit/CNComposeRecipientTextViewDelegate-Protocol.h>

@class CKConversation, CKDetailsContactsManager, CKManualUpdater, CNComposeRecipientTextView, NSString, STConversationContext, UIScrollView, UIView;
@protocol CKMacRecipientsControllerDelegate;

@interface CKMacRecipientsController : CKViewController <CNComposeRecipientTextViewDelegate, CKDetailsContactsManagerDelegate>
{
    BOOL _allowedByScreenTime;
    CKConversation *_conversation;
    CNComposeRecipientTextView *_toField;
    UIView *_detailsPopoverPresentationSourceView;
    STConversationContext *_currentConversationContext;
    id<CKMacRecipientsControllerDelegate> _delegate;
    CKDetailsContactsManager *_contactsManager;
    UIScrollView *_toFieldScrollView;
    CKManualUpdater *_addressBookNotificationUpdater;
    unsigned long long _numberOfRowsInToField;
}

@property (strong, nonatomic) CKManualUpdater *addressBookNotificationUpdater; // @synthesize addressBookNotificationUpdater=_addressBookNotificationUpdater;
@property (nonatomic) BOOL allowedByScreenTime; // @synthesize allowedByScreenTime=_allowedByScreenTime;
@property (strong, nonatomic) CKDetailsContactsManager *contactsManager; // @synthesize contactsManager=_contactsManager;
@property (weak, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
@property (strong, nonatomic) STConversationContext *currentConversationContext; // @synthesize currentConversationContext=_currentConversationContext;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CKMacRecipientsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIView *detailsPopoverPresentationSourceView; // @synthesize detailsPopoverPresentationSourceView=_detailsPopoverPresentationSourceView;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long numberOfRowsInToField; // @synthesize numberOfRowsInToField=_numberOfRowsInToField;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CNComposeRecipientTextView *toField; // @synthesize toField=_toField;
@property (strong, nonatomic) UIScrollView *toFieldScrollView; // @synthesize toFieldScrollView=_toFieldScrollView;

- (void).cxx_destruct;
- (unsigned long long)_atomPresentationOptionsForRecipient:(id)arg1;
- (struct CGRect)_detailsPopoverFrame;
- (void)_handleAddressBookChangedNotification:(id)arg1;
- (void)_handleAddressBookPartialChangedNotification:(id)arg1;
- (void)_handleConversationPreferredServiceDidChangeNotification:(id)arg1;
- (void)_notifyDelegatesToFieldHeightHasChanged;
- (void)_reloadCurrentRecipientData;
- (BOOL)_shouldEnableScrolling;
- (double)_toolbarHeightForNumberOfRows:(unsigned long long)arg1;
- (void)_updateToFieldFrame;
- (void)addRecipients:(id)arg1;
- (id)composeRecipientView:(id)arg1 contextMenuConfigurationForAtom:(id)arg2;
- (void)contactsManagerViewModelsDidChange:(id)arg1;
- (void)dealloc;
- (id)handlesForScreenTimePolicyCheck;
- (id)initWithConversation:(id)arg1;
- (BOOL)isEditable;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (double)preferredMacToolbarHeight;
- (unsigned long long)presentationOptionsForRecipient:(id)arg1;
- (id)recipients;
- (void)refreshRecipients;
- (void)reset;
- (void)updateScreenTimePolicy;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
