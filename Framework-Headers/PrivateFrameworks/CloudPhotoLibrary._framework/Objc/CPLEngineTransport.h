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
@property (readonly, nonatomic) Class transportGroupClass;
@property (readonly, nonatomic) Class userIdentifierClass;

+ (id)platformImplementationProtocol;
- (void).cxx_destruct;
- (id)bestErrorForUnderlyingError:(id)arg1;
- (id)checkRecordsExistenceTaskForRecords:(id)arg1 fetchRecordProperties:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)closeAndDeactivate:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)componentName;
- (id)createGroupForAnalysisDownload;
- (id)createGroupForChangeDownload;
- (id)createGroupForChangeUpload;
- (id)createGroupForFeedback;
- (id)createGroupForInitialDownload;
- (id)createGroupForInitialUpload;
- (id)createGroupForLibraryStateCheck;
- (id)createGroupForMovieStreaming;
- (id)createGroupForPrefetch;
- (id)createGroupForPruningCheck;
- (id)createGroupForResetSync;
- (id)createGroupForResourcesDownload;
- (id)createGroupForSetup;
- (id)createGroupForThumbnailPrefetch;
- (id)createGroupForThumbnailsDownload;
- (id)downloadBatchTaskForSyncAnchor:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)getLibraryInfoAndUpdateState:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)getPushEnvironmentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getStatusDictionaryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getSystemBudgetsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)inMemoryDownloadTaskForResource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithEngineLibrary:(id)arg1;
- (void)noteClientIsBeginningSignificantWork;
- (void)noteClientIsEndingSignificantWork;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)queryTaskForCursor:(id)arg1 class:(Class)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)rampingRequestTaskForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)resourceCheckTaskForResources:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)resourcePublishTaskForResource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)resourcesDownloadTaskWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)sendFeedbackTaskForMessages:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setShouldOverride:(BOOL)arg1 forSystemBudgets:(unsigned long long)arg2;
- (id)setupTaskCreateLibraryIfNecessary:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)simpleDataForSyncAnchor:(id)arg1;
- (id)uploadBatchTaskForBatch:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

