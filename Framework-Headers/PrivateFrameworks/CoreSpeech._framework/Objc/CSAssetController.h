//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSEventMonitorDelegate-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface CSAssetController : NSObject <CSEventMonitorDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_assetsMigrationQueue;
    NSDictionary *_csAssetsDictionary;
    NSMutableDictionary *_observers;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *assetsMigrationQueue; // @synthesize assetsMigrationQueue=_assetsMigrationQueue;
@property (strong, nonatomic) NSDictionary *csAssetsDictionary; // @synthesize csAssetsDictionary=_csAssetsDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableDictionary *observers; // @synthesize observers=_observers;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;

+ (void)addKeyValuePairForQuery:(id *)arg1 assetType:(unsigned long long)arg2;
+ (id)filteredAssetsForAssets:(id)arg1 assetType:(unsigned long long)arg2 language:(id)arg3;
+ (id)filteredAssetsForFetchRemoteMetaDataForAssets:(id)arg1 assetType:(unsigned long long)arg2;
+ (unsigned long long)getEndpointAssetCurrentCompatibilityVersion;
+ (id)getEndpointAssetTypeString;
+ (id)getLanguageDetectorAssetTypeString;
+ (unsigned long long)getLanguageDetectorCurrentCompatibilityVersion;
+ (unsigned long long)getVoiceTriggerAssetCurrentCompatibilityVersion;
+ (id)getVoiceTriggerAssetTypeString;
+ (id)sharedController;
- (void).cxx_destruct;
- (void)CSEventMonitorDidReceiveEvent:(id)arg1;
- (id)_assetQueryForAssetType:(unsigned long long)arg1;
- (void)_cleanUpMobileAssetV1Directory;
- (id)_defaultDownloadOptions;
- (void)_downloadAsset:(id)arg1 withComplete:(CDUnknownBlockType)arg2;
- (void)_downloadAssetCatalogForAssetType:(unsigned long long)arg1 complete:(CDUnknownBlockType)arg2;
- (void)_fetchRemoteAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_findLatestInstalledAsset:(id)arg1;
- (id)_installedAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2;
- (void)_installedAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)_isReadyToUse;
- (void)_runAssetQuery:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_startDownloadingAsset:(id)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateFromRemoteToLocalAssets:(id)arg1 forAssetType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addObserver:(id)arg1 forAssetType:(unsigned long long)arg2;
- (id)allInstalledAssetsOfType:(unsigned long long)arg1 language:(id)arg2;
- (id)assetOfType:(unsigned long long)arg1 language:(id)arg2;
- (void)assetOfType:(unsigned long long)arg1 language:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchRemoteMetaOfType:(unsigned long long)arg1;
- (id)init;
- (id)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2;
- (void)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)installedAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2;
- (void)installedAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeObserver:(id)arg1 forAssetType:(unsigned long long)arg2;

@end
