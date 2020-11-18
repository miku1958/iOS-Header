//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>

#import <PhotoLibraryServices/PLAssetsdCloudServiceProtocol-Protocol.h>

@class NSString, PLAssetsdCPLResourceDownloader;

@interface PLAssetsdCloudService : PLAbstractLibraryServicesManagerService <PLAssetsdCloudServiceProtocol>
{
    PLAssetsdCPLResourceDownloader *_resourceDownloader;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)asynchronousStartPreheatingCPLDownloadForAssets:(id)arg1 doneTokens:(id)arg2 format:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)asynchronousStopPreheatingCPLDownloadForAssetsWithTaskIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)cancelCPLDownloadTaskWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)computeFingerPrintsOfAssetWithObjectURI:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)downloadCloudPhotoLibraryAssetWithObjectURI:(id)arg1 taskIdentifier:(id)arg2 resourceType:(unsigned long long)arg3 HighPriority:(BOOL)arg4 trackCPLDownload:(BOOL)arg5 downloadIsTransient:(BOOL)arg6 reply:(CDUnknownBlockType)arg7;
- (id)initWithLibraryServicesManager:(id)arg1 resourceDownloader:(id)arg2;
- (void)requestVideoPlaybackURLForCloudSharedAsset:(id)arg1 mediaAssetType:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;

@end
