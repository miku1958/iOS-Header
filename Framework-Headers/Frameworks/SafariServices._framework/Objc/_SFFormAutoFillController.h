//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/SFCredentialProviderExtensionManagerObserver-Protocol.h>
#import <SafariServices/SFFormMetadataObserver-Protocol.h>
#import <SafariServices/_SFAuthenticationClient-Protocol.h>
#import <SafariServices/_SFAutoFillInputViewDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMutableIndexSet, NSMutableSet, NSString, NSTimer, SFFormAutoFillFrameHandle, SFFormAutocompleteState, UIView, WBSOneTimeCodeMonitor, WKWebView, _SFAuthenticationContext, _SFAutoFillAuthenticationCache, _SFAutoFillInputView, _SFFormAutoFillInputSession, _WKRemoteObjectInterface;
@protocol SFFormAutoFillControllerDelegate, SFFormAutoFiller, WBUFormAutoFillWebView;

@interface _SFFormAutoFillController : NSObject <SFCredentialProviderExtensionManagerObserver, _SFAutoFillInputViewDelegate, SFFormMetadataObserver, _SFAuthenticationClient>
{
    WKWebView<WBUFormAutoFillWebView> *_webView;
    id<SFFormAutoFillControllerDelegate> _delegate;
    _WKRemoteObjectInterface *_remoteObjectInterface;
    id<SFFormAutoFiller> _autoFiller;
    BOOL _isCurrentlyAuthenticating;
    long long _authenticationType;
    SFFormAutocompleteState *_state;
    NSTimer *_prefillTimer;
    NSMutableIndexSet *_uniqueIDsOfFormsThatWereAutoFilled;
    NSMutableSet *_uniqueIDsOfControlsThatWereAutoFilled;
    NSString *_uniqueIDOfFocusedPasswordElementWithAutomaticPassword;
    NSArray *_uniqueIDsOfPasswordElementsForAutomaticPasswords;
    SFFormAutoFillFrameHandle *_frameHandleForAutomaticPasswords;
    _SFFormAutoFillInputSession *_inputSessionForAutomaticPasswords;
    _SFAutoFillInputView *_autoFillInputView;
    NSArray *_preservedLeadingBarButtonGroups;
    NSArray *_preservedTrailingBarButtonGroups;
    NSDictionary *_externalCredentialIdentitiesForStreamlinedAutoFill;
    BOOL _metadataCorrectionsEnabled;
}

@property (readonly, nonatomic) _SFAutoFillAuthenticationCache *authenticationCache;
@property (readonly, nonatomic) _SFAuthenticationContext *authenticationContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL metadataCorrectionsEnabled; // @synthesize metadataCorrectionsEnabled=_metadataCorrectionsEnabled;
@property (readonly, nonatomic) WBSOneTimeCodeMonitor *oneTimeCodeMonitor;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView<WBUFormAutoFillWebView> *webView;

+ (id)_filterAndSortCredentialIdentities:(id)arg1 pageURL:(id)arg2 exactMatchesOnly:(BOOL)arg3;
+ (void)_getExternalLoginCredentialSuggestionsForDomains:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)_getExternalLoginCredentialSuggestionsForDomains:(id)arg1 pageURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)_addUniqueIDsOfAutoFilledForm:(id)arg1;
- (void)_authenticateForAutoFillForHighLevelDomain:(id)arg1 onPageLoad:(BOOL)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_autoFillLoginFormSynchronouslyAndClearMetadata:(id)arg1 inFrame:(id)arg2;
- (id)_beginAutomaticPasswordInteractionWithInputSession:(id)arg1 generatedPassword:(id)arg2 ignorePreviousDecision:(BOOL)arg3;
- (void)_didFocusSensitiveFormField;
- (void)_fieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4;
- (void)_fieldFocusedWithInputSession:(id)arg1;
- (void)_hideInputAssistantItemsIfNecessary;
- (void)_prefillTimerFired:(id)arg1;
- (void)_removeAutomaticPasswordButtonInitiatedByUser:(BOOL)arg1 removeVisualTreatmentOnly:(BOOL)arg2;
- (void)_removeUniqueIDsOfAutoFilledForm:(id)arg1;
- (void)_restoreInputAssistantItemsIfNecessary;
- (id)_websiteForAuthenticationPrompt;
- (void)annotateForm:(long long)arg1 inFrame:(id)arg2 withValues:(id)arg3;
- (void)authenticateForAutoFillOnPageLoad:(BOOL)arg1 forAuthenticationType:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)authenticationCustomUIProgressObserverForContext:(id)arg1;
- (id)authenticationMessageForContext:(id)arg1;
- (void)autoFill;
- (void)autoFillDidFinishWithUpdatedFormMetadata:(id)arg1 inFrame:(id)arg2;
- (void)autoFillForm:(long long)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3;
- (void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(BOOL)arg3 andFocusField:(id)arg4;
- (void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(BOOL)arg3 focusFieldAfterFilling:(BOOL)arg4 fieldToFocus:(id)arg5;
- (void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(BOOL)arg3 focusFieldAfterFilling:(BOOL)arg4 fieldToFocus:(id)arg5 submitForm:(BOOL)arg6;
- (void)autoFillInputViewDidSelectMorePasswords:(id)arg1;
- (void)autoFillInputViewDidSelectUseKeyboard:(id)arg1;
- (void)autoFillOneTimeCodeFieldsInFrame:(id)arg1 withValue:(id)arg2;
- (id)automaticPasswordForPasswordField:(id)arg1 inForm:(id)arg2 isFrame:(id)arg3;
- (void)automaticPasswordSheetDismissed;
- (id)beginAutomaticPasswordInteractionWithInputSession:(id)arg1;
- (void)beginAutomaticPasswordInteractionWithInputSession:(id)arg1 generatedPassword:(id)arg2;
- (void)credentialProviderExtensionManagerExtensionListDidChange:(id)arg1;
- (void)dealloc;
- (void)didCollectFormMetadataForPreFilling:(id)arg1 atURL:(id)arg2 ancestorFramesOfFormToPreFill:(id)arg3;
- (void)didCollectURLsForPreFilling:(id)arg1 atURL:(id)arg2;
- (void)didFillGeneratedPasswordInForm:(id)arg1 inFrame:(id)arg2;
- (void)didRemoveAutomaticStrongPasswordInForm:(id)arg1 inputSessionUserObject:(id)arg2 inFrame:(id)arg3;
- (BOOL)displayMessageAsTitleForContext:(id)arg1;
- (BOOL)elementIsBeingFocusedForStreamlinedLogin:(id)arg1;
- (void)fetchMetadataForTextField:(id)arg1 inFrame:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)fieldDidFocusWithInputSession:(id)arg1;
- (void)fieldFocusedWithInputSession:(id)arg1;
- (void)fieldWillFocusWithInputSession:(id)arg1;
- (void)fillTextField:(id)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3;
- (id)initWithWebView:(id)arg1 delegate:(id)arg2;
- (void)insertTextSuggestion:(id)arg1;
- (void)invalidate;
- (id)passcodePromptForContext:(id)arg1;
- (void)passwordFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4;
- (void)prefillFormsSoonIfNeeded;
- (void)prepareForShowingAutomaticStrongPasswordWithInputSession:(id)arg1;
- (void)removeAutomaticPasswordButtonInitiatedByUser:(BOOL)arg1;
- (void)removeAutomaticPasswordVisualTreatment;
- (void)setFormControls:(id)arg1 areAutoFilled:(BOOL)arg2 andClearField:(id)arg3 inFrame:(id)arg4;
- (BOOL)shouldShowIconsInPasswordPicker;
- (void)textDidChangeInTextField:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3;
- (void)textFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4;
- (void)updateSuggestions;
- (void)usernameFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4;
- (void)willNavigateFrame:(id)arg1 withUnsubmittedForm:(id)arg2 loadingIsDeferred:(BOOL)arg3;
- (void)willSubmitForm:(id)arg1 inFrame:(id)arg2 submissionHandler:(CDUnknownBlockType)arg3;
- (void)willSubmitFormValues:(id)arg1 userObject:(id)arg2 submissionHandler:(CDUnknownBlockType)arg3;

@end

