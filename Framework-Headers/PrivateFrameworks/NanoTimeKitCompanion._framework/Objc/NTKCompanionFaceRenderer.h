//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NTKFace, _NTKCompanionFaceSnapshottingWindow;
@protocol OS_dispatch_queue;

@interface NTKCompanionFaceRenderer : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    _NTKCompanionFaceSnapshottingWindow *_window;
    BOOL _queueActive;
    NSMutableArray *_pendingTaskList;
    NTKFace *_currentFace;
    CDUnknownBlockType _faceBatchCompletionHandler;
}

@property (strong, nonatomic) NTKFace *currentFace; // @synthesize currentFace=_currentFace;
@property (copy, nonatomic) CDUnknownBlockType faceBatchCompletionHandler; // @synthesize faceBatchCompletionHandler=_faceBatchCompletionHandler;
@property (strong, nonatomic) NSMutableArray *pendingTaskList; // @synthesize pendingTaskList=_pendingTaskList;
@property (nonatomic, getter=isQueueActive) BOOL queueActive; // @synthesize queueActive=_queueActive;

+ (id)_snapshotNameForFace:(id)arg1 detailMode:(long long)arg2;
+ (id)_storagePath;
+ (id)snapshotPathForFace:(id)arg1 detailMode:(long long)arg2;
- (void).cxx_destruct;
- (void)_notifyFinishedFaceBatchIfNeeded;
- (void)_startNextWorkItem;
- (id)init;
- (void)requestSnapshotOfFace:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

