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
    NSDictionary *_remoteDefinitionsByIdentifier;
    NSDictionary *_injectedTestDefinitionsByIdentifier;
    NSDictionary *_resourcesPathURLsByIdentifier;
    NSDictionary *_stickersPathURLsByIdentifier;
}

+ (void)_getDefinitionsAsset:(id *)arg1 resourcesAssets:(id *)arg2 stickersAssets:(id *)arg3 fromCombinedAssets:(id)arg4;
+ (void)_getNewestAsset:(id *)arg1 olderAssets:(id *)arg2 fromAssets:(id)arg3;
+ (id)_loadAchievementDefinitionsFromAsset:(id)arg1;
+ (id)_loadAchievementResourcesPathURLsFromAssets:(id)arg1;
+ (id)_loadAchievementStickersPathURLsFromAssets:(id)arg1;
+ (void)_loadLoadsRemoteDefinitions;
+ (BOOL)_loadsRemoteDefinitions;
+ (id)_resourcesAssetsGroupedByDefinitionIdentifier:(id)arg1;
+ (void)_setLoadsRemoteDefinitions:(BOOL)arg1;
+ (id)_stickersAssetsGroupedByDefinitionIdentifier:(id)arg1;
+ (void)initialize;
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
- (void)_injectDefinitionsForTesting:(id)arg1;
- (void)_queue_clearCaches;
- (BOOL)_queue_isDefinitionWithIdentifierRemotelyDefined:(id)arg1;
- (void)_stickerAssetsAvailabilityDidChange;
- (id)achievementDefinitionForIdentifier:(id)arg1;
- (id)allAchievementDefinitionIdentifiers;
- (id)allAchievementDefinitions;
- (id)init;
- (BOOL)isDefinitionWithIdentifierLoaded:(id)arg1;
- (BOOL)isDefinitionWithIdentifierRemotelyDefined:(id)arg1;
- (id)loadedRemotelyDefinedDefinitionIdentifiers;
- (id)resourcesBundleForIdentifier:(id)arg1;
- (id)serverURLWithError:(id *)arg1;
- (void)setServerURL:(id)arg1;
- (id)stickersBundleForIdentifier:(id)arg1;
- (void)updateAchievementResourcesAssetsWithFilter:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateAchievementStickersAssetsWithFilter:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateDefinitionsAssetWithCompletion:(CDUnknownBlockType)arg1;

@end
