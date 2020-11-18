//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface CMKAssetSaver : NSObject
{
    NSMutableDictionary *__inflightAssets;
    NSMutableArray *__pendingImageJobs;
    NSMutableDictionary *__inProgressAvalancheFileDescriptors;
    NSMutableDictionary *__inProgressNebulaFileDescriptors;
    NSMutableArray *__transientStillImageResponses;
}

@property (strong, nonatomic) NSMutableDictionary *_inProgressAvalancheFileDescriptors; // @synthesize _inProgressAvalancheFileDescriptors=__inProgressAvalancheFileDescriptors;
@property (strong, nonatomic) NSMutableDictionary *_inProgressNebulaFileDescriptors; // @synthesize _inProgressNebulaFileDescriptors=__inProgressNebulaFileDescriptors;
@property (readonly, nonatomic) NSMutableDictionary *_inflightAssets; // @synthesize _inflightAssets=__inflightAssets;
@property (strong, nonatomic) NSMutableArray *_pendingImageJobs; // @synthesize _pendingImageJobs=__pendingImageJobs;
@property (readonly, nonatomic) NSMutableArray *_transientStillImageResponses; // @synthesize _transientStillImageResponses=__transientStillImageResponses;

+ (void)resetNebulaCaptureIsBusy;
+ (void)setNebulaCaptureIsBusy:(BOOL)arg1;
+ (void)setTakingPhotoIsBusy:(BOOL)arg1;
+ (void)setVideoCaptureIsBusy:(BOOL)arg1;
+ (id)sharedAssetSaver;
+ (id)takingNebulaIndicatorFilePath;
+ (id)takingPhotoIndicatorFilePath;
+ (id)takingVideoIndicatorFilePath;
- (void).cxx_destruct;
- (id)_addInflightAssetWithPath:(id)arg1 thumbnailImage:(id)arg2 assetUUID:(id)arg3 metadata:(id)arg4 assetType:(short)arg5 kind:(short)arg6 kindSubtype:(short)arg7 avalancheUUID:(id)arg8 completionHandler:(CDUnknownBlockType)arg9;
- (id)_addInflightAssetWithPath:(id)arg1 withUUID:(id)arg2 avalancheUUID:(id)arg3;
- (id)_imageJobForStillImageCaptureResponse:(id)arg1;
- (id)_saveIsolationQueue;
- (void)_setIsTakingPhoto:(BOOL)arg1;
- (void)batchSavePendingAssetJobs;
- (void)batchSavePendingAssetJobsWithCompletion:(CDUnknownBlockType)arg1;
- (void)dropAllTransientResponses;
- (id)enqueueTransientResponse:(id)arg1 requestEnqueuedBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)init;
- (void)queueJobDictionary:(id)arg1 asset:(id)arg2 requestEnqueuedBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4 imageSurface:(void *)arg5 previewImageSurface:(void *)arg6 transient:(BOOL)arg7;
- (void)queueJobDictionary:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)requestAssetSavingAccess;
- (void)resetAllNebulaProgress;
- (void)saveAllTransientResponses;
- (void)saveAvalancheWithUUID:(id)arg1 allAssetUUIDs:(id)arg2 bestAssetUUIDs:(id)arg3 stackAssetUUID:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)saveCameraImage:(id)arg1 metadata:(id)arg2 additionalProperties:(id)arg3 diagnostics:(id)arg4 previouslyPendingAsset:(id)arg5 requestEnqueuedBlock:(CDUnknownBlockType)arg6;
- (void)saveCameraImage:(id)arg1 metadata:(id)arg2 additionalProperties:(id)arg3 requestEnqueuedBlock:(CDUnknownBlockType)arg4;
- (void)saveCameraVideoAtPath:(id)arg1 withMetadata:(id)arg2 thumbnailImage:(id)arg3 createPreviewWellImage:(BOOL)arg4 isSlalom:(BOOL)arg5 videoHandler:(CDUnknownBlockType)arg6 requestEnqueuedBlock:(CDUnknownBlockType)arg7 completionBlock:(CDUnknownBlockType)arg8;
- (id)saveStillImageCaptureResponse:(id)arg1 requestEnqueuedBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)saveTimelapseCaptureResponse:(id)arg1 requestEnqueuedBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)saveVideoCaptureResponse:(id)arg1 assetUUID:(id)arg2 jobTypeOverride:(id)arg3 requestEnqueuedBlock:(CDUnknownBlockType)arg4;
- (void)setAvalancheInProgress:(BOOL)arg1 uuid:(id)arg2;
- (void)setNebulaInProgress:(BOOL)arg1 uuid:(id)arg2;

@end
