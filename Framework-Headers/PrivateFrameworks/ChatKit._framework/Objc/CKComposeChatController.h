//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKChatController.h>

#import <ChatKit/CKBusinessInfoViewDelegate-Protocol.h>
#import <ChatKit/CKComposeRecipientSelectionControllerDelegate-Protocol.h>

@class CKBusinessInfoView, CKComposeNavbarManager, CKComposeRecipientSelectionController, CKComposition, CKTranscriptMultilineLabelCell, NSArray, NSDictionary, NSString, OBWelcomeController, UIBarButtonItem;
@protocol CKComposeChatControllerDelegate;

@interface CKComposeChatController : CKChatController <CKComposeRecipientSelectionControllerDelegate, CKBusinessInfoViewDelegate>
{
    BOOL _ignoreKeyboardNotifications;
    BOOL _newComposeCancelled;
    BOOL _sendingViaCardUI;
    CKComposeRecipientSelectionController *_composeRecipientSelectionController;
    NSArray *_prepopulatedRecipients;
    CKComposition *_prepopulatedComposition;
    UIBarButtonItem *_composeCancelItem;
    CKComposeNavbarManager *_navbarManager;
    NSDictionary *_bizIntent;
    CKBusinessInfoView *_businessInfoView;
    OBWelcomeController *_businessChatController;
    CKTranscriptMultilineLabelCell *_blackholeAlertView;
    CDUnknownBlockType _deferredSendAnimationBlock;
}

@property (strong, nonatomic) NSDictionary *bizIntent; // @synthesize bizIntent=_bizIntent;
@property (strong, nonatomic) CKTranscriptMultilineLabelCell *blackholeAlertView; // @synthesize blackholeAlertView=_blackholeAlertView;
@property (strong, nonatomic) OBWelcomeController *businessChatController; // @synthesize businessChatController=_businessChatController;
@property (strong, nonatomic) CKBusinessInfoView *businessInfoView; // @synthesize businessInfoView=_businessInfoView;
@property (strong, nonatomic) UIBarButtonItem *composeCancelItem; // @synthesize composeCancelItem=_composeCancelItem;
@property (strong, nonatomic) CKComposeRecipientSelectionController *composeRecipientSelectionController; // @synthesize composeRecipientSelectionController=_composeRecipientSelectionController;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) CDUnknownBlockType deferredSendAnimationBlock; // @synthesize deferredSendAnimationBlock=_deferredSendAnimationBlock;
@property (weak, nonatomic) id<CKComposeChatControllerDelegate> delegate; // @dynamic delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL ignoreKeyboardNotifications; // @synthesize ignoreKeyboardNotifications=_ignoreKeyboardNotifications;
@property (strong, nonatomic) CKComposeNavbarManager *navbarManager; // @synthesize navbarManager=_navbarManager;
@property (nonatomic) BOOL newComposeCancelled; // @synthesize newComposeCancelled=_newComposeCancelled;
@property (strong, nonatomic) CKComposition *prepopulatedComposition; // @synthesize prepopulatedComposition=_prepopulatedComposition;
@property (strong, nonatomic) NSArray *prepopulatedRecipients; // @synthesize prepopulatedRecipients=_prepopulatedRecipients;
@property (readonly, nonatomic) NSArray *proposedRecipients;
@property (nonatomic) BOOL sendingViaCardUI; // @synthesize sendingViaCardUI=_sendingViaCardUI;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *unatomizedRecipientText;

- (void).cxx_destruct;
- (id)_anisetteData;
- (id)_businessChatController;
- (BOOL)_chatShowsUnexpectedlyLoggedOutNotification;
- (double)_entryViewTopInsetPadding;
- (BOOL)_isNewBusinessConversation;
- (BOOL)_isWhitelistedBusinessRecipient;
- (void)_passKitUIDismissed:(id)arg1;
- (void)_prepareForSendFromCardIfNecessaryAndSend:(CDUnknownBlockType)arg1;
- (void)_processBizIntentIfNeeded;
- (void)_saveDraftState;
- (void)_setConversationDeferredSetup;
- (BOOL)_shouldSetToFieldAsFirstResponder;
- (BOOL)_shouldValidatePayloadBeforeSendingPayload:(id)arg1;
- (void)_showNicknameBannerIfNeeded;
- (void)_triggerRecipientFinalization;
- (void)_updateBlackholeAlertView;
- (void)_updateNavigationButtons;
- (void)_updateTitleAnimated:(BOOL)arg1;
- (void)aboutLinkTapped;
- (void)addBizIntentToConversation:(id)arg1;
- (BOOL)becomeFirstResponder;
- (void)businessInfoView:(id)arg1 infoButtonTapped:(id)arg2;
- (void)cancelButtonTapped:(id)arg1;
- (void)cancelCompose;
- (id)chatForIMHandle:(id)arg1;
- (void)chatInputWillUpdateInputViewShowingBrowser;
- (void)completedOnboarding;
- (void)completedOnboardingWithCompletion:(CDUnknownBlockType)arg1;
- (void)conversationLeft;
- (void)dealloc;
- (void)displayBusinessChatPrivacyAndSkipDefaultsCheck:(BOOL)arg1;
- (void)displayBusinessChatPrivacyIfNecessary;
- (void)handleAddressBookChange:(id)arg1;
- (void)handleCancelAction:(id)arg1;
- (id)handleForRecipientNormalizedAddress:(id)arg1;
- (BOOL)hasFailedRecipients;
- (BOOL)hasUnreachableEmergencyRecipient;
- (id)initWithRecipientAddresses:(id)arg1 composition:(id)arg2 bizIntent:(id)arg3;
- (id)inputAccessoryView;
- (id)inputAccessoryViewController;
- (void)invalidateChatItemLayoutForTraitCollectionChangeIfNeeded:(id)arg1;
- (BOOL)isComposingRecipient;
- (BOOL)isSafeToMarkAsRead;
- (void)keyCommandCancel:(id)arg1;
- (void)keyboardWillShowOrHide:(id)arg1;
- (void)layoutBusinessInfoViewIfNecessary;
- (void)messageEntryViewDidChange:(id)arg1;
- (void)messageEntryViewSendButtonHit:(id)arg1;
- (void)messageEntryViewSendButtonHitWhileDisabled:(id)arg1;
- (struct UIEdgeInsets)navigationBarInsetsForRecipientSelectionController:(id)arg1;
- (id)outgoingComposeViewForSendAnimation;
- (void)parentControllerDidResume:(BOOL)arg1 animating:(BOOL)arg2;
- (void)prepareForSuspend;
- (void)presentBusinessChatOnboarding;
- (BOOL)privacyPageHasBeenDisplayed;
- (void)recipientSelectionController:(id)arg1 didFinishAvailaiblityLookupForRecipient:(id)arg2;
- (void)recipientSelectionController:(id)arg1 didSelectConversation:(id)arg2 isiMessagable:(BOOL)arg3;
- (void)recipientSelectionController:(id)arg1 textDidChange:(id)arg2;
- (void)recipientSelectionControllerDidBecomeFirstResponder:(id)arg1;
- (void)recipientSelectionControllerDidChangeSize:(id)arg1;
- (void)recipientSelectionControllerDidLoadPillView;
- (void)recipientSelectionControllerDidPushABViewController:(id)arg1;
- (void)recipientSelectionControllerRequestDismissKeyboard:(id)arg1;
- (void)recipientSelectionControllerReturnPressed:(id)arg1;
- (void)recipientSelectionControllerSearchListDidShowOrHide:(id)arg1;
- (void)reloadEntryViewIfNeeded;
- (void)sendAnimationManagerWillStartAnimation:(id)arg1 context:(id)arg2;
- (void)sendComposition:(id)arg1;
- (void)setBusinessInfoViewInfoIfNecessary;
- (void)setPrivacyPageHasBeenDisplayed:(BOOL)arg1;
- (BOOL)shouldForceToSMSForConversation:(id)arg1 forRecipient:(id)arg2;
- (BOOL)shouldPresentBlockingDowntimeViewController;
- (BOOL)shouldShowEntryView;
- (BOOL)shouldUseNavigationBarCanvasView;
- (id)textViewOnscreenWithEntryView;
- (double)topInsetPadding;
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 tappedForChatItem:(id)arg3;
- (BOOL)transcriptCollectionViewControllerPlaybackForOutgoingEffectsIsAllowed:(id)arg1;
- (BOOL)transcriptCollectionViewControllerShouldForceOpaqueMask:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewLayoutMarginsDidChange;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end
