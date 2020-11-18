//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NPSDomainAccessor, NSDictionary, NSString, TLAccessQueue;

@interface TLToneManager : NSObject
{
    TLAccessQueue *_accessQueue;
    NSDictionary *_tonesByIdentifier;
    NSDictionary *_toneIdentifiersBySyncIdentifier;
    NSDictionary *_alertTonesByIdentifier;
    NSDictionary *_toneIdentifierAliasMap;
    BOOL _cachedWatchPrefersSalientNotifications;
    BOOL _hasValidCachedWatchPrefersSalientNotifications;
    BOOL _shouldSkipNextWatchPrefersSalientNotificationsDidChangeNotification;
    NPSDomainAccessor *_transientNanoPreferencesDomainAccessor;
    BOOL _shouldUseServiceToAccessTonePreferences;
    NSDictionary *_cachedTonePreferences;
    BOOL _shouldIgnoreNextToneDidChangeNotification;
}

@property (readonly, nonatomic) NSString *_deviceITunesRingtoneDirectory;
@property (readonly, nonatomic) NSString *_deviceITunesRingtoneInformationPlist;
@property (readonly, nonatomic) NSString *_iTunesRingtoneDirectory;
@property (readonly, nonatomic) NSString *_iTunesRingtoneInformationPlist;
@property (readonly, nonatomic) NSString *_rootDirectory;
@property (readonly, nonatomic) NSString *_systemRingtoneDirectory;

+ (BOOL)_checkForFileExistenceAtPath:(id)arg1 allowingTCCPreflight:(BOOL)arg2;
+ (id)_defaultToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2;
+ (BOOL)_migrateLegacyToneSettings;
+ (id)_systemWideTonePreferenceKeyForAlertType:(long long)arg1;
+ (id)sharedToneManager;
- (void).cxx_destruct;
- (id)_addToneEntries:(id)arg1 toManifestAtPath:(id)arg2 mediaDirectory:(id)arg3 shouldSkipReload:(BOOL)arg4;
- (id)_addToneToManifestAtPath:(id)arg1 metadata:(id)arg2 fileName:(id)arg3 mediaDirectory:(id)arg4;
- (id)_alarmWakeUpRingtoneDirectory;
- (id)_aliasForToneIdentifier:(id)arg1;
- (id)_allSyncedTones;
- (id)_baseDirectoryForAlertToneSoundFiles;
- (id)_currentToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2;
- (long long)_currentToneWatchAlertPolicyForAlertType:(long long)arg1;
- (long long)_currentToneWatchAlertPolicyForAlertType:(long long)arg1 accountIdentifier:(id)arg2;
- (long long)_currentToneWatchAlertPolicyForAlertType:(long long)arg1 topic:(id)arg2;
- (long long)_currentToneWatchAlertPolicyForAlertType:(long long)arg1 topic:(id)arg2 didFindPersistedWatchAlertPolicy:(BOOL *)arg3;
- (id)_currentToneWatchAlertPolicyPreferenceKeyForAlertType:(long long)arg1 topic:(id)arg2;
- (id)_defaultRingtoneName;
- (id)_defaultRingtonePath;
- (id)_defaultToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2;
- (void)_didSetTonePreferenceSuccessfullyWithKey:(id)arg1 inDomain:(id)arg2 usingPreferencesOfKind:(unsigned long long)arg3;
- (BOOL)_ensureDirectoryExistsAtPath:(id)arg1;
- (long long)_evaluateOrphanEntriesCleanupStatusForcingReevaluationIfPreviouslyDone:(BOOL)arg1 returningFilePathsForFoundOrphans:(id *)arg2 wasAffectedByAccidentalToneDeletion:(BOOL *)arg3;
- (id)_fileNameFromToneIdentifier:(id)arg1 withPrefix:(id)arg2;
- (id)_filePathForToneIdentifier:(id)arg1 isValid:(BOOL *)arg2;
- (void)_handleDeviceRingtonesChangedNotification;
- (void)_handleTonePreferencesChangedNotificationForPreferencesKinds:(unsigned long long)arg1;
- (void)_handleWatchPrefersSalientNotificationDidChange;
- (id)_importPurchasedToneWithMetadata:(id)arg1 fileName:(id)arg2;
- (BOOL)_importSyncedToneWithMetadata:(id)arg1 fileName:(id)arg2;
- (id)_installedTones;
- (unsigned long long)_installedTonesSize;
- (void)_loadAlertToneInfo;
- (void)_loadITunesRingtoneInfoPlistAtPath:(id)arg1;
- (void)_loadToneIdentifierAliasMap;
- (id)_localizedNameOfToneWithIdentifier:(id)arg1;
- (int)_lockManifestAtPath:(id)arg1;
- (id)_nameForToneIdentifier:(id)arg1 isValid:(BOOL *)arg2;
- (id)_newServiceConnection;
- (void)_performBlockInAccessQueue:(CDUnknownBlockType)arg1;
- (id)_previewSoundForToneIdentifier:(id)arg1;
- (void)_registerDidRequestResetSyncPostAccidentalToneDeletion;
- (void)_reloadTones;
- (void)_reloadTonesAfterExternalChange;
- (void)_removeAllSyncedData;
- (long long)_removeOrphanedManifestEntriesReturningFilePathsForFoundOrphans:(id *)arg1;
- (id)_removeOrphanedPlistEntriesInManifestAtPath:(id)arg1 mediaDirectory:(id)arg2;
- (BOOL)_removeToneFromManifestAtPath:(id)arg1 fileName:(id)arg2;
- (BOOL)_removeToneWithSyncIdentifier:(id)arg1;
- (BOOL)_removeTonesFromManifestAtPath:(id)arg1 fileNames:(id)arg2 shouldSkipReload:(BOOL)arg3 alreadyLockedManifest:(BOOL)arg4 removedEntries:(id *)arg5;
- (void)_setCurrentToneWatchAlertPolicy:(long long)arg1 forAlertType:(long long)arg2;
- (void)_setCurrentToneWatchAlertPolicy:(long long)arg1 forAlertType:(long long)arg2 accountIdentifier:(id)arg3;
- (void)_setCurrentToneWatchAlertPolicy:(long long)arg1 forAlertType:(long long)arg2 topic:(id)arg3;
- (BOOL)_setToneIdentifierUsingService:(id)arg1 keyedByTopic:(id)arg2 forPreferenceKey:(id)arg3;
- (void)_setWatchPrefersSalientNotifications:(BOOL)arg1;
- (id)_soundForToneIdentifier:(id)arg1;
- (id)_systemEmbeddedModernSoundDirectory;
- (id)_systemEmbeddedSoundDirectory;
- (id)_systemNewSoundDirectory;
- (id)_systemSoundDirectory;
- (id)_toneForSyncIdentifier:(id)arg1;
- (id)_toneIdentifierForFileAtPath:(id)arg1 isValid:(BOOL *)arg2;
- (id)_tonePreferencesFromService;
- (id)_toneWithIdentifier:(id)arg1;
- (BOOL)_toneWithIdentifierIsAlarmWakeUp:(id)arg1;
- (BOOL)_toneWithIdentifierIsDefaultRingtone:(id)arg1;
- (BOOL)_toneWithIdentifierIsITunesRingtone:(id)arg1;
- (BOOL)_toneWithIdentifierIsNonDefaultSystemRingtone:(id)arg1;
- (BOOL)_toneWithIdentifierIsSystemAlertTone:(id)arg1;
- (BOOL)_toneWithIdentifierIsValid:(id)arg1;
- (id)_tonesFromManifestPath:(id)arg1 mediaDirectoryPath:(id)arg2;
- (BOOL)_transferPurchasedToITunes:(id)arg1;
- (BOOL)_wasAffectedByAccidentalToneDeletion;
- (BOOL)_watchPrefersSalientNotifications;
- (id)currentToneIdentifierForAlertType:(long long)arg1;
- (id)currentToneIdentifierForAlertType:(long long)arg1 accountIdentifier:(id)arg2;
- (id)currentToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2;
- (id)currentToneNameForAlertType:(long long)arg1;
- (unsigned int)currentToneSoundIDForAlertType:(long long)arg1;
- (unsigned int)currentToneSoundIDForAlertType:(long long)arg1 topic:(id)arg2;
- (void)dealloc;
- (id)defaultRingtoneIdentifier;
- (id)defaultToneIdentifierForAlertType:(long long)arg1;
- (id)filePathForToneIdentifier:(id)arg1;
- (void)importTone:(id)arg1 metadata:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)init;
- (id)initWithITunesRingtonePlistAtPath:(id)arg1;
- (id)nameForToneIdentifier:(id)arg1;
- (void)removeImportedToneWithIdentifier:(id)arg1;
- (void)setCurrentToneIdentifier:(id)arg1 forAlertType:(long long)arg2;
- (void)setCurrentToneIdentifier:(id)arg1 forAlertType:(long long)arg2 accountIdentifier:(id)arg3;
- (void)setCurrentToneIdentifier:(id)arg1 forAlertType:(long long)arg2 topic:(id)arg3;
- (BOOL)toneWithIdentifierIsValid:(id)arg1;

@end

