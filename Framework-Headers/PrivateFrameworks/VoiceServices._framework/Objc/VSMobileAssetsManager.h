//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface VSMobileAssetsManager : NSObject
{
    NSObject<OS_dispatch_queue> *_cacheConcurrentQueue;
    NSObject<OS_dispatch_queue> *_assetQueryQueue;
    NSMutableDictionary *_voiceSelectionCache;
    NSMutableDictionary *_voiceResourceCache;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *assetQueryQueue; // @synthesize assetQueryQueue=_assetQueryQueue;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *cacheConcurrentQueue; // @synthesize cacheConcurrentQueue=_cacheConcurrentQueue;
@property (strong, nonatomic) NSMutableDictionary *voiceResourceCache; // @synthesize voiceResourceCache=_voiceResourceCache;
@property (strong, nonatomic) NSMutableDictionary *voiceSelectionCache; // @synthesize voiceSelectionCache=_voiceSelectionCache;

+ (void)amendVoiceWithDefaultSettings:(id)arg1;
+ (id)bundleIdentifierForVoiceType:(long long)arg1;
+ (id)getLatestAssetFromArray:(id)arg1;
+ (id)installedAssetsForType:(long long)arg1 voicename:(id)arg2 language:(id)arg3 gender:(long long)arg4 footprint:(long long)arg5;
+ (id)installedVoiceResources;
+ (BOOL)isVoiceAssetWellDefined:(id)arg1;
+ (id)pickCorrectAssetFromLocalAssets:(id)arg1;
+ (id)preinstallAssetsDirectory;
+ (id)queryForType:(long long)arg1 voicename:(id)arg2 language:(id)arg3 gender:(long long)arg4 footprint:(long long)arg5 localOnly:(BOOL)arg6;
+ (id)queryForVoiceResourceAsset:(id)arg1 localOnly:(BOOL)arg2;
+ (id)selectVoiceForLang:(id)arg1 type:(long long)arg2 gender:(long long)arg3 footprint:(long long)arg4;
+ (id)selectVoiceResourceAssetForLanguage:(id)arg1;
+ (id)sharedManager;
+ (id)voiceResourceFromAsset:(id)arg1;
+ (long long)voiceTypeForBundleIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)_builtInVoiceForLanguage:(id)arg1;
- (void)_downloadAsset:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_downloadAsset:(id)arg1 withOptions:(id)arg2 progressHandler:(CDUnknownBlockType)arg3;
- (id)_localVoiceForLanguage:(id)arg1 gender:(long long)arg2;
- (id)_nonCacheVoiceResourcesAssetsForLanguage:(id)arg1;
- (id)_nonCacheVoiceSelectionForLanguage:(id)arg1 type:(long long)arg2 gender:(long long)arg3 footprint:(long long)arg4;
- (id)activeVoiceAssets;
- (void)amendVoiceWithDefaultSettings:(id)arg1;
- (void)cancelDownload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cleanOldVoiceResources;
- (id)cleanUnusedVoiceAssets;
- (void)downloadVoiceAsset:(id)arg1 useBattery:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)downloadVoiceAsset:(id)arg1 useBattery:(BOOL)arg2 progressUpdateHandler:(CDUnknownBlockType)arg3;
- (void)downloadVoiceResource:(id)arg1 useBattery:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)inactiveVoiceAssets;
- (id)init;
- (id)installedAssetsForType:(long long)arg1 voicename:(id)arg2 language:(id)arg3 gender:(long long)arg4 footprint:(long long)arg5;
- (id)installedVoiceResources;
- (id)legacyLocalVocalizerVoiceAssetForLanguage:(id)arg1;
- (id)preinstallAssetsMetadata;
- (id)preinstalledVoicesForLanguage:(id)arg1 gender:(long long)arg2;
- (BOOL)purgeAsset:(id)arg1;
- (void)reinstallVoiceData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeVoiceAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeVoiceResource:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetCache;
- (id)selectPreinstalledVoiceForLanguage:(id)arg1 gender:(long long)arg2;
- (id)selectVoiceForLang:(id)arg1 type:(long long)arg2 gender:(long long)arg3 footprint:(long long)arg4;
- (id)selectVoiceResourceAssetForLanguage:(id)arg1;
- (id)voiceAssetFromPreinstallMetadata:(id)arg1;
- (id)voiceAssetWithName:(id)arg1 localOnly:(BOOL)arg2 outError:(id *)arg3;
- (id)voiceDataFromAsset:(id)arg1;

@end

