//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString, NSTimeZone;

@interface _HKBehavior : NSObject
{
    NSNumber *_overridenSupportsSwimmingWorkoutSessions;
    NSNumber *_overridenEnableManateeForHSA2Accounts;
    BOOL _isDeviceSupported;
    BOOL _isAppleInternalInstall;
    BOOL _isAppleWatch;
    BOOL _isCompanionCapable;
    BOOL _hasTelephonyCapability;
    BOOL _isRunningStoreDemoMode;
    BOOL _runningInStoreDemoModeF201;
    BOOL _deviceSupportsHeartRateMotionContexts;
    BOOL _collectsCalorimetry;
    BOOL _collectsData;
    BOOL _performsWorkoutCondensation;
    BOOL _supportsAWDMetricSubmission;
    BOOL _supportsActivitySharing;
    BOOL _supportsAppSubscriptions;
    BOOL _supportsCloudSync;
    BOOL _supportsFeatureAvailabilityAssets;
    BOOL _supportsHeartRateDataCollection;
    BOOL _supportsNanoSync;
    BOOL _supportsRemoteAuthorization;
    BOOL _supportsSampleExpiration;
    BOOL _supportsWorkouts;
    BOOL _futureMigrationsEnabled;
    BOOL _isTestingDevice;
    NSString *_hostWriteAuthorizationUsageDescription;
    NSString *_hostReadAuthorizationUsageDescription;
    NSString *_hostClinicalReadAuthorizationUsageDescription;
}

@property (nonatomic) BOOL collectsCalorimetry; // @synthesize collectsCalorimetry=_collectsCalorimetry;
@property (nonatomic) BOOL collectsData; // @synthesize collectsData=_collectsData;
@property (readonly, copy, nonatomic) NSString *currentDeviceClass;
@property (readonly, copy, nonatomic) NSString *currentDeviceDisplayName;
@property (readonly, copy, nonatomic) NSString *currentDeviceManufacturer;
@property (readonly, copy, nonatomic) NSString *currentDeviceName;
@property (readonly, copy, nonatomic) NSString *currentDeviceProductType;
@property (readonly, nonatomic) unsigned long long currentDiskSpaceAvailable;
@property (readonly, nonatomic) NSDictionary *currentDiskUsage;
@property (readonly, copy, nonatomic) NSString *currentInternalDeviceModel;
@property (readonly, copy, nonatomic) NSString *currentOSBuild;
@property (readonly, copy, nonatomic) NSString *currentOSName;
@property (readonly, copy, nonatomic) NSString *currentOSVersion;
@property (readonly, nonatomic) CDStruct_f6aba300 currentOSVersionStruct;
@property (nonatomic) BOOL deviceSupportsHeartRateMotionContexts; // @synthesize deviceSupportsHeartRateMotionContexts=_deviceSupportsHeartRateMotionContexts;
@property (nonatomic) BOOL futureMigrationsEnabled; // @synthesize futureMigrationsEnabled=_futureMigrationsEnabled;
@property (nonatomic) BOOL hasTelephonyCapability; // @synthesize hasTelephonyCapability=_hasTelephonyCapability;
@property (copy, nonatomic) NSString *hostClinicalReadAuthorizationUsageDescription; // @synthesize hostClinicalReadAuthorizationUsageDescription=_hostClinicalReadAuthorizationUsageDescription;
@property (copy, nonatomic) NSString *hostReadAuthorizationUsageDescription; // @synthesize hostReadAuthorizationUsageDescription=_hostReadAuthorizationUsageDescription;
@property (copy, nonatomic) NSString *hostWriteAuthorizationUsageDescription; // @synthesize hostWriteAuthorizationUsageDescription=_hostWriteAuthorizationUsageDescription;
@property (nonatomic) BOOL isAppleInternalInstall; // @synthesize isAppleInternalInstall=_isAppleInternalInstall;
@property (nonatomic) BOOL isAppleWatch; // @synthesize isAppleWatch=_isAppleWatch;
@property (nonatomic) BOOL isCompanionCapable; // @synthesize isCompanionCapable=_isCompanionCapable;
@property (readonly, nonatomic) BOOL isCurrentDeviceN2XA;
@property (nonatomic) BOOL isDeviceSupported; // @synthesize isDeviceSupported=_isDeviceSupported;
@property (readonly, nonatomic) BOOL isRunningStoreDemoMode; // @synthesize isRunningStoreDemoMode=_isRunningStoreDemoMode;
@property (nonatomic) BOOL isTestingDevice; // @synthesize isTestingDevice=_isTestingDevice;
@property (readonly, copy, nonatomic) NSTimeZone *localTimeZone;
@property (readonly, nonatomic, getter=isManateeEnabledForHSA2Accounts) BOOL manateeEnabledForHSA2Accounts;
@property (nonatomic) BOOL performsWorkoutCondensation; // @synthesize performsWorkoutCondensation=_performsWorkoutCondensation;
@property (readonly, nonatomic) BOOL runningInStoreDemoModeF201; // @synthesize runningInStoreDemoModeF201=_runningInStoreDemoModeF201;
@property (nonatomic) BOOL supportsAWDMetricSubmission; // @synthesize supportsAWDMetricSubmission=_supportsAWDMetricSubmission;
@property (nonatomic) BOOL supportsActivitySharing; // @synthesize supportsActivitySharing=_supportsActivitySharing;
@property (nonatomic) BOOL supportsAppSubscriptions; // @synthesize supportsAppSubscriptions=_supportsAppSubscriptions;
@property (nonatomic) BOOL supportsCloudSync; // @synthesize supportsCloudSync=_supportsCloudSync;
@property (readonly, nonatomic) BOOL supportsFeatureAvailabilityAssets; // @synthesize supportsFeatureAvailabilityAssets=_supportsFeatureAvailabilityAssets;
@property (nonatomic) BOOL supportsHeartRateDataCollection; // @synthesize supportsHeartRateDataCollection=_supportsHeartRateDataCollection;
@property (nonatomic) BOOL supportsNanoSync; // @synthesize supportsNanoSync=_supportsNanoSync;
@property (nonatomic) BOOL supportsRemoteAuthorization; // @synthesize supportsRemoteAuthorization=_supportsRemoteAuthorization;
@property (nonatomic) BOOL supportsSampleExpiration; // @synthesize supportsSampleExpiration=_supportsSampleExpiration;
@property (nonatomic) BOOL supportsSwimmingWorkoutSessions;
@property (nonatomic) BOOL supportsWorkouts; // @synthesize supportsWorkouts=_supportsWorkouts;
@property (readonly, nonatomic) unsigned long long totalDiskCapacity;

+ (BOOL)_deviceSupportsHeartRateMotionContexts;
+ (BOOL)_futureMigrationsEnabled;
+ (BOOL)_hasCompletedBuddy;
+ (BOOL)_hasTelephonyCapability;
+ (BOOL)_isAppleInternalInstall;
+ (BOOL)_isDeviceSupported;
+ (BOOL)_isForceBuddyEnabled;
+ (BOOL)_isRunningStoreDemoMode;
+ (BOOL)_performsWorkoutCondensation;
+ (BOOL)_readEnableManateeForHSA2AccountsFromHealthdDefaults;
+ (BOOL)_runningInStoreDemoModeF201;
+ (long long)_runningInStoreDemoModeFProgramNumber;
+ (BOOL)_shouldShowBuddy;
+ (id)_simulatorDefaultName;
+ (id)_simulatorSettings;
+ (BOOL)activePairedWatchHasSmartFitnessCoaching;
+ (BOOL)activePairedWatchSupportsBradycardiaDetection;
+ (BOOL)activePairedWatchSupportsHeartRateMotionContexts;
+ (id)activePairedWatchWithoutSOSMedicalIDContactsSupport;
+ (BOOL)allPairedWatchesMeetMinimumVersion:(int)arg1;
+ (BOOL)allPairedWatchesSupportBradycardiaDetection;
+ (BOOL)allPairedWatchesSupportHeartRateMotionContexts;
+ (BOOL)anyPairedWatchHasFlightsClimbedCapability;
+ (BOOL)anyPairedWatchHasSOSModeCapability;
+ (id)behaviorQueue;
+ (id)currentDeviceClass;
+ (id)currentDeviceDisplayName;
+ (id)currentDeviceManufacturer;
+ (id)currentDeviceName;
+ (id)currentDeviceProductType;
+ (id)currentOSBuild;
+ (id)currentOSVersion;
+ (CDStruct_f6aba300)currentOSVersionStruct;
+ (BOOL)currentlyPairedWatchMeetsMinimumVersion:(int)arg1;
+ (void)disableForceBuddy;
+ (BOOL)hasCompletedBuddy;
+ (BOOL)hasPairedWatch;
+ (BOOL)hasTelephonyCapability;
+ (BOOL)isAppleInternalInstall;
+ (BOOL)isDeviceSupported;
+ (BOOL)isManateeEnabledByDefault;
+ (BOOL)isRunningStoreDemoMode;
+ (BOOL)isTestingDevice;
+ (void)resetSharedBehavior;
+ (BOOL)runningInStoreDemoModeF201;
+ (void)setSharedBehavior:(id)arg1;
+ (id)sharedBehavior;
+ (BOOL)shouldShowBuddy;
+ (BOOL)showSensitiveLogItems;
+ (int)syncProtocolVersionForNRDevice:(id)arg1;
+ (int)syncProtocolVersionForSystemBuildVersion:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (void)setManateeEnabledForHSA2AccountsOverride:(BOOL)arg1;

@end

