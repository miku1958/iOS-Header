//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLAssetsdResourceWriteOnlyService.h>

#import <PhotoLibraryServices/PLAssetsdResourceServiceProtocol-Protocol.h>

@class NSObject, NSString, PLAssetsdCPLResourceDownloader;
@protocol OS_dispatch_queue;

@interface PLAssetsdResourceService : PLAssetsdResourceWriteOnlyService <PLAssetsdResourceServiceProtocol>
{
    NSObject<OS_dispatch_queue> *_asyncImageDataQueue;
    PLAssetsdCPLResourceDownloader *_resourceDownloader;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_consolidateResource:(id)arg1 assetUUID:(id)arg2 error:(id *)arg3;
- (void)_generateFullsizeRenderForAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_generateFullsizeRenderForAssetIfNecessary:(id)arg1 format:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)_requiresFullsizeRenderGenerationForAsset:(id)arg1 format:(id)arg2;
- (id)_utiFromPathConstrainedToImageOrMovie:(id)arg1;
- (void)addAssetGroupWithName:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)addAssetWithURL:(id)arg1 toAlbum:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)asynchronousAdjustmentDataForAsset:(id)arg1 networkAccessAllowed:(BOOL)arg2 withDataBlob:(BOOL)arg3 reply:(CDUnknownBlockType)arg4;
- (id)consolidateAssets:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)downloadCloudSharedAsset:(id)arg1 wantedPlaceholderkind:(short)arg2 shouldPrioritize:(BOOL)arg3 shouldExtendTimer:(BOOL)arg4 reply:(CDUnknownBlockType)arg5;
- (void)estimatedFileLengthOfVideo:(id)arg1 fallbackFilePath:(id)arg2 exportPreset:(id)arg3 exportProperties:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)fileDescriptorForPersistentURL:(id)arg1 withAdjustments:(BOOL)arg2 reply:(CDUnknownBlockType)arg3;
- (void)filePathForPersistentURL:(id)arg1 withAdjustments:(BOOL)arg2 reply:(CDUnknownBlockType)arg3;
- (void)generateOnDemandResourcesForAsset:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getSandboxExtensionForFileSystemBookmark:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getSandboxExtensionsForAssetWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)imageDataForAssetWithObjectURI:(id)arg1 formatID:(unsigned short)arg2 allowPlaceholder:(BOOL)arg3 wantURLOnly:(BOOL)arg4 networkAccessAllowed:(BOOL)arg5 trackCPLDownload:(BOOL)arg6 reply:(CDUnknownBlockType)arg7;
- (id)initWithLibraryServicesManager:(id)arg1 connectionAuthorization:(id)arg2 resourceDownloader:(id)arg3;
- (void)projectExtensionDataForProjectUuid:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)saveAssetWithDataAndPorts:(id)arg1 imageSurface:(id)arg2 previewImageSurface:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)translatePersistentURL:(id)arg1 withAdjustments:(BOOL)arg2 handler:(CDUnknownBlockType)arg3;
- (void)updateInternalResourcePath:(id)arg1 objectURI:(id)arg2 sandboxExtension:(id)arg3 reply:(CDUnknownBlockType)arg4;

@end

