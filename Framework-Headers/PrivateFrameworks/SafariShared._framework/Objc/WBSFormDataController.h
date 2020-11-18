//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, WBSAutoFillQuirksManager, WBSKeychainCredentialNotificationMonitor, WBSPair, WBSURLCredentialCache;
@protocol OS_dispatch_queue;

@interface WBSFormDataController : NSObject
{
    WBSURLCredentialCache *_credentialCache;
    WBSKeychainCredentialNotificationMonitor *_keychainMonitor;
    id _keychainNotificationRegistrationToken;
    NSMutableDictionary *_completionDB;
    NSMutableDictionary *_valuesDB;
    NSMutableDictionary *_preferredLabelsMap;
    unsigned long long _completionDBSize;
    NSMutableDictionary *_domainToLastUsedUsernameAndProtectionSpace;
    NSMutableArray *_recentlyUsedAutoFillSets;
    NSMutableDictionary *_preferredLabelForUniqueIDOfPersonMap;
    WBSPair *_cachedBirthdayAndLocalizedStrings;
    NSObject<OS_dispatch_queue> *_internalQueue;
    WBSAutoFillQuirksManager *_autoFillQuirksManager;
}

@property (readonly, nonatomic) WBSAutoFillQuirksManager *autoFillQuirksManager; // @synthesize autoFillQuirksManager=_autoFillQuirksManager;

+ (id)_metadataForControlWithUniqueID:(id)arg1 inForm:(id)arg2;
+ (BOOL)_password:(id)arg1 appearsToBeASixDigitCodeAppendedToPassword:(id)arg2;
+ (BOOL)_password:(id)arg1 appearsToBeMoreThanOneSymbolAppendedToPassword:(id)arg2;
+ (id)addressBookAddressPropertyKey;
+ (id)allAddressBookAddressComponentKeys;
+ (id)allAddressBookNonAddressPropertyKeys;
+ (id)allSynonymsForMatch:(id)arg1;
+ (long long)availableManualAutoFillActionForTextField:(id)arg1 form:(id)arg2 outUsernameElementUniqueID:(id *)arg3 outPasswordElementUniqueID:(id *)arg4 outConfirmPasswordElementUniqueID:(id *)arg5;
+ (BOOL)canAutocompleteTextField:(id)arg1 inForm:(id)arg2;
+ (BOOL)contactIsMe:(id)arg1;
+ (id)contactKeyForString:(id)arg1;
+ (id)continuingFieldsInFormControls:(id)arg1 startingAtIndex:(unsigned long long)arg2 textFieldsOnly:(BOOL)arg3 ignorePositioning:(BOOL)arg4;
+ (id)controlsConsideredByAutoFillInForm:(id)arg1;
+ (BOOL)convertNumber:(id)arg1 toAutoFillFormType:(unsigned long long *)arg2;
+ (id)domainFromURL:(id)arg1;
+ (id)dontSaveMarker;
+ (id)fieldToFocusBeforeSubmittingForm:(id)arg1;
+ (BOOL)formContainsCreditCardData:(id)arg1;
+ (BOOL)formContainsCreditCardNumberField:(id)arg1;
+ (BOOL)formContainsCreditCardNumberOrCardSecurityCodeField:(id)arg1;
+ (BOOL)formContainsDateFields:(id)arg1 matchingAddressBookMatch:(id)arg2;
+ (BOOL)isFieldUnidentified:(id)arg1;
+ (BOOL)isNameProperty:(id)arg1;
+ (id)lastFieldInControls:(id)arg1 inForm:(id)arg2;
+ (id)localizedLowercaseContactProperty:(id)arg1;
+ (id)nextFieldAfterControls:(id)arg1 inForm:(id)arg2;
+ (BOOL)password:(id)arg1 shouldBeConsideredEqualToExistingPassword:(id)arg2;
+ (BOOL)shouldDisplayOneTimeCodeForControl:(id)arg1 inForm:(id)arg2;
+ (BOOL)shouldSubmitForm:(id)arg1 withCredential:(id)arg2;
+ (id)specifierForAddressBookLabel:(id)arg1;
+ (id)specifierForControl:(id)arg1;
+ (BOOL)stringLooksLikeCreditCardNumber:(id)arg1;
+ (id)stringWithAddressBookValue:(id)arg1 key:(id)arg2;
+ (BOOL)textFieldLooksLikeCreditCardFormField:(id)arg1 inForm:(id)arg2;
+ (BOOL)textFieldLooksLikeCreditCardNumericFormField:(id)arg1;
+ (id)valueOfControlWithUniqueID:(id)arg1 inForm:(id)arg2;
+ (id)valuesFromCredential:(id)arg1 forLoginOrChangePasswordForm:(id)arg2;
+ (id)valuesFromUser:(id)arg1 password:(id)arg2 forLoginOrChangePasswordForm:(id)arg3;
- (void).cxx_destruct;
- (unsigned long long)_addMatchesForControl:(id)arg1 startingAtIndex:(unsigned long long)arg2 formMetadata:(id)arg3 fromExistingMatches:(id)arg4 fromAllMatchesIfNecessary:(id)arg5 addToFoundMatches:(id)arg6 addToAutoFillValues:(id)arg7 multiRoundAutoFillManager:(id)arg8 propertyToIdentifierMapForFoundMatches:(id)arg9 shouldUseExistingMatchesToFillFocusedField:(BOOL)arg10;
- (id)_autoFillSetFromMatches:(id)arg1 label:(id)arg2 contact:(id)arg3 form:(id)arg4;
- (id)_cachedLocalizedStringsForBirthdate:(id)arg1;
- (id)_completionDB;
- (id)_credentialMatchesWithCriteria:(id)arg1 protectionSpaceMatches:(id)arg2;
- (void)_currentLocaleDidChange:(id)arg1;
- (id)_domainsWithPreviousDataOnInternalQueue;
- (void)_fillPhoneNumber:(id)arg1 intoValues:(id)arg2 controls:(id)arg3 formTextSample:(id)arg4 multiRoundAutoFillManager:(id)arg5;
- (unsigned long long)_indexForControlWithUniqueID:(id)arg1 inForm:(id)arg2;
- (id)_knownUsernamesForURL:(id)arg1;
- (id)_lastUsedUsernameForDomain:(id)arg1 protectionSpace:(id *)arg2;
- (void)_loadCompletionDBIfNeededOnInternalQueue;
- (BOOL)_matchHasPreferredIdentifierOrShouldBeFilledInMultiRoundAutoFill:(id)arg1 specifier:(id)arg2 multiRoundAutoFillManager:(id)arg3 contact:(id)arg4;
- (id)_matchesForControl:(id)arg1 inDomain:(id)arg2 matchingPartialString:(id)arg3 autoFillDataType:(long long)arg4 preferredLabel:(id)arg5 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg6;
- (id)_matchesForControl:(id)arg1 inDomain:(id)arg2 matchingPartialString:(id)arg3 autoFillDataType:(long long)arg4 preferredLabel:(id)arg5 contact:(id)arg6 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg7;
- (id)_nextFieldToFocusAfterFillingFieldAtIndex:(unsigned long long)arg1 inForm:(id)arg2;
- (id)_phoneNumberCandidates:(id)arg1 fillingMultipleFields:(BOOL)arg2;
- (id)_protectionSpaceMatchesWithCriteria:(id)arg1 credentialsByProtectionSpace:(id)arg2 associatedDomainsManager:(id)arg3;
- (id)_recentlyUsedAutoFillDictionaries;
- (void)_setLastUsedUsername:(id)arg1 andProtectionSpace:(id)arg2 forDomain:(id)arg3;
- (id)_singleFieldPhoneNumberCandidates:(id)arg1;
- (id)_valuesForStandardForm:(id)arg1 inDomain:(id)arg2 autoFillDataType:(long long)arg3 matches:(id *)arg4 preferredLabel:(id)arg5 multiRoundAutoFillManager:(id)arg6 wantAllMatches:(BOOL)arg7 contact:(id)arg8 existingMatches:(id)arg9 shouldUseExistingMatchesToFillFocusedField:(BOOL)arg10 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg11;
- (void)addABMatchesForValueSpecifier:(id)arg1 matchingPartialString:(id)arg2 toArray:(id)arg3 preferredLabel:(id)arg4 contact:(id)arg5 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg6;
- (void)addAllAddressDataIfNecessary:(id)arg1 contactLabel:(id)arg2 contact:(id)arg3;
- (void)addPreviousDataMatchesForFieldWithName:(id)arg1 inDomain:(id)arg2 matchingPartialString:(id)arg3 toArray:(id)arg4;
- (void)addRecentlyUsedAutoFillSet:(id)arg1 appendToTheEnd:(BOOL)arg2;
- (unsigned long long)addValuesForStandardFormControls:(id)arg1 startingAtIndex:(unsigned long long)arg2 fromAutoFillItem:(id)arg3 toDictionary:(id)arg4 formTextSample:(id)arg5 multiRoundAutoFillManager:(id)arg6;
- (unsigned long long)addValuesForStandardFormControlsInForm:(id)arg1 startingAtIndex:(unsigned long long)arg2 fromAutoFillItem:(id)arg3 toDictionary:(id)arg4 multiRoundAutoFillManager:(id)arg5;
- (BOOL)addressBookHasDataForLabel:(id)arg1;
- (id)addressBookMatchesForFullNameForContact:(id)arg1;
- (id)addressBookMatchesForProperty:(id)arg1 key:(id)arg2 label:(id)arg3;
- (id)addressBookMatchesForProperty:(id)arg1 key:(id)arg2 label:(id)arg3 partialString:(id)arg4 contact:(id)arg5 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg6;
- (id)allFormDataForSaving;
- (id)annotationsFromCredential:(id)arg1 forLoginOrChangePasswordForm:(id)arg2;
- (long long)autoFillActionForFormType:(unsigned long long)arg1 onURL:(id)arg2;
- (id)autoGeneratedPasswordForURL:(id)arg1 respectingPasswordRequirements:(id)arg2 maxLength:(unsigned long long)arg3;
- (id)bestAddressBookLabelForFormMetadata:(id)arg1 formControlValue:(id)arg2;
- (id)bestMatchForControl:(id)arg1 inDomain:(id)arg2 matchingPartialString:(id)arg3 autoFillDataType:(long long)arg4 preferredLabel:(id)arg5 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg6;
- (id)bestMatchForControl:(id)arg1 inDomain:(id)arg2 matchingPartialString:(id)arg3 autoFillDataType:(long long)arg4 preferredLabel:(id)arg5 contact:(id)arg6 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg7;
- (id)cascadingAddressMatchesForMatch:(id)arg1 contact:(id)arg2;
- (void)clearPreviousDataDatabase;
- (void)clearPreviousDataDatabaseItemsAddedAfterDate:(id)arg1;
- (void)clearPreviousDataForDomain:(id)arg1;
- (id)completionDBPath;
- (id)contactAutoFillSetForRecentlyUsedAutoFillSet:(id)arg1 contact:(id)arg2 form:(id)arg3;
- (id)credentialMatchesForForm:(id)arg1 atURL:(id)arg2 potentialMatches:(id *)arg3;
- (void)credentialMatchesWithCriteria:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)domainsWithPreviousData;
- (void)domainsWithPreviousDataChanged;
- (id)encryptOrDecryptData:(id)arg1 encrypt:(BOOL)arg2;
- (void)getCredentialMatches:(id *)arg1 andPotentialMatches:(id *)arg2 forURL:(id)arg3 matchingPartialUsername:(id)arg4 omittingCredentialsUserHasDeniedAccessTo:(BOOL)arg5;
- (void)getCredentialMatches:(id *)arg1 andPotentialMatches:(id *)arg2 matchesForAssociatedDomains:(id *)arg3 forURL:(id)arg4 matchingPartialUsername:(id)arg5;
- (void)getCredentialMatches:(id *)arg1 andPotentialMatches:(id *)arg2 matchesForAssociatedDomains:(id *)arg3 forURL:(id)arg4 matchingPartialUsername:(id)arg5 omittingCredentialsUserHasDeniedAccessTo:(BOOL)arg6;
- (void)getFormFieldValues:(id *)arg1 andFieldToFocus:(id *)arg2 andCreditCardDataTypesThatWillBeFilled:(id *)arg3 forCreditCardForm:(id)arg4 fromCreditCardData:(id)arg5;
- (void)getFormFieldValues:(id *)arg1 andFieldToFocus:(id *)arg2 withSingleCreditCardData:(id)arg3 inField:(id)arg4 inForm:(id)arg5;
- (BOOL)hasUserDeniedAccessToCredential:(id)arg1 inProtectionSpace:(id)arg2;
- (id)infoForDomain:(id)arg1;
- (id)init;
- (id)initWithAggressiveKeychainCaching:(BOOL)arg1;
- (BOOL)isControlASelectElement:(id)arg1;
- (BOOL)isPasswordFieldForUserCredentialsWithMetadata:(id)arg1 formMetadata:(id)arg2;
- (id)lastUsedUsernameForURL:(id)arg1;
- (id)lastUsedUsernameForURL:(id)arg1 protectionSpace:(id *)arg2;
- (void)loadCompletionDBIfNeeded;
- (id)matchesForControl:(id)arg1 atURL:(id)arg2 matchingPartialString:(id)arg3 autoFillDataType:(long long)arg4 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg5;
- (id)matchesForControl:(id)arg1 atURL:(id)arg2 matchingPartialString:(id)arg3 autoFillDataType:(long long)arg4 contact:(id)arg5 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg6;
- (id)metadataOfActiveFormOrBestFormForPageLevelAutoFill:(id)arg1 frame:(struct OpaqueFormAutoFillFrame **)arg2;
- (id)metadataOfBestFormForStreamlinedLogin:(id)arg1 frame:(struct OpaqueFormAutoFillFrame **)arg2;
- (void)notifyKeychainWasDirectlyAffectedBySafari;
- (id)orderedHomeAndWorkSetsForContact:(id)arg1 form:(id)arg2;
- (BOOL)preferredIdentifierExistsForProperty:(id)arg1 withContact:(id)arg2;
- (id)preferredIdentifierForProperty:(id)arg1 withContact:(id)arg2;
- (void)pruneCompletionDB;
- (id)recentlyUsedAutoFillSets;
- (void)saveCompletionDBSoon;
- (void)saveRecentlyUsedAutoFillSetWithMatchesToFill:(id)arg1 matchesForDoNotFill:(id)arg2;
- (void)setInfo:(id)arg1 forDomain:(id)arg2;
- (void)setPreferredIdentifier:(id)arg1 forProperty:(id)arg2 withContact:(id)arg3;
- (BOOL)shouldAutoFillFromAddressBook;
- (BOOL)shouldAutoFillFromPreviousData;
- (BOOL)shouldAutoFillPasswords;
- (id)substituteCredential:(id)arg1 inProtectionSpace:(id)arg2;
- (BOOL)textFieldIsEligibleForAutomaticStrongPassword:(id)arg1 form:(id)arg2 ignorePreviousDecision:(BOOL)arg3 textFieldCurrentlyContainsStrongPassword:(BOOL *)arg4;
- (BOOL)textFieldMetadataMeetsRequirementsForAutomaticStrongPasswordTreatment:(id)arg1 form:(id)arg2;
- (id)uniqueIDOfContact:(id)arg1;
- (void)updateLastUsedUsernameAndExtractUsernameAndPasswordFromForm:(id)arg1 atURL:(id)arg2 username:(id *)arg3 password:(id *)arg4;
- (id)valuesForContactFormWithMetadata:(id)arg1 inDomain:(id)arg2 matches:(id *)arg3 multiRoundAutoFillManager:(id)arg4;
- (id)valuesForContactFormWithMetadata:(id)arg1 inDomain:(id)arg2 matches:(id *)arg3 multiRoundAutoFillManager:(id)arg4 contact:(id)arg5;
- (id)valuesForContactFormWithMetadata:(id)arg1 matches:(id *)arg2 multiRoundAutoFillManager:(id)arg3 existingMatches:(id)arg4 contact:(id)arg5;
- (id)valuesForContactFormWithMetadata:(id)arg1 matches:(id *)arg2 multiRoundAutoFillManager:(id)arg3 existingMatches:(id)arg4 shouldUseExistingMatchesToFillFocusedField:(BOOL)arg5 contact:(id)arg6;
- (id)valuesForStandardForm:(id)arg1 inDomain:(id)arg2 autoFillDataType:(long long)arg3 matches:(id *)arg4 preferredLabel:(id)arg5 multiRoundAutoFillManager:(id)arg6;
- (id)valuesForStandardForm:(id)arg1 inDomain:(id)arg2 autoFillDataType:(long long)arg3 matches:(id *)arg4 preferredLabel:(id)arg5 multiRoundAutoFillManager:(id)arg6 contact:(id)arg7 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg8;
- (void)willSubmitFormWithCredentials:(id)arg1 atURL:(id)arg2 username:(id *)arg3 password:(id *)arg4;

@end

