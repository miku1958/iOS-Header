//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class CPLConfiguration, CPLEngineFeedbackManager, CPLEngineScheduler, CPLEngineStore, CPLEngineSyncManager, CPLEngineSystemMonitor, CPLEngineTransport, CPLPlatformObject, CPLStatus, NSArray, NSDate, NSError, NSHashTable, NSString, NSURL;
@protocol CPLEngineLibraryOwner, OS_dispatch_queue;

@interface CPLEngineLibrary : NSObject <CPLAbstractObject>
{
    NSArray *_components;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_attachedObjects;
    NSError *_openingError;
    CPLStatus *_status;
    BOOL _closed;
    BOOL _totalAssetCountHasBeenCalculated;
    NSDate *_cachedLastQuarantineCountReportDate;
    unsigned long long _totalAssetCount;
    BOOL _libraryIsCorrupted;
    CPLPlatformObject *_platformObject;
    NSURL *_clientLibraryBaseURL;
    NSURL *_cloudLibraryStateStorageURL;
    NSURL *_cloudLibraryResourceStorageURL;
    NSString *_libraryIdentifier;
    id<CPLEngineLibraryOwner> _owner;
    CPLEngineStore *_store;
    CPLEngineScheduler *_scheduler;
    CPLEngineSyncManager *_syncManager;
    CPLEngineTransport *_transport;
    CPLEngineSystemMonitor *_systemMonitor;
    CPLEngineFeedbackManager *_feedback;
    CPLConfiguration *_configuration;
}

@property (readonly, copy, nonatomic) NSURL *clientLibraryBaseURL; // @synthesize clientLibraryBaseURL=_clientLibraryBaseURL;
@property (readonly, copy, nonatomic) NSURL *cloudLibraryResourceStorageURL; // @synthesize cloudLibraryResourceStorageURL=_cloudLibraryResourceStorageURL;
@property (readonly, copy, nonatomic) NSURL *cloudLibraryStateStorageURL; // @synthesize cloudLibraryStateStorageURL=_cloudLibraryStateStorageURL;
@property (readonly, nonatomic) CPLConfiguration *configuration; // @synthesize configuration=_configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDate *exitDeleteTime;
@property (readonly, nonatomic) CPLEngineFeedbackManager *feedback; // @synthesize feedback=_feedback;
@property (nonatomic) BOOL hasChangesToProcess;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL iCloudLibraryClientVersionTooOld;
@property (nonatomic) BOOL iCloudLibraryExists;
@property (nonatomic) BOOL iCloudLibraryHasBeenWiped;
@property (nonatomic) BOOL isExceedingQuota;
@property (readonly, copy, nonatomic) NSString *libraryIdentifier; // @synthesize libraryIdentifier=_libraryIdentifier;
@property (readonly, nonatomic) BOOL libraryIsCorrupted; // @synthesize libraryIsCorrupted=_libraryIsCorrupted;
@property (weak, nonatomic) id<CPLEngineLibraryOwner> owner; // @synthesize owner=_owner;
@property (readonly, nonatomic) CPLPlatformObject *platformObject; // @synthesize platformObject=_platformObject;
@property (readonly, nonatomic) CPLEngineScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property (readonly, nonatomic) CPLEngineStore *store; // @synthesize store=_store;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CPLEngineSyncManager *syncManager; // @synthesize syncManager=_syncManager;
@property (readonly, nonatomic) CPLEngineSystemMonitor *systemMonitor; // @synthesize systemMonitor=_systemMonitor;
@property (readonly, nonatomic) CPLEngineTransport *transport; // @synthesize transport=_transport;

+ (id)platformImplementationProtocol;
- (void).cxx_destruct;
- (void)_closeNextComponent:(id)arg1 deactivate:(BOOL)arg2 lastError:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_fillStatus:(id)arg1 forComponents:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_fillStatusArray:(id)arg1 forComponents:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_openNextComponent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_performBlockWithLibrary:(BOOL)arg1 enumerateAttachedObjects:(CDUnknownBlockType)arg2;
- (void)_reportQuarantineCountIfNecessaryWithLastReportDate:(id)arg1;
- (void)_updateTotalAssetCountWithAssetCounts:(id)arg1;
- (void)attachObject:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)closeAndDeactivate:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)componentName;
- (id)corruptionInfo;
- (void)detachObject:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)forceFetchAccountFlags;
- (void)getListOfComponentsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getStatusArrayForComponents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getStatusForComponents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)hasAccountFlagsData;
- (BOOL)hasAssetCountOnServer;
- (id)initWithClientLibraryBaseURL:(id)arg1 cloudLibraryStateStorageURL:(id)arg2 cloudLibraryResourceStorageURL:(id)arg3 libraryIdentifier:(id)arg4;
- (void)notifyAttachedObjectsHasStatusChanges;
- (void)notifyAttachedObjectsPullQueueIsFull;
- (void)notifyAttachedObjectsResourceDidDowloadInBackground:(id)arg1;
- (void)notifyAttachedObjectsResourceDidFailBackgroundDownloadOfResource:(id)arg1;
- (void)notifyAttachedObjectsSizeOfResourcesToUploadDidChangeToSize:(unsigned long long)arg1 sizeOfOriginalResourcesToUpload:(unsigned long long)arg2 numberOfImages:(unsigned long long)arg3 numberOfVideos:(unsigned long long)arg4 numberOfOtherItems:(unsigned long long)arg5;
- (void)notifyAttachedObjectsUploadTask:(id)arg1 didFinishWithError:(id)arg2;
- (void)notifyAttachedObjectsUploadTask:(id)arg1 didProgress:(float)arg2;
- (void)notifyAttachedObjectsUploadTaskDidStart:(id)arg1;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)reportLibraryCorrupted;
- (void)reportQuarantineCountIfNecessary;
- (void)reportRadar:(unsigned long long)arg1;
- (void)reportUnsuccessfulSync;
- (void)requestAttachedLibrary;
- (void)setConnectedToNetwork:(BOOL)arg1;
- (void)setHasCellularBudget:(BOOL)arg1 hasBatteryBudget:(BOOL)arg2 isBudgetValid:(BOOL)arg3;
- (void)startSyncSession;
- (unsigned long long)totalAssetCountOnServer;
- (void)updateAccountFlagsData:(id)arg1;
- (void)updateAssetCountsFromServer:(id)arg1;
- (void)updateInitialSyncDate:(id)arg1;
- (void)updateLastSuccessfullSyncDate:(id)arg1;

@end

