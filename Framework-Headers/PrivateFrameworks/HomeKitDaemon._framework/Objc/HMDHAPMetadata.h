//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMProtoBufEncode-Protocol.h>

@class HAPMetadata, NSDictionary, NSNumber, NSSet, NSString;

@interface HMDHAPMetadata : HMFObject <HMProtoBufEncode>
{
    BOOL _incomplete;
    NSNumber *_version;
    NSNumber *_schemaVersion;
    NSDictionary *_rawPlist;
    HAPMetadata *_hapMetadata;
    NSSet *_hmRequiresDeviceUnlockTuples;
    NSDictionary *_hmAllowableSecuringWrites;
    NSDictionary *_hmPowerOnWriteFilter;
    NSDictionary *_hmAccessoryCategories;
    NSSet *_hmBlacklistedServices;
    NSSet *_hmBlacklistedCharacteristics;
    NSSet *_hmBlacklistedServicesFromApp;
    NSSet *_hmBlacklistedCharacteristicsFromApp;
    NSSet *_hmNotificationAutoEnabledTuples;
    NSSet *_hmBulletinBoardEnabledTuples;
    NSSet *_hmCoalesceNotificationsTuples;
    NSDictionary *_assistantServiceNameHAPTypeMap;
    NSDictionary *_assistantServiceHAPTypeNameMap;
    NSDictionary *_assistantCharacteristics;
    NSDictionary *_assistantChrHAPTypeNameMap;
    NSDictionary *_assistantUnits;
    NSDictionary *_firmwareUpdateStagingPolicies;
    NSDictionary *_firmwareUpdateAutoApplyPolicies;
}

@property (strong, nonatomic) NSDictionary *assistantCharacteristics; // @synthesize assistantCharacteristics=_assistantCharacteristics;
@property (strong, nonatomic) NSDictionary *assistantChrHAPTypeNameMap; // @synthesize assistantChrHAPTypeNameMap=_assistantChrHAPTypeNameMap;
@property (strong, nonatomic) NSDictionary *assistantServiceHAPTypeNameMap; // @synthesize assistantServiceHAPTypeNameMap=_assistantServiceHAPTypeNameMap;
@property (strong, nonatomic) NSDictionary *assistantServiceNameHAPTypeMap; // @synthesize assistantServiceNameHAPTypeMap=_assistantServiceNameHAPTypeMap;
@property (strong, nonatomic) NSDictionary *assistantUnits; // @synthesize assistantUnits=_assistantUnits;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSDictionary *firmwareUpdateAutoApplyPolicies; // @synthesize firmwareUpdateAutoApplyPolicies=_firmwareUpdateAutoApplyPolicies;
@property (strong, nonatomic) NSDictionary *firmwareUpdateStagingPolicies; // @synthesize firmwareUpdateStagingPolicies=_firmwareUpdateStagingPolicies;
@property (strong, nonatomic) HAPMetadata *hapMetadata; // @synthesize hapMetadata=_hapMetadata;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSDictionary *hmAccessoryCategories; // @synthesize hmAccessoryCategories=_hmAccessoryCategories;
@property (strong, nonatomic) NSDictionary *hmAllowableSecuringWrites; // @synthesize hmAllowableSecuringWrites=_hmAllowableSecuringWrites;
@property (strong, nonatomic) NSSet *hmBlacklistedCharacteristics; // @synthesize hmBlacklistedCharacteristics=_hmBlacklistedCharacteristics;
@property (strong, nonatomic) NSSet *hmBlacklistedCharacteristicsFromApp; // @synthesize hmBlacklistedCharacteristicsFromApp=_hmBlacklistedCharacteristicsFromApp;
@property (strong, nonatomic) NSSet *hmBlacklistedServices; // @synthesize hmBlacklistedServices=_hmBlacklistedServices;
@property (strong, nonatomic) NSSet *hmBlacklistedServicesFromApp; // @synthesize hmBlacklistedServicesFromApp=_hmBlacklistedServicesFromApp;
@property (strong, nonatomic) NSSet *hmBulletinBoardEnabledTuples; // @synthesize hmBulletinBoardEnabledTuples=_hmBulletinBoardEnabledTuples;
@property (strong, nonatomic) NSSet *hmCoalesceNotificationsTuples; // @synthesize hmCoalesceNotificationsTuples=_hmCoalesceNotificationsTuples;
@property (strong, nonatomic) NSSet *hmNotificationAutoEnabledTuples; // @synthesize hmNotificationAutoEnabledTuples=_hmNotificationAutoEnabledTuples;
@property (strong, nonatomic) NSDictionary *hmPowerOnWriteFilter; // @synthesize hmPowerOnWriteFilter=_hmPowerOnWriteFilter;
@property (strong, nonatomic) NSSet *hmRequiresDeviceUnlockTuples; // @synthesize hmRequiresDeviceUnlockTuples=_hmRequiresDeviceUnlockTuples;
@property (nonatomic) BOOL incomplete; // @synthesize incomplete=_incomplete;
@property (readonly, nonatomic) NSDictionary *rawPlist; // @synthesize rawPlist=_rawPlist;
@property (strong, nonatomic) NSNumber *schemaVersion; // @synthesize schemaVersion=_schemaVersion;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSNumber *version; // @synthesize version=_version;

+ (id)dataFromMetadataDictionaryWithKey:(id)arg1;
+ (id)getBuiltinInstance;
+ (id)getSharedInstance;
+ (id)initWithDictionary:(id)arg1 error:(id *)arg2;
+ (id)initWithURL:(id)arg1 error:(id *)arg2;
+ (BOOL)isHomedVersionSupported:(id)arg1;
+ (BOOL)isServiceType:(id)arg1 compatibleWithAccessoryCategoryType:(id)arg2;
+ (id)legacyV3DataForCloud;
+ (id)legacyV3DataForIDS;
+ (void)prepareMetadata;
+ (void)resetShouldUploadToCloudAfterHomedReady;
+ (BOOL)setSharedInstance:(id)arg1;
+ (BOOL)shouldUploadToCloudAfterHomedReady;
- (void).cxx_destruct;
- (id)aliasedHAPCharacteristicTypes;
- (id)aliasedHAPServiceTypes;
- (BOOL)allowsSecuringWriteFor:(id)arg1 withValue:(id)arg2;
- (id)audioAccessoryCategory;
- (id)autoApplyPolicyConfigurationForService:(id)arg1 category:(id)arg2;
- (id)categoryForIdentifier:(id)arg1;
- (id)categoryForOther;
- (id)categoryForType:(id)arg1;
- (id)categoryTypeFromName:(id)arg1;
- (id)characteristicNameFromType:(id)arg1;
- (id)characteristicTypeFromName:(id)arg1;
- (id)characteristicValueUnit:(id)arg1;
- (BOOL)checkTupleExistsInSet:(id)arg1 forChrType:(id)arg2 svcType:(id)arg3;
- (id)descriptionForCharacteristicType:(id)arg1;
- (id)descriptionForServiceType:(id)arg1;
- (BOOL)generateNotificationOnConfigurationForCharacteristicType:(id)arg1 serviceType:(id)arg2;
- (id)getAliasedCharacteristicTypes:(id)arg1;
- (id)getAliasedServiceType:(id)arg1;
- (id)getCharacteristicTypeAlias:(id)arg1;
- (id)getServiceTypeAlias:(id)arg1;
- (id)getStatusCharacteristicTypes:(id)arg1 forServiceType:(id)arg2;
- (id)initWithDictionary:(id)arg1 hapMetadata:(id)arg2 error:(id *)arg3;
- (BOOL)isSecondsDownCounterCharacteristicType:(id)arg1;
- (BOOL)isStandardCharacteristicType:(id)arg1;
- (BOOL)isStandardServiceType:(id)arg1;
- (BOOL)isTargetCharacteristic:(id)arg1;
- (id)mapCharacteristicValueType:(id)arg1;
- (id)mapFromAssistantCharacteristicValue:(id)arg1 name:(id)arg2;
- (id)mapFromAssistantServiceName:(id)arg1;
- (id)mapFromAssistantUnitName:(id)arg1;
- (id)mapReadCharacteristicFromAssistantName:(id)arg1;
- (id)mapToAssistantCharacteristicName:(id)arg1;
- (id)mapToAssistantCharacteristicValue:(id)arg1 name:(id)arg2 getActionType:(BOOL)arg3;
- (id)mapToAssistantServiceName:(id)arg1;
- (id)mapToAssistantServiceSubtypeName:(id)arg1;
- (id)mapToAssistantServiceSubtypeName:(id)arg1 accessoryCategory:(id)arg2;
- (id)mapToAssistantUnitName:(id)arg1;
- (id)mapWriteCharacteristicFromAssistantName:(id)arg1;
- (void)parseAndSetAllowableSecuringWrites:(id)arg1;
- (BOOL)parseAndSetAssistantCharacteristics:(id)arg1;
- (BOOL)parseAndSetAssistantMetadataWithAssistantPlist:(id)arg1;
- (BOOL)parseAndSetAssistantServices:(id)arg1;
- (BOOL)parseAndSetAssistantUnits:(id)arg1;
- (void)parseAndSetHMAccessoryFirmwareUpdatePolicies:(id)arg1;
- (void)parseAndSetHMCategories:(id)arg1;
- (BOOL)parseAndSetHMMetadataWithHMPlist:(id)arg1;
- (void)parseAndSetPowerOnWriteFilter:(id)arg1;
- (id)parseAndSetRawPlist:(id)arg1;
- (id)parseCharacteristicArray:(id)arg1;
- (id)parseHMAccessoryFirmwareUpdatePolicyCharacteristics:(id)arg1;
- (id)parseHMAccessoryFirmwareUpdatePolicyCriteria:(id)arg1;
- (id)parseHMAccessoryFirmwareUpdatePolicyServices:(id)arg1;
- (id)parseMetadataTupleSetFromPlist:(id)arg1;
- (id)parseServiceArray:(id)arg1;
- (BOOL)policyConfigurationAvailableForAllHAPServices;
- (id)protoBufObjectWithEncodingOption:(id)arg1;
- (BOOL)requiresDeviceUnlock:(id)arg1 forService:(id)arg2;
- (BOOL)requiresTimedWrite:(id)arg1 forService:(id)arg2;
- (id)serviceNameFromType:(id)arg1;
- (id)serviceSubtypeForValue:(id)arg1 forServiceType:(id)arg2;
- (id)serviceTypeFromName:(id)arg1;
- (BOOL)shouldAllowWriteToWakeSuspendedAccessoryForService:(id)arg1 characteristicType:(id)arg2 value:(id)arg3;
- (BOOL)shouldAutoEnableNotificationForCharacteristic:(id)arg1 ofService:(id)arg2;
- (BOOL)shouldCoalesceCharacteristicNotifications:(id)arg1 forService:(id)arg2;
- (BOOL)shouldEnableHomeNotificationForCharacteristicType:(id)arg1 serviceType:(id)arg2;
- (BOOL)shouldFilterChangeNotificationsForCharacteristicType:(id)arg1 serviceType:(id)arg2;
- (BOOL)shouldFilterCharacteristicOfType:(id)arg1;
- (BOOL)shouldFilterCharacteristicOfTypeFromApp:(id)arg1;
- (BOOL)shouldFilterEnableNotificationsForCharacteristicType:(id)arg1 serviceType:(id)arg2;
- (BOOL)shouldFilterServiceOfType:(id)arg1;
- (BOOL)shouldFilterServiceOfTypeFromApp:(id)arg1;
- (BOOL)shouldHomeAppShowTileForServiceType:(id)arg1;
- (BOOL)shouldNotCacheCharacteristicOfType:(id)arg1;
- (BOOL)shouldRefreshValueForCharacteristicWithType:(id)arg1 serviceType:(id)arg2;
- (id)stagingPolicyConfigurationForService:(id)arg1 category:(id)arg2;
- (id)statusHAPCharacteristicTypesForServiceType;
- (BOOL)supportsAuthorizationData:(id)arg1 forService:(id)arg2;
- (BOOL)supportsLocalization:(id)arg1;
- (id)validateAssociatedServiceType:(id)arg1 forService:(id)arg2;
- (id)xpcData:(BOOL)arg1;

@end

