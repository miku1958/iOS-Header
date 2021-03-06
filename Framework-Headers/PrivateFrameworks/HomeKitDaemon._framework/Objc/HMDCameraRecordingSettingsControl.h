//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDCameraRecordingGeneralConfiguration, HMDCameraRecordingSelectedConfiguration, HMDCameraRecordingSupportedAudioConfiguration, HMDCameraRecordingSupportedVideoConfiguration, HMDHAPAccessory, HMDService, NSArray, NSDate, NSDictionary, NSNumber, NSObject, NSString;
@protocol HMDCameraRecordingSettingsControlDelegate, OS_dispatch_queue;

@interface HMDCameraRecordingSettingsControl : HMFObject <HMFLogging>
{
    BOOL _configureCameraInProgress;
    BOOL _canConfigureCameraForRecording;
    BOOL _didTriggerABCForConfigure;
    id<HMDCameraRecordingSettingsControlDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDHAPAccessory *_accessory;
    HMDService *_recordingService;
    NSDictionary *_recordingConfigurationOverrides;
    HMDCameraRecordingGeneralConfiguration *_supportedRecordingConfiguration;
    HMDCameraRecordingSupportedVideoConfiguration *_supportedVideoConfiguration;
    HMDCameraRecordingSupportedAudioConfiguration *_supportedAudioConfiguration;
    NSDictionary *_characteristicByType;
    HMDCameraRecordingSelectedConfiguration *_currentSelectedConfiguration;
    NSString *_clientIdentifier;
    NSDate *_configureStartDate;
}

@property (readonly, weak) HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property (readonly, getter=isCameraConfiguredForRecording) BOOL cameraConfiguredForRecording;
@property BOOL canConfigureCameraForRecording; // @synthesize canConfigureCameraForRecording=_canConfigureCameraForRecording;
@property (copy) NSDictionary *characteristicByType; // @synthesize characteristicByType=_characteristicByType;
@property (readonly, copy) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property BOOL configureCameraInProgress; // @synthesize configureCameraInProgress=_configureCameraInProgress;
@property (strong) NSDate *configureStartDate; // @synthesize configureStartDate=_configureStartDate;
@property (readonly, copy) NSNumber *configuredBitRate;
@property (readonly) double configuredFragmentDuration;
@property (readonly, copy) NSNumber *configuredIFrameInterval;
@property (readonly, copy) NSNumber *configuredImageHeight;
@property (readonly, copy) NSNumber *configuredImageWidth;
@property (readonly) double configuredPrebufferDuration;
@property (strong) HMDCameraRecordingSelectedConfiguration *currentSelectedConfiguration; // @synthesize currentSelectedConfiguration=_currentSelectedConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<HMDCameraRecordingSettingsControlDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property BOOL didTriggerABCForConfigure; // @synthesize didTriggerABCForConfigure=_didTriggerABCForConfigure;
@property (readonly) unsigned long long hash;
@property (strong) NSDictionary *recordingConfigurationOverrides; // @synthesize recordingConfigurationOverrides=_recordingConfigurationOverrides;
@property (readonly) HMDService *recordingService; // @synthesize recordingService=_recordingService;
@property (readonly) Class superclass;
@property (strong) HMDCameraRecordingSupportedAudioConfiguration *supportedAudioConfiguration; // @synthesize supportedAudioConfiguration=_supportedAudioConfiguration;
@property (strong) HMDCameraRecordingGeneralConfiguration *supportedRecordingConfiguration; // @synthesize supportedRecordingConfiguration=_supportedRecordingConfiguration;
@property (strong) HMDCameraRecordingSupportedVideoConfiguration *supportedVideoConfiguration; // @synthesize supportedVideoConfiguration=_supportedVideoConfiguration;
@property (readonly) NSArray *videoConfigurationsByPreferenceOrder;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (id)audioBitRateForCodecConfiguration:(id)arg1;
+ (id)audioCodecForCodecConfiguration:(id)arg1;
+ (id)audioConfigurationsByPreferenceOrder;
+ (id)h264ProfileForCodecConfiguration:(id)arg1;
+ (BOOL)isSupportedAudioCodec:(id)arg1;
+ (BOOL)isSupportedH264Profile:(id)arg1;
+ (BOOL)isSupportedVideoCodec:(id)arg1;
+ (id)logCategory;
+ (id)videoCodecForCodecConfiguration:(id)arg1;
- (void).cxx_destruct;
- (void)_configureCameraRecordingSettings;
- (void)_handleSelectedCameraRecordingConfigurationReadResponse:(id)arg1;
- (void)_handleSupportedConfigurationCharacteristicsReadResponse:(id)arg1;
- (id)_parseResponse:(id)arg1 forCharacteristicType:(id)arg2;
- (id)_parseSelectedRecordingConfiguration:(id)arg1;
- (id)_parseSupportedAudioConfiguration:(id)arg1;
- (id)_parseSupportedRecordingConfiguration:(id)arg1;
- (id)_parseSupportedVideoConfiguration:(id)arg1;
- (id)_preferredAudioConfigurationOverride;
- (id)_preferredVideoConfigurationOverride;
- (void)_readCameraRecordingSettings;
- (void)_readSelectedCameraRecordingConfiguration;
- (void)_readSupportedCameraRecordingConfiguration;
- (id)_recordingAudioConfiguration;
- (id)_recordingGeneralConfiguration;
- (id)_recordingVideoConfiguration;
- (void)_selectedConfigurationDidUpdateTo:(id)arg1;
- (void)_setSelectedRecordingConfiguration:(id)arg1;
- (void)configureCameraRecordingSettings;
- (void)dealloc;
- (void)handleAccessoryConnected:(id)arg1;
- (void)handleAccessoryDisconnected:(id)arg1;
- (void)handleAccessoryIsNotConfiguredError;
- (void)handleCameraProfileSettingsDidWriteToAccessory:(id)arg1;
- (void)handleCharacteristicValueUpdated:(id)arg1;
- (void)handleCharacteristicsUpdated:(id)arg1;
- (void)handleHomePersonManagerSettingsDidChangeNotification:(id)arg1;
- (id)initWithWorkQueue:(id)arg1 accessory:(id)arg2 recordingManagementService:(id)arg3;
- (id)logIdentifier;
- (void)reconfigureCameraRecordingSettingsWithReason:(id)arg1;
- (void)start;
- (void)triggerABCForConfigure;
- (void)updateCanConfigureCameraForRecording;

@end

