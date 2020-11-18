//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNContactViewControllerDelegate-Protocol.h>
#import <ContactsUI/CNMultipleUnknownContactsViewControllerDelegate-Protocol.h>
#import <ContactsUI/CNUIEditAuthorizationControllerDelegate-Protocol.h>

@class CNContactStore, CNQueue, CNUIEditAuthorizationController, NSString, UIViewController;
@protocol CNVCardImportControllerDelegate, CNVCardImportControllerPresentationDelegate;

@interface CNVCardImportController : NSObject <CNContactViewControllerDelegate, CNMultipleUnknownContactsViewControllerDelegate, CNUIEditAuthorizationControllerDelegate>
{
    id<CNVCardImportControllerPresentationDelegate> _presentationDelegate;
    id<CNVCardImportControllerDelegate> _delegate;
    CNQueue *_receivedContactsQueue;
    CNContactStore *_contactStore;
    UIViewController *_presentedViewController;
    CNUIEditAuthorizationController *_editAuthorizationController;
}

@property (strong, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CNVCardImportControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) CNUIEditAuthorizationController *editAuthorizationController; // @synthesize editAuthorizationController=_editAuthorizationController;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<CNVCardImportControllerPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
@property (weak, nonatomic) UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property (strong, nonatomic) CNQueue *receivedContactsQueue; // @synthesize receivedContactsQueue=_receivedContactsQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)authorizationCheckForSavingReceivedContacts;
- (void)authorizeAndSaveUnknownPersons;
- (void)cancelModalUnknownPersons:(id)arg1;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (id)contactsFromURL:(id)arg1;
- (id)dequeueContacts;
- (void)dismissContactsAndPresentNext;
- (void)editAuthorizationController:(id)arg1 authorizationDidFinishWithResult:(long long)arg2;
- (void)enqueueContacts:(id)arg1;
- (BOOL)enqueueContactsAtURL:(id)arg1;
- (id)initWithContactStore:(id)arg1 presentationDelegate:(id)arg2;
- (void)multipleUnknownContactsViewControllerDidComplete:(id)arg1;
- (void)presentEnqueueResultsUIForResultContacts:(id)arg1;
- (void)presentImportUIForContacts:(id)arg1;
- (void)processNextContacts;
- (void)saveUnknownPersons:(id)arg1;
- (void)saveUnknownPersonsAndMarkSaveWithAuthorizationResult:(long long)arg1;
- (void)showEditAuthorizationPane:(id)arg1 animated:(BOOL)arg2;

@end
