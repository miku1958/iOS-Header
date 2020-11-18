//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NPSDomainAccessor, NSDictionary, NSMutableDictionary, NSString, TLAccessQueue;

@interface TLToneManager : NSObject
{
    BOOL _shouldUseServiceToAccessTonePreferences;
    BOOL _shouldIgnoreNextToneDidChangeNotification;
    NSMutableDictionary *_iTunesTonesByIdentifier;
    NSMutableDictionary *_iTunesToneIdentifiersByPID;
    NSMutableDictionary *_alertTonesByIdentifier;
    NSDictionary *_toneIdentifierAliasMap;
    NSDictionary *_previewBehaviorsByDefaultIdentifier;
    NSDictionary *_cachedTonePreferences;
    NPSDomainAccessor *_transientNanoPreferencesDomainAccessor;
    TLAccessQueue *_accessQueue;
}

@property (strong, setter=_setAccessQueue:) TLAccessQueue *_accessQueue; // @synthesize _accessQueue;
@property (strong, nonatomic, setter=_setAlertTonesByIdentifier:) NSMutableDictionary *_alertTonesByIdentifier; // @synthesize _alertTonesByIdentifier;
@property (strong, nonatomic, setter=_setCachedTonePreferences:) NSDictionary *_cachedTonePreferences; // @synthesize _cachedTonePreferences;
@property (readonly, nonatomic) NSString *_deviceITunesRingtoneDirectory;
@property (readonly, nonatomic) NSString *_deviceITunesRingtoneInformationPlist;
@property (readonly, nonatomic) NSString *_iTunesRingtoneDirectory;
@property (readonly, nonatomic) NSString *_iTunesRingtoneInformationPlist;
@property (strong, nonatomic, setter=_setITunesToneIdentifiersByPID:) NSMutableDictionary *_iTunesToneIdentifiersByPID; // @synthesize _iTunesToneIdentifiersByPID;
@property (strong, nonatomic, setter=_setITunesTonesByIdentifier:) NSMutableDictionary *_iTunesTonesByIdentifier; // @synthesize _iTunesTonesByIdentifier;
@property (strong, nonatomic, setter=_setPreviewBehaviorsByDefaultIdentifier:) NSDictionary *_previewBehaviorsByDefaultIdentifier; // @synthesize _previewBehaviorsByDefaultIdentifier;
@property (readonly, nonatomic) NSString *_rootDirectory;
@property (nonatomic, setter=_setShouldIgnoreNextToneDidChangeNotification:) BOOL _shouldIgnoreNextToneDidChangeNotification; // @synthesize _shouldIgnoreNextToneDidChangeNotification;
@property (nonatomic, setter=_setShouldUseServiceToAccessTonePreferences:) BOOL _shouldUseServiceToAccessTonePreferences; // @synthesize _shouldUseServiceToAccessTonePreferences;
@property (readonly, nonatomic) NSString *_systemRingtoneDirectory;
@property (strong, nonatomic, setter=_setToneIdentifierAliasMap:) NSDictionary *_toneIdentifierAliasMap; // @synthesize _toneIdentifierAliasMap;
@property (strong, nonatomic, setter=_setTransientNanoPreferencesDomainAccessor:) NPSDomainAccessor *_transientNanoPreferencesDomainAccessor; // @synthesize _transientNanoPreferencesDomainAccessor;

+ (struct __CFString *)_copySharedResourcesPreferencesDomainForDomain:(struct __CFString *)arg1;
+ (id)_defaultToneIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2;
+ (BOOL)_migrateLegacyToneSettings;
+ (id)_systemWideTonePreferenceKeyForAlertType:(int)arg1;
+ (id)sharedToneManager;
- (BOOL)_addToneEntries:(id)arg1 toManifestAtPath:(id)arg2 mediaDirectory:(id)arg3 shouldSkipReload:(BOOL)arg4;
- (BOOL)_addToneToManifestAtPath:(id)arg1 metadata:(id)arg2 fileName:(id)arg3 mediaDirectory:(id)arg4;
- (id)_aliasForToneIdentifier:(id)arg1;
- (id)_allSyncedTones;
- (id)_baseDirectoryForAlertToneSoundFiles;
- (id)_copyITunesRingtonesFromManifestPath:(id)arg1 mediaDirectoryPath:(id)arg2;
- (id)_currentToneIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (int)_currentToneWatchAlertPolicyForAlertType:(int)arg1;
- (int)_currentToneWatchAlertPolicyForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (int)_currentToneWatchAlertPolicyForAlertType:(int)arg1 accountIdentifier:(id)arg2 didFindPersistedWatchAlertPolicy:(BOOL *)arg3;
- (id)_currentToneWatchAlertPolicyPreferenceKeyForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (id)_defaultRingtoneName;
- (id)_defaultRingtonePath;
- (id)_defaultToneIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (void)_didSetTonePreferenceSuccessfullyWithKey:(id)arg1 inDomain:(id)arg2 usingPreferencesOfKind:(unsigned long long)arg3;
- (BOOL)_ensureDirectoryExistsAtPath:(id)arg1;
- (long long)_evaluateOrphanEntriesCleanupStatusForcingReevaluationIfPreviouslyDone:(BOOL)arg1 returningFilePathsForFoundOrphans:(id *)arg2 wasAffectedByAccidentalToneDeletion:(BOOL *)arg3;
- (id)_fileNameFromToneIdentifier:(id)arg1 withPrefix:(id)arg2;
- (id)_filePathForToneIdentifier:(id)arg1 isValid:(BOOL *)arg2;
- (BOOL)_filePathHasSupportedExtensionForRingtone:(id)arg1;
- (void)_handleDeviceRingtonesChangedNotification;
- (void)_handleTonePreferencesChangedNotificationForPreferencesKinds:(unsigned long long)arg1;
- (id)_iTunesToneForPID:(id)arg1;
- (id)_iTunesToneWithIdentifier:(id)arg1;
- (BOOL)_insertPurchasedToneMetadata:(id)arg1 fileName:(id)arg2;
- (BOOL)_insertSyncedToneMetadata:(id)arg1 fileName:(id)arg2;
- (id)_installedTones;
- (unsigned long long)_installedTonesSize;
- (void)_loadAlertToneInfo;
- (void)_loadITunesRingtoneInfoPlistAtPath:(id)arg1;
- (void)_loadPreviewBehaviorsByDefaultIdentifier;
- (void)_loadToneIdentifierAliasMap;
- (id)_localizedNameOfToneWithIdentifier:(id)arg1;
- (int)_lockManifestAtPath:(id)arg1;
- (id)_nameForToneIdentifier:(id)arg1 isValid:(BOOL *)arg2;
- (id)_newServiceConnection;
- (void)_performBlockInAccessQueue:(CDUnknownBlockType)arg1;
- (unsigned int)_previewBehaviorForDefaultIdentifier:(id)arg1;
- (id)_previewSoundForToneIdentifier:(id)arg1;
- (void)_registerDidRequestResetSyncPostAccidentalToneDeletion;
- (void)_reloadITunesRingtonesAfterExternalChange;
- (void)_removeAllSyncedData;
- (long long)_removeOrphanedManifestEntriesReturningFilePathsForFoundOrphans:(id *)arg1;
- (id)_removeOrphanedPlistEntriesInManifestAtPath:(id)arg1 mediaDirectory:(id)arg2;
- (BOOL)_removeSyncedToneByPID:(id)arg1;
- (BOOL)_removeToneFromManifestAtPath:(id)arg1 fileName:(id)arg2;
- (BOOL)_removeTonesFromManifestAtPath:(id)arg1 fileNames:(id)arg2 shouldSkipReload:(BOOL)arg3 alreadyLockedManifest:(BOOL)arg4 removedEntries:(id *)arg5;
- (void)_setCurrentToneWatchAlertPolicy:(int)arg1 forAlertType:(int)arg2;
- (void)_setCurrentToneWatchAlertPolicy:(int)arg1 forAlertType:(int)arg2 accountIdentifier:(id)arg3;
- (BOOL)_setToneIdentifierUsingService:(id)arg1 keyedByAccountIdentifier:(id)arg2 forPreferenceKey:(id)arg3;
- (void)_setWatchPrefersSalientNotifications:(BOOL)arg1;
- (id)_systemModernSoundDirectory;
- (id)_systemNewSoundDirectory;
- (id)_systemSoundDirectory;
- (id)_toneIdentifierForFileAtPath:(id)arg1;
- (id)_toneIdentifierForFileAtPath:(id)arg1 isValid:(BOOL *)arg2;
- (BOOL)_toneIsSettableForAlertType:(int)arg1;
- (id)_tonePreferencesFromService;
- (BOOL)_toneWithIdentifierIsDefaultRingtone:(id)arg1;
- (BOOL)_toneWithIdentifierIsITunesRingtone:(id)arg1;
- (BOOL)_toneWithIdentifierIsNonDefaultSystemRingtone:(id)arg1;
- (BOOL)_toneWithIdentifierIsSystemAlertTone:(id)arg1;
- (BOOL)_toneWithIdentifierIsValid:(id)arg1;
- (BOOL)_transferPurchasedToITunes:(id)arg1;
- (BOOL)_wasAffectedByAccidentalToneDeletion;
- (BOOL)_watchPrefersSalientNotifications;
- (id)currentToneIdentifierForAlertType:(int)arg1;
- (id)currentToneIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (id)currentToneNameForAlertType:(int)arg1;
- (unsigned int)currentToneSoundIDForAlertType:(int)arg1;
- (unsigned int)currentToneSoundIDForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (void)dealloc;
- (id)defaultRingtoneIdentifier;
- (id)defaultToneIdentifierForAlertType:(int)arg1;
- (id)filePathForToneIdentifier:(id)arg1;
- (void)importTone:(id)arg1 metadata:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)init;
- (id)initWithITunesRingtonePlistAtPath:(id)arg1;
- (id)nameForToneIdentifier:(id)arg1;
- (id)newAVItemForToneIdentifier:(id)arg1;
- (void)removeImportedToneWithIdentifier:(id)arg1;
- (void)setCurrentToneIdentifier:(id)arg1 forAlertType:(int)arg2;
- (void)setCurrentToneIdentifier:(id)arg1 forAlertType:(int)arg2 accountIdentifier:(id)arg3;
- (unsigned int)soundIDForToneIdentifier:(id)arg1;
- (BOOL)toneWithIdentifierIsValid:(id)arg1;

@end
