//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/CNContactPickerDelegate-Protocol.h>
#import <SafariServices/SFAppAutoFillOneTimeCodeProviderObserver-Protocol.h>
#import <SafariServices/SFContactAutoFillViewControllerFiller-Protocol.h>
#import <SafariServices/_ASCredentialListViewControllerDelegate-Protocol.h>
#import <SafariServices/_ASPasswordCredentialAuthenticationViewControllerDelegate-Protocol.h>
#import <SafariServices/_SFCreditCardCaptureViewControllerDelegate-Protocol.h>

@class NSArray, NSDictionary, NSString, SFFormAutoFillFrameHandle, UIView, WBSFormAutoFillMetadataCorrector, WBSFormControlMetadata, WBSFormMetadata, WBSMultiRoundAutoFillManager, _ASPasswordCredentialAuthenticationViewController, _SFFormAutoFillController, _SFFormAutoFillInputSession, _SFFormDataController;

__attribute__((visibility("hidden")))
@interface SFFormAutocompleteState : NSObject <CNContactPickerDelegate, SFContactAutoFillViewControllerFiller, _SFCreditCardCaptureViewControllerDelegate, SFAppAutoFillOneTimeCodeProviderObserver, _ASCredentialListViewControllerDelegate, _ASPasswordCredentialAuthenticationViewControllerDelegate>
{
    long long _action;
    _SFFormAutoFillController *_autoFillController;
    _SFFormDataController *_dataController;
    UIView *_emptyInputView;
    WBSFormMetadata *_formMetadata;
    unsigned long long _formType;
    NSDictionary *_formValues;
    SFFormAutoFillFrameHandle *_frame;
    BOOL _gatheringFormValues;
    BOOL _hasNotedThatTextDidChangeInPasswordField;
    _SFFormAutoFillInputSession *_inputSession;
    WBSMultiRoundAutoFillManager *_multiRoundAutoFillManager;
    NSString *_prefixForSuggestions;
    WBSFormControlMetadata *_textFieldMetadata;
    NSArray *_cachedCredentialMatches;
    NSArray *_cachedRelatedCredentialMatches;
    CDUnknownBlockType _credentialMatchesCompletionHandler;
    BOOL _fetchingLoginCredentialSuggestions;
    BOOL _invalidated;
    BOOL _hasDeterminedIfURLIsAllowedByWhiteList;
    BOOL _URLIsAllowedByWhiteList;
    CDUnknownBlockType _displayOtherContactsCompletionHandler;
    CDUnknownBlockType _customAutoFillContactCompletionHandler;
    CDUnknownBlockType _creditCardCaptureCompletionHandler;
    WBSFormAutoFillMetadataCorrector *_metadataCorrector;
    NSArray *_cachedExternalCredentialIdentities;
    _ASPasswordCredentialAuthenticationViewController *_externalCredentialViewController;
    CDUnknownBlockType _externalCredentialListCompletionHandler;
    BOOL _submitExternalCredential;
}

@property (readonly, nonatomic) long long action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) _SFFormAutoFillInputSession *inputSession; // @synthesize inputSession=_inputSession;
@property (readonly, nonatomic) BOOL shouldOfferToAutoFillCreditCardData;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *titleOfAutoFillButton;

+ (void)_getMatchesFromFormProtectionSpace:(id)arg1 matchesFromOtherProtectionSpaces:(id)arg2 withFormURL:(id)arg3 credentialMatches:(id)arg4 lastGeneratedPassword:(id)arg5 currentUser:(id)arg6 currentPassword:(id)arg7 forUserNamesOnly:(BOOL)arg8;
+ (BOOL)_shouldSaveCredentialsInProtectionSpace:(id)arg1;
- (void).cxx_destruct;
- (long long)_actionForLoginForm;
- (id)_actionForPresentingPasswordManagerExtension:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_autoFillCreditCardData;
- (void)_autoFillDisplayData:(id)arg1 setAutoFilled:(BOOL)arg2;
- (void)_autoFillSingleCreditCardData:(long long)arg1;
- (void)_autoFillWithSet:(id)arg1;
- (id)_bestTextFieldMetadataForMetadata:(id)arg1;
- (id)_cachedPotentialCredentialMatches;
- (BOOL)_canAutoFillCreditCardData;
- (void)_captureCreditCardDataWithCameraAndFill;
- (id)_correctedFormMetadata:(id)arg1;
- (id)_displayTextForCreditCardNumber:(id)arg1;
- (void)_fetchPotentialCredentialMatchesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fillASPasswordCredential:(id)arg1 needsAuthentication:(BOOL)arg2 setAutoFilled:(BOOL)arg3 submitForm:(BOOL)arg4;
- (void)_fillCredential:(id)arg1 setAutoFilled:(BOOL)arg2 setAsDefaultCredential:(BOOL)arg3 focusFieldAfterFilling:(BOOL)arg4 submitForm:(BOOL)arg5;
- (void)_fillCredentialAfterAuthenticationIfNeeded:(id)arg1 setAsDefaultCredential:(BOOL)arg2 submitForm:(BOOL)arg3;
- (void)_fillCreditCardData:(id)arg1;
- (void)_fillCreditCardDataAfterAuthenticationIfNeeded:(id)arg1;
- (void)_fillPasswordCredentialIdentity:(id)arg1 submitForm:(BOOL)arg2;
- (void)_fillSingleCreditCardDataValue:(id)arg1 creditCardDataType:(long long)arg2;
- (void)_gatherAndShowAddressBookAutoFillSuggestions;
- (void)_gatherAndShowAddressBookAutoFillSuggestionsWithCorrections;
- (void)_gatherFormValuesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_generateAndSuggestPasswordWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_getLoginFormUser:(id *)arg1 password:(id *)arg2 userIsAutoFilled:(BOOL *)arg3 passwordIsAutoFilled:(BOOL *)arg4;
- (void)_getMatchingKeychainCredentialsIncludingCredentialsWithEmptyUsernames:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_getShouldOfferForgetPassword:(BOOL *)arg1 savePassword:(BOOL *)arg2;
- (BOOL)_hasMatchWithUser:(id)arg1 password:(id)arg2;
- (void)_offerToAutoFillContact;
- (void)_offerToAutoFillFromPotentialCredentialMatches;
- (void)_offerToForgetSavedPassword:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)_passwordGenerationAssistanceAction;
- (BOOL)_passwordGenerationAssistanceAutoFillButtonEnabled;
- (void)_performAutoFill;
- (void)_presentCredentialListForExtension:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_presentViewController:(id)arg1 presentingViewController:(id)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_setShowingKeyboardInputView:(BOOL)arg1;
- (void)_setUpMultiRoundAutoFillManagerIfNecessary;
- (void)_setUserAndPasswordFieldsAutoFilled:(BOOL)arg1 clearPasswordField:(BOOL)arg2;
- (BOOL)_shouldAllowExternalPasswordAutoFillOnURL:(id)arg1;
- (BOOL)_shouldAllowGeneratedPassword;
- (BOOL)_shouldOfferCreditCardDataAfterUserHasFilledCreditCardData:(id)arg1;
- (BOOL)_shouldShowPasswordOptions;
- (BOOL)_shouldUsePasswordGenerationAssistanceForTextField;
- (void)_showCreditCardDataSuggestionsAfterUserHasFilledCreditCardData;
- (void)_showOtherContactOptions;
- (id)_sortedSingleCreditCardDataArray:(id)arg1;
- (void)_suggestLoginCredentialsShowingQuickTypeKey:(BOOL)arg1;
- (void)_suggestPasswordForNewAccountOrChangePasswordForm;
- (BOOL)_suggestUsernamesForRegistrationIfPossible:(unsigned long long)arg1;
- (id)_suggestionsForAutoFillDisplayData:(id)arg1;
- (void)_switchToCustomInputViewWithMatches:(id)arg1 contact:(id)arg2;
- (void)_textDidChangeInForm:(id)arg1 textField:(id)arg2;
- (BOOL)_textFieldIsEmptyPasswordField;
- (BOOL)_textFieldLooksLikeCardSecurityCodeFieldButNotCardNumberOrCardholderField:(id)arg1;
- (id)_textSuggestionForCredentialDisplayData:(id)arg1 submitForm:(BOOL)arg2;
- (id)_textSuggestionForExternalCredentialIdentity:(id)arg1 submitForm:(BOOL)arg2;
- (void)_updateAutoFillActionToCaptureCreditCardAndFill;
- (void)_updateAutoFillButton;
- (void)_updateCreditCardAutoFillAction;
- (void)_updateCreditCardSuggestionsWithHandler:(CDUnknownBlockType)arg1;
- (void)_updateSuggestions:(unsigned long long)arg1;
- (id)_viewControllerToPresentFrom;
- (void)autoFill;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)credentialListViewController:(id)arg1 didFinishWithCredential:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)creditCardCaptureViewController:(id)arg1 didCaptureCreditCard:(id)arg2;
- (void)creditCardCaptureViewControllerDidCancel:(id)arg1;
- (void)dealloc;
- (void)dismissCustomAutoFill;
- (id)externalCredentialIdentities;
- (void)getTextSuggestionForStreamlinedAutoFillWithCredentialIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithFrame:(id)arg1 form:(id)arg2 textField:(id)arg3 inputSession:(id)arg4 autoFillController:(id)arg5;
- (void)invalidate;
- (void)oneTimeCodeProviderReceivedCode:(id)arg1;
- (void)passwordCredentialAuthenticationViewController:(id)arg1 didFinishWithCredential:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)performAutoFillWithMatchSelections:(id)arg1 doNotFill:(id)arg2 contact:(id)arg3;
- (void)presentUIForPasswordCredentialAuthenticationViewController:(id)arg1;
- (void)showAllPasswordsButtonTapped;
- (void)textDidChangeInFrame:(id)arg1 form:(id)arg2 textField:(id)arg3;
- (void)updateCachedFormMetadataAfterFilling:(id)arg1;
- (void)updateSuggestions;

@end

