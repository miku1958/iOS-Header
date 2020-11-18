//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebUI/CNContactPickerDelegate-Protocol.h>
#import <WebUI/WBUContactAutoFillViewControllerFiller-Protocol.h>
#import <WebUI/WBUCreditCardCaptureViewControllerDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString, UIView, WBSFormMetadata, WBSMultiRoundAutoFillManager, WBUFormDataController;
@protocol WBUFormAutoFillFrameHandle, WBUFormAutoFillWebView;

@interface WBUFormAutoCompleteState : NSObject <WBUCreditCardCaptureViewControllerDelegate, WBUContactAutoFillViewControllerFiller, CNContactPickerDelegate>
{
    CDUnknownBlockType _creditCardCaptureCompletionHandler;
    WBSFormMetadata *_formMetadata;
    NSDictionary *_textFieldMetadata;
    unsigned long long _formType;
    long long _action;
    BOOL _gatheringFormValues;
    NSDictionary *_formValues;
    NSDictionary *_formAnnotations;
    NSArray *_credentialMatches;
    NSArray *_relatedCredentialMatches;
    BOOL _canAutoComplete;
    NSMutableDictionary *_matchesByCompletion;
    WBSMultiRoundAutoFillManager *_multiRoundAutoFillManager;
    BOOL _URLIsAllowedByWhiteList;
    BOOL _hasDeterminedIfURLIsAllowedByWhiteList;
    CDUnknownBlockType _displayOtherContactsCompletionHandler;
    CDUnknownBlockType _customAutoFillContactCompletionHandler;
    BOOL _hasNotedThatTextDidChangeInPasswordField;
    WBUFormDataController *_dataController;
}

@property (readonly, nonatomic) BOOL canAutoFillCreditCardData;
@property (weak, nonatomic) WBUFormDataController *dataController; // @synthesize dataController=_dataController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id<WBUFormAutoFillFrameHandle> frame;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL shouldOfferActionAutoFillCredentials;
@property (readonly, nonatomic) BOOL shouldOfferToAutoFillCreditCardData;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL textFieldLooksLikeCreditCardNumericFormField;
@property (readonly, nonatomic) NSString *textFieldValue;
@property (readonly, nonatomic) UIView<WBUFormAutoFillWebView> *webView;

+ (BOOL)_shouldSaveCredentialsInProtectionSpace:(id)arg1;
+ (void)getMatchesFromFormProtectionSpace:(id)arg1 matchesFromOtherProtectionSpaces:(id)arg2 withFormURL:(id)arg3 credentialMatches:(id)arg4 lastGeneratedPassword:(id)arg5 currentUser:(id)arg6 currentPassword:(id)arg7 forUserNamesOnly:(BOOL)arg8;
- (void).cxx_destruct;
- (long long)_action;
- (long long)_actionForLoginForm;
- (void)_autoFillCreditCardData;
- (void)_autoFillValues:(id)arg1 setAutoFilled:(BOOL)arg2;
- (void)_autoFillWithSet:(id)arg1;
- (id)_bestTextFieldMetadataForMetadata:(id)arg1;
- (void)_captureCreditCardDataWithCameraAndFill;
- (void)_ensureFormMetadata;
- (void)_gatherFormValuesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_generateAndSuggestPasswordWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_getShouldOfferForgetPassword:(BOOL *)arg1 savePassword:(BOOL *)arg2;
- (BOOL)_hasMatchWithUser:(id)arg1 password:(id)arg2;
- (id)_matchesForPartialString:(id)arg1;
- (void)_offerToAutoFillContact;
- (void)_offerToAutoFillFromPotentialCredentialMatches;
- (void)_offerToForgetSavedPassword:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)_passwordGenerationAssistanceAction;
- (BOOL)_passwordGenerationAssistanceAutoFillButtonEnabled;
- (void)_performAutoFill;
- (void)_presentViewController:(id)arg1 presentingViewController:(id)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_setUpMultiRoundAutoFillManagerIfNecessary;
- (void)_setUserAndPasswordFieldsAutoFilled:(BOOL)arg1 clearPasswordField:(BOOL)arg2;
- (BOOL)_shouldAllowGeneratedPassword;
- (BOOL)_shouldUsePasswordGenerationAssistanceForTextField;
- (void)_suggestPasswordForNewAccountOrChangePasswordForm;
- (BOOL)_textFieldIsEmptyPasswordField;
- (BOOL)_textFieldLooksLikeCreditCardFormField;
- (void)_updateAutoFillButton;
- (id)_viewControllerToPresentFrom;
- (void)acceptedAutoFillWord:(id)arg1;
- (void)annotateForm:(long long)arg1 withValues:(id)arg2;
- (void)autoFill;
- (void)autoFillDisplayData:(id)arg1 setAutoFilled:(BOOL)arg2;
- (void)autoFillFormWithCreditCardData:(id)arg1;
- (void)autoFillFormWithCreditCardDataAfterAuthenticationIfNeeded:(id)arg1;
- (void)autoFillGeneratedPassword:(id)arg1 inForm:(long long)arg2;
- (void)autoFillValues:(id)arg1 setAutoFilled:(BOOL)arg2 andFocusField:(id)arg3;
- (void)autoFillValues:(id)arg1 setAutoFilled:(BOOL)arg2 andFocusFieldAfterFilling:(BOOL)arg3 fieldToFocus:(id)arg4;
- (void)autoFillValuesAfterAuthenticationIfNeeded:(id)arg1;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)creditCardCaptureViewController:(id)arg1 didCaptureCreditCard:(id)arg2;
- (void)creditCardCaptureViewControllerDidCancel:(id)arg1;
- (void)dealloc;
- (void)dismissCustomAutoFill;
- (void)fetchFormMetadataWithCompletion:(CDUnknownBlockType)arg1;
- (void)fillCredential:(id)arg1 setAutoFilled:(BOOL)arg2 setAsDefaultCredential:(BOOL)arg3;
- (void)fillCredentialAfterAuthenticationIfNeeded:(id)arg1 setAsDefaultCredential:(BOOL)arg2;
- (void)fillGeneratedPassword:(id)arg1 inField:(id)arg2;
- (void)getLoginFormUser:(id *)arg1 password:(id *)arg2 userIsAutoFilled:(BOOL *)arg3 passwordIsAutoFilled:(BOOL *)arg4;
- (void)getTextFieldMetadata:(id *)arg1 formMetadata:(id *)arg2;
- (BOOL)hasCurrentSuggestions;
- (BOOL)hasPotentialLoginCredentialsForLoginForm;
- (id)initWithFormDataController:(id)arg1;
- (void)invalidate;
- (void)performAutoFillWithMatchSelections:(id)arg1 doNotFill:(id)arg2 contact:(id)arg3;
- (id)potentialCredentialMatches;
- (void)setAutoFillButtonTitle:(id)arg1;
- (void)setFormControls:(id)arg1 areAutoFilled:(BOOL)arg2 clearField:(id)arg3;
- (void)setShowingKeyboardInputView:(BOOL)arg1;
- (void)showOtherContactOptions;
- (id)suggestionsForString:(id)arg1;
- (void)switchToCustomInputViewWithMatches:(id)arg1 contact:(id)arg2;
- (void)textDidChangeInForm:(id)arg1 textField:(id)arg2;
- (id)titleOfAutoFillButton;
- (void)updateCachedFormMetadataAfterFilling:(id)arg1;

@end

