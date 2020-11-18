//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMBCloudDatabaseDelegate-Protocol.h>
#import <HomeKitDaemon/HMBLocalDatabaseDelegate-Protocol.h>
#import <HomeKitDaemon/HMDDatabase-Protocol.h>
#import <HomeKitDaemon/HMDDatabaseZoneDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMBCloudDatabase, HMBLocalDatabase, HMDLogEventDispatcher, HMFUnfairLock, NSHashTable, NSMapTable, NSString;

@interface HMDDatabase : HMFObject <HMBLocalDatabaseDelegate, HMBCloudDatabaseDelegate, HMDDatabaseZoneDelegate, HMFLogging, HMDDatabase>
{
    BOOL _hasStarted;
    HMBLocalDatabase *_localDatabase;
    HMBCloudDatabase *_cloudDatabase;
    NSHashTable *_delegates;
    NSMapTable *_zoneDelegatesByLocalZone;
    HMFUnfairLock *_lock;
    HMDLogEventDispatcher *_logEventDispatcher;
}

@property (readonly) HMBCloudDatabase *cloudDatabase; // @synthesize cloudDatabase=_cloudDatabase;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSHashTable *delegates; // @synthesize delegates=_delegates;
@property (readonly, copy) NSString *description;
@property BOOL hasStarted; // @synthesize hasStarted=_hasStarted;
@property (readonly) unsigned long long hash;
@property (readonly) HMBLocalDatabase *localDatabase; // @synthesize localDatabase=_localDatabase;
@property (readonly) HMFUnfairLock *lock; // @synthesize lock=_lock;
@property (readonly) HMDLogEventDispatcher *logEventDispatcher; // @synthesize logEventDispatcher=_logEventDispatcher;
@property (readonly) Class superclass;
@property (readonly) NSMapTable *zoneDelegatesByLocalZone; // @synthesize zoneDelegatesByLocalZone=_zoneDelegatesByLocalZone;

+ (id)cameraClipsDatabase;
+ (id)defaultDatabase;
+ (id)defaultLocalDatabaseFileURL;
+ (id)logCategory;
- (void).cxx_destruct;
- (id)acceptInvitation:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)addZoneDelegate:(id)arg1 forLocalZone:(id)arg2;
- (void)cloudDatabase:(id)arg1 didCreateZoneWithID:(id)arg2;
- (void)cloudDatabase:(id)arg1 didReceiveMessageWithUserInfo:(id)arg2;
- (void)cloudDatabase:(id)arg1 didRemoveZoneWithID:(id)arg2;
- (void)cloudDatabase:(id)arg1 encounteredError:(id)arg2 withOperation:(id)arg3 onContainer:(id)arg4;
- (void)cloudDatabase:(id)arg1 encounteredError:(id)arg2 withOperation:(id)arg3 onZone:(id)arg4;
- (id)cloudDatabase:(id)arg1 willRemoveZoneWithID:(id)arg2;
- (void)cloudZone:(id)arg1 didChangeRebuildStatus:(id)arg2;
- (void)cloudZone:(id)arg1 didRemoveParticipantWithClientIdentifier:(id)arg2;
- (id)declineInvitation:(id)arg1;
- (id)existingPrivateZonesWithName:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 error:(id *)arg4;
- (id)existingSharedZoneIDWithName:(id)arg1;
- (id)initWithFileURL:(id)arg1 cloudContainerIdentifier:(id)arg2 cloudContainerSourceApplicationBundleIdentifier:(id)arg3;
- (id)initWithLocalDatabase:(id)arg1 cloudDatabase:(id)arg2 logEventDispatcher:(id)arg3;
- (void)localDatabase:(id)arg1 detectedLocalCorruptionWithInfo:(id)arg2;
- (void)localDatabase:(id)arg1 willRemoveZoneWithID:(id)arg2;
- (BOOL)localDatabaseShouldLogPrivateInformation:(id)arg1;
- (void)localZone:(id)arg1 didCompleteProcessingWithResult:(id)arg2;
- (id)logIdentifier;
- (id)mergedActionFutureForActionFutures:(id)arg1;
- (void)performDelegateCallback:(CDUnknownBlockType)arg1;
- (void)performZoneDelegateCallback:(CDUnknownBlockType)arg1 forLocalZone:(id)arg2;
- (id)privateZonesWithName:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 error:(id *)arg4;
- (id)registerSharedSubscriptionForExternalRecordType:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (id)removeLocalAndCloudDataForLocalZone:(id)arg1;
- (id)removePrivateZonesWithName:(id)arg1;
- (id)removeSharedZonesWithName:(id)arg1;
- (void)removeZoneDelegate:(id)arg1 forLocalZone:(id)arg2;
- (id)removeZonesWithID:(id)arg1 isPrivate:(BOOL)arg2;
- (id)sharedZonesWithID:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 error:(id *)arg4;
- (void)start;
- (id)unregisterSharedSubscriptionForExternalRecordType:(id)arg1;
- (id)zonesWithID:(id)arg1 isPrivate:(BOOL)arg2 shouldCreate:(BOOL)arg3 configuration:(id)arg4 delegate:(id)arg5 error:(id *)arg6;

@end
