//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AFVoiceInfo, NSArray, NSXPCConnection;
@protocol AFSettingsDelegate, OS_dispatch_queue;

@interface AFSettingsConnection : NSObject
{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_voicesQueue;
    NSArray *_voices;
    AFVoiceInfo *_selectedVoice;
    id<AFSettingsDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (weak, nonatomic, setter=_setDelegate:) id<AFSettingsDelegate> _delegate;

+ (void)initialize;
- (void).cxx_destruct;
- (void)_clearConnection;
- (void)_clearSyncNeededForKey:(id)arg1;
- (id)_connection;
- (void)_fetchPeerData:(CDUnknownBlockType)arg1;
- (id)_filterVoices:(id)arg1 forLanguage:(id)arg2;
- (void)_getSharedCompanionInfo:(CDUnknownBlockType)arg1;
- (void)_getSharedUserID:(CDUnknownBlockType)arg1;
- (void)_runServiceMaintenance;
- (void)_setSyncNeededForReason:(id)arg1;
- (void)_setSyncVerificationNeededAndFullReportNeeded:(BOOL)arg1 shouldPostNotification:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setVoices:(id)arg1;
- (id)_settingsServiceWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)_syncDataWithAnchorKeys:(id)arg1 forceReset:(BOOL)arg2 reason:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_synchronousSettingsServiceWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)_tellDelegatePartialVerificationResult:(id)arg1;
- (void)_tellDelegateServerVerificationReport:(id)arg1;
- (void)_updateMultiUserInfoForUser:(id)arg1 score:(id)arg2 companionId:(id)arg3 companionSpeechId:(id)arg4 idsIdentifier:(id)arg5 aceHost:(id)arg6 reset:(BOOL)arg7 completion:(CDUnknownBlockType)arg8;
- (void)_updateVoicesIncludingAssetInfo:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_voices;
- (void)accessRecordedAudioWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)accounts;
- (void)addMultiUserUser:(id)arg1 sharedId:(id)arg2 loggableSharedId:(id)arg3 enrollmentName:(id)arg4 isPrimary:(BOOL)arg5 completion:(CDUnknownBlockType)arg6;
- (void)barrier;
- (void)clearOpportuneSpeakingEdgeDetectorSignalOverride;
- (void)clearSpokenNotificationTemporarilyDisabledStatus;
- (void)configOverrides:(CDUnknownBlockType)arg1;
- (void)createOfflineSpeechProfileWithLanguage:(id)arg1 modelOverridePath:(id)arg2 JSONData:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)currectNWActivityId:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)deleteAccountWithIdentifier:(id)arg1;
- (void)deleteSiriHistoryWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteSiriHistoryWithContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)disableAndDeleteCloudSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissUI;
- (void)fetchAccountsSynchronously:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAccountsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchEventRecordsFromAnalyticsStoreAtPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchExperimentConfigurationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchExperimentContextWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchMultiUserVoiceIdentificationSetting:(CDUnknownBlockType)arg1;
- (void)fetchSupportedLanguageCodes:(CDUnknownBlockType)arg1;
- (void)fetchSupportedMultiUserLanguageCodes:(CDUnknownBlockType)arg1;
- (void)forceMultiUserSync:(BOOL)arg1 download:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getAudioSessionCoordinationSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (void)getAvailableVoicesForLanguage:(id)arg1 includeAssetInfo:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getAvailableVoicesForRecognitionLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAvailableVoicesForRecognitionLanguage:(id)arg1 includeAssetInfo:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getAvailableVoicesForSynthesisLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getBluetoothDeviceInfoWithAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getBluetoothDeviceInfoWithUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getBluetoothWirelessSplitterSessionInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)getConnectedBluetoothDeviceInfoArrayWithCompletion:(CDUnknownBlockType)arg1;
- (void)getContextCollectorsInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)getCrossDeviceContextWithCompletion:(CDUnknownBlockType)arg1;
- (void)getCurrentContextSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (void)getDevicesWithAvailablePHSAssetsForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getDevicesWithAvailablePHSAssetsOnDeviceCheck:(CDUnknownBlockType)arg1;
- (void)getHomeUserIdForSharedUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getHorsemanSupplementalLanguageDictionary:(CDUnknownBlockType)arg1;
- (void)getMeCard:(CDUnknownBlockType)arg1;
- (void)getOfflineDictationStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)getOriginDeviceInfoForContextIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getPairedBluetoothDeviceInfoArrayWithCompletion:(CDUnknownBlockType)arg1;
- (void)getPeerIdentifiers:(CDUnknownBlockType)arg1;
- (void)getRecordedAudioDirectoryPathsWithCompletion:(CDUnknownBlockType)arg1;
- (void)getSharedUserIdForHomeUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getSiriDataSharingOptInStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)getSiriOutputVolumeForAudioRoute:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getSiriOutputVolumeWithCompletion:(CDUnknownBlockType)arg1;
- (void)getSpokenNotificationShouldAlwaysSpeakNotificationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)getSpokenNotificationShouldSkipTriggerlessRepliesWithCompletion:(CDUnknownBlockType)arg1;
- (void)getSpokenNotificationTemporarilyDisabledEndDateForApp:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getSpokenNotificationTemporarilyDisabledEndDateWithCompletion:(CDUnknownBlockType)arg1;
- (void)getStereoPairState:(CDUnknownBlockType)arg1;
- (void)getStereoPartnerLastMyriadWinDate:(CDUnknownBlockType)arg1;
- (void)getSupplementalLanguageDictionaryForProduct:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getSupplementalLanguagesDictionary:(CDUnknownBlockType)arg1;
- (void)getSupplementalLanguagesForProduct:(id)arg1 forBuildVersion:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getSupplementalLanguagesModificationDate:(CDUnknownBlockType)arg1;
- (void)homeOnboardingFlowInvoked:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (void)killDaemon;
- (void)purgeAnalyticsStoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)pushMyriadAdvertisementContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeMultiUserUser:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeMultiUserWithSharedUserID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetAnalyticsStoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)saveAccount:(id)arg1 setActive:(BOOL)arg2;
- (void)sendMetricsToServerWithCompletion:(CDUnknownBlockType)arg1;
- (void)setActiveAccountIdentifier:(id)arg1;
- (void)setAssistantEnabled:(BOOL)arg1;
- (void)setAssistantLoggingEnabled:(BOOL)arg1;
- (void)setConfigOverrides:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setDictationEnabled:(BOOL)arg1;
- (void)setHardcodedBluetoothProximity:(id)arg1;
- (void)setHorsemanSupplementalLanguageDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setLanguage:(id)arg1;
- (void)setLanguage:(id)arg1 outputVoice:(id)arg2;
- (void)setLanguage:(id)arg1 outputVoice:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)setLanguage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setNanoAssistantEnabled:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setNanoCrownActivationEnabled:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setNanoDictationEnabled:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setNanoLanguage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setNanoOutputVoice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setNanoPhraseSpotterEnabled:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setNanoRaiseToSpeakEnabled:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setNanoSiriDataSharingOptInStatus:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setNanoTTSSpeakerVolume:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setNanoUseDeviceSpeakerForTTS:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setOfflineDictationProfileOverridePath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setOnDeviceDictationAvailableAlertPresented:(BOOL)arg1;
- (void)setOpportuneSpeakingEdgeDetectorSignalOverride:(long long)arg1;
- (void)setOutputVoice:(id)arg1;
- (void)setOutputVoice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setSiriDataSharingOptInAlertPresented:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setSiriDataSharingOptInStatus:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setSiriDesignModeEnabled:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setSiriGradingEnabled:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setSiriOutputVolume:(float)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setSiriOutputVolume:(float)arg1 forAudioRoute:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setSpokenNotificationProxCardSeen:(BOOL)arg1;
- (void)setSpokenNotificationShouldAlwaysSpeakNotifications:(BOOL)arg1;
- (void)setSpokenNotificationShouldSkipTriggerlessReplies:(BOOL)arg1;
- (void)setSpokenNotificationTemporarilyDisabledForApp:(id)arg1 until:(id)arg2;
- (void)setSpokenNotificationTemporarilyDisabledUntil:(id)arg1;
- (void)setSupplementalLanguageDictionary:(id)arg1 forProduct:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setSupplementalLanguages:(id)arg1 forProduct:(id)arg2 forBuildVersion:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setXPCConnectionManagementQueue:(id)arg1;
- (void)shouldSuppressSiriDataSharingOptInAlert:(CDUnknownBlockType)arg1;
- (void)showMultiUsers:(CDUnknownBlockType)arg1;
- (void)showPrimaryUserSharedUserIDWithCompletion:(CDUnknownBlockType)arg1;
- (void)shutdownSessionIfIdle;
- (void)siriDesignModeIsEnabled:(CDUnknownBlockType)arg1;
- (void)siriGradingIsEnabled:(CDUnknownBlockType)arg1;
- (void)startAudioPlaybackRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startMultiUserUIRequestWithText:(id)arg1 expectedSpeakerSharedUserID:(id)arg2 expectedSpeakerConfidenceScore:(unsigned long long)arg3 nonspeakerConfidenceScores:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)startObservingWirelessSplitterSession;
- (void)startRemoteRequest:(id)arg1 onPeer:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startUIMockServerRequestWithReplayFileURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startUIRequest:(id)arg1;
- (void)startUIRequestWithInfo:(id)arg1;
- (void)startUIRequestWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startUIRequestWithSpeechAudioFileURL:(id)arg1;
- (void)startUIRequestWithText:(id)arg1;
- (void)startUIRequestWithText:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopAllAudioPlaybackRequests:(BOOL)arg1;
- (void)stopAudioPlaybackRequest:(id)arg1 immediately:(BOOL)arg2;
- (void)stopObservingWirelessSplitterSession;
- (void)trimRecordedAudioWithIdentifier:(id)arg1 offset:(double)arg2 duration:(double)arg3 outputFileType:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)updateOfflineSpeechProfileWithLanguage:(id)arg1 modelOverridePath:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

