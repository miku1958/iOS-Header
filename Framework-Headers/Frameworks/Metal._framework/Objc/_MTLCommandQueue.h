//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/_MTLObjectWithLabel.h>

@class NSMutableArray, NSObject, NSString, _MTLDevice;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source;

@interface _MTLCommandQueue : _MTLObjectWithLabel
{
    _MTLDevice *_dev;
    NSMutableArray *_pendingQueue;
    NSMutableArray *_submittedQueue;
    struct _opaque_pthread_mutex_t _pendingQueueLock;
    struct _opaque_pthread_mutex_t _submittedQueueLock;
    NSObject<OS_dispatch_group> *_submittedGroup;
    NSObject<OS_dispatch_queue> *_commandQueueDispatch;
    NSObject<OS_dispatch_queue> *_completionQueueDispatch;
    NSObject<OS_dispatch_source> *_commandQueueEventSource;
    NSObject<OS_dispatch_semaphore> *_commandBufferSemaphore;
    int _backgroundTrackingPID;
    unsigned long long _globalTraceObjectID;
    unsigned long long _labelTraceID;
    BOOL _profilingEnabled;
    BOOL _StatEnabled;
    unsigned long long _StatOptions;
    unsigned long long _StatLocations;
    _Atomic int _numCommandBuffers;
    CDUnknownBlockType _perfSampleHandlerBlock;
    unsigned long long _listIndex;
    unsigned long long _maxCommandBufferCount;
    unsigned long long _qosLevel;
    NSObject<OS_dispatch_queue> *_commitQueue;
    BOOL _commitSynchronously;
    NSObject<OS_dispatch_queue> *_completionQueue;
    BOOL _disableCrossQueueHazardTracking;
    BOOL _executionEnabled;
    BOOL _skipRender;
    BOOL _openGLQueue;
    NSObject<OS_dispatch_semaphore> *_presentScheduledSemaphore;
    BOOL _forceImmediateSubmissionOnCommitThread;
}

@property (nonatomic, getter=isStatEnabled) BOOL StatEnabled; // @synthesize StatEnabled=_StatEnabled;
@property (nonatomic, getter=getStatLocations) unsigned long long StatLocations; // @synthesize StatLocations=_StatLocations;
@property (nonatomic, getter=getStatOptions) unsigned long long StatOptions; // @synthesize StatOptions=_StatOptions;
@property int backgroundTrackingPID; // @synthesize backgroundTrackingPID=_backgroundTrackingPID;
@property (readonly) NSObject<OS_dispatch_queue> *commitQueue; // @synthesize commitQueue=_commitQueue;
@property (readonly) BOOL commitSynchronously; // @synthesize commitSynchronously=_commitSynchronously;
@property (readonly) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property (readonly) BOOL disableCrossQueueHazardTracking; // @synthesize disableCrossQueueHazardTracking=_disableCrossQueueHazardTracking;
@property BOOL executionEnabled; // @synthesize executionEnabled=_executionEnabled;
@property (readonly) unsigned long long globalTraceObjectID; // @synthesize globalTraceObjectID=_globalTraceObjectID;
@property (readonly) BOOL isOpenGLQueue; // @synthesize isOpenGLQueue=_openGLQueue;
@property (copy) NSString *label; // @dynamic label;
@property (nonatomic, getter=getListIndex) unsigned long long listIndex; // @synthesize listIndex=_listIndex;
@property (readonly) unsigned long long maxCommandBufferCount; // @synthesize maxCommandBufferCount=_maxCommandBufferCount;
@property (nonatomic) unsigned long long numCommandBuffers; // @dynamic numCommandBuffers;
@property (getter=isProfilingEnabled) BOOL profilingEnabled; // @synthesize profilingEnabled=_profilingEnabled;
@property (readonly) unsigned long long qosLevel; // @synthesize qosLevel=_qosLevel;
@property BOOL skipRender; // @synthesize skipRender=_skipRender;

- (BOOL)_submitAvailableCommandBuffers;
- (void)addPerfSampleHandler:(CDUnknownBlockType)arg1;
- (id)availableCounters;
- (void)commandBufferDidComplete:(id)arg1 startTime:(unsigned long long)arg2 completionTime:(unsigned long long)arg3 error:(id)arg4;
- (id)commandBufferWithDescriptor:(id)arg1;
- (void)commitCommandBuffer:(id)arg1 wake:(BOOL)arg2;
- (void)completeCommandBuffers:(id *)arg1 count:(unsigned long long)arg2;
- (void)dealloc;
- (id)description;
- (void)enqueueCommandBuffer:(id)arg1;
- (void)finish;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)getAndIncrementNumCommandBuffers;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 descriptor:(id)arg2;
- (id)initWithDevice:(id)arg1 maxCommandBufferCount:(unsigned long long)arg2;
- (void)insertDebugCaptureBoundary;
- (int)requestCounters:(id)arg1;
- (int)requestCounters:(id)arg1 withIndex:(unsigned long long)arg2;
- (void)setSubmissionQueue:(id)arg1;
- (BOOL)submitCommandBuffer:(id)arg1;
- (void)submitCommandBuffers:(const id *)arg1 count:(unsigned long long)arg2;

@end

