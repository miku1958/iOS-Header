//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MessageUI/CNAutocompleteGroupDetailViewControllerDelegate-Protocol.h>
#import <MessageUI/CNComposeHeaderViewDelegate-Protocol.h>
#import <MessageUI/CNContactContentViewControllerDelegate-Protocol.h>
#import <MessageUI/CNContactPickerDelegate-Protocol.h>
#import <MessageUI/MFComposeActivityHandoffOperationDelegate-Protocol.h>
#import <MessageUI/MFComposeImageSizeViewDelegate-Protocol.h>
#import <MessageUI/MFComposeStyleSelectorViewControllerDelegate-Protocol.h>
#import <MessageUI/MFComposeSubjectViewDelegate-Protocol.h>
#import <MessageUI/MFComposeTypeFactoryDelegate-Protocol.h>
#import <MessageUI/MFMailComposeRecipientTextViewDelegate-Protocol.h>
#import <MessageUI/MFMailComposeToFieldDelegate-Protocol.h>
#import <MessageUI/MFMailComposeViewDelegate-Protocol.h>
#import <MessageUI/MFPhotoPickerControllerDelegate-Protocol.h>
#import <MessageUI/MFSecureMIMECompositionManagerDelegate-Protocol.h>
#import <MessageUI/NSUserActivityDelegate-Protocol.h>
#import <MessageUI/QLPreviewControllerDelegate-Protocol.h>
#import <MessageUI/UIImagePickerControllerDelegate-Protocol.h>
#import <MessageUI/UINavigationControllerDelegate-Protocol.h>
#import <MessageUI/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <MessageUI/UIPresentationControllerDelegatePrivate-Protocol.h>
#import <MessageUI/VNDocumentCameraViewControllerDelegate-Protocol.h>
#import <MessageUI/_MFMailCompositionContextDelegate-Protocol.h>

@class CNComposeRecipient, CNComposeRecipientAtom, CNContactPickerViewController, CNContactViewController, CNRecentComposeRecipient, EFFuture, EMMailboxObjectID, EMMessage, MFAddressPickerReformatter, MFAttachment, MFComposeActivityHandoffOperation, MFComposeDisplayMetrics, MFComposeImageSizeView, MFComposeStyleSelectorViewController, MFComposeSubjectView, MFComposeWebView, MFLANHandoffAgent, MFLock, MFMailComposeRecipientTextView, MFMailComposeToField, MFMailPopoverManager, MFMailSignatureController, MFMessageContentProgressLayer, MFMutableMessageHeaders, MFOutgoingMessageDelivery, MFPhotoPickerController, MFPhotoPickerProgressManager, MFSecureMIMECompositionManager, MSAutosaveSession, NSArray, NSDate, NSDictionary, NSMutableSet, NSObject, NSString, NSTimer, QLPreviewController, UIAlertController, UIBarButtonItem, UIButton, UIImagePickerController, UIKeyCommand, UIProgressView, UIResponder, UIView, VNDocumentCameraViewController, _MFMailCompositionContext;
@protocol EFScheduler, MFMailAccountProxyGenerator, OS_dispatch_group;

@interface MFMailComposeController : UIViewController <UINavigationControllerDelegate, CNContactContentViewControllerDelegate, MFMailComposeToFieldDelegate, MFComposeActivityHandoffOperationDelegate, MFComposeStyleSelectorViewControllerDelegate, MFPhotoPickerControllerDelegate, NSUserActivityDelegate, QLPreviewControllerDelegate, UIPresentationControllerDelegatePrivate, VNDocumentCameraViewControllerDelegate, _MFMailCompositionContextDelegate, MFMailComposeViewDelegate, CNComposeHeaderViewDelegate, MFComposeSubjectViewDelegate, MFComposeImageSizeViewDelegate, MFSecureMIMECompositionManagerDelegate, MFComposeTypeFactoryDelegate, MFMailComposeRecipientTextViewDelegate, UIImagePickerControllerDelegate, UIPopoverPresentationControllerDelegate, CNAutocompleteGroupDetailViewControllerDelegate, CNContactPickerDelegate>
{
    id _remoteViewControllerProxy;
    _MFMailCompositionContext *_compositionContext;
    unsigned long long _options;
    NSArray *_toAddresses;
    NSArray *_ccAddresses;
    NSArray *_bccAddresses;
    NSArray *_originalBccAddresses;
    NSString *_subject;
    NSString *_originalSendingEmailAddress;
    NSString *_primaryAddressForForcedSendingAccount;
    NSString *_sendingEmailAddress;
    long long _sendingEmailAddressIndex;
    unsigned long long _initialAttachmentCount;
    UIView *_alternateTitleView;
    UIBarButtonItem *_sendButtonItem;
    UIBarButtonItem *_closeButtonItem;
    UIButton *_sendAccessoryButton;
    CNContactPickerViewController *_peoplePicker;
    MFPhotoPickerController *_photosPickerController;
    UIImagePickerController *_cameraPickerController;
    MFMailComposeToField *_toField;
    MFMailComposeRecipientTextView *_ccField;
    MFMailComposeRecipientTextView *_lastFocusedRecipientView;
    CNComposeRecipientAtom *_atomPresentingCard;
    MFComposeSubjectView *_subjectField;
    MFComposeImageSizeView *_imageSizeField;
    MFComposeWebView *_composeWebView;
    CNRecentComposeRecipient *_recentRecipientPresentingCard;
    MFMailPopoverManager *_popoverManager;
    MFOutgoingMessageDelivery *_delivery;
    MFMutableMessageHeaders *_savedHeaders;
    EMMessage *_lastDraftMessage;
    NSString *_initialTitle;
    MFLock *_autosaveLock;
    NSString *_autosaveIdentifier;
    NSString *_documentID;
    MFSecureMIMECompositionManager *_secureCompositionManager;
    NSDictionary *_certificatesByRecipient;
    NSDictionary *_errorsByRecipient;
    NSString *_addressForMissingIdentity;
    int _signingIdentityStatus;
    int _encryptionIdentityStatus;
    BOOL _encryptionStatusIsKnown;
    int _resolution;
    int _recipientFieldWhileViewUnloaded;
    unsigned int _isDirty:1;
    unsigned int _bodyTextChanged:1;
    unsigned int _shouldAutosaveWithSuspendInfo:1;
    unsigned int _isSuspended:1;
    unsigned int _viewWasUnloaded:1;
    unsigned int _stillLoading:1;
    unsigned int _hosted:1;
    unsigned int _hasViewAppeared:1;
    unsigned int _rotationSnapshotTaken:1;
    unsigned int _isPopoverVisible:1;
    unsigned int _useSuspended:1;
    MFAddressPickerReformatter *_addressPickerReformatter;
    BOOL _contentVisible;
    BOOL _allowRestrictedAccounts;
    BOOL _encryptionOverrideSetting;
    BOOL _initializedRecipients;
    BOOL _originalMessageWasEncrypted;
    unsigned long long _selectedContentVariationIndex;
    UIKeyCommand *_sendKeyCommand;
    UIKeyCommand *_escapeKeyCommand;
    UIAlertController *_notifyConfirmation;
    MFComposeActivityHandoffOperation *_handoffOperation;
    UIProgressView *_handoffProgressView;
    MFMessageContentProgressLayer *_progressIndicatorView;
    MFLANHandoffAgent *_LANHandoffAgent;
    NSObject<OS_dispatch_group> *_imageScalingGroup;
    unsigned short _lastTypedCharacter;
    NSTimer *_autosaveTimer;
    NSDate *_autosavedDate;
    NSDate *_lastActiveDate;
    NSDictionary *_securityScopes;
    _Atomic unsigned int _autosaveCount;
    EFFuture *_undoMoveAction;
    CDUnknownBlockType _releaseActiveFocusedState;
    MFMailSignatureController *_signatureController;
    UIResponder *_savedFirstResponder;
    EFFuture *_content;
    unsigned long long _drawingSequenceNumber;
    struct {
        BOOL respondsToCompositionWillFinish;
        BOOL respondsToCompositionDidFailToFinish;
    } _composeWebViewFlags;
    BOOL _isModal;
    BOOL _useMailDrop;
    BOOL _autosaveIsValid;
    BOOL _insertingDrawing;
    BOOL _attachmentToMarkupIsLoaded;
    BOOL _delayToShowMarkupHasPassed;
    int _sourceAccountManagement;
    id _delegate;
    CNComposeRecipient *_recipientPresentingCard;
    id<MFMailAccountProxyGenerator> _accountProxyGenerator;
    EMMailboxObjectID *_draftMailboxObjectID;
    NSString *_originatingBundleID;
    long long _drawingInsertCount;
    UIAlertController *_popoverAlert;
    QLPreviewController *_previewController;
    MFAttachment *_previewingAttachment;
    CNContactViewController *_contactViewController;
    unsigned long long _markupReplyAttachmentLoadingProgress;
    NSMutableSet *_drawingFileAttachments;
    id<EFScheduler> _autosaveQueue;
    MSAutosaveSession *_autosaveSession;
    VNDocumentCameraViewController *_documentCameraViewController;
    MFComposeDisplayMetrics *_displayMetrics;
    MFPhotoPickerProgressManager *_photoPickerProgressManager;
    MFComposeStyleSelectorViewController *_styleSelector;
    NSDictionary *_fontAttributes;
}

@property (strong, nonatomic) id<MFMailAccountProxyGenerator> accountProxyGenerator; // @synthesize accountProxyGenerator=_accountProxyGenerator;
@property (copy, nonatomic) NSString *addressForMissingIdentity; // @synthesize addressForMissingIdentity=_addressForMissingIdentity;
@property (strong, nonatomic) CNComposeRecipientAtom *atomPresentingCard; // @synthesize atomPresentingCard=_atomPresentingCard;
@property (nonatomic) BOOL attachmentToMarkupIsLoaded; // @synthesize attachmentToMarkupIsLoaded=_attachmentToMarkupIsLoaded;
@property (strong, nonatomic) NSString *autosaveIdentifier;
@property (nonatomic) BOOL autosaveIsValid; // @synthesize autosaveIsValid=_autosaveIsValid;
@property (strong, nonatomic) id<EFScheduler> autosaveQueue; // @synthesize autosaveQueue=_autosaveQueue;
@property (strong, nonatomic) MSAutosaveSession *autosaveSession; // @synthesize autosaveSession=_autosaveSession;
@property (readonly, nonatomic) NSDate *autosavedDate; // @synthesize autosavedDate=_autosavedDate;
@property (strong, nonatomic) NSDictionary *certificatesByRecipient; // @synthesize certificatesByRecipient=_certificatesByRecipient;
@property (strong, nonatomic) CNContactViewController *contactViewController; // @synthesize contactViewController=_contactViewController;
@property (readonly, nonatomic) long long countofDrawingAttachmentsLeftInCompose;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL delayToShowMarkupHasPassed; // @synthesize delayToShowMarkupHasPassed=_delayToShowMarkupHasPassed;
@property (weak, nonatomic) id delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) MFOutgoingMessageDelivery *delivery; // @synthesize delivery=_delivery;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) MFComposeDisplayMetrics *displayMetrics; // @synthesize displayMetrics=_displayMetrics;
@property (weak, nonatomic) VNDocumentCameraViewController *documentCameraViewController; // @synthesize documentCameraViewController=_documentCameraViewController;
@property (readonly, nonatomic) NSString *documentID; // @synthesize documentID=_documentID;
@property (readonly, nonatomic) EMMailboxObjectID *draftMailboxObjectID; // @synthesize draftMailboxObjectID=_draftMailboxObjectID;
@property (strong, nonatomic) NSMutableSet *drawingFileAttachments; // @synthesize drawingFileAttachments=_drawingFileAttachments;
@property (nonatomic) long long drawingInsertCount; // @synthesize drawingInsertCount=_drawingInsertCount;
@property (strong, nonatomic) NSDictionary *errorsByRecipient; // @synthesize errorsByRecipient=_errorsByRecipient;
@property (strong, nonatomic) NSDictionary *fontAttributes; // @synthesize fontAttributes=_fontAttributes;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL insertingDrawing; // @synthesize insertingDrawing=_insertingDrawing;
@property (nonatomic) BOOL isModal; // @synthesize isModal=_isModal;
@property (readonly, nonatomic) EMMessage *lastDraftMessage; // @synthesize lastDraftMessage=_lastDraftMessage;
@property (nonatomic) unsigned long long markupReplyAttachmentLoadingProgress; // @synthesize markupReplyAttachmentLoadingProgress=_markupReplyAttachmentLoadingProgress;
@property (copy, nonatomic) NSString *originatingBundleID; // @synthesize originatingBundleID=_originatingBundleID;
@property (strong, nonatomic) CNContactPickerViewController *peoplePicker; // @synthesize peoplePicker=_peoplePicker;
@property (strong, nonatomic) MFPhotoPickerProgressManager *photoPickerProgressManager; // @synthesize photoPickerProgressManager=_photoPickerProgressManager;
@property (strong, nonatomic) UIAlertController *popoverAlert; // @synthesize popoverAlert=_popoverAlert;
@property (weak, nonatomic) QLPreviewController *previewController; // @synthesize previewController=_previewController;
@property (strong, nonatomic) MFAttachment *previewingAttachment; // @synthesize previewingAttachment=_previewingAttachment;
@property (strong, nonatomic) CNComposeRecipient *recipientPresentingCard; // @synthesize recipientPresentingCard=_recipientPresentingCard;
@property (strong, nonatomic) id remoteViewControllerProxy; // @synthesize remoteViewControllerProxy=_remoteViewControllerProxy;
@property (nonatomic) int sourceAccountManagement; // @synthesize sourceAccountManagement=_sourceAccountManagement;
@property (strong, nonatomic) MFComposeStyleSelectorViewController *styleSelector; // @synthesize styleSelector=_styleSelector;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useMailDrop; // @synthesize useMailDrop=_useMailDrop;
@property (readonly, nonatomic, getter=isVerticallyCompact) BOOL verticallyCompact;

+ (void)initialize;
+ (BOOL)isSetupForDeliveryAllowingRestrictedAccounts:(BOOL)arg1;
+ (BOOL)isSetupForDeliveryAllowingRestrictedAccounts:(BOOL)arg1 originatingBundleID:(id)arg2 sourceAccountManagement:(int)arg3;
+ (id)preferenceForKey:(id)arg1;
+ (id)signpostLog;
- (void).cxx_destruct;
- (void)_accountsChanged:(id)arg1;
- (id)_addressFieldForField:(int)arg1;
- (id)_allRecipientViews;
- (id)_alternateTitleView;
- (BOOL)_anyRecipientViewContainsAddress:(id)arg1;
- (void)_attachmentLoaderFinishedWithOriginalContent:(id)arg1;
- (id)_attachmentToMarkup;
- (void)_autosaveTimerFired:(id)arg1;
- (id)_availableAccountProxies;
- (id)_backgroundColorForMarkupController;
- (void)_beginBlockingBodyScroll;
- (void)_bodyTextChanged;
- (void)_checkForCanSendMailWithContinuation:(CDUnknownBlockType)arg1;
- (void)_checkForEmptySubjectWithContinuation:(CDUnknownBlockType)arg1;
- (void)_checkForInFlightAssetDownloadsWithContinuation:(CDUnknownBlockType)arg1;
- (void)_checkForInvalidAddressesWithContinuation:(CDUnknownBlockType)arg1;
- (void)_checkForReplyAndForwardRestriction;
- (void)_checkForUnencryptedWithContinuation:(CDUnknownBlockType)arg1;
- (void)_clearMessageValues;
- (void)_close;
- (void)_composeViewDidDraw:(id)arg1;
- (unsigned long long)_composeWebViewTextContentLength;
- (id)_contactViewControllerForRecipient:(id)arg1;
- (id)_copyMessageDataForActivityHandoff;
- (id)_copyMessagePlainTextForDonation;
- (id)_copyMessagePlainTextForDonationRemoveQuotes:(BOOL)arg1;
- (void)_createAndAddHandoffProgressViewIfNecessary;
- (id)_defaultAccount;
- (unsigned long long)_defaultAtomPresentationOptions;
- (Class)_deliveryClass;
- (void)_didDismissDocumentPicker;
- (void)_dismissAndCleanupCameraPickerController;
- (void)_dismissPeoplePicker:(id)arg1;
- (void)_dismissPersonCard;
- (void)_dismissPresentedHalfSheet;
- (void)_dismissPresentedViewController;
- (void)_displayMetricsDidChange;
- (void)_displayPopoverAlert:(id)arg1;
- (void)_documentCameraViewControllerDidFinish;
- (void)_draftContentDidChange;
- (id)_emailAddresses;
- (void)_endBlockingBodyScroll;
- (id)_estimateMessageSize;
- (void)_explainAirplaneMode;
- (int)_fieldForAddressField:(id)arg1;
- (void)_finishEnteringRecipients;
- (void)_finishModalAlertClosingComposition:(BOOL)arg1;
- (void)_finishPopoverAlertClosingComposition:(BOOL)arg1;
- (void)_finishedComposing;
- (void)_finishedLoadingAllContentAndAttachments;
- (void)_focusBccHeaderCommandInvoked:(id)arg1;
- (void)_focusGained:(id)arg1;
- (void)_getRotationContentSettings:(CDStruct_e950349b *)arg1;
- (BOOL)_hasEncryptionIdentityError;
- (BOOL)_hasRecipients;
- (void)_hideHandoffProgressViewAnimated:(BOOL)arg1;
- (BOOL)_isActiveComposeController;
- (BOOL)_isDummyViewController;
- (BOOL)_isPopoverOrActionSheetOrAlertVisible;
- (BOOL)_isReplyOrForward;
- (BOOL)_isRestoredComposition;
- (BOOL)_isSetupForDelivery;
- (BOOL)_isTabKeyCommandInvocationPossible;
- (void)_leaveMessageInOutbox;
- (void)_loadAttachments;
- (void)_loadCompositionContext;
- (void)_loadingContextDidLoadMessage;
- (void)_makeComposeUserActivityCurrent;
- (id)_messageForAutosave;
- (id)_messageForDraft;
- (id)_messageForRemoteDelivery;
- (id)_messageToDonate;
- (id)_messageWithCompositionSpecification:(id)arg1 useSuspendInfo:(BOOL)arg2 endingEditing:(BOOL)arg3;
- (id)_missingIdentityErrorWithFormat:(id)arg1 title:(id)arg2;
- (id)_nextDrawingName;
- (struct CGRect)_optimalRectForPresentingPopoverInComposeWebView;
- (id)_outgoingMessageWithSubstituteDocument:(id)arg1 compositionSpecification:(id)arg2 useSuspendInfo:(BOOL)arg3 endingEditing:(BOOL)arg4;
- (void)_physicallyScaleImagesToScale:(unsigned long long)arg1;
- (void)_popoverWillBePresented:(id)arg1;
- (void)_prepareCompositionContextForLoading:(id)arg1;
- (void)_prepareForSuspend;
- (void)_prepareImagesForSendWithContinuation:(CDUnknownBlockType)arg1;
- (void)_preparePhotoPicker;
- (void)_presentModalAlert:(id)arg1;
- (void)_promptForMailDropIfNecessaryWithContinuation:(CDUnknownBlockType)arg1;
- (void)_recipientTextChanged:(id)arg1;
- (id)_reformattedAddressAtIndex:(unsigned long long)arg1;
- (unsigned long long)_reloadNumberOfReformattedAddressesWithMaximumWidth:(double)arg1 defaultFontSize:(double)arg2;
- (void)_removeRecent;
- (void)_replyAllCommandInvoked:(id)arg1;
- (void)_replyCommandInvoked:(id)arg1;
- (void)_resetProxyGenerator;
- (void)_resetSecureCompositionManager;
- (void)_resetSecureCompositionManagerUsingNewAccount:(BOOL)arg1;
- (void)_restoreMessageValues;
- (void)_retainFocusOfComposeWebViewIfRequired:(id)arg1;
- (void)_saveMessageValues;
- (void)_scaleImages;
- (BOOL)_secureCompositionManagerHasRecipients;
- (id)_selectedAttachmentURLs;
- (void)_setAutosaveIsValid:(BOOL)arg1;
- (void)_setComposeWebViewAutocorrectionContext:(id)arg1;
- (void)_setInitialStateForImageField;
- (void)_setIsLoading:(BOOL)arg1;
- (void)_setLastFocusedRecipientView:(id)arg1;
- (void)_setRecipients:(id)arg1 forField:(int)arg2;
- (BOOL)_setSendingEmailAddress:(id)arg1;
- (void)_setTitleBarSubtitleText:(id)arg1 style:(unsigned long long)arg2;
- (void)_setUpDeliveryObject:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_setUpForSaveAsDraft;
- (void)_setupForAutosavedMessage:(id)arg1;
- (void)_setupForDraft:(id)arg1;
- (void)_setupForExistingNewMessage:(id)arg1 content:(id)arg2;
- (void)_setupForOutbox:(id)arg1;
- (void)_setupNavigationBarItems;
- (id)_sheetDetentForViewController:(id)arg1;
- (BOOL)_shouldAutosaveAfterTimerFiredWithInterval:(double)arg1;
- (BOOL)_shouldEnableCloseButton;
- (BOOL)_shouldEnableSendButton;
- (BOOL)_shouldPrependBlankLineForAttachments;
- (BOOL)_shouldUseMailDrop;
- (void)_showCamera:(id)arg1;
- (void)_showMissingIdentityAlert;
- (void)_showOriginalAttachmentsIfNecessary;
- (void)_showPersonCardForRecipient:(id)arg1 showDeleteButton:(BOOL)arg2;
- (void)_showPhotoPicker:(id)arg1;
- (unsigned long long)_sizeForScale:(unsigned long long)arg1 imagesOnly:(BOOL)arg2;
- (void)_startAutosaveTimerIfNeeded;
- (void)_subjectTextChanged:(id)arg1;
- (void)_tabKeyCommandInvoked:(id)arg1;
- (void)_unscaleImages;
- (void)_updateAutoBccSendingAddress:(id)arg1 withNewSendingAddress:(id)arg2;
- (void)_updateAutosaveSession;
- (void)_updateComposeWebViewAutoCorrectionContext;
- (void)_updateIdentityStatus:(int *)arg1 withPolicy:(int)arg2 identity:(struct __SecIdentity *)arg3 error:(id)arg4;
- (void)_updateImageSizeTitles;
- (void)_updateNavigationBarTitleAnimated:(BOOL)arg1;
- (void)_updateOriginalBccStatusForRestore;
- (void)_updateOriginalBccStatusForRestoreAddingAddress:(BOOL)arg1;
- (void)_updatePersonCard;
- (void)_updateRecipientAtomStyles;
- (void)_updateSMIMEButtonEnabledForRecipientCount;
- (void)_updateSMIMEButtonForEncryptionStatus:(int)arg1;
- (void)_updateSendAndCloseEnabled;
- (void)_updateTitleBarForEncryptionStatus:(int)arg1;
- (BOOL)_wantsEncryption;
- (void)_willPresentDocumentPicker;
- (void)activityHandoffOperation:(id)arg1 didFailWithError:(id)arg2;
- (void)activityHandoffOperation:(id)arg1 didFinishReceivingData:(id)arg2;
- (void)activityHandoffOperation:(id)arg1 didFinishSendingDataWithResult:(long long)arg2;
- (void)activityHandoffOperationReceivedBytes:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)addAddress:(id)arg1 field:(int)arg2;
- (void)addSignature:(BOOL)arg1;
- (struct UIEdgeInsets)additionalContentInsetForComposeWebView:(id)arg1;
- (id)addressesForField:(int)arg1;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (id)attachments;
- (void)autocompleteGroupDetailViewController:(id)arg1 didAskToRemoveGroup:(id)arg2;
- (void)autocompleteGroupDetailViewController:(id)arg1 didTapComposeRecipient:(id)arg2;
- (void)autocompleteGroupDetailViewControllerDidCancel:(id)arg1;
- (void)autosaveIfNecessaryWithHandler:(CDUnknownBlockType)arg1;
- (void)autosaveWithHandler:(CDUnknownBlockType)arg1;
- (void)backUpDraft;
- (BOOL)bccAddressesDirtied;
- (id)bccRecipients;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canShowAttachmentPicker;
- (BOOL)canShowContentVariationPicker;
- (BOOL)canShowFromField;
- (BOOL)canShowImageSizeField;
- (id)ccRecipients;
- (void)changeQuoteLevel:(long long)arg1;
- (BOOL)chooseSelectedSearchResultForComposeRecipientView:(id)arg1;
- (void)clearAllFields;
- (void)clearInitialTitle;
- (void)close:(id)arg1;
- (void)composeHeaderView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (void)composeHeaderViewDidChangeValue:(id)arg1;
- (void)composeHeaderViewDidConfirmValue:(id)arg1;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (id)composeRecipientView:(id)arg1 composeRecipientForContact:(id)arg2;
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didReplaceRecipients:(id)arg2 withRecipients:(id)arg3;
- (void)composeRecipientView:(id)arg1 didSelectRecipients:(id)arg2;
- (void)composeRecipientView:(id)arg1 disambiguateRecipientForAtom:(id)arg2;
- (void)composeRecipientView:(id)arg1 showPersonCardForAtom:(id)arg2;
- (void)composeRecipientView:(id)arg1 showPersonCardForRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientViewDidBecomeFirstResponder:(id)arg1;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (void)composeRecipientViewReturnPressed:(id)arg1;
- (BOOL)composeRecipientViewShowingSearchResults:(id)arg1;
- (void)composeStyleSelector:(id)arg1 didChangeFont:(id)arg2;
- (void)composeStyleSelector:(id)arg1 didChangeFontSize:(double)arg2;
- (void)composeStyleSelector:(id)arg1 didChangeTextColor:(id)arg2;
- (void)composeStyleSelector:(id)arg1 didSelectStyle:(id)arg2;
- (void)composeStyleSelectorDidCancel:(id)arg1;
- (void)composeStyleSelectorDidDismissFontPicker:(id)arg1;
- (void)composeStyleSelectorDidPresentColorPicker:(id)arg1;
- (void)composeSubjectViewDidSelectContentVariationButton:(id)arg1;
- (void)composeSubjectViewTextFieldDidBecomeFirstResponder:(id)arg1;
- (void)composeSubjectViewTextFieldDidResignFirstResponder:(id)arg1;
- (void)composeSubjectViewWillRemoveContent:(id)arg1;
- (int)composeType;
- (void)composeViewBodyTextChanged:(id)arg1;
- (id)composeWebView;
- (void)composeWebViewDidChangeFontAttributes:(id)arg1;
- (id)compositionContext;
- (int)compositionType;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)contactViewController:(id)arg1 didDeleteContact:(id)arg2;
- (BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 propertyKey:(id)arg3 propertyIdentifier:(id)arg4;
- (BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
- (void)contentDidChange;
- (unsigned long long)contentVariationIndex;
- (id)contentVariationName;
- (id)currentScaleImageSize;
- (void)dealloc;
- (void)deliverMessageRemotely:(CDUnknownBlockType)arg1;
- (void)didBecomeActiveComposeController;
- (void)didInsertAttachment:(id)arg1;
- (void)didInsertBodyText:(id)arg1;
- (void)didRemoveAttachment:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (id)dismissActionsForPreviewController:(id)arg1;
- (void)dismissSearchResultsForComposeRecipientView:(id)arg1;
- (void)dismissSheet;
- (void)documentCameraViewController:(id)arg1 didFinishWithScan:(id)arg2;
- (void)documentCameraViewControllerDidCancel:(id)arg1;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)documentPickerWasCancelled:(id)arg1;
- (id)emailAddresses;
- (void)finalizeSignature:(CDUnknownBlockType)arg1;
- (void)finishedBackingUpDraftWithSuccess:(BOOL)arg1;
- (void)forceSaveAsDraft;
- (struct CGRect)frameForAttachmentWithIdentifier:(id)arg1;
- (void)handleLargeMessageComposeHandoffWithInputStream:(id)arg1 outputStream:(id)arg2 error:(id)arg3;
- (BOOL)hasAttachments;
- (void)hostApplicationDidEnterBackground;
- (void)hostApplicationWillEnterForeground;
- (BOOL)hosted;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imageSizeView:(id)arg1 changedSelectedScaleTo:(unsigned long long)arg2;
- (void)importDocument;
- (id)initWithCompositionContext:(id)arg1 options:(unsigned long long)arg2;
- (void)insertDrawing;
- (void)insertPhotoOrVideo;
- (void)insertPhotoOrVideoWithAssetIdentifier:(id)arg1 info:(id)arg2;
- (BOOL)isDirty;
- (BOOL)isManagedAccount;
- (BOOL)isSavingAsDraft;
- (BOOL)isShowingRecentPersonCard;
- (id)keyCommands;
- (void)loadView;
- (id)mailComposeView;
- (void)markupAttachment:(id)arg1;
- (void)messageDidChangeForCompositionContext:(id)arg1 newMessage:(id)arg2;
- (id)navigationBarTitle;
- (id)navigationControllerForRecentPersonCard;
- (BOOL)needsDelivery;
- (id)nextResponderForRecipientView:(id)arg1;
- (void)photoPicker:(id)arg1 didDeselectAssetWithIdentifier:(id)arg2;
- (void)photoPicker:(id)arg1 didSelectAssetWithIdentifier:(id)arg2 mediaInfo:(id)arg3;
- (void)photoPickerDidCancel:(id)arg1;
- (void)photoPickerDidCancelSystemImagePicker:(id)arg1;
- (void)pickInitialFirstResponder;
- (id)popoverManager;
- (id)popoverManagerCreateIfNeeded:(BOOL)arg1;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (long long)popoverPresentationStyleForViewController:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)presentSaveDeleteDialogOrClose;
- (BOOL)presentSearchResultsForComposeRecipientView:(id)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;
- (unsigned long long)presentationOptionsForRecipient:(id)arg1;
- (id)presentationViewController;
- (id)presentingViewControllerForComposeStyleSelector:(id)arg1;
- (id)presentingViewControllerForPhotoPicker:(id)arg1;
- (void)previewController:(id)arg1 didSaveEditedCopyOfPreviewItem:(id)arg2 atURL:(id)arg3;
- (long long)previewController:(id)arg1 editingModeForPreviewItem:(id)arg2;
- (void)previewControllerDidDismiss:(id)arg1;
- (void)recipientViewDidBecomeFirstResponder:(id)arg1;
- (void)recipientViewDidResignFirstResponder:(id)arg1;
- (BOOL)recipientViewShouldIgnoreFirstResponderChanges:(id)arg1;
- (struct CGRect)rectOfAttachment:(id)arg1;
- (void)removeAddress:(id)arg1 field:(int)arg2;
- (int)resolution;
- (id)rotatingHeaderView;
- (void)saveAndResignFirstResponder;
- (void)saveFirstResponder;
- (id)savedHeaders;
- (void)scanDocument;
- (void)secureMIMECompositionManager:(id)arg1 encryptionStatusDidChange:(int)arg2 context:(id)arg3;
- (void)secureMIMECompositionManager:(id)arg1 signingStatusDidChange:(int)arg2 context:(id)arg3;
- (void)securityScopeForURL:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)selectNextSearchResultForComposeRecipientView:(id)arg1;
- (void)selectPreviousSearchResultForComposeRecipientView:(id)arg1;
- (void)send:(id)arg1;
- (void)sendMessage:(unsigned long long)arg1;
- (BOOL)sendingAccountIsExchange;
- (id)sendingAccountProxy;
- (id)sendingEmailAddress;
- (id)sendingEmailAddressIfExists;
- (BOOL)sendingEmailDirtied;
- (void)serializedPlaceholderForFileName:(id)arg1 fileSize:(long long)arg2 mimeType:(id)arg3 contentID:(id)arg4 withHandler:(CDUnknownBlockType)arg5;
- (void)setAddresses:(id)arg1 field:(int)arg2;
- (void)setBccRecipients:(id)arg1;
- (void)setCaretPosition:(unsigned long long)arg1;
- (void)setCcRecipients:(id)arg1;
- (void)setCompositionContext:(id)arg1;
- (void)setContentVisible:(BOOL)arg1;
- (void)setDraftMessage:(id)arg1;
- (void)setHeadersForDraft;
- (void)setHosted:(BOOL)arg1;
- (void)setInitialTitle:(id)arg1;
- (void)setOriginalMessageWasEncrypted:(BOOL)arg1;
- (void)setProgressUIVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setRecipientsKeyboardType:(long long)arg1;
- (void)setSavedHeaders:(id)arg1;
- (void)setSendingEmailAddress:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setToRecipients:(id)arg1;
- (id)shouldCreateRichTextRepresentation;
- (BOOL)shouldShowSMIMEButton;
- (void)showMissingAttachmentDataAlert;
- (void)showPhotoPickerWithSourceType:(long long)arg1 fromSource:(id)arg2;
- (void)showStyleSelector:(id)arg1;
- (unsigned long long)signpostID;
- (id)subject;
- (void)takeFocusFromComposeWebView:(id)arg1 inDirection:(unsigned long long)arg2;
- (void)tappedSMIMEButton;
- (id)toRecipients;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateSignature;
- (void)updateUserActivityState:(id)arg1;
- (void)userActivity:(id)arg1 didReceiveInputStream:(id)arg2 outputStream:(id)arg3;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewLayoutMarginsDidChange;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillUnload;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end
