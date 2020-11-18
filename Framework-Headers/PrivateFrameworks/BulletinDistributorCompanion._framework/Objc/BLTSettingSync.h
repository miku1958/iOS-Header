//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BulletinDistributorCompanion/BLTSettingSyncInternal.h>

#import <BulletinDistributorCompanion/BBObserverDelegate-Protocol.h>
#import <BulletinDistributorCompanion/BLTSectionConfigurationDelegate-Protocol.h>
#import <BulletinDistributorCompanion/BLTSectionInfoListDelegate-Protocol.h>

@class BBObserver, BLTSectionInfoList, BLTSectionInfoListBridgeProvider, BLTSectionInfoSyncCoordinator, BLTSettingSyncSendQueue, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface BLTSettingSync : BLTSettingSyncInternal <BBObserverDelegate, BLTSectionInfoListDelegate, BLTSectionConfigurationDelegate>
{
    BLTSectionInfoList *_sectionInfoList;
    BLTSettingSyncSendQueue *_settingSendQueue;
    unsigned long long _settingSyncSendQueueMaxConcurrentSendCount;
    BLTSectionInfoSyncCoordinator *_sectionInfoSyncCoordinator;
    NSObject<OS_dispatch_queue> *_sectionInfoSyncCoordinatorQueue;
    BOOL _initialSyncPerformed;
    BLTSectionInfoListBridgeProvider *_bridgeProvider;
    BBObserver *_observer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) BBObserver *observer; // @synthesize observer=_observer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_alertingSectionIDs;
- (unsigned long long)_fetchSettingSyncMaxCountOverride;
- (unsigned long long)_fetchSyncState;
- (void)_initSettingSyncSendQueueMaxConcurrentSendCount;
- (void)_logNotificationSettings;
- (id)_overriddenSectionInfoForSectionID:(id)arg1;
- (void)_sendSectionSubtypeParameterIcons:(id)arg1 sectionID:(id)arg2 waitForAcknowledgement:(BOOL)arg3 spoolToFile:(BOOL)arg4 andCompletion:(CDUnknownBlockType)arg5;
- (void)_sendSpooledSyncWithCompletion:(CDUnknownBlockType)arg1 withProgress:(CDUnknownBlockType)arg2;
- (void)_setupSectionInfoListWithCompletion:(CDUnknownBlockType)arg1;
- (void)_spoolInitialSync;
- (void)_storeSyncState:(unsigned long long)arg1;
- (void)_updateAllBBSectionsWithCompletion:(CDUnknownBlockType)arg1 withProgress:(CDUnknownBlockType)arg2 spoolToFile:(BOOL)arg3;
- (BOOL)_willSectionIDAlert:(id)arg1;
- (void)clearSectionInfoSentCache;
- (void)dealloc;
- (void)enableNotifications:(BOOL)arg1 sectionID:(id)arg2 mirror:(BOOL)arg3 fromRemote:(BOOL)arg4;
- (id)initWithSectionConfiguration:(id)arg1 queue:(id)arg2;
- (BOOL)isSectionInfoSentCacheEmpty;
- (void)observer:(id)arg1 noteSectionParametersChanged:(id)arg2 forSectionID:(id)arg3;
- (id)originalSettings;
- (id)overriddenSettings;
- (void)performInitialSyncWithProgress:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performSyncIfNeededForSectionID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sectionConfiguration:(id)arg1 addedSectionIDs:(id)arg2 removedSectionIDs:(id)arg3;
- (void)sectionInfoList:(id)arg1 receivedRemoveSectionWithSectionID:(id)arg2;
- (void)sectionInfoList:(id)arg1 receivedUpdatedSectionInfoForSectionID:(id)arg2;
- (void)sendAllSectionInfoWithSpool:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendRemoveSectionWithSectionID:(id)arg1;
- (void)sendSectionInfoWithSectionID:(id)arg1 completion:(CDUnknownBlockType)arg2 spoolToFile:(BOOL)arg3;
- (void)setSectionInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)settingOverrides;
- (void)spoolSectionInfoWithCompletion:(CDUnknownBlockType)arg1;
- (id)universalSectionIDForSectionID:(id)arg1;

@end

