//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMediaStream/MMCSEngineDelegate-Protocol.h>

@class MMCSEngine, MSASPersonModel, MSAlbumSharingDaemon, MSBackoffManager, NSString;
@protocol OS_dispatch_queue;

@interface MSASAssetTransferer : NSObject <MMCSEngineDelegate>
{
    BOOL _hasShutDown;
    int _maxBatchCount;
    int _maxRetryCount;
    id _delegate;
    NSString *_personID;
    MMCSEngine *_engine;
    double _maxMMCSTokenValidityTimeInterval;
    MSAlbumSharingDaemon *_daemon;
    MSASPersonModel *_model;
    MSBackoffManager *_backoffManager;
    NSString *_focusAlbumGUID;
    NSString *_focusAssetCollectionGUID;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
}

@property (weak, nonatomic) MSBackoffManager *backoffManager; // @synthesize backoffManager=_backoffManager;
@property (weak, nonatomic) MSAlbumSharingDaemon *daemon; // @synthesize daemon=_daemon;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) MMCSEngine *engine; // @synthesize engine=_engine;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *eventQueue; // @synthesize eventQueue=_eventQueue;
@property (copy, nonatomic) NSString *focusAlbumGUID; // @synthesize focusAlbumGUID=_focusAlbumGUID;
@property (copy, nonatomic) NSString *focusAssetCollectionGUID; // @synthesize focusAssetCollectionGUID=_focusAssetCollectionGUID;
@property (nonatomic) BOOL hasShutDown; // @synthesize hasShutDown=_hasShutDown;
@property (readonly) unsigned long long hash;
@property (nonatomic) int maxBatchCount; // @synthesize maxBatchCount=_maxBatchCount;
@property (nonatomic) double maxMMCSTokenValidityTimeInterval; // @synthesize maxMMCSTokenValidityTimeInterval=_maxMMCSTokenValidityTimeInterval;
@property (nonatomic) int maxRetryCount; // @synthesize maxRetryCount=_maxRetryCount;
@property (weak, nonatomic) MSASPersonModel *model; // @synthesize model=_model;
@property (copy, nonatomic) NSString *personID; // @synthesize personID=_personID;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

- (void).cxx_destruct;
- (void)MMCSEngine:(id)arg1 didCreateRequestorContext:(id)arg2 forAssets:(id)arg3;
- (void)MMCSEngine:(id)arg1 didFinishGettingAsset:(id)arg2 path:(id)arg3 error:(id)arg4;
- (void)MMCSEngine:(id)arg1 didFinishPuttingAsset:(id)arg2 putReceipt:(id)arg3 error:(id)arg4;
- (void)MMCSEngine:(id)arg1 didMakeGetProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4;
- (void)MMCSEngine:(id)arg1 didMakePutProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4;
- (void)MMCSEngine:(id)arg1 logMessage:(id)arg2 logLevel:(int)arg3;
- (void)MMCSEngine:(id)arg1 logPerformanceMetrics:(id)arg2;
- (BOOL)MMCSEngine:(id)arg1 shouldLogAtLogLevel:(int)arg2;
- (id)_MMCSTokenTooOldError;
- (id)_canceledError;
- (id)_missingMMCSTokenError;
- (id)_missingURLError;
- (id)_pathForPersonID:(id)arg1;
- (void)_rereadPerformanceLoggingSetting;
- (void)_sendDidIdleNotification;
- (void)cancelCompletionBlock:(CDUnknownBlockType)arg1;
- (void)didFinishGettingAllAssets;
- (void)didFinishPuttingAllAssets;
- (id)initWithPersonID:(id)arg1;
- (id)initWithPersonID:(id)arg1 eventQueue:(id)arg2;
- (void)retryOutstandingActivities;
- (void)shutDownCompletionBlock:(CDUnknownBlockType)arg1;
- (void)stopCompletionBlock:(CDUnknownBlockType)arg1;
- (void)workQueueCancel;
- (double)workQueueMaxMMCSTokenValidityTimeInterval;
- (unsigned long long)workQueueNextItemID;
- (void)workQueueRetryOutstandingActivities;
- (void)workQueueShutDownCompletionBlock:(CDUnknownBlockType)arg1;
- (void)workQueueStop;

@end

