//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/MFAccount.h>

#import <Message/EMReceivingAccount-Protocol.h>

@class MFError, MFLock, MFMailboxUid, MFMessageLibrary, MFWeakObjectCache, NSMutableDictionary, NSString;

@interface MailAccount : MFAccount <EMReceivingAccount>
{
    NSString *_path;
    NSString *_nonPersistentPath;
    MFMailboxUid *_rootMailboxUid;
    struct {
        unsigned int cacheDirtyCount:16;
        unsigned int synchronizationThreadIsRunning:1;
        unsigned int cacheHasBeenRead:1;
        unsigned int disableCacheWrite:1;
        unsigned int _UNUSED_:13;
    } _flags;
    MFMailboxUid *_inboxMailboxUid;
    MFMailboxUid *_draftsMailboxUid;
    MFMailboxUid *_sentMessagesMailboxUid;
    MFMailboxUid *_trashMailboxUid;
    MFMailboxUid *_archiveMailboxUid;
    MFMailboxUid *_junkMailboxUid;
    MFLock *_cachedMailboxenLock;
    MFLock *_deletionLock;
    MFError *_lastConnectionError;
    MFMessageLibrary *_library;
    NSMutableDictionary *_currentChokedActions;
    NSString *_mailboxCachePath;
    MFWeakObjectCache *_messageStoresCache;
    long long _cachedLibraryID;
    MFLock *_cachedLibraryIDLock;
    NSString *_lastKnownHostname;
    BOOL _supportsFastRemoteBodySearch;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *defaultPath;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *hostname;
@property (readonly, copy, nonatomic) NSString *mailboxPathExtension;
@property (readonly, nonatomic) BOOL needsRemoteSearchResultsVerification;
@property (copy, nonatomic) NSString *password;
@property (readonly) BOOL shouldArchiveByDefault;
@property (readonly) BOOL sourceIsManaged;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsFastRemoteBodySearch; // @synthesize supportsFastRemoteBodySearch=_supportsFastRemoteBodySearch;

+ (id)URLForInfo:(id)arg1;
+ (id)_accountContainingEmailAddress:(id)arg1 matchingAddress:(id *)arg2 fullUserName:(id *)arg3 includingInactive:(BOOL)arg4;
+ (id)_accountWithPath:(id)arg1;
+ (void)_addAccountToSortedPaths:(id)arg1;
+ (id)_defaultMailAccountForDeliveryIncludingRestricted:(BOOL)arg1;
+ (id)_loadAllAccountsWithOptions:(unsigned long long)arg1 error:(id *)arg2;
+ (id)_loadDataAccessAccountsWithError:(id *)arg1;
+ (void)_removeAccountFromSortedPaths:(id)arg1;
+ (void)_removeLookAsideValuesNotInAccountList:(id)arg1;
+ (void)_setMailAccounts:(id)arg1 saveIfChanged:(BOOL)arg2 alreadyLocked:(BOOL)arg3;
+ (void)_setOutboxMailboxUid:(id)arg1;
+ (void)_setupSortedPathsForAccounts:(id)arg1;
+ (id)accountContainingEmailAddress:(id)arg1;
+ (id)accountContainingEmailAddress:(id)arg1 includingInactive:(BOOL)arg2;
+ (id)accountForHeaders:(id)arg1 message:(id)arg2 includingInactive:(BOOL)arg3;
+ (id)accountThatMessageIsFrom:(id)arg1;
+ (id)accountThatMessageIsFrom:(id)arg1 includingInactive:(BOOL)arg2;
+ (id)accountUsingHeadersFromMessage:(id)arg1;
+ (id)accountWithPath:(id)arg1;
+ (id)accountWithURL:(id)arg1;
+ (id)accountWithURLString:(id)arg1;
+ (id)accountWithUniqueId:(id)arg1;
+ (id)activeAccounts;
+ (id)activeAccountsWithError:(id *)arg1;
+ (id)addressesThatReceivedMessage:(id)arg1;
+ (id)allActivePrimaryMailboxUids;
+ (id)allEmailAddressesIncludingFullUserName:(BOOL)arg1 includeReceiveAliases:(BOOL)arg2;
+ (id)allMailboxUids;
+ (BOOL)canMoveMessagesFromAccount:(id)arg1 toAccount:(id)arg2;
+ (id)csAccountTypeString;
+ (id)defaultAccountDirectory;
+ (id)defaultDeliveryAccount;
+ (id)defaultMailAccountForDelivery;
+ (id)defaultMailAccountForDeliveryExcludingRestricted;
+ (void)disableMailboxListingNotifications;
+ (void)enableMailboxListingNotifications:(BOOL)arg1;
+ (id)existingAccountForUniqueID:(id)arg1;
+ (id)existingAccountWithType:(id)arg1 hostname:(id)arg2 username:(id)arg3;
+ (id)existingDAMailAccountForDAAccount:(id)arg1;
+ (BOOL)getConfigurationFromServerForEmail:(id)arg1;
+ (id)infoForURL:(id)arg1;
+ (void)initialize;
+ (BOOL)isPredefinedAccountType;
+ (id)lastMailAccountsReloadDate;
+ (id)lastMailAccountsReloadError;
+ (id)legacyPathForAccountIdentifier:(id)arg1 withHostname:(id)arg2 username:(id)arg3;
+ (id)legacyPathNameForAccountWithHostname:(id)arg1 username:(id)arg2;
+ (id)mailAccounts;
+ (id)mailAccountsWithError:(id *)arg1;
+ (BOOL)mailboxListingNotificationAreEnabled;
+ (id)mailboxUidForFileSystemPath:(id)arg1 create:(BOOL)arg2;
+ (id)mailboxUidFromActiveAccountsForURL:(id)arg1;
+ (id)newAccountWithDictionary:(id)arg1;
+ (id)newAccountWithPath:(id)arg1;
+ (id)outboxMailboxUid;
+ (id)outboxMessageStore:(BOOL)arg1;
+ (id)predefinedValueForKey:(id)arg1;
+ (BOOL)primaryDeliveryAccountIsDynamic;
+ (id)purgableAccounts;
+ (id)purgableAccountsWithError:(id *)arg1;
+ (void)reloadAccounts;
+ (void)resetMailboxTimers;
+ (void)saveStateForAllAccounts;
+ (void)setDataclassesConsideredActive:(id)arg1;
+ (void)setGlobalPathForAccounts:(id)arg1;
+ (void)setMailAccountLoadOptions:(unsigned long long)arg1;
+ (void)setMailAccounts:(id)arg1;
+ (void)setMailAccounts:(id)arg1 saveIfChanged:(BOOL)arg2;
+ (id)standardAccountClass:(Class)arg1 valueForKey:(id)arg2;
+ (void)synchronouslyEmptyMailboxUidType:(int)arg1 inAccounts:(id)arg2;
+ (void)updateAutoFetchSettings;
+ (void)updateEmailAliasesForActiveAccounts;
+ (BOOL)usernameIsEmailAddress;
- (id)URLForMessage:(id)arg1;
- (id)URLString;
- (id)URLStringFromLegacyURLString:(id)arg1;
- (id)_URLForInfo:(id)arg1;
- (id)_URLScheme;
- (BOOL)_assignSpecialMailboxToAppropriateIvar:(id)arg1 forType:(int)arg2;
- (void)_asynchronouslyInvalidateAndDeleteAccountData:(BOOL)arg1;
- (id)_cachedSpecialMailboxOfType:(int)arg1;
- (BOOL)_canEmptyMessagesFromMailboxUid:(id)arg1;
- (id)_childOfMailbox:(id)arg1 withComponentName:(id)arg2;
- (BOOL)_cleanInboxDuplication:(id)arg1;
- (id)_copyMailboxUidWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned int)arg3 existingMailboxUid:(id)arg4 dictionary:(id)arg5;
- (id)_copyMailboxWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned int)arg3 dictionary:(id)arg4;
- (id)_defaultSpecialMailboxNameForType:(int)arg1;
- (void)_deleteHook;
- (BOOL)_deleteMailbox:(id)arg1;
- (id)_deliveryAccountCreateIfNeeded:(BOOL)arg1;
- (void)_didBecomeActive:(BOOL)arg1;
- (int)_emptyFrequencyForKey:(id)arg1 defaultValue:(id)arg2;
- (id)_infoForMatchingURL:(id)arg1;
- (void)_invalidateAndDeleteAccountData:(BOOL)arg1;
- (void)_invalidateCachedMailboxen;
- (void)_loadEntriesFromFileSystemPath:(id)arg1 parent:(id)arg2;
- (BOOL)_loadMailboxListingIntoCache:(id)arg1 attributes:(unsigned int)arg2 children:(id)arg3 parent:(id)arg4;
- (id)_localMailboxNameForType:(int)arg1 usingDisplayName:(id)arg2;
- (id)_mailboxPathPrefix;
- (void)_mailboxesWereRemovedFromTree:(id)arg1 withFileSystemPaths:(id)arg2;
- (id)_newMailboxWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned int)arg3 dictionary:(id)arg4 withCreationOption:(int)arg5;
- (id)_pathComponentForUidName:(id)arg1;
- (void)_readCustomInfoFromMailboxCache:(id)arg1;
- (BOOL)_registerPushNotificationPrefix:(id)arg1 forMailboxNames:(id)arg2;
- (BOOL)_renameMailbox:(id)arg1 newName:(id)arg2 parent:(id)arg3;
- (void)_resetAllMailboxURLs:(BOOL)arg1;
- (BOOL)_resetSpecialMailboxes;
- (void)_setAccountProperties:(id)arg1;
- (BOOL)_setChildren:(id)arg1 forMailboxUid:(id)arg2;
- (void)_setEmptyFrequency:(int)arg1 forKey:(id)arg2;
- (BOOL)_setPath:(id)arg1;
- (void)_setSpecialMailbox:(id)arg1 forType:(int)arg2;
- (void)_setSpecialMailboxName:(id)arg1 forType:(int)arg2;
- (void)_setValueInAccountLookAsideProperties:(id)arg1 forKey:(id)arg2 subKey:(id)arg3;
- (BOOL)_shouldConfigureMailboxCache;
- (BOOL)_shouldLogDeleteActivity;
- (id *)_specialMailboxIvarOfType:(int)arg1;
- (id)_specialMailboxUidWithType:(int)arg1 create:(BOOL)arg2;
- (void)_synchronizeMailboxListWithFileSystem;
- (void)_synchronouslyLoadListingForParent:(id)arg1;
- (id)_uidNameForPathComponent:(id)arg1;
- (void)_writeCustomInfoToMailboxCache:(id)arg1;
- (void)_writeMailboxCacheWithPrejudice:(BOOL)arg1;
- (void)accountDidLoad;
- (void)addUserFocusMailbox:(id)arg1;
- (id)allLocalMailboxUids;
- (id)allMailMailboxUid;
- (id)allMailboxUids;
- (int)archiveDestinationForMailbox:(id)arg1;
- (BOOL)archiveSentMessages;
- (int)cachePolicy;
- (BOOL)canAppendMessages;
- (BOOL)canArchiveForMailbox:(id)arg1;
- (BOOL)canAuthenticateWithCurrentCredentials;
- (BOOL)canCreateNewMailboxes;
- (BOOL)canFetch;
- (BOOL)canForwardWithoutDownload;
- (BOOL)canMailboxBeDeleted:(id)arg1;
- (BOOL)canMailboxBeRenamed:(id)arg1;
- (BOOL)canReceiveNewMailNotifications;
- (BOOL)canUseCarrierDeliveryFallback;
- (BOOL)canUseDeliveryAccount:(id)arg1;
- (void)changePushedMailboxUidsAdded:(id)arg1 deleted:(id)arg2;
- (id)connectionError;
- (id)copyDataForRemoteEncryptionCertificatesForAddress:(id)arg1 error:(id *)arg2;
- (id)copyDataForRemoteEncryptionCertificatesForAddresses:(id)arg1 errors:(id *)arg2;
- (id)customSignature;
- (void)dealloc;
- (id)defaultEmailAddress;
- (void)deleteDeliveryAccountIfNeeded;
- (BOOL)deleteInPlaceForAllMailboxes;
- (BOOL)deleteInPlaceForMailbox:(id)arg1;
- (BOOL)deleteMailbox:(id)arg1;
- (void)deleteMessagesFromMailboxUid:(id)arg1 olderThanNumberOfDays:(unsigned int)arg2;
- (id)deliveryAccount;
- (id)deliveryAccountAlternates;
- (BOOL)deliveryAccountInUseByOtherAccounts:(id)arg1;
- (void)deliveryAccountWillBeRemoved:(id)arg1;
- (BOOL)derivesDeliveryAccountInfoFromMailAccount;
- (void)didFinishActionForChokePoint:(id)arg1 coalescePoint:(id)arg2 withResult:(id)arg3;
- (id)displayName;
- (id)displayNameForMailboxUid:(id)arg1;
- (id)displayNameUsingSpecialNamesForMailboxUid:(id)arg1;
- (id)displayUsername;
- (id)emailAddresses;
- (id)emailAddressesAndAliases;
- (id)emailAddressesAndAliasesList;
- (id)emailAddressesDictionary;
- (int)emptyFrequencyForMailboxType:(int)arg1;
- (void)emptyTrash;
- (id)encryptionIdentityPersistentReferenceForAddress:(id)arg1;
- (id)fetchLimits;
- (void)fetchMailboxList;
- (id)firstEmailAddress;
- (void)forceFetchMailboxList;
- (id)fromEmailAddresses;
- (id)fromEmailAddressesIncludingDisabled;
- (id)fullUserName;
- (BOOL)hasEnoughInformationForEasySetup;
- (id)iconString;
- (id)initWithLibrary:(id)arg1 path:(id)arg2;
- (id)initWithLibrary:(id)arg1 persistentAccount:(id)arg2;
- (id)initWithPath:(id)arg1;
- (id)initWithPersistentAccount:(id)arg1;
- (void)invalidate;
- (void)invalidateAndDelete;
- (BOOL)isAccountClassEquivalentTo:(id)arg1;
- (BOOL)isActive;
- (BOOL)isActiveWithPersistentAccount:(id)arg1;
- (BOOL)isEquivalentTo:(id)arg1 hostname:(id)arg2 username:(id)arg3;
- (BOOL)isHostnameEquivalentTo:(id)arg1;
- (BOOL)isMailboxLocalForType:(int)arg1;
- (BOOL)isPrimaryDeliveryAccountDisabled;
- (BOOL)isSpecialMailbox:(id)arg1;
- (BOOL)isUsernameEquivalentTo:(id)arg1;
- (id)lastEmailAliasesSyncDate;
- (id)legacySQLExpressionToMatchAllMailboxes;
- (id)library;
- (long long)libraryID;
- (id)loggingIdentifier;
- (id)mailboxCachePath;
- (id)mailboxUidForInfo:(id)arg1;
- (id)mailboxUidForRelativePath:(id)arg1 create:(BOOL)arg2;
- (id)mailboxUidForRelativePath:(id)arg1 create:(BOOL)arg2 withOption:(int)arg3;
- (id)mailboxUidForURL:(id)arg1;
- (id)mailboxUidOfType:(int)arg1 createIfNeeded:(BOOL)arg2;
- (id)mailboxesForSuggestionsLostMessageSearchPriorToTime:(double)arg1;
- (id)meetingStorePersistentID;
- (BOOL)moveMailbox:(id)arg1 intoParent:(id)arg2;
- (id)moveMessages:(id)arg1 fromMailbox:(id)arg2 toMailbox:(id)arg3 markAsRead:(BOOL)arg4;
- (BOOL)newMailboxNameIsAcceptable:(id)arg1 reasonForFailure:(id *)arg2;
- (id)newMailboxWithParent:(id)arg1 name:(id)arg2;
- (void)nowWouldBeAGoodTimeToStartBackgroundSynchronization;
- (BOOL)ownsMailboxUidWithURL:(id)arg1;
- (id)path;
- (BOOL)perMessageEncryptionEnabledForAddress:(id)arg1;
- (void)persistentAccountDidChange:(id)arg1 previousAccount:(id)arg2;
- (id)persistentNameForMailbox:(id)arg1;
- (id)powerAssertionIdentifierWithPrefix:(id)arg1;
- (BOOL)preventArchiveForMailbox:(id)arg1;
- (id)primaryMailboxUid;
- (void)pushUpdateForAliasData;
- (id)pushedMailboxUids;
- (id)receiveEmailAliasAddresses;
- (id)receiveEmailAliasAddressesList;
- (BOOL)reconstituteOrphanedMeetingInMessage:(id)arg1;
- (void)releaseAllConnections;
- (void)releaseAllForcedConnections;
- (void)removeUserFocusMailbox:(id)arg1;
- (BOOL)renameMailbox:(id)arg1 newName:(id)arg2;
- (BOOL)renameMailbox:(id)arg1 newName:(id)arg2 parent:(id)arg3;
- (void)resetMailboxTimer;
- (void)resetMailboxURLs;
- (void)resetSpecialMailboxes;
- (BOOL)restrictedFromSendingExternally;
- (BOOL)restrictedFromSyncingRecents;
- (BOOL)restrictedFromTransferingMessagesToOtherAccounts;
- (id)rootMailboxUid;
- (id)saveSentFolder;
- (void)saveState;
- (int)secureCompositionEncryptionPolicyForAddress:(id)arg1;
- (int)secureCompositionSigningPolicyForAddress:(id)arg1;
- (void)setActive:(BOOL)arg1;
- (void)setCachePolicy:(int)arg1;
- (void)setCanUseCarrierDeliveryFallback:(BOOL)arg1;
- (void)setConnectionError:(id)arg1;
- (void)setCustomSignature:(id)arg1;
- (void)setDefaultEmailAddress:(id)arg1;
- (void)setDeliveryAccount:(id)arg1;
- (void)setDeliveryAccountAlternates:(id)arg1;
- (void)setEmailAddresses:(id)arg1;
- (void)setEmptyFrequency:(int)arg1 forMailboxType:(int)arg2;
- (void)setEnabled:(BOOL)arg1 forEmailAddress:(id)arg2;
- (void)setEncryptionIdentityPersistentReference:(id)arg1 forAddress:(id)arg2;
- (void)setFullUserName:(id)arg1;
- (void)setLastEmailAliasesSyncDate:(id)arg1;
- (void)setLastKnownHostname:(id)arg1;
- (void)setLibrary:(id)arg1;
- (void)setMailboxCachePath:(id)arg1;
- (void)setMailboxUid:(id)arg1 forMailboxType:(int)arg2;
- (void)setPath:(id)arg1;
- (void)setPortNumber:(unsigned int)arg1;
- (void)setPrimaryDeliveryAccountDisabled:(BOOL)arg1;
- (void)setReceiveEmailAliasAddresses:(id)arg1;
- (void)setSigningIdentityPersistentReference:(id)arg1 forAddress:(id)arg2;
- (void)setUsername:(id)arg1;
- (void)setValueInAccountLookAsideProperties:(id)arg1 forKey:(id)arg2;
- (void)setValueInAccountProperties:(id)arg1 forKey:(id)arg2;
- (void)setupLibrary;
- (BOOL)shouldAppearInMailSettings;
- (BOOL)shouldExpungeMessagesOnDelete;
- (BOOL)shouldFetchAgainWithError:(id)arg1 foregroundRequest:(BOOL)arg2;
- (BOOL)shouldFetchBodiesWhenMovingToTrash;
- (BOOL)shouldRestoreMessagesAfterFailedDelete;
- (id)signingIdentityPersistentReferenceForAddress:(id)arg1;
- (id)smtpIdentifier;
- (id)specialMailboxNameForType:(int)arg1;
- (void)startListeningForNotifications;
- (id)statisticsKind;
- (void)stopListeningForNotifications;
- (Class)storeClass;
- (Class)storeClassForMailbox:(id)arg1;
- (id)storeForMailboxUid:(id)arg1;
- (BOOL)supportsAppend;
- (BOOL)supportsArchiving;
- (BOOL)supportsHandoffType:(id)arg1;
- (BOOL)supportsMailDrop;
- (BOOL)supportsMailboxEditing;
- (BOOL)supportsMessageFlagging;
- (BOOL)supportsPurge;
- (BOOL)supportsRemoteAppend;
- (BOOL)supportsSyncingReadState;
- (BOOL)supportsThreadOperations;
- (BOOL)supportsUserPushedMailboxes;
- (void)systemDidWake;
- (void)systemWillSleep;
- (id)tildeAbbreviatedPath;
- (id)transferDisabledMailboxUids;
- (void)transferNotificationSessionToAccount:(id)arg1;
- (id)unactionableInvitationICSRepresentationInMessage:(id)arg1 summary:(id *)arg2;
- (id)uniqueIdForPersistentConnection;
- (id)uniqueServerIdForMessage:(id)arg1;
- (id)unsupportedHandoffTypes;
- (BOOL)updateEmailAliases;
- (id)valueInAccountLookAsidePropertiesForKey:(id)arg1;
- (BOOL)willPerformActionForChokePoint:(id)arg1 coalescePoint:(id)arg2 result:(id *)arg3;

@end

