//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BulletinDistributorCompanion/BLTSettingSyncInternal.h>

#import <BulletinDistributorCompanion/BLTSectionConfigurationDelegate-Protocol.h>
#import <BulletinDistributorCompanion/BLTSectionInfoListDelegate-Protocol.h>
#import <BulletinDistributorCompanion/BLTSiriActionAppListDelegate-Protocol.h>

@class BLTSectionInfoList, BLTSectionInfoListBridgeProvider, BLTSectionInfoSyncCoordinator, BLTSettingSyncSendQueue, BLTSiriActionAppList, BLTWatchKitAppList, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface BLTSettingSync : BLTSettingSyncInternal <BLTSectionInfoListDelegate, BLTSectionConfigurationDelegate, BLTSiriActionAppListDelegate>
{
    BLTSectionInfoList *_sectionInfoList;
    BLTSettingSyncSendQueue *_settingSendQueue;
    unsigned long long _settingSyncSendQueueMaxConcurrentSendCount;
    BLTSectionInfoSyncCoordinator *_sectionInfoSyncCoordinator;
    NSObject<OS_dispatch_queue> *_sectionInfoSyncCoordinatorQueue;
    BOOL _initialSyncPerformed;
    BLTSectionInfoListBridgeProvider *_bridgeProvider;
    NSMutableDictionary *_reloadBBCompletions;
    BLTSiriActionAppList *_siriActionAppList;
    BLTWatchKitAppList *_watchKitAppList;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addReloadBBCompletion:(CDUnknownBlockType)arg1 sectionID:(id)arg2;
- (void)_callAndRemoveReloadBBCompletion:(CDUnknownBlockType)arg1 sectionID:(id)arg2;
- (void)_callReloadBBCompletionsForSectionID:(id)arg1;
- (unsigned long long)_fetchSettingSyncMaxCountOverride;
- (unsigned long long)_fetchSyncState;
- (id)_filteredAlertingSectionIDs:(id)arg1;
- (void)_initSettingSyncSendQueueMaxConcurrentSendCount;
- (void)_logNotificationSettings;
- (id)_overriddenSectionInfoForSectionID:(id)arg1;
- (void)_sendSectionSubtypeParameterIcons:(id)arg1 sectionID:(id)arg2 waitForAcknowledgement:(BOOL)arg3 spoolToFile:(BOOL)arg4 andCompletion:(CDUnknownBlockType)arg5;
- (void)_sendSiriAppListWithInstalled:(id)arg1 removed:(id)arg2;
- (void)_sendSpooledSyncWithCompletion:(CDUnknownBlockType)arg1 withProgress:(CDUnknownBlockType)arg2;
- (void)_setupSectionInfoListWithCompletion:(CDUnknownBlockType)arg1;
- (void)_spoolInitialSync;
- (void)_storeSyncState:(unsigned long long)arg1;
- (void)_updateAllBBSectionsWithCompletion:(CDUnknownBlockType)arg1 withProgress:(CDUnknownBlockType)arg2 spoolToFile:(BOOL)arg3;
- (void)clearSectionInfoSentCache;
- (void)dealloc;
- (void)handleAllSyncComplete;
- (id)initWithSectionConfiguration:(id)arg1 queue:(id)arg2;
- (id)initWithSectionConfiguration:(id)arg1 queue:(id)arg2 watchKitAppList:(id)arg3;
- (BOOL)isSectionInfoSentCacheEmpty;
- (void)makeAuthorizationPermanentForSectionID:(id)arg1;
- (void)observer:(id)arg1 noteSectionParametersChanged:(id)arg2 forSectionID:(id)arg3;
- (id)originalSettings;
- (id)overriddenSettings;
- (void)performInitialSyncWithProgress:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)performSyncIfNeededForSectionID:(id)arg1 gizmoSectionInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeSectionWithSectionID:(id)arg1;
- (void)sectionConfiguration:(id)arg1 addedSectionIDs:(id)arg2 removedSectionIDs:(id)arg3;
- (void)sectionInfoList:(id)arg1 makeAuthorizationPermanentForSectionID:(id)arg2;
- (BOOL)sectionInfoList:(id)arg1 override:(id)arg2 shouldApplyToSectionInfoForSectionID:(id)arg3;
- (void)sectionInfoList:(id)arg1 receivedRemoveSectionWithSectionID:(id)arg2 transaction:(id)arg3;
- (void)sectionInfoList:(id)arg1 receivedUpdatedSectionInfoForSectionID:(id)arg2 transaction:(id)arg3;
- (BOOL)sectionInfoListSectionIDHadDisplayedCriticalBulletins:(id)arg1;
- (void)sendAllSectionInfoWithSpool:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendOverrideOnly:(id)arg1 sectionID:(id)arg2 spoolToFile:(BOOL)arg3;
- (void)sendRemoveSectionWithSectionID:(id)arg1 sent:(CDUnknownBlockType)arg2;
- (void)sendSectionInfosWithSectionIDs:(id)arg1 completion:(CDUnknownBlockType)arg2 spoolToFile:(BOOL)arg3;
- (void)setNotificationsLevel:(unsigned long long)arg1 sectionID:(id)arg2 mirror:(BOOL)arg3 fromRemote:(BOOL)arg4;
- (void)setSectionInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)settingOverrides;
- (id)settingsDescriptionForSectionIDs:(id)arg1;
- (void)siriActionAppListUpdated:(id)arg1;
- (void)spoolSectionInfoWithCompletion:(CDUnknownBlockType)arg1;
- (id)universalSectionIDForSectionID:(id)arg1;

@end

