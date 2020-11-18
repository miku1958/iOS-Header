//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSFormDataController.h>

#import <WebUI/MCProfileConnectionObserver-Protocol.h>
#import <WebUI/WBSFormAutoFillCorrectionManagerDelegate-Protocol.h>
#import <WebUI/WBSFormFieldClassificationCorrectorDelegate-Protocol.h>

@class CNContact, NSString, WBSFormAutoFillCorrectionManager, WBSFormAutoFillParsecFeedbackProcessor;

@interface WBUFormDataController : WBSFormDataController <MCProfileConnectionObserver, WBSFormAutoFillCorrectionManagerDelegate, WBSFormFieldClassificationCorrectorDelegate>
{
    BOOL _savePending;
    WBSFormAutoFillCorrectionManager *_autoFillCorrectionManager;
    WBSFormAutoFillParsecFeedbackProcessor *_autoFillFeedbackProcessor;
    int _cachedAutoFillRestrictionValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) CNContact *me;
@property (nonatomic) BOOL shouldAutoFillFromAddressBook;
@property (nonatomic) BOOL shouldAutoFillFromCreditCardData;
@property (nonatomic) BOOL shouldAutoFillPasswords;
@property (readonly) Class superclass;

+ (BOOL)_isDevicePasscodeSet;
+ (id)_meCard;
+ (id)_stringForCNContactObject:(id)arg1 contactObjectComponent:(id)arg2;
+ (BOOL)contactIsMe:(id)arg1;
+ (BOOL)contactStoreHasMeCard:(id)arg1;
+ (BOOL)keychainSyncEnabled;
+ (id)localizedLowercaseContactProperty:(id)arg1;
+ (id)valueStringForMatch:(id)arg1;
- (void).cxx_destruct;
- (id)_addressBookMatchesForFullNameForContact:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (id)_autoFillCorrectionManager;
- (void)_autoFillPreferencesDidChange;
- (id)_credentialForLoginForm:(id)arg1 inFrame:(id)arg2 completingPartialUser:(BOOL)arg3 matches:(id *)arg4 potentialMatches:(id *)arg5;
- (id)_credentialMatchesEligibleForUpdateForURL:(id)arg1 username:(id)arg2 oldPassword:(id)arg3;
- (void)_didFillFieldWithGeneratedPassword:(id)arg1 inFrame:(id)arg2 webView:(id)arg3;
- (id)_displayDataWithTextField:(id)arg1 displayedInQuickType:(BOOL)arg2 prefix:(id)arg3;
- (void)_processCorrectionsForFormWithDomain:(id)arg1 formMetadata:(id)arg2;
- (id)_relatedCredentialMatchesToUpdateForUser:(id)arg1 protectionSpace:(id)arg2 oldCredential:(id *)arg3 matchesForCurrentHost:(id *)arg4;
- (void)_replaceCredentialsWithDontSaveMarkerForProtectionSpace:(id)arg1;
- (void)_saveUser:(id)arg1 password:(id)arg2 forURL:(id)arg3 andPromptToUpdateRelatedCredentialsWithWebView:(id)arg4;
- (BOOL)_saveUser:(id)arg1 password:(id)arg2 forURL:(id)arg3 formType:(unsigned long long)arg4 promptingPolicy:(long long)arg5 webView:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (BOOL)_shouldSaveCreditCardDataInWebView:(id)arg1 frame:(id)arg2;
- (BOOL)_shouldSaveUsernamesAndPasswordsForURL:(id)arg1 inWebView:(id)arg2;
- (void)_showCreditCardPromptForWebView:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_showPasswordPromptForWebView:(id)arg1 formType:(unsigned long long)arg2 username:(id)arg3 host:(id)arg4 hasCredentialForCurrentHost:(BOOL)arg5 existingCredentialMatchesForCurrentHost:(id)arg6 otherSubdomainCredentialMatches:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (BOOL)_updateCredentialsWithGeneratedPasswordForForm:(id)arg1 inWebView:(id)arg2 frame:(id)arg3;
- (BOOL)_webView:(id)arg1 formSubmission:(BOOL)arg2 willSubmitNewAccountOrChangePasswordFormWithMetadata:(id)arg3 fromFrame:(id)arg4 submissionHandler:(CDUnknownBlockType)arg5;
- (BOOL)_webView:(id)arg1 saveCredentialsForURL:(id)arg2 formSubmission:(BOOL)arg3 formWithMetadata:(id)arg4 fromFrame:(id)arg5 username:(id)arg6 password:(id)arg7 submissionHandler:(CDUnknownBlockType)arg8;
- (BOOL)_webView:(id)arg1 saveUsernameAndPasswordForURL:(id)arg2 fromForm:(id)arg3 inFrame:(id)arg4 username:(id)arg5 password:(id)arg6 isGeneratedPassword:(BOOL)arg7 confirmOverwritingCurrentPassword:(BOOL)arg8 submissionHandler:(CDUnknownBlockType)arg9;
- (BOOL)_webView:(id)arg1 saveUsernameAndPasswordFromForm:(id)arg2 inFrame:(id)arg3 confirmOverwritingCurrentPassword:(BOOL)arg4 submissionHandler:(CDUnknownBlockType)arg5;
- (BOOL)_webView:(id)arg1 willSubmitFormContainingCreditCardData:(id)arg2 fromFrame:(id)arg3 submissionHandler:(CDUnknownBlockType)arg4;
- (BOOL)_webView:(id)arg1 willSubmitLoginFormWithMetadata:(id)arg2 formSubmission:(BOOL)arg3 fromFrame:(id)arg4 submissionHandler:(CDUnknownBlockType)arg5;
- (BOOL)_webView:(id)arg1 willSubmitStandardFormWithMetadata:(id)arg2 fromFrame:(id)arg3 submissionHandler:(CDUnknownBlockType)arg4;
- (id)addressBookMatchesForProperty:(id)arg1 key:(id)arg2 label:(id)arg3;
- (id)addressBookMatchesForProperty:(id)arg1 key:(id)arg2 label:(id)arg3 contact:(id)arg4;
- (id)addressBookMatchesForProperty:(id)arg1 key:(id)arg2 label:(id)arg3 partialString:(id)arg4 contact:(id)arg5 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg6;
- (BOOL)autoFillCorrectionManagerShouldProcessFeedback:(id)arg1;
- (void)clearAllFormCredentials;
- (id)completionDBPath;
- (id)credentialForLoginForm:(id)arg1 inFrame:(id)arg2;
- (id)credentialFromMatches:(id)arg1 completingPartialUserInLoginForm:(id)arg2;
- (void)dealloc;
- (void)didFillFormWithGeneratedPassword:(id)arg1 inWebView:(id)arg2 frame:(id)arg3;
- (id)feedbackProcessorForAutoFillCorrectionManager:(id)arg1;
- (id)formAutoFillCorrectionManagerForFormFieldClassificationCorrector:(id)arg1;
- (id)formFieldClassificationCorrector:(id)arg1 bestAddressBookLabelForControlValue:(id)arg2;
- (BOOL)formFieldClassificationCorrector:(id)arg1 hasAddressBookDataForAddressBookLabel:(id)arg2;
- (void)gatherAutoFillDisplayDataWithTextField:(id)arg1 displayedInQuickType:(BOOL)arg2 prefix:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)gatherValuesForForm:(id)arg1 inFrame:(id)arg2 multiRoundAutoFillManager:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithAggressiveKeychainCaching:(BOOL)arg1;
- (BOOL)mayFillCreditCardDataInFrame:(id)arg1;
- (BOOL)mayPreFillInFrame:(id)arg1 ancestorFrames:(id)arg2;
- (void)prepareMeCard;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)saveCompletionDBSoon;
- (void)saveUnsubmittedGeneratedPasswordInFrame:(id)arg1 form:(id)arg2 closingWebView:(BOOL)arg3;
- (BOOL)shouldAllowPasswordAutoFillOnURL:(id)arg1;
- (BOOL)shouldAutoFillFromCreditCardDataInFrame:(id)arg1;
- (BOOL)shouldAutoFillFromPreviousData;
- (BOOL)shouldAutoGeneratePasswordsForURL:(id)arg1 inWebView:(id)arg2;
- (void)textDidChangeInForm:(id)arg1 inWebView:(id)arg2 frame:(id)arg3;
- (id)uniqueIDOfContact:(id)arg1;
- (BOOL)webView:(id)arg1 frame:(id)arg2 willNavigateFromForm:(id)arg3 bySubmitting:(BOOL)arg4 processMetadataCorrections:(BOOL)arg5 submissionHandler:(CDUnknownBlockType)arg6;
- (BOOL)whiteListAllowsURL:(id)arg1;

@end

