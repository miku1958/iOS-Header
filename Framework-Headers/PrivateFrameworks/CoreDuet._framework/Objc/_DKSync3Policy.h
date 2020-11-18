//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKSync3PolicyCommonMethods-Protocol.h>

@class NSArray, NSDictionary, NSNumber;

@interface _DKSync3Policy : NSObject <_DKSync3PolicyCommonMethods>
{
    BOOL _syncDisabled;
    BOOL _isSingleDevice;
    BOOL _isOnPower;
    NSDictionary *_properties;
    NSNumber *_version;
    unsigned long long _triggeredSyncDelayInSeconds;
    long long _mask;
    NSArray *_sourceDevices;
    NSArray *_destinationDevices;
    NSArray *_transportPolicies;
    NSArray *_featurePolicies;
}

@property (strong, nonatomic) NSArray *destinationDevices; // @synthesize destinationDevices=_destinationDevices;
@property (strong, nonatomic) NSArray *featurePolicies; // @synthesize featurePolicies=_featurePolicies;
@property (nonatomic) BOOL isOnPower; // @synthesize isOnPower=_isOnPower;
@property (nonatomic) BOOL isSingleDevice; // @synthesize isSingleDevice=_isSingleDevice;
@property (nonatomic) long long mask; // @synthesize mask=_mask;
@property (strong, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property (strong, nonatomic) NSArray *sourceDevices; // @synthesize sourceDevices=_sourceDevices;
@property (nonatomic) BOOL syncDisabled; // @synthesize syncDisabled=_syncDisabled;
@property (strong, nonatomic) NSArray *transportPolicies; // @synthesize transportPolicies=_transportPolicies;
@property (nonatomic) unsigned long long triggeredSyncDelayInSeconds; // @synthesize triggeredSyncDelayInSeconds=_triggeredSyncDelayInSeconds;
@property (strong, nonatomic) NSNumber *version; // @synthesize version=_version;

+ (void)_possiblyAddToArray:(id)arg1 ifTransport:(long long)arg2 existsInTransports:(long long)arg3;
+ (void)addToDictionary:(id)arg1 streamNamesToAlwaysSync:(id)arg2;
+ (void)clearPolicyCache;
+ (BOOL)cloudSyncDisabled;
+ (id)computePolicyDictionaryWithDefaultSyncPolicyDict:(id)arg1 syncPolicyOverridesDict:(id)arg2 topLevelDefaultsPolicy:(id)arg3;
+ (id)computedPolicyDictionary;
+ (id)configurationPlistForFilename:(id)arg1;
+ (id)deviceTypeWithHardwareModel:(id)arg1;
+ (id)disabledPolicy;
+ (void)fillPolicyCache:(id)arg1 bySplittingPolicyDictionary:(id)arg2;
+ (void)handleDownloadSyncPolicyResponse:(id)arg1 data:(id)arg2 error:(id)arg3;
+ (id)localDeviceType;
+ (void)overrideDictionary:(id)arg1 withOverrides:(id)arg2;
+ (id)policyCache;
+ (id)policyForTransports:(long long)arg1 features:(id)arg2 sourceDevices:(id)arg3 destinationDevices:(id)arg4 isSingleDevice:(BOOL)arg5 isOnPower:(BOOL)arg6;
+ (void)possiblyDownloadSyncPolicyWithPolicyDownloadIntervalInDays:(unsigned long long)arg1;
+ (id)productVersion;
+ (BOOL)rapportSyncDisabled;
+ (void)setOkToDownloadPolicyUpdates:(BOOL)arg1;
+ (id)syncPolicyConfigPathForFilename:(id)arg1;
+ (id)userDefaults;
- (void).cxx_destruct;
- (BOOL)_anyFeaturePropertyValueWithKey:(id)arg1 getterBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)_maximumPropertyValueWithKey:(id)arg1 policies:(id)arg2 skipZeroValues:(BOOL)arg3;
- (unsigned long long)_minimumPropertyValueWithKey:(id)arg1 policies:(id)arg2 skipZeroValues:(BOOL)arg3;
- (BOOL)canDeferSyncOperationWithSyncType:(id)arg1;
- (BOOL)canPerformSyncOperationWithSyncType:(id)arg1 lastSyncDate:(id)arg2 lastDaySyncCount:(unsigned long long)arg3;
- (BOOL)canPushTriggerSync;
- (id)description;
- (id)enabledFeaturesForSyncType:(id)arg1;
- (BOOL)highPriorityForSyncDownWithSyncType:(id)arg1;
- (BOOL)highPriorityForSyncUpWithSyncType:(id)arg1 lastSyncDate:(id)arg2;
- (id)init;
- (id)initWithProperties:(id)arg1 transports:(long long)arg2 sourceDevices:(id)arg3 destinationDevices:(id)arg4 isSingleDevice:(BOOL)arg5 isOnPower:(BOOL)arg6 transportPolicies:(id)arg7 featurePolicies:(id)arg8;
- (id)initWithTransports:(long long)arg1 features:(id)arg2 sourceDevices:(id)arg3 destinationDevices:(id)arg4 isSingleDevice:(BOOL)arg5 isOnPower:(BOOL)arg6;
- (unsigned long long)maximumSyncsPerDayMaximumValue;
- (unsigned long long)maximumSyncsPerDayMinimumValue;
- (unsigned long long)minimumTimeBetweenSyncsInSecondsMaximumValue;
- (unsigned long long)minimumTimeBetweenSyncsInSecondsMinimumValue;
- (unsigned long long)periodicSyncCadenceInMinutesMaximumValue;
- (unsigned long long)periodicSyncCadenceInMinutesMinimumValue;
- (id)queryStartDateWithSyncType:(id)arg1 streamName:(id)arg2 lastSyncDate:(id)arg3 lastDaySyncCount:(unsigned long long)arg4;
- (id)queryStartDateWithSyncType:(id)arg1 streamName:(id)arg2 lastSyncDate:(id)arg3 lastDaySyncCount:(unsigned long long)arg4 previousHighWaterMark:(id)arg5;
- (unsigned long long)singleDevicePeriodicSyncCadenceInDaysMaximumValue;
- (unsigned long long)singleDevicePeriodicSyncCadenceInDaysMinimumValue;
- (id)streamNamesToSync;
- (double)timeIntervalBetweenSyncs;
- (double)timeIntervalBetweenSyncsWithUrgency:(unsigned long long)arg1;

@end
