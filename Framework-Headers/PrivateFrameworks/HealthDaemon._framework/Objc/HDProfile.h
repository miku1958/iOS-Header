//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDAWDSubmissionManager, HDAppSubscriptionManager, HDAuthorizationManager, HDCloudSyncManager, HDCurrentActivitySummaryHelper, HDDaemon, HDDaemonSyncEngine, HDDataCollectionManager, HDDataManager, HDDataProvenanceManager, HDDatabase, HDDatabasePruningManager, HDDeviceManager, HDFitnessMachineManager, HDHealthServiceManager, HDMedicalIDDataManager, HDMetadataManager, HDMigrationManager, HDNanoSyncManager, HDNotificationManager, HDServiceConnectionManager, HDSourceManager, HDSourceOrderManager, HDUnitPreferencesManager, HDUserCharacteristicsManager, HDWorkoutManager, NSString, NSURL;
@protocol HDHealthDaemon, HDHealthDatabase, HDSyncEngine;

@interface HDProfile : NSObject
{
    HDDatabase *_database;
    HDSourceManager *_sourceManager;
    HDDeviceManager *_deviceManager;
    HDAuthorizationManager *_authorizationManager;
    NSString *_directoryPath;
    HDDaemonSyncEngine *_syncEngine;
    HDDaemon *_daemon;
    HDDataManager *_dataManager;
    HDDataProvenanceManager *_dataProvenanceManager;
    HDSourceOrderManager *_sourceOrderManager;
    HDUserCharacteristicsManager *_userCharacteristicsManager;
    long long _profileType;
    NSString *_medicalIDDirectoryPath;
    HDAWDSubmissionManager *_awdSubmissionManager;
    HDDatabasePruningManager *_databasePruningManager;
    HDMedicalIDDataManager *_medicalIDDataManager;
    HDMetadataManager *_metadataManager;
    HDMigrationManager *_migrationManager;
    HDUnitPreferencesManager *_unitPreferencesManager;
}

@property (readonly, nonatomic) HDAppSubscriptionManager *appSubscriptionManager;
@property (readonly, nonatomic) HDAuthorizationManager *authorizationManager;
@property (readonly, nonatomic) HDAWDSubmissionManager *awdSubmissionManager; // @synthesize awdSubmissionManager=_awdSubmissionManager;
@property (readonly, nonatomic) HDCloudSyncManager *cloudSyncManager;
@property (readonly, nonatomic) HDCurrentActivitySummaryHelper *currentActivitySummaryHelper;
@property (readonly, weak, nonatomic) HDDaemon *daemon; // @synthesize daemon=_daemon;
@property (readonly, nonatomic) HDDataCollectionManager *dataCollectionManager;
@property (readonly, nonatomic) HDDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property (readonly, nonatomic) HDDataProvenanceManager *dataProvenanceManager; // @synthesize dataProvenanceManager=_dataProvenanceManager;
@property (readonly, nonatomic) HDDatabase *database;
@property (readonly, nonatomic) HDDatabasePruningManager *databasePruningManager; // @synthesize databasePruningManager=_databasePruningManager;
@property (readonly, nonatomic) HDDeviceManager *deviceManager; // @synthesize deviceManager=_deviceManager;
@property (readonly, copy, nonatomic) NSString *directoryPath;
@property (readonly, copy, nonatomic) NSURL *directoryURL;
@property (readonly, nonatomic) HDFitnessMachineManager *fitnessMachineManager;
@property (readonly, weak, nonatomic) id<HDHealthDaemon> healthDaemon;
@property (readonly, nonatomic) id<HDHealthDatabase> healthDatabase;
@property (readonly, nonatomic) HDMedicalIDDataManager *medicalIDDataManager; // @synthesize medicalIDDataManager=_medicalIDDataManager;
@property (readonly, copy, nonatomic) NSString *medicalIDDirectoryPath; // @synthesize medicalIDDirectoryPath=_medicalIDDirectoryPath;
@property (readonly, nonatomic) HDMetadataManager *metadataManager; // @synthesize metadataManager=_metadataManager;
@property (readonly, nonatomic) HDMigrationManager *migrationManager; // @synthesize migrationManager=_migrationManager;
@property (readonly, nonatomic) HDNanoSyncManager *nanoSyncManager;
@property (readonly, nonatomic) HDNotificationManager *notificationManager;
@property (readonly, nonatomic) long long profileType; // @synthesize profileType=_profileType;
@property (readonly, nonatomic) HDServiceConnectionManager *serviceConnectionManager;
@property (readonly, nonatomic) HDHealthServiceManager *serviceManager;
@property (readonly, nonatomic) HDSourceManager *sourceManager; // @synthesize sourceManager=_sourceManager;
@property (readonly, nonatomic) HDSourceOrderManager *sourceOrderManager; // @synthesize sourceOrderManager=_sourceOrderManager;
@property (readonly, nonatomic) id<HDSyncEngine> syncEngine;
@property (readonly, nonatomic) HDUnitPreferencesManager *unitPreferencesManager; // @synthesize unitPreferencesManager=_unitPreferencesManager;
@property (readonly, nonatomic) HDUserCharacteristicsManager *userCharacteristicsManager; // @synthesize userCharacteristicsManager=_userCharacteristicsManager;
@property (readonly, nonatomic) HDWorkoutManager *workoutManager;

- (void).cxx_destruct;
- (id)_newAWDSubmissionManager;
- (id)_newUserCharacteristicsManager;
- (id)description;
- (id)displayNameWithError:(id *)arg1;
- (id)healthDeviceManager;
- (id)healthSourceManager;
- (id)initWithDirectoryPath:(id)arg1 medicalIDDirectoryPath:(id)arg2 daemon:(id)arg3 profileType:(long long)arg4;
- (void)invalidateAndWait;
- (void)obliterateAndTerminateWithOptions:(unsigned long long)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)obliterateWithOptions:(unsigned long long)arg1 reason:(id)arg2;
- (BOOL)setDisplayName:(id)arg1 error:(id *)arg2;
- (void)terminationCleanup;

@end

