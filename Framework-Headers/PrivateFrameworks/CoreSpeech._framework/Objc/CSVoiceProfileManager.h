//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CSVoiceIdXPCClient;
@protocol OS_dispatch_queue;

@interface CSVoiceProfileManager : NSObject
{
    unsigned long long _currentDeviceCategory;
    CSVoiceIdXPCClient *_xpcClient;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) unsigned long long currentDeviceCategory; // @synthesize currentDeviceCategory=_currentDeviceCategory;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) CSVoiceIdXPCClient *xpcClient; // @synthesize xpcClient=_xpcClient;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)CSSATBasePath;
- (id)_CSSATCachePath;
- (id)_CSSATDownloadPath;
- (id)_CSSATLegacyUploadPath;
- (id)_CSSATUploadPathForSiriProfileId:(id)arg1;
- (id)_CSSATUploadStagingPathForSiriProfileId:(id)arg1;
- (void)_copySATFilesFromPath:(id)arg1 toPath:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)_copyVoiceProfileAtPath:(id)arg1 toPath:(id)arg2;
- (id)_copyVoiceProfileFromSrcDir:(id)arg1 toDestDir:(id)arg2;
- (void)_createAndSendImplicitUtterenceXPCMessage:(id)arg1 withRecordDeviceInfo:(id)arg2 withRecordCtxt:(id)arg3 withVoiceTriggerCtxt:(id)arg4 withOtherCtxt:(id)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (id)_downloadAndEnrollVoiceProfileForProfileId:(id)arg1 withDownloadTriggerBlock:(CDUnknownBlockType)arg2;
- (void)_downloadVoiceProfileForProfileId:(id)arg1 forDeviceCategory:(unsigned long long)arg2 withDownloadTriggerBlock:(CDUnknownBlockType)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)_enableVoiceTriggerIfLanguageMatches:(id)arg1;
- (id)_enrollVoiceProfileForSiriProfileId:(id)arg1 forLanguage:(id)arg2 fromSourceDir:(id)arg3;
- (id)_enrollVoiceProfileForSiriProfileId:(id)arg1 fromCacheDirectoryPath:(id)arg2 withCategoryType:(unsigned long long)arg3;
- (id)_getEnrolledLanguageList;
- (id)_getSATEnrollmentAudioPathForLanguageCodeForLegacyVoiceProfile:(id)arg1;
- (id)_getUserVoiceProfileDownloadCacheDirectoryForProfileId:(id)arg1 forDeviceCategory:(unsigned long long)arg2 forVoiceProfileVersion:(unsigned long long)arg3;
- (id)_getUserVoiceProfileDownloadCacheDirectoryWithUpdatePath:(id)arg1;
- (id)_getVoiceProfilePathsToBeUploadedForSiriProfileId:(id)arg1;
- (BOOL)_isDirectory:(id)arg1;
- (BOOL)_isMarkedForVoiceProfileTrainingSyncForLanguage:(id)arg1;
- (BOOL)_isRemoteVoiceTriggerAvailable;
- (BOOL)_isSATMarkedForSiriProfileId:(id)arg1 withMarker:(id)arg2 forLanguageCode:(id)arg3;
- (BOOL)_markSATEnrollmentMigratedForSiriProfileId:(id)arg1 forLanguageCode:(id)arg2;
- (BOOL)_markSATEnrollmentSuccessForSiriProfileId:(id)arg1 forLanguageCode:(id)arg2;
- (BOOL)_markSATEnrollmentWithMarker:(id)arg1 forLanguage:(id)arg2 forSiriProfileId:(id)arg3;
- (id)_markVoiceProfileMigrationCompleteForSiriProfileId:(id)arg1 forLanguageCode:(id)arg2;
- (void)_markVoiceProfileTrainingSyncForLanguage:(id)arg1;
- (id)_prepareVoiceProfileWithSiriProfileId:(id)arg1 withUploadBlock:(CDUnknownBlockType)arg2;
- (void)_stageVoiceProfileWithSiriProfileId:(id)arg1 fromPath:(id)arg2 withForceUpload:(BOOL)arg3;
- (id)baseDir;
- (id)devicesWithVoiceProfileIniCloudForLanguage:(id)arg1;
- (void)discardAllSATEnrollment;
- (void)discardSATEnrollmentForLanguageCode:(id)arg1;
- (id)discardSATEnrollmentForProfileId:(id)arg1 forLanguageCode:(id)arg2;
- (void)enableVoiceTriggerUponVoiceProfileSyncForLanguage:(id)arg1;
- (id)getCachedVoiceProfileAvailabilityMetaBlob;
- (id)getSATEnrollmentPath;
- (id)getUserVoiceProfileUpdateDirectory;
- (id)getUserVoiceProfileUploadPathWithEnrolledLanguageList:(id *)arg1;
- (BOOL)hasVoiceProfileIniCloudForLanguageCode:(id)arg1;
- (BOOL)hasVoiceProfileIniCloudForLanguageCode:(id)arg1 withBackupMetaBlob:(id)arg2;
- (BOOL)isSATAvailable;
- (BOOL)isSATEnrolledForLanguageCode:(id)arg1;
- (BOOL)isSATEnrolledForSiriProfileId:(id)arg1 forLanguageCode:(id)arg2;
- (BOOL)isSATEnrollmentMigratedForLanguageCode:(id)arg1;
- (BOOL)isSATEnrollmentMigratedForSiriProfileId:(id)arg1 forLanguageCode:(id)arg2;
- (void)isVoiceProfileUploadedToiCloudForLanguageCode:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)markSATEnrollmentSuccessForLanguageCode:(id)arg1;
- (void)markSATEnrollmentSuccessForSiriProfileId:(id)arg1 forLanguageCode:(id)arg2;
- (void)notifyImplicitTrainingUtteranceAvailable:(id)arg1 forVoiceProfileId:(id)arg2 withRecordDeviceInfo:(id)arg3 withRecordCtxt:(id)arg4 withVoiceTriggerCtxt:(id)arg5 withOtherCtxt:(id)arg6 withCompletion:(CDUnknownBlockType)arg7;
- (void)notifyUserVoiceProfileDownloadReadyForUser:(id)arg1 getData:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)notifyUserVoiceProfileUpdateReady;
- (void)notifyUserVoiceProfileUploadComplete;
- (void)notifyUserVoiceProfileUploadCompleteForSiriProfileId:(id)arg1 withError:(id)arg2;
- (id)provisionedVoiceProfilesForLocale:(id)arg1;
- (void)uploadUserVoiceProfileForSiriProfileId:(id)arg1 withUploadTrigger:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;

@end
