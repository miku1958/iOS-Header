//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMCore/IMSystemMonitorListener-Protocol.h>

@class IMHandle, IMPeople, IMServiceImpl, NSArray, NSAttributedString, NSData, NSDate, NSDictionary, NSMapTable, NSMutableDictionary, NSRecursiveLock, NSString;

@interface IMAccount : NSObject <IMSystemMonitorListener>
{
    IMServiceImpl *_service;
    IMPeople *_buddyList;
    NSRecursiveLock *_lock;
    NSMapTable *_imHandles;
    IMHandle *_loginIMHandle;
    NSArray *_cachedAllowList;
    NSArray *_cachedBlockList;
    NSString *_loginID;
    NSString *_displayName;
    NSString *_uniqueID;
    long long _accountType;
    NSString *_strippedLogin;
    NSDictionary *_data;
    NSMutableDictionary *_dataChanges;
    NSMutableDictionary *_localCache;
    NSDictionary *_profile;
    NSMutableDictionary *_profileChanges;
    NSString *_countryCode;
    long long _profileStatus;
    NSDictionary *_accountPreferences;
    NSMutableDictionary *_accountPreferencesChanges;
    NSDictionary *_accountPersistentProperties;
    NSMutableDictionary *_accountPersistentPropertiesChanges;
    NSArray *_groups;
    NSMutableDictionary *_sortOrders;
    NSDictionary *_members;
    NSMutableDictionary *_coalescedChanges;
    NSArray *_targetGroupState;
    NSArray *_lastReceivedGroupState;
    NSDictionary *_subtypeInfo;
    NSArray *_vettedAliases;
    NSArray *_aliases;
    unsigned long long _myStatus;
    NSMutableDictionary *_currentAccountStatus;
    NSString *_myStatusMessage;
    NSDictionary *_myNowPlaying;
    NSDate *_myIdleSince;
    NSData *_myPictureData;
    NSData *_accountImageData;
    unsigned long long _capabilities;
    unsigned long long _defaultHandleCapabilities;
    BOOL _hasCheckedDefaultHandleCapabilities;
    NSAttributedString *_myProfile;
    long long _registrationStatus;
    long long _registrationFailureReason;
    NSDictionary *_registrationAlertInfo;
    unsigned long long _loginStatus;
    BOOL _isActive;
    BOOL _hasPostedOfflineNotification;
    BOOL _justLoggedIn;
    BOOL _useMeCardName;
    unsigned int _cachedBlockingMode;
    BOOL _blockIdleStatus;
    BOOL _syncedWithRemoteBuddyList;
    BOOL _hasReceivedSync;
    int _numHolding;
    int _coalesceCount;
    BOOL _needToCheckForWatchedIMHandles;
    BOOL _iconChecked;
    BOOL _hasBeenRemoved;
    id _smallImage;
    id _accountImage;
    BOOL _asleep;
}

@property (readonly, nonatomic) BOOL _isUsableForSending;
@property (readonly, nonatomic) NSDictionary *_persistentProperties;
@property (strong, nonatomic) NSString *accountDescription;
@property (readonly, nonatomic) NSData *accountImageData;
@property (readonly, nonatomic) NSDictionary *accountPreferences;
@property (readonly, nonatomic) NSDictionary *accountSubtypeInfo; // @synthesize accountSubtypeInfo=_subtypeInfo;
@property (readonly, nonatomic) long long accountType;
@property (readonly, nonatomic) NSArray *addressBookProperties;
@property (readonly, nonatomic) NSString *addressBookProperty;
@property (readonly, nonatomic) NSArray *aliases;
@property (readonly, nonatomic) NSArray *aliasesToRegister;
@property (strong, nonatomic) NSArray *allowList;
@property (readonly, nonatomic) BOOL allowsMMSRelay;
@property (readonly, nonatomic) BOOL allowsSMSRelay;
@property (nonatomic) BOOL allowsVCRelay;
@property (readonly, nonatomic) NSArray *arrayOfAllIMHandles;
@property (readonly, nonatomic) NSString *authorizationID;
@property (readonly, nonatomic) NSString *authorizationToken;
@property (nonatomic) BOOL autoLogin;
@property (nonatomic) BOOL blockIdleStatus; // @synthesize blockIdleStatus=_blockIdleStatus;
@property (strong, nonatomic) NSArray *blockList;
@property (nonatomic) BOOL blockOtherAddresses;
@property (nonatomic) unsigned int blockingMode; // @synthesize blockingMode=_cachedBlockingMode;
@property (readonly, nonatomic) IMPeople *buddyList; // @synthesize buddyList=_buddyList;
@property (readonly, nonatomic) BOOL canActivate;
@property (readonly, nonatomic) BOOL canSendMessages;
@property (readonly, nonatomic) unsigned long long capabilities; // @synthesize capabilities=_capabilities;
@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSArray *emailDomains;
@property (nonatomic) BOOL goIdle;
@property (readonly, nonatomic) NSArray *groupList;
@property (readonly, nonatomic) BOOL handlesChatInvites;
@property (readonly, nonatomic) BOOL hasCustomDescription;
@property (readonly, nonatomic) BOOL hasSyncedWithRemoteBuddies;
@property (readonly, nonatomic) BOOL hasTargetGroupStateBeenMet;
@property (readonly, nonatomic) NSString *internalName;
@property (readonly, nonatomic) long long invalidSettings;
@property (nonatomic, getter=isInvisible) BOOL invisible;
@property (readonly, nonatomic) BOOL isActive; // @synthesize isActive=_isActive;
@property (readonly, nonatomic) BOOL isAsleep;
@property (readonly, nonatomic) BOOL isAwaitingTargetGroupState;
@property (readonly, nonatomic) BOOL isConnected;
@property (readonly, nonatomic) BOOL isConnecting;
@property (readonly, nonatomic) BOOL isManaged;
@property (readonly, nonatomic) BOOL isOperational;
@property (readonly, nonatomic) BOOL isRegistered;
@property (readonly, nonatomic) BOOL isSMSRelayCapable;
@property (readonly, nonatomic) BOOL justLoggedIn; // @synthesize justLoggedIn=_justLoggedIn;
@property (strong, nonatomic) NSString *login; // @synthesize login=_loginID;
@property (readonly, nonatomic) id loginIMHandle; // @synthesize loginIMHandle=_loginIMHandle;
@property (readonly, nonatomic) unsigned long long loginStatus; // @synthesize loginStatus=_loginStatus;
@property (readonly, nonatomic) NSString *loginStatusMessage;
@property (readonly, nonatomic) BOOL makingChanges;
@property (readonly, nonatomic, getter=isMakoAccount) BOOL makoAccount;
@property (readonly, nonatomic) NSDate *myIdleSince; // @synthesize myIdleSince=_myIdleSince;
@property (readonly, nonatomic) NSString *myNowPlayingString;
@property (readonly, nonatomic) NSData *myPictureData; // @synthesize myPictureData=_myPictureData;
@property (readonly, nonatomic) NSAttributedString *myProfile; // @synthesize myProfile=_myProfile;
@property (readonly, nonatomic) unsigned long long myStatus; // @synthesize myStatus=_myStatus;
@property (readonly, nonatomic) NSDictionary *myStatusDictionary; // @synthesize myStatusDictionary=_currentAccountStatus;
@property (readonly, nonatomic) NSString *myStatusMessage; // @synthesize myStatusMessage=_myStatusMessage;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *password;
@property (readonly, nonatomic) long long port;
@property (readonly, nonatomic) NSDictionary *profileInfo;
@property (readonly, nonatomic) NSDictionary *registrationFailureAlertInfo;
@property (readonly, nonatomic) long long registrationFailureReason;
@property (readonly, nonatomic) long long registrationStatus;
@property (readonly, nonatomic) NSString *server;
@property (readonly, weak, nonatomic) IMServiceImpl *service; // @synthesize service=_service;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) NSString *shortName;
@property (readonly, nonatomic) NSString *strippedLogin; // @synthesize strippedLogin=_strippedLogin;
@property (readonly, nonatomic) BOOL supportsAuthorization;
@property (readonly, nonatomic) BOOL supportsRegistration;
@property (readonly, nonatomic) NSString *temporaryPassword;
@property (readonly, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) BOOL useSSL;
@property (readonly, nonatomic) BOOL validLogin;
@property (readonly, nonatomic) BOOL validPort;
@property (readonly, nonatomic) BOOL validServer;
@property (readonly, nonatomic) NSArray *vettedAliases;

+ (id)_groupSummaryFromGroupList:(id)arg1;
+ (id)allBuddyListIMHandles;
+ (id)arrayOfAllIMHandles;
+ (id)nameOfLoginStatus:(unsigned long long)arg1;
+ (id)passwordForAccount:(id)arg1 forServiceName:(id)arg2;
+ (void)removePasswordForAccount:(id)arg1 forServiceName:(id)arg2;
+ (void)removeTemporaryPasswordForAccount:(id)arg1 forServiceName:(id)arg2;
+ (void)setPassword:(id)arg1 forAccount:(id)arg2 forAuthID:(id)arg3 forServiceName:(id)arg4;
+ (void)setTemporaryPassword:(id)arg1 forAccount:(id)arg2 forAuthID:(id)arg3 forServiceName:(id)arg4;
+ (id)temporaryPasswordForAccount:(id)arg1 forAuthID:(id)arg2 forServiceName:(id)arg3;
- (void).cxx_destruct;
- (id)_aliasInfoForAlias:(id)arg1;
- (BOOL)_aliasIsVisible:(id)arg1;
- (id)_aliases;
- (void)_applyChangesToTemporaryCache:(id)arg1;
- (void)_clearImageCache;
- (void)_ensureGroupsExists:(id)arg1;
- (void)_handleDeliveredCommand:(id)arg1 withProperties:(id)arg2 fromBuddyInfo:(id)arg3;
- (void)_handleIncomingCommand:(id)arg1 withProperties:(id)arg2 fromBuddyInfo:(id)arg3;
- (id)_imHandleWithID:(id)arg1 alreadyCanonical:(BOOL)arg2 originalID:(id)arg3 countryCode:(id)arg4;
- (void)_invalidateCachedAliases;
- (void)_loadFromDictionary:(id)arg1 force:(BOOL)arg2;
- (void)_loginWithAutoLogin:(BOOL)arg1;
- (void)_markHasSyncedWithRemoteBuddies;
- (void)_notJustLoggedIn;
- (id)_persistentPropertyForKey:(id)arg1;
- (void)_refreshLoginIMHandle;
- (void)_registrationStatusChanged:(id)arg1;
- (void)_removeObjectForKey:(id)arg1;
- (void)_removePersistentPropertyForKey:(id)arg1;
- (void)_resumeBuddyUpdatesNow;
- (id)_serverWithSSL:(BOOL)arg1;
- (void)_serviceDidConnect:(id)arg1;
- (void)_serviceDidDisconnect:(id)arg1;
- (void)_serviceDidReconnect:(id)arg1;
- (void)_setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)_setDictionaryData:(id)arg1 forKey:(id)arg2;
- (void)_setInteger:(long long)arg1 forKey:(id)arg2;
- (void)_setLocalCachedObject:(id)arg1 forKey:(id)arg2;
- (void)_setObject:(id)arg1 forKey:(id)arg2;
- (void)_setPersistentPropertyObject:(id)arg1 forKey:(id)arg2;
- (void)_setString:(id)arg1 forKey:(id)arg2;
- (id)_statuses;
- (void)_syncWithRemoteBuddies;
- (BOOL)_updateDisplayName:(id)arg1;
- (void)_updateLogin:(id)arg1;
- (void)_updateMyStatus:(unsigned long long)arg1 message:(id)arg2;
- (void)_updateProfileInfo:(id)arg1;
- (void)_updateRegistrationStatus:(int)arg1 error:(int)arg2 info:(id)arg3;
- (void)_watchBuddiesIfNecessary;
- (void)accountDidBecomeActive;
- (void)accountDidDeactivate;
- (void)accountWillBeRemoved;
- (BOOL)addAlias:(id)arg1;
- (BOOL)addAlias:(id)arg1 type:(long long)arg2;
- (BOOL)addAliases:(id)arg1;
- (void)addBuddyToBuddyList:(id)arg1;
- (BOOL)addIMHandle:(id)arg1 toGroups:(id)arg2 atLocation:(long long)arg3;
- (BOOL)addIMHandle:(id)arg1 toIMPerson:(id)arg2;
- (BOOL)addPeople:(id)arg1 toGroups:(id)arg2 atLocation:(long long)arg3;
- (id)aliasesForType:(long long)arg1;
- (BOOL)authenticateAccount;
- (void)autoLoginAccount;
- (void)beginChanges;
- (void)blockMessages:(BOOL)arg1 fromID:(id)arg2;
- (BOOL)boolForKey:(id)arg1;
- (BOOL)boolForPreferenceKey:(id)arg1;
- (void)buddyPictureChanged:(id)arg1 imageData:(id)arg2 imageHash:(id)arg3;
- (void)buddyPropertiesChanged:(id)arg1;
- (id)canonicalFormOfID:(id)arg1;
- (id)canonicalFormOfID:(id)arg1 countryCode:(id)arg2;
- (void)changeBuddyList:(id)arg1 add:(BOOL)arg2 groups:(id)arg3 atLocation:(long long)arg4;
- (id)chatIDForRoomName:(id)arg1;
- (void)clearServiceCaches;
- (void)clearTargetState;
- (long long)compareAccountNames:(id)arg1;
- (long long)compareIDs:(id)arg1;
- (long long)compareLoginStatus:(id)arg1;
- (long long)compareNames:(id)arg1;
- (long long)compareServices:(id)arg1;
- (long long)compareStatus:(id)arg1;
- (void)dealloc;
- (id)defaultChatSuffix;
- (unsigned long long)defaultHandleCapabilities;
- (id)description;
- (id)dictionaryDataForKey:(id)arg1;
- (id)dictionaryDataForPreferenceKey:(id)arg1;
- (void)disconnectAllIMHandles;
- (BOOL)emailAddressIsID:(id)arg1;
- (void)endChanges;
- (void)enrollDeviceInSMSRelay:(id)arg1;
- (void)enrollSelfDeviceInSMSRelay;
- (BOOL)equalID:(id)arg1 andID:(id)arg2;
- (id)existingIMHandleWithID:(id)arg1;
- (id)existingIMHandleWithID:(id)arg1 alreadyCanonical:(BOOL)arg2;
- (id)existingIMHandleWithID:(id)arg1 countryCode:(id)arg2;
- (id)existingIMHandleWithInfo:(id)arg1;
- (id)existingIMHandleWithInfo:(id)arg1 alreadyCanonical:(BOOL)arg2;
- (void)forgetAllWatches;
- (id)groupMembers:(id)arg1;
- (void)groupsChanged:(id)arg1 error:(id)arg2;
- (void)handleSubscriptionRequestFrom:(id)arg1 withMessage:(id)arg2;
- (BOOL)hasAlias:(id)arg1;
- (BOOL)hasAlias:(id)arg1 type:(long long)arg2;
- (BOOL)hasCapability:(unsigned long long)arg1;
- (void)holdBuddyUpdates;
- (void)hookupToDaemon;
- (void)imHandle:(id)arg1 buddyStatusChanged:(BOOL)arg2;
- (Class)imHandleClass;
- (id)imHandleWithID:(id)arg1;
- (id)imHandleWithID:(id)arg1 alreadyCanonical:(BOOL)arg2;
- (id)imHandleWithID:(id)arg1 countryCode:(id)arg2;
- (id)imHandleWithInfo:(id)arg1;
- (id)imHandleWithInfo:(id)arg1 alreadyCanonical:(BOOL)arg2;
- (id)imHandlesForIMPerson:(id)arg1;
- (id)initWithService:(id)arg1;
- (id)initWithUniqueID:(id)arg1 service:(id)arg2;
- (long long)integerForKey:(id)arg1;
- (int)integerForPreferenceKey:(id)arg1;
- (void)loadFromDictionary:(id)arg1;
- (void)loginAccount;
- (void)loginStatusChanged:(unsigned int)arg1 message:(id)arg2 reason:(int)arg3 properties:(id)arg4;
- (void)logoutAccount;
- (id)memberGroups:(id)arg1;
- (void)nowLoggedIn;
- (void)nowLoggedOut;
- (id)objectForKey:(id)arg1;
- (id)objectForPreferenceKey:(id)arg1;
- (id)personForIMHandle:(id)arg1;
- (id)personForIMHandle:(id)arg1 identifier:(int *)arg2;
- (id)personSibsForIMHandle:(id)arg1;
- (id)profileStringForKey:(id)arg1;
- (long long)profileValidationErrorReason;
- (long long)profileValidationStatus;
- (id)profileValueForKey:(id)arg1;
- (id)propertiesForGroup:(id)arg1;
- (void)recalculateSubtypeInfo;
- (id)recalculatedSubtypeInfo;
- (BOOL)registerAccount;
- (void)registerIMHandle:(id)arg1;
- (BOOL)removeAlias:(id)arg1;
- (BOOL)removeAlias:(id)arg1 type:(long long)arg2;
- (BOOL)removeAliases:(id)arg1;
- (BOOL)removeIMHandle:(id)arg1 fromGroups:(id)arg2;
- (BOOL)removeIMHandle:(id)arg1 fromIMPerson:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectForPreferenceKey:(id)arg1;
- (void)removePassword;
- (BOOL)removePeople:(id)arg1 fromGroups:(id)arg2;
- (BOOL)removeProfileValueForKey:(id)arg1;
- (void)removeTemporaryPassword;
- (void)renameGroup:(id)arg1 to:(id)arg2;
- (void)reorderGroup:(id)arg1 order:(id)arg2;
- (void)reorderGroups:(id)arg1;
- (void)requestBuddyListAuthorizationFromIMHandle:(id)arg1;
- (void)requestGroups;
- (BOOL)requestNewAuthorizationCredentials;
- (void)requestProperty:(id)arg1 ofIMHandle:(id)arg2;
- (void)resetToDefaults;
- (void)resumeBuddyUpdates;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)setBool:(BOOL)arg1 forPreferenceKey:(id)arg2;
- (void)setBuddyListAuthorization:(BOOL)arg1 forIMHandle:(id)arg2;
- (void)setBuddyProperties:(id)arg1 buddyPictures:(id)arg2;
- (void)setCachedAllowList:(id)arg1;
- (void)setCachedBlockIdleStatus:(BOOL)arg1;
- (void)setCachedBlockList:(id)arg1;
- (void)setCachedBlockingMode:(unsigned int)arg1;
- (void)setCurrentAccountStatus:(id)arg1;
- (void)setDictionaryData:(id)arg1 forKey:(id)arg2;
- (void)setDictionaryData:(id)arg1 forPreferenceKey:(id)arg2;
- (void)setIMAccountLoginStatus:(unsigned long long)arg1;
- (void)setIMAccountLoginStatus:(unsigned long long)arg1 errorMessage:(id)arg2;
- (void)setIMAccountLoginStatus:(unsigned long long)arg1 errorMessage:(id)arg2 reason:(int)arg3;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setInteger:(int)arg1 forPreferenceKey:(id)arg2;
- (void)setIsActive:(BOOL)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forPreferenceKey:(id)arg2;
- (void)setPassword:(id)arg1;
- (BOOL)setProfileString:(id)arg1 forKey:(id)arg2;
- (BOOL)setProfileValue:(id)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forPreferenceKey:(id)arg2;
- (void)setTargetGroupsState:(id)arg1;
- (void)setTemporaryPassword:(id)arg1;
- (void)setUniqueID:(id)arg1;
- (void)setValue:(id)arg1 ofExtraProperty:(id)arg2 ofIMHandle:(id)arg3;
- (void)setWaitForTargetState;
- (unsigned long long)sortOrderForIMHandle:(id)arg1 inGroup:(id)arg2;
- (void)startWatchingIMHandle:(id)arg1;
- (void)stopWatchingIMHandle:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)stringForPreferenceKey:(id)arg1;
- (void)syncWithRemoteBuddies;
- (void)systemDidWake;
- (void)systemWillSleep;
- (void)targetGroupStateTimeout;
- (long long)typeForAlias:(id)arg1;
- (void)unEnrollDeviceInSMSRelay:(id)arg1;
- (BOOL)unregisterAccount;
- (void)unregisterIMHandleWithID:(id)arg1;
- (BOOL)unvalidateAlias:(id)arg1;
- (BOOL)unvalidateAliases:(id)arg1;
- (BOOL)updateAuthorizationCredentials:(id)arg1 token:(id)arg2;
- (void)updateCapabilities:(unsigned long long)arg1;
- (void)updateWithTargetGroups;
- (BOOL)validateAlias:(id)arg1;
- (BOOL)validateAlias:(id)arg1 type:(long long)arg2;
- (BOOL)validateAliases:(id)arg1;
- (BOOL)validateProfile;
- (long long)validationErrorReasonForAlias:(id)arg1;
- (long long)validationErrorReasonForAlias:(id)arg1 type:(long long)arg2;
- (long long)validationStatusForAlias:(id)arg1;
- (long long)validationStatusForAlias:(id)arg1 type:(long long)arg2;
- (struct _FZChatRoomValidity)validityOfChatRoomName:(id)arg1;
- (void)watchBuddiesIfNecessary;
- (void)writeSettings;

@end

