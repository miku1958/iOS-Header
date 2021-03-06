//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLBackgroundJobWorkerProtocol-Protocol.h>

@class NSMutableArray, NSString, PLPhotoLibrary;
@protocol OS_dispatch_queue;

@interface PLBackgroundJobWorker : NSObject <PLBackgroundJobWorkerProtocol>
{
    CDUnknownBlockType _workerCompleteCompletionHandler;
    CDUnknownBlockType _currentManagedObjectCompletionHandler;
    _Atomic long long _workerAtomicCounter;
    _Atomic long long _completionHandlerAtomicCounter;
    CDUnknownBlockType _workerForcefullyStopHandler;
    NSMutableArray *_pendingJobs;
    unsigned long long _totalJobsCount;
    NSObject<OS_dispatch_queue> *_processingQueue;
    struct os_unfair_lock_s _lock;
    BOOL _shouldStop;
    unsigned long long _workerPriority;
    NSString *_workerName;
    NSString *_workerDetailedName;
    PLPhotoLibrary *_photoLibrary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *workerDetailedName; // @synthesize workerDetailedName=_workerDetailedName;
@property (readonly, nonatomic) NSString *workerName; // @synthesize workerName=_workerName;
@property (readonly, nonatomic) unsigned long long workerPriority; // @synthesize workerPriority=_workerPriority;

+ (id)workerWithLibrary:(id)arg1;
- (void).cxx_destruct;
- (void)_handleAllJobsComplete;
- (void)_processNextManagedObject;
- (BOOL)hasPendingJobs;
- (id)init;
- (id)initWithPriority:(unsigned long long)arg1 photoLibrary:(id)arg2;
- (BOOL)isInterruptible;
- (id)managedObjectIDsNeedingProcessing;
- (void)performWorkOnManagedObjectID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startWorkWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopAllWork;
- (void)stopWorkingOnManagedObjectID:(id)arg1;

@end

