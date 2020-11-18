//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CKBehaviorOptions : NSObject
{
    int _mcToken;
    int _ckToken;
    NSMutableDictionary *_cachedPrefs;
    NSObject<OS_dispatch_queue> *_cachedPrefsQueue;
}

@property (strong, nonatomic) NSMutableDictionary *cachedPrefs; // @synthesize cachedPrefs=_cachedPrefs;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *cachedPrefsQueue; // @synthesize cachedPrefsQueue=_cachedPrefsQueue;
@property (nonatomic) int ckToken; // @synthesize ckToken=_ckToken;
@property (nonatomic) int mcToken; // @synthesize mcToken=_mcToken;

+ (id)sharedOptions;
- (void).cxx_destruct;
- (BOOL)CFNetworkLogging;
- (const char *)CKCtlPrompt;
- (BOOL)CKTimeLogging;
- (BOOL)CKTimeLoggingDetailed;
- (double)PCSCacheMinTime;
- (unsigned long long)PCSCacheSize;
- (int)PCSRetryCount;
- (id)_behaviorContainerOptionForKey:(id)arg1;
- (id)_behaviorOptionForKey:(id)arg1;
- (BOOL)_buildIsOverridden;
- (id)_getArrayOptionForKey:(id)arg1 defaultValue:(id)arg2;
- (BOOL)_getBoolOptionForKey:(id)arg1 defaultValue:(BOOL)arg2;
- (double)_getDoubleOptionForKey:(id)arg1 defaultValue:(double)arg2;
- (int)_getIntOptionForKey:(id)arg1 defaultValue:(int)arg2;
- (id)_getStringOptionForKey:(id)arg1 defaultValue:(id)arg2;
- (id)_getStringOptionLockedForKey:(id)arg1 defaultValue:(id)arg2;
- (id)_init;
- (void)_setPref:(id)arg1 forKey:(id)arg2;
- (void)_startListeningForNotifications;
- (id)_urlForKey:(id)arg1 defaultURLString:(id)arg2;
- (unsigned long long)assetEvictionGracePeriodOnHighWatermarkWithDefaultValue:(unsigned long long)arg1;
- (unsigned long long)assetEvictionGracePeriodWithDefaultValue:(unsigned long long)arg1;
- (int)backgroundSessionConnectionPoolLimitWithDefaultValue:(int)arg1;
- (id)buildVersion;
- (int)cachedRecordExpiryTime;
- (int)clientThrottleQueueWidth;
- (BOOL)compressRequests;
- (id)configBaseURL;
- (id)customCloudDBBaseURL;
- (id)customCodeServiceBaseURL;
- (id)customDeviceServiceBaseURL;
- (id)customShareServiceBaseURL;
- (void)dealloc;
- (double)defaultRequestTimeout;
- (double)defaultResourceTimeout;
- (int)defaultRetryAfter;
- (BOOL)disableCaching;
- (BOOL)enableMMCSMetricsWithDefaultValue:(BOOL)arg1;
- (BOOL)enableMescal;
- (BOOL)evictRecentAssets;
- (long long)flowControlBudget;
- (long long)flowControlBudgetOverride;
- (double)flowControlRegeneration;
- (double)flowControlRegenerationOverride;
- (BOOL)isAppleInternalInstall;
- (BOOL)logTraffic;
- (BOOL)logTrafficToTextFile;
- (int)longlivedOperationMaxRetryCount;
- (int)longlivedOperationThrottlingRetryCount;
- (unsigned long long)maxBatchSize;
- (unsigned long long)maxPackageDownloadsPerBatchWithDefaultValue:(unsigned long long)arg1;
- (unsigned long long)maxPackageUploadsPerBatchWithDefaultValue:(unsigned long long)arg1;
- (double)maxRecentProxyAge;
- (double)maximumFetchWaitTime;
- (double)maximumThrottleSeconds;
- (double)maximumWaitAfterFetchRequest;
- (double)operationTimeout;
- (BOOL)optimisticPCS;
- (id)otherAccountsWithDefaultValue:(id)arg1;
- (double)packageGCGracePeriod;
- (double)packageGCPeriod;
- (id)primaryAccountEmailOverride;
- (id)primaryAccountPasswordOverride;
- (id)productName;
- (id)productVersion;
- (double)publicIdentitiesExpirationTimeout;
- (unsigned long long)recentProxiesToSave;
- (unsigned long long)recordCacheSizeLimit;
- (BOOL)sandboxCloudD;
- (unsigned long long)savedErrorCount;
- (BOOL)sendDebugHeader;
- (int)serverIDExpiryTime;
- (void)setBuildVersion:(id)arg1;
- (void)setCFNetworkLogging:(BOOL)arg1;
- (void)setCKCtlPrompt:(char *)arg1;
- (void)setCKTimeLogging:(BOOL)arg1;
- (void)setCKTimeLoggingDetailed:(BOOL)arg1;
- (void)setCachedRecordExpiryTime:(int)arg1;
- (void)setCompressRequests:(BOOL)arg1;
- (void)setConfigBaseURL:(id)arg1;
- (void)setCustomCloudDBBaseURL:(id)arg1;
- (void)setCustomCodeServiceBaseURL:(id)arg1;
- (void)setCustomDeviceServiceBaseURL:(id)arg1;
- (void)setCustomShareServiceBaseURL:(id)arg1;
- (void)setDefaultRequestTimeout:(double)arg1;
- (void)setDefaultResourceTimeout:(double)arg1;
- (void)setDisableCaching:(BOOL)arg1;
- (void)setEnableMescal:(BOOL)arg1;
- (void)setLogTraffic:(BOOL)arg1;
- (void)setLogTrafficToTextFile:(BOOL)arg1;
- (void)setModTimeInAssetCacheEviction:(BOOL)arg1;
- (void)setOperationTimeout:(double)arg1;
- (void)setOptimisticPCS:(BOOL)arg1;
- (void)setPrimaryAccountEmailOverride:(id)arg1;
- (void)setPrimaryAccountPasswordOverride:(id)arg1;
- (void)setProductName:(id)arg1;
- (void)setProductVersion:(id)arg1;
- (void)setSendDebugHeader:(BOOL)arg1;
- (void)setServerIDExpiryTime:(int)arg1;
- (void)setSetupBaseURL:(id)arg1;
- (void)setShouldProfileSQL:(BOOL)arg1;
- (void)setSqlBatchCount:(long long)arg1;
- (void)setSqlBatchTime:(double)arg1;
- (void)setTestRunIDHeader:(id)arg1;
- (void)setTrafficLogMaximumDataSize:(int)arg1;
- (void)setUseBackgroundSessions:(BOOL)arg1;
- (void)setUseEncryption:(BOOL)arg1;
- (void)setUsePreauth:(BOOL)arg1;
- (void)setUseStingray:(BOOL)arg1;
- (id)setupBaseURL;
- (double)shareAcceptorRetrievingDialogDelay;
- (double)shareAcceptorRetrievingDialogMinPeriod;
- (BOOL)shouldDecryptRecordsBeforeSave;
- (BOOL)shouldLogProtobufBinary;
- (BOOL)shouldProfileSQL;
- (long long)sqlBatchCount;
- (double)sqlBatchTime;
- (id)testRunIDHeader;
- (int)trafficLogMaximumDataSize;
- (int)trafficLogQueueWidth;
- (BOOL)useBackgroundSessions;
- (BOOL)useEncryption;
- (BOOL)useModTimeInAssetCacheEviction;
- (BOOL)usePreauth;
- (BOOL)useStingray;
- (BOOL)validateMescalResponses;
- (id)vettedEmailsTestFormat;

@end

