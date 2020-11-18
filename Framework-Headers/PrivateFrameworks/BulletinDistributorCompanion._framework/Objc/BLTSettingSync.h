//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BulletinDistributorCompanion/BLTSettingSyncInternal.h>

#import <BulletinDistributorCompanion/BBObserverDelegate-Protocol.h>
#import <BulletinDistributorCompanion/BLTSectionInfoListDelegate-Protocol.h>
#import <BulletinDistributorCompanion/PSYSyncCoordinatorDelegate-Protocol.h>

@class BLTSectionInfoList, BLTSettingSyncSendQueue, NSString, PSYSyncCoordinator;

@interface BLTSettingSync : BLTSettingSyncInternal <BBObserverDelegate, PSYSyncCoordinatorDelegate, BLTSectionInfoListDelegate>
{
    PSYSyncCoordinator *_pairedSyncCoordinator;
    BLTSectionInfoList *_sectionInfoList;
    BLTSettingSyncSendQueue *_settingSendQueue;
    unsigned long long _settingSyncSendQueueMaxConcurrentSendCount;
    int _token;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_alertingSectionIDs;
- (unsigned long long)_fetchSettingSyncMaxCountOverride;
- (unsigned long long)_fetchSyncState;
- (void)_initSettingSyncSendQueueMaxConcurrentSendCount;
- (id)_overriddenSectionInfoForSectionID:(id)arg1;
- (void)_sendSectionSubtypeParameterIcons:(id)arg1 sectionID:(id)arg2 waitForAcknowledgement:(BOOL)arg3 andCompletion:(CDUnknownBlockType)arg4;
- (void)_storeSyncState:(unsigned long long)arg1;
- (void)_updateAllBBSectionsWithCompletion:(CDUnknownBlockType)arg1 withProgress:(CDUnknownBlockType)arg2;
- (BOOL)_willSectionIDAlert:(id)arg1;
- (void)clearSectionInfoSentCache;
- (void)dealloc;
- (id)init;
- (void)observer:(id)arg1 noteSectionParametersChanged:(id)arg2 forSectionID:(id)arg3;
- (id)originalSettings;
- (id)overriddenSettings;
- (void)removeDNDHandlers;
- (void)sectionInfoList:(id)arg1 receivedUpdatedSectionInfoForSectionID:(id)arg2;
- (void)sendAllSectionInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)sendSectionInfoWithSectionID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setDNDHandlers;
- (id)settingOverrides;
- (void)syncCoordinatorDidReceiveStartSyncCommand:(id)arg1;
- (id)universalSectionIDForSectionID:(id)arg1;

@end

