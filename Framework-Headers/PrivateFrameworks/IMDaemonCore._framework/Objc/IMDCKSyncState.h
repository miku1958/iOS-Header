//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <IMDaemonCore/IMKeyValueCollectionDelegate-Protocol.h>

@class IMKeyValueCollection, NSArray, NSDate, NSString;
@protocol IMDCKSyncStateDelegate;

@interface IMDCKSyncState : NSObject <IMKeyValueCollectionDelegate>
{
    IMKeyValueCollection *_storage;
    id<IMDCKSyncStateDelegate> _delegate;
}

@property (nonatomic) long long accountStatus; // @dynamic accountStatus;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IMDCKSyncStateDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisablingDevices) BOOL disablingDevices; // @dynamic disablingDevices;
@property (nonatomic, getter=isEligibleForTruthZone) BOOL eligibleForTruthZone; // @dynamic eligibleForTruthZone;
@property (copy, nonatomic) NSDate *exitDate; // @dynamic exitDate;
@property (nonatomic, getter=isFeatureEnabled) BOOL featureEnabled; // @dynamic featureEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isInExitState) BOOL inExitState; // @dynamic inExitState;
@property (readonly, nonatomic) IMKeyValueCollection *keyValueCollection; // @synthesize keyValueCollection=_storage;
@property (copy, nonatomic) NSDate *lastSyncDate; // @dynamic lastSyncDate;
@property (nonatomic, getter=isRemovedFromBackup) BOOL removedFromBackup; // @dynamic removedFromBackup;
@property (nonatomic, getter=isStartingEnabledSettingChange) BOOL startingEnabledSettingChange; // @dynamic startingEnabledSettingChange;
@property (nonatomic, getter=isStartingInitialSyncSetByCloudKitHooks) BOOL startingInitialSyncSetByCloudKitHooks; // @dynamic startingInitialSyncSetByCloudKitHooks;
@property (nonatomic, getter=isStartingPeriodicSyncSetByCloudKitHooks) BOOL startingPeriodicSyncSetByCloudKitHooks; // @dynamic startingPeriodicSyncSetByCloudKitHooks;
@property (readonly) Class superclass;
@property (nonatomic) long long syncControllerRecordType; // @dynamic syncControllerRecordType;
@property (nonatomic) unsigned long long syncControllerSyncState; // @dynamic syncControllerSyncState;
@property (nonatomic) long long syncControllerSyncType; // @dynamic syncControllerSyncType;
@property (readonly, nonatomic) NSArray *syncErrors;
@property (nonatomic, getter=isSyncing) BOOL syncing; // @dynamic syncing;
@property (nonatomic, getter=isSyncingEnabled) BOOL syncingEnabled; // @dynamic syncingEnabled;
@property (nonatomic, getter=isSyncingPaused) BOOL syncingPaused; // @dynamic syncingPaused;

+ (id)logHandle;
- (void).cxx_destruct;
- (void)_finishBatchChange;
- (void)_setStartingSync;
- (void)_startBatchChange;
- (void)addSyncError:(id)arg1;
- (void)broadcastSyncState;
- (void)clearLocalCloudKitSyncState;
- (void)clearSyncErrors;
- (id)init;
- (id)initWithKeyValueCollection:(id)arg1;
- (void)keyValueCollection:(id)arg1 didUpdateValues:(id)arg2;
- (void)keyValueCollection:(id)arg1 willUpdateValues:(id)arg2;
- (id)logHandle;
- (id)serializedRepresentation;
- (void)setErrorToAccountNeedsRepair;
- (void)setStartingInitialSyncWithRecordType:(long long)arg1;
- (void)setStartingPeriodicSyncWithRecordType:(long long)arg1;
- (void)setSyncControllerSyncState:(unsigned long long)arg1 withRecordType:(long long)arg2;
- (void)setSyncingFinished;

@end

