//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSConversation, NPKPeerPaymentConversationContext, NSString, PKPeerPaymentController, PKPeerPaymentRecipient;
@protocol OS_dispatch_queue;

@interface NPKPeerPaymentConversationManager : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    MSConversation *_activeConversation;
    PKPeerPaymentRecipient *_recipient;
    NPKPeerPaymentConversationContext *_conversationContext;
    NSString *_currentRecipientAddressLookup;
    PKPeerPaymentController *_currentPeerPaymentController;
}

@property (strong) MSConversation *activeConversation; // @synthesize activeConversation=_activeConversation;
@property (strong, nonatomic) NPKPeerPaymentConversationContext *conversationContext; // @synthesize conversationContext=_conversationContext;
@property (weak, nonatomic) PKPeerPaymentController *currentPeerPaymentController; // @synthesize currentPeerPaymentController=_currentPeerPaymentController;
@property (strong, nonatomic) NSString *currentRecipientAddressLookup; // @synthesize currentRecipientAddressLookup=_currentRecipientAddressLookup;
@property (readonly) PKPeerPaymentRecipient *recipient; // @synthesize recipient=_recipient;
@property (readonly, copy, nonatomic) NSString *recipientDisplayName;
@property (readonly, nonatomic) BOOL recipientFoundInContacts;
@property (readonly, nonatomic) NSString *recipientPhoneOrEmail;
@property (readonly, nonatomic) NSString *senderPhoneOrEmail;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_ambiguousSenderAddressErrorWithUnderlyingError:(id)arg1;
- (id)_displayableErrorWithError:(id)arg1;
- (void)_internalQueue_lookupRecipientInformationWithAddress:(id)arg1 senderAddress:(id)arg2;
- (void)_internalQueue_performPaymentWithAmount:(id)arg1 requestToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_lockedOrRestrictedAccountErrorWithUnderlyingError:(id)arg1;
- (id)_negativeBalanceErrorWithUnderlyingError:(id)arg1;
- (id)_newPeerPaymentController;
- (void)_postNotificationWithRecipient:(id)arg1 error:(id)arg2;
- (id)_sharedPeerPaymentWebService;
- (id)_skeletonPeerPaymentQuoteWithPeerPaymentController:(id)arg1 selectedAmount:(id)arg2 recipient:(id)arg3;
- (id)_unknownPaymentErrorWithUnderlyingError:(id)arg1;
- (id)init;
- (void)lookupRecipientInformationIfNecessary;
- (void)lookupRecipientInformationWithAddress:(id)arg1 senderAddress:(id)arg2;
- (void)performPaymentWithAmount:(id)arg1 requestToken:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
