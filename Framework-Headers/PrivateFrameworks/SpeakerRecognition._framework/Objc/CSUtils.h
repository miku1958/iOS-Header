//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSUtils : NSObject
{
}

+ (void)URLsInDirectory:(id)arg1 matchingPattern:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)_contentsOfDirectoryAtURL:(id)arg1 matchingPattern:(id)arg2 includingPropertiesForKeys:(id)arg3 error:(id *)arg4;
+ (id)_getUtterancesFromDirectory:(id)arg1;
+ (id)_sharedDisposeLoggingQueue;
+ (void)_sortedURLsInDirectory:(id)arg1 matchingPattern:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (struct AudioStreamBasicDescription)aiffFileASBD;
+ (void)apply12dBGain:(id)arg1;
+ (void)applyGain:(float)arg1 toBuffer:(id)arg2;
+ (void)applyNegative12dBGain:(id)arg1;
+ (id)assetHashInResourcePath:(id)arg1;
+ (void)cleanupOrphanedVoiceIdGradingFiles;
+ (void)clearLogFilesInDirectory:(id)arg1 matchingPattern:(id)arg2 exceedNumber:(unsigned long long)arg3;
+ (id)combineScoreFromPSR:(id)arg1 fromSAT:(id)arg2 withCombinedWt:(float)arg3;
+ (id)convertToFloatLPCMBufFromShortLPCMBuf:(id)arg1;
+ (id)convertToShortLPCMBufFromFloatLPCMBuf:(id)arg1;
+ (void)createDirectoryIfDoesNotExist:(id)arg1;
+ (id)deviceBuildVersion;
+ (unsigned long long)deviceCategoryForDeviceProductType:(id)arg1;
+ (id)deviceCategoryStringRepresentationForCategoryType:(unsigned long long)arg1;
+ (id)deviceHwRevision;
+ (id)deviceProductType;
+ (id)deviceProductVersion;
+ (id)deviceUserAssignedName;
+ (void)dumpFilesInDirectory:(id)arg1;
+ (BOOL)encryptFileAt:(id)arg1 andSaveTo:(id)arg2 error:(id *)arg3;
+ (unsigned long long)explicitSpIdTypeForSpId:(unsigned long long)arg1;
+ (id)getContentsOfDirectory:(id)arg1;
+ (void)getEnrollmentUtterancesCountFromDirectory:(id)arg1 withCountBlock:(CDUnknownBlockType)arg2;
+ (id)getEnrollmentUtterancesFromDirectory:(id)arg1;
+ (id)getExplicitEnrollmentUtterancesFromDirectory:(id)arg1;
+ (id)getExplicitMarkedEnrollmentUtterancesFromDirectory:(id)arg1;
+ (id)getFixedHighPrioritySerialQueueWithLabel:(id)arg1;
+ (id)getFixedPrioritySerialQueueWithLabel:(id)arg1 fixedPriority:(int)arg2;
+ (void)getHomeUserIdForVoiceProfile:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (double)getHostClockFrequency;
+ (id)getImplicitEnrollmentUtterancesFromDirectory:(id)arg1;
+ (id)getImplicitUtteranceCacheDirectory;
+ (long long)getNumberOfAudioFilesInDirectory:(id)arg1;
+ (id)getSiriLanguageWithFallback:(id)arg1;
+ (id)getVoiceProfileForSiriProfileId:(id)arg1 forLanguageCode:(id)arg2;
+ (id)getVoiceProfileIdentityFromVersionFilePath:(id)arg1;
+ (unsigned long long)getVoiceProfileProductCategoryFromVersionFilePath:(id)arg1;
+ (id)getVoiceProfilesForSiriProfileId:(id)arg1;
+ (BOOL)hasRemoteBuiltInMic;
+ (BOOL)hasRemoteCoreSpeech;
+ (unsigned long long)hostTimeFromSampleCount:(unsigned long long)arg1 anchorHostTime:(unsigned long long)arg2 anchorSampleCount:(unsigned long long)arg3;
+ (float)hostTimeToSeconds:(unsigned long long)arg1;
+ (double)hostTimeToTimeInterval:(unsigned long long)arg1;
+ (BOOL)isCurrentDeviceCompatibleWithNewerVoiceProfileAt:(id)arg1;
+ (BOOL)isCurrentDeviceCompatibleWithVoiceProfileAt:(id)arg1;
+ (BOOL)isIOSDeviceSupportingBargeIn;
+ (BOOL)isRecordContextAutoPrompt:(id)arg1;
+ (BOOL)isRecordContextHearstDoubleTap:(id)arg1;
+ (BOOL)isRecordContextHearstVoiceTrigger:(id)arg1;
+ (BOOL)isRecordContextHomeButtonPress:(id)arg1;
+ (BOOL)isRecordContextJarvisButtonPress:(id)arg1;
+ (BOOL)isRecordContextJarvisVoiceTrigger:(id)arg1;
+ (BOOL)isRecordContextRaiseToSpeak:(id)arg1;
+ (BOOL)isRecordContextSpeakerIdTrainingTrigger:(id)arg1;
+ (BOOL)isRecordContextVoiceTrigger:(id)arg1;
+ (BOOL)isSpeakerRecognitionSupportedInLocale:(id)arg1;
+ (void)logSpeakerRecognitionGradingMetadataAtFilepath:(id)arg1 withScoreInfo:(id)arg2;
+ (struct AudioStreamBasicDescription)lpcmASBD;
+ (struct AudioStreamBasicDescription)lpcmFloatASBD;
+ (struct AudioStreamBasicDescription)lpcmInt16ASBD;
+ (struct AudioStreamBasicDescription)lpcmInt16NarrowBandASBD;
+ (struct AudioStreamBasicDescription)lpcmInterleavedASBD;
+ (struct AudioStreamBasicDescription)lpcmInterleavedASBDWithSampleRate:(float)arg1 numberOfChannels:(unsigned int)arg2;
+ (struct AudioStreamBasicDescription)lpcmInterleavedWithRemoteVADASBD;
+ (struct AudioStreamBasicDescription)lpcmMonoInterleavedWithRemoteVADASBD;
+ (struct AudioStreamBasicDescription)lpcmMonoNonInterleavedWithRemoteVADASBD;
+ (struct AudioStreamBasicDescription)lpcmNarrowBandASBD;
+ (struct AudioStreamBasicDescription)lpcmNonInterleavedASBD;
+ (struct AudioStreamBasicDescription)lpcmNonInterleavedASBDWithSampleRate:(float)arg1 numberOfChannels:(unsigned int)arg2;
+ (struct AudioStreamBasicDescription)lpcmNonInterleavedWithRemoteVADASBD;
+ (unsigned long long)macHostTimeFromBridgeHostTime:(unsigned long long)arg1;
+ (id)moveContentsOfSrcDirectory:(id)arg1 toDestDirectory:(id)arg2;
+ (struct AudioStreamBasicDescription)opusASBD;
+ (struct AudioStreamBasicDescription)opusNarrowBandASBD;
+ (id)psrConfigFileNameForCSSpIdType:(unsigned long long)arg1;
+ (id)readJsonFileAtPath:(id)arg1;
+ (id)recordContextString:(id)arg1;
+ (id)removeItemAtPath:(id)arg1;
+ (void)removeLogFilesInDirectory:(id)arg1 matchingPattern:(id)arg2 beforeDays:(float)arg3;
+ (id)rootQueueWithFixedPriority:(int)arg1;
+ (unsigned long long)sampleCountFromHostTime:(unsigned long long)arg1 anchorHostTime:(unsigned long long)arg2 anchorSampleCount:(unsigned long long)arg3;
+ (id)satConfigFileNameForCSSpIdType:(unsigned long long)arg1;
+ (id)satConfigFileNameForCSSpIdType:(unsigned long long)arg1 forModelType:(unsigned long long)arg2 forAssetType:(unsigned long long)arg3;
+ (unsigned long long)secondsToHostTime:(float)arg1;
+ (void)segmentVoiceTriggerFromAudioFile:(id)arg1 withVTEventInfo:(id)arg2 withStorePayloadPortion:(BOOL)arg3 withCompletion:(CDUnknownBlockType)arg4;
+ (BOOL)shouldDeinterleaveAudioOnCS;
+ (BOOL)shouldDelayPhaticForMyriadDecision;
+ (BOOL)shouldDownloadVTAssetsOnDaemon;
+ (BOOL)shouldRunVTOnCS;
+ (unsigned long long)spIdTypeForString:(id)arg1;
+ (id)spIdVoiceProfileImportRootDir;
+ (struct AudioStreamBasicDescription)speexASBD;
+ (id)spidAudioTrainUtterancesDir;
+ (BOOL)ssrAudioLogsCountWithinPrivacyLimit;
+ (id)ssrAudioLogsDir;
+ (void)streamAudioFromFileUrl:(id)arg1 audioStreamBasicDescriptor:(struct AudioStreamBasicDescription)arg2 samplesPerStreamChunk:(unsigned long long)arg3 audioDataAvailableHandler:(CDUnknownBlockType)arg4;
+ (id)stringForCSSpIdType:(unsigned long long)arg1;
+ (id)stringForInvocationStyle:(unsigned long long)arg1;
+ (id)stringForSpeakerRecognizerType:(unsigned long long)arg1;
+ (id)stringForVoiceProfileRetrainerType:(unsigned long long)arg1;
+ (BOOL)supportAdBlocker;
+ (BOOL)supportBeepCanceller;
+ (BOOL)supportBluetoothDeviceVoiceTrigger;
+ (BOOL)supportCSTwoShotDecision;
+ (BOOL)supportCircularBuffer;
+ (BOOL)supportCompactPlus;
+ (BOOL)supportContinuousAudioFingerprint;
+ (BOOL)supportContinuousVoiceTrigger;
+ (BOOL)supportHandsFree;
+ (BOOL)supportHearstVoiceTrigger;
+ (BOOL)supportHybridEndpointer;
+ (BOOL)supportJarvisVoiceTrigger;
+ (BOOL)supportKeywordDetector;
+ (BOOL)supportLanguageDetector;
+ (BOOL)supportLazySessionActivation;
+ (BOOL)supportOpportunisticZLL;
+ (BOOL)supportPhatic;
+ (BOOL)supportPremiumAssets;
+ (BOOL)supportPremiumModel;
+ (BOOL)supportPremiumWatchAssets;
+ (BOOL)supportRaiseToSpeak;
+ (BOOL)supportRemoraVoiceTrigger;
+ (BOOL)supportSAT;
+ (BOOL)supportSelfTriggerSuppression;
+ (BOOL)supportSessionActivateDelay;
+ (BOOL)supportSmartVolume;
+ (BOOL)supportTTS;
+ (BOOL)supportZeroFilter;
+ (BOOL)supportsSpeakerRecognitionAssets;
+ (BOOL)supportsVoiceTriggerFides;
+ (double)systemUpTime;
+ (id)timeStampWithSaltGrain;
+ (struct AudioStreamBasicDescription)utteranceFileASBD;

@end

