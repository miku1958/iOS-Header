//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PLAssetsSaver : NSObject
{
    NSMutableArray *__pendingSaveAssetJobs;
}

@property (strong, nonatomic) NSMutableArray *_pendingSaveAssetJobs; // @synthesize _pendingSaveAssetJobs=__pendingSaveAssetJobs;

+ (id)publicAssetsLibraryErrorFromPrivateDomain:(id)arg1 withPrivateCode:(long long)arg2;
+ (id)publicAssetsLibraryErrorFromPrivateError:(id)arg1;
+ (id)sharedAssetsSaver;
- (id)_addCameraAssetToLibraryWithPath:(id)arg1 thumbnailImage:(id)arg2 assetUUID:(id)arg3 metadata:(id)arg4 assetType:(short)arg5 kind:(short)arg6 kindSubtype:(short)arg7 avalancheUUID:(id)arg8 completionHandler:(CDUnknownBlockType)arg9;
- (CDUnknownBlockType)_createWriteImageCompletionBlockWithImage:(id)arg1 target:(id)arg2 selector:(SEL)arg3 contextInfo:(void *)arg4;
- (CDUnknownBlockType)_createWriteVideoCompletionBlockWithVideoPath:(id)arg1 target:(id)arg2 selector:(SEL)arg3 contextInfo:(void *)arg4;
- (void)_requestAccess;
- (void)_saveImage:(id)arg1 imageData:(id)arg2 properties:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)_saveIsolationQueue;
- (void)_saveVideoAtPath:(id)arg1 properties:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_setIsTakingPhoto:(BOOL)arg1;
- (void)batchSavePendingAssetJobs;
- (void)copyAssetToCameraRoll:(id)arg1;
- (void)dealloc;
- (void)deletePhotoStreamAssetsWithUUIDs:(id)arg1 streamID:(id)arg2;
- (void)deletePhotoStreamDataForStreamID:(id)arg1;
- (void)importFilesWithMasterPath:(id)arg1 sidecarFileInfo:(id)arg2 intoEventWithName:(id)arg3 importSessionIdentifier:(id)arg4 isPhotoStreamsPublishCandidate:(BOOL)arg5 avalancheUUID:(id)arg6;
- (id)init;
- (id)pathForNewAssetOfType:(short)arg1 extension:(id)arg2;
- (void)queueJobDictionary:(id)arg1 asset:(id)arg2 requestEnqueuedBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4 imageSurface:(void *)arg5 previewImageSurface:(void *)arg6;
- (void)queueJobDictionary:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)reenqueueAssetUUIDsForPhotoStreamPublication:(id)arg1;
- (void)regenerateVideoThumbnailsForVideo:(id)arg1 withCreationDate:(id)arg2 progressStack:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)requestAsynchronousImageForAssetOID:(id)arg1 withFormat:(int)arg2 allowPlaceholder:(BOOL)arg3 wantURLOnly:(BOOL)arg4 networkAccessAllowed:(BOOL)arg5 trackCPLDownload:(BOOL)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (id)requestSynchronousImageForAssetOID:(id)arg1 withFormat:(int)arg2 allowPlaceholder:(BOOL)arg3 wantURLOnly:(BOOL)arg4 networkAccessAllowed:(BOOL)arg5 trackCPLDownload:(BOOL)arg6 outImageDataInfo:(id *)arg7 outCPLDownloadContext:(id *)arg8;
- (void)saveCameraAvalancheWithUUID:(id)arg1 allAssetUUIDs:(id)arg2 allAssets:(id)arg3 stackAsset:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)saveCameraImage:(id)arg1 metadata:(id)arg2 additionalProperties:(id)arg3 diagnostics:(id)arg4 previouslyPendingAsset:(id)arg5 requestEnqueuedBlock:(CDUnknownBlockType)arg6;
- (void)saveCameraImage:(id)arg1 metadata:(id)arg2 additionalProperties:(id)arg3 requestEnqueuedBlock:(CDUnknownBlockType)arg4;
- (void)saveCameraVideoAtPath:(id)arg1 withMetadata:(id)arg2 thumbnailImage:(id)arg3 createPreviewWellImage:(BOOL)arg4 progressStack:(id)arg5 isSlalom:(BOOL)arg6 assetAdjustments:(id)arg7 videoHandler:(CDUnknownBlockType)arg8 requestEnqueuedBlock:(CDUnknownBlockType)arg9 completionBlock:(CDUnknownBlockType)arg10;
- (void)saveImage:(id)arg1 imageData:(id)arg2 properties:(id)arg3 completionTarget:(id)arg4 completionSelector:(SEL)arg5 contextInfo:(void *)arg6;
- (void)saveImage:(id)arg1 properties:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)saveImageData:(id)arg1 properties:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)saveImageRef:(struct CGImage *)arg1 orientation:(long long)arg2 imageData:(id)arg3 properties:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)saveOneWayATCSyncedImage:(id)arg1 imageData:(id)arg2 eventUUID:(id)arg3 properties:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)savePhotoStreamImage:(id)arg1 imageData:(id)arg2 properties:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)savePhotoStreamVideoAtPath:(id)arg1 properties:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)saveSyncedAssets:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)saveVideoAtPath:(id)arg1 properties:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)saveVideoAtPath:(id)arg1 properties:(id)arg2 completionTarget:(id)arg3 completionSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (void)setAvalancheInProgress:(BOOL)arg1 uuid:(id)arg2;
- (void)validateAvalanches:(id)arg1;

@end

