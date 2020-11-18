//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDAnalyticsSubmissionCoordinatorDelegate-Protocol.h>
#import <HealthDaemon/HDContentProtectionObserver-Protocol.h>
#import <HealthDaemon/HDDatabaseProtectedDataObserver-Protocol.h>
#import <HealthDaemon/HDHealthDaemonReadyObserver-Protocol.h>

@class HDAssertion, HDProfile, HKObserverSet, NSDate, NSString;
@protocol OS_dispatch_queue;

@interface HDCloudSyncManager : NSObject <HDContentProtectionObserver, HDDatabaseProtectedDataObserver, HDHealthDaemonReadyObserver, HDAnalyticsSubmissionCoordinatorDelegate>
{
    HDAssertion *_preparedDatabaseAccessibilityAssertion;
    struct os_unfair_lock_s _lock;
    NSDate *_lock_lastSuccessfulPullDate;
    NSDate *_lock_lastSuccessfulPushDate;
    NSDate *_lock_lastDataUploadRequestStartDate;
    NSDate *_lock_lastDataUploadRequestCompletionDate;
    long long _lock_uploadRequestStatus;
    HKObserverSet *_observers;
    BOOL _supportsRebase;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    long long _inProgressSyncCount;
}

@property (readonly) long long bytesPerChangeRecordAssetThreshold;
@property (readonly) long long bytesPerChangeRecordAssetThresholdHardLimit;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long inProgressSyncCount; // @synthesize inProgressSyncCount=_inProgressSyncCount;
@property (readonly, nonatomic) NSDate *lastSuccessfulPullDate;
@property (readonly, nonatomic) NSDate *lastSuccessfulPushDate;
@property (strong) HDAssertion *preparedDatabaseAccessibilityAssertion; // @synthesize preparedDatabaseAccessibilityAssertion=_preparedDatabaseAccessibilityAssertion;
@property (readonly, weak, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsRebase; // @synthesize supportsRebase=_supportsRebase;

+ (void)_containerIdentifiersWithEncryptionSupportEnabled:(BOOL)arg1 accountManateeEnabled:(BOOL)arg2 internalSettingManateeEnabled:(BOOL)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
- (void)_addFinalProgressUpdateWithTaskTree:(id)arg1 progress:(id)arg2;
- (void)_containerIdentifiersForCurrentAccountWithCompletion:(CDUnknownBlockType)arg1;
- (id)_containerWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)_errorForNilProfile;
- (BOOL)_isValidOwnerParticipant:(id)arg1;
- (BOOL)_persistErrorRequiringUserAction:(id)arg1;
- (void)_primaryContainerIdentifiersForCurrentAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_considerStartingBackstopSyncForThreshold:(double)arg1;
- (void)_queue_updateAccessibilityAssertion;
- (id)_removeParticipants:(id)arg1 fromSharesWithCompletion:(CDUnknownBlockType)arg2;
- (void)_subscribeToSubscriptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_syncCircleIdentifierForProfile:(id)arg1 error:(id *)arg2;
- (void)_tinkerContainerIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateDataUploadRequestStatus:(long long)arg1;
- (void)acceptShare:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addObserver:(id)arg1 queue:(id)arg2;
- (BOOL)canPerformCloudSyncWithError:(id *)arg1;
- (void)cloudSyncRepositoriesWithCompletion:(CDUnknownBlockType)arg1;
- (void)configureForShareSetupMetadata:(id)arg1 acceptedShares:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)contentProtectionStateChanged:(long long)arg1 previousState:(long long)arg2;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2;
- (void)dealloc;
- (void)didCompleteSuccessfulPullWithDate:(id)arg1;
- (void)didCompleteSuccessfulPushWithDate:(id)arg1;
- (id)disableAndDeleteAllSyncDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchCloudKitEmailAddressWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchDescriptionWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchServerPreferredPushEnvironment:(CDUnknownBlockType)arg1;
- (id)fetchShareParticipantsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchSyncStatusWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithProfile:(id)arg1;
- (id)lastPushForwardProgressDate;
- (id)leaveSharesWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)persistRestoreCompletionDate:(id)arg1 withError:(id *)arg2;
- (id)prepareForSharingWithCompletion:(CDUnknownBlockType)arg1;
- (void)prepareForSync;
- (void)queue_cloudSyncRepositoriesWithCompletion:(CDUnknownBlockType)arg1;
- (id)removeAllParticipantsFromSharesWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (id)removeParticipants:(id)arg1 fromSharesWithCompletion:(CDUnknownBlockType)arg2;
- (void)reportDailyAnalyticsWithCoordinator:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestDataUploadWithCompletion:(CDUnknownBlockType)arg1;
- (id)resetWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)setShareOwnerParticipant:(id)arg1 error:(id *)arg2;
- (id)setupSharingToAccountWithIdentityLookupInfo:(id)arg1 requireExistingRelationship:(BOOL)arg2 requireZoneDeviceMode:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)shareOwnerParticipantWithError:(id *)arg1;
- (void)subscribeToDataAvailableNotificationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)subscribeToDataUploadRequestsWithCompletion:(CDUnknownBlockType)arg1;
- (id)syncMedicalIDDataWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)syncSessionForSyncStore:(id)arg1 reason:(id)arg2 delegate:(id)arg3 accessibilityAssertion:(id)arg4 excludedStores:(id)arg5;
- (id)syncWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unitTest_setSupportsRebase:(BOOL)arg1;
- (void)updateErrorRequiringUserAction:(id)arg1;

@end
