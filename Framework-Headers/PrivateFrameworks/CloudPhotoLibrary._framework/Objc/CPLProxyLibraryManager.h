//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLPlatformObject.h>

#import <CloudPhotoLibrary/CPLClientLibraryManagerProtocol-Protocol.h>
#import <CloudPhotoLibrary/CPLLibraryManagerImplementation-Protocol.h>
#import <CloudPhotoLibrary/NSXPCConnectionDelegate-Protocol.h>

@class NSCountedSet, NSMutableArray, NSMutableDictionary, NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface CPLProxyLibraryManager : CPLPlatformObject <CPLClientLibraryManagerProtocol, NSXPCConnectionDelegate, CPLLibraryManagerImplementation>
{
    NSXPCConnection *_connection;
    NSMutableDictionary *_downloadTasks;
    NSMutableDictionary *_inMemoryDownloadTasks;
    NSMutableDictionary *_uploadTasks;
    BOOL _diagnosticsEnabled;
    unsigned long long _foregroundCalls;
    NSCountedSet *_disablingReasons;
    unsigned long long _disablingMinglingCount;
    unsigned long long _significantWorkCalls;
    NSMutableDictionary *_outstandingInvocations;
    unsigned long long _outstandingInvocationsCount;
    NSMutableArray *_pendingBlocksAfterOpening;
    int _openingStatus;
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;

+ (id)clientProtocolInterface;
+ (id)daemonProtocolInterface;
- (void).cxx_destruct;
- (void)_dispatchBlockWhenOpen:(CDUnknownBlockType)arg1;
- (void)_dispatchFailedDownloadTaskForResource:(id)arg1 highPriority:(BOOL)arg2 withError:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)_dispatchFailedInMemoryDownloadTaskForResource:(id)arg1 withError:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_invokeOutstandingInvocationsWithTaskIdentifier:(id)arg1;
- (void)_reallyOpenWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)_setStatusFromDictionary:(id)arg1;
- (id)_uploadTaskDidStartForResource:(id)arg1 withTaskIdentifier:(id)arg2;
- (void)addInfoToLog:(id)arg1;
- (void)backgroundDownloadDidFailForResource:(id)arg1;
- (void)backgroundDownloadDidFinishForResource:(id)arg1;
- (void)barrier;
- (void)beginDownloadForResource:(id)arg1 clientBundleID:(id)arg2 highPriority:(BOOL)arg3 proposedTaskIdentifier:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)beginInMemoryDownloadOfResource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelTask:(id)arg1;
- (void)checkHasBackgroundDownloadOperationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)closeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cloudCacheGetDescriptionForRecordWithIdentifier:(id)arg1 related:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)compactFileCacheWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3;
- (void)deactivateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)deleteResources:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)diagnosticsEnabled;
- (void)disableMingling;
- (void)disableSynchronizationWithReason:(id)arg1;
- (void)dispatchBlockWhenLibraryIsOpen:(CDUnknownBlockType)arg1;
- (void)downloadDidFinishForResourceTransferTask:(id)arg1 finalResource:(id)arg2 withError:(id)arg3;
- (void)downloadDidProgress:(float)arg1 forResourceTransferTask:(id)arg2;
- (void)downloadDidStartForResourceTransferTask:(id)arg1;
- (void)enableMingling;
- (void)enableSynchronizationWithReason:(id)arg1;
- (void)getCloudCacheForRecordWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getListOfComponentsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getMappedIdentifiersForIdentifiers:(id)arg1 inAreLocalIdentifiers:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getResourcesForItemWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getStatusArrayForComponents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getStatusForComponents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)inMemoryDownloadDidFinishForResourceTransferTask:(id)arg1 data:(id)arg2 withError:(id)arg3;
- (id)initWithAbstractObject:(id)arg1;
- (void)libraryManagerDidUpdateSizeOfResourcesToUploadToSize:(unsigned long long)arg1 sizeOfOriginalResourcesToUpload:(unsigned long long)arg2 numberOfImages:(unsigned long long)arg3 numberOfVideos:(unsigned long long)arg4 numberOfOtherItems:(unsigned long long)arg5;
- (void)libraryManagerDidUpdateStatusWithProperties:(id)arg1;
- (void)libraryManagerHasChangesToPull;
- (void)noteClientIsBeginningSignificantWork;
- (void)noteClientIsEndingSignificantWork;
- (void)noteClientIsInBackground;
- (void)noteClientIsInForeground;
- (void)noteClientReceivedNotificationOfServerChanges;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)proxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)publishResource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)rampingRequestForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)resetCacheWithOption:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resetStatus;
- (void)setDiagnosticsEnabled:(BOOL)arg1;
- (void)startSyncSession;
- (void)uploadDidStartForResource:(id)arg1 withResourceTransferTask:(id)arg2;
- (void)uploadOfResource:(id)arg1 didFinishForResourceTransferTask:(id)arg2 withError:(id)arg3;
- (void)uploadOfResource:(id)arg1 didProgress:(float)arg2 forResourceTransferTask:(id)arg3;

@end

