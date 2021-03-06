//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTService.h>

@class RTAssetProcessor, RTDefaultsManager, RTXPCActivityManager;

@interface RTAssetManager : RTService
{
    RTAssetProcessor *_assetProcessor;
    RTDefaultsManager *_defaultsManager;
    RTXPCActivityManager *_xpcActivityManager;
}

@property (strong, nonatomic) RTAssetProcessor *assetProcessor; // @synthesize assetProcessor=_assetProcessor;
@property (strong, nonatomic) RTDefaultsManager *defaultsManager; // @synthesize defaultsManager=_defaultsManager;
@property (strong, nonatomic) RTXPCActivityManager *xpcActivityManager; // @synthesize xpcActivityManager=_xpcActivityManager;

- (void).cxx_destruct;
- (void)_downloadAsset:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_finalizeAssetUpdateOperationWithError:(id)arg1;
- (void)_handleAssetDownloadResult:(long long)arg1 asset:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_handleCatalogDownloadWithType:(id)arg1 downloadResult:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_handleMetadataQueryResult:(long long)arg1 assetQuery:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_installAsset:(id)arg1 fileManager:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_performUpdateOfAssetsWithTypeAssetType:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_shutdown;
- (id)defaultAssetDownloadOptions;
- (id)defaultCatalogDownloadOptions;
- (id)defaultXPCActivityCriteria;
- (void)forceUpdateAssetMetadataWithHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithDefaultsManager:(id)arg1 assetProcessor:(id)arg2 xpcActivityManager:(id)arg3;
- (id)latestAssetFromAssets:(id)arg1;
- (BOOL)nonUserInitiatedDownloadsAllowed;
- (void)performUpdateOfAssetsWithTypeAssetType:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)updateAssetServerURL:(id)arg1 assetType:(id)arg2 handler:(CDUnknownBlockType)arg3;

@end

