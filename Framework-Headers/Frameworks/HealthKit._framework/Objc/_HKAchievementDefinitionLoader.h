//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, _HKMobileAssetDownloadManager;
@protocol OS_dispatch_queue;

@interface _HKAchievementDefinitionLoader : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    int _externalDefinitionsChangedNotificationCount;
    _HKMobileAssetDownloadManager *_assetDownloadManager;
    NSDictionary *_allDefinitionsByIdentifier;
    NSDictionary *_builtinDefinitionsByIdentifier;
    NSDictionary *_remoteDefinitionsByIdentifier;
    NSDictionary *_injectedTestDefinitionsByIdentifier;
    NSDictionary *_resourcesPathURLsByIdentifier;
    NSDictionary *_stickersPathURLsByIdentifier;
}

+ (id)_achievementAssetPathURLsByIdentifier:(id)arg1;
+ (id)_assetsGroupedByDefinitionIdentifier:(id)arg1;
+ (id)_definitionIdentifiersFromAssets:(id)arg1;
+ (id)_findAchievementAssetsToDownload:(id *)arg1 remove:(id *)arg2 installed:(id *)arg3 amongAssets:(id)arg4 definitions:(id)arg5 withFilterBlock:(CDUnknownBlockType)arg6;
+ (void)_getDefinitionsAsset:(id *)arg1 resourcesAssets:(id *)arg2 stickersAssets:(id *)arg3 installedOnly:(BOOL)arg4 fromCombinedAssets:(id)arg5;
+ (void)_getNewestAsset:(id *)arg1 olderAssets:(id *)arg2 installedOnly:(BOOL)arg3 fromAssets:(id)arg4;
+ (id)_loadAchievementDefinitionsFromAsset:(id)arg1;
+ (void)_loadLoadsRemoteDefinitions;
+ (BOOL)_loadsRemoteDefinitions;
+ (void)_setLoadsRemoteDefinitions:(BOOL)arg1;
+ (void)initialize;
+ (id)serverURLWithError:(id *)arg1;
+ (void)setServerURL:(id)arg1;
+ (id)sharedLoader;
- (void).cxx_destruct;
- (void)_achievementAssetsDidChangeWithAssets:(id)arg1 postDarwinNotification:(BOOL)arg2;
- (id)_achievementDefinitionsByIdentifier;
- (void)_achievementDefinitionsChangedExternally;
- (id)_allAchievementResourcesPredicate;
- (id)_allAchievementStickersPredicate;
- (void)_clearCaches;
- (void)_clearInjectedDefinitionsForTesting;
- (id)_compatibilityVersionPredicate;
- (id)_definitionsPlistPredicate;
- (void)_fetchCurrentAssetsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_injectDefinitionsForTesting:(id)arg1;
- (void)_queue_clearCaches;
- (BOOL)_queue_isDefinitionWithIdentifierRemotelyDefined:(id)arg1;
- (void)_queue_updateStickerAvailabilityWithDownloadedAssets:(id)arg1 usingFilter:(id)arg2;
- (void)_stickerAvailabilityDidChange;
- (id)achievementDefinitionForIdentifier:(id)arg1;
- (id)allAchievementDefinitionIdentifiers;
- (id)allAchievementDefinitions;
- (id)allRemotelyDefinedDefinitionIdentifiers;
- (id)init;
- (BOOL)isDefinitionWithIdentifierLoaded:(id)arg1;
- (BOOL)isDefinitionWithIdentifierRemotelyDefined:(id)arg1;
- (id)loadedRemotelyDefinedDefinitionIdentifiers;
- (id)resourcesBundleForIdentifier:(id)arg1;
- (id)stickersBundleForIdentifier:(id)arg1;
- (void)updateAchievementResourcesAssetsRemovingExpired:(BOOL)arg1 withFilter:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateAchievementStickersAssetsRemovingExpired:(BOOL)arg1 withFilter:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateDefinitionsAssetWithCompletion:(CDUnknownBlockType)arg1;

@end

