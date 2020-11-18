//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>
#import <CloudPhotoLibrary/CPLEngineComponent-Protocol.h>

@class CPLEngineLibrary, CPLPlatformObject, NSString;

@interface CPLEngineTransport : NSObject <CPLAbstractObject, CPLEngineComponent>
{
    CPLPlatformObject *_platformObject;
    CPLEngineLibrary *_engineLibrary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) CPLEngineLibrary *engineLibrary; // @synthesize engineLibrary=_engineLibrary;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) CPLPlatformObject *platformObject; // @synthesize platformObject=_platformObject;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsBatchDownloadPipelining;

+ (id)platformImplementationProtocol;
- (void).cxx_destruct;
- (id)bestErrorForUnderlyingError:(id)arg1;
- (BOOL)canBatchResourceDownloadTasks:(id)arg1:(id)arg2;
- (id)checkRecordsExistenceTaskForRecords:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)closeAndDeactivate:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)componentName;
- (id)downloadBatchTaskForSyncAnchor:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)getAssetCountsTaskAndLibraryState:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)getStatusDictionaryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithEngineLibrary:(id)arg1;
- (void)noteClientIsInBackground;
- (void)noteClientIsInForeground;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)queryTaskForCursor:(id)arg1 class:(Class)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)removeLibraryTaskWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)resourceDownloadTaskForResource:(id)arg1 clientBundleID:(id)arg2 didStartHandler:(CDUnknownBlockType)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)resourcePublishTaskForResource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)resourceUploadTaskForResource:(id)arg1 ofRecord:(id)arg2 didStartHandler:(CDUnknownBlockType)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)runResourceDownloadTasks:(id)arg1;
- (id)setupTaskCreateLibraryIfNecessary:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)simpleDataForSyncAnchor:(id)arg1;
- (BOOL)supportsDelayedUploads;
- (id)uploadBatchTaskForBatch:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

