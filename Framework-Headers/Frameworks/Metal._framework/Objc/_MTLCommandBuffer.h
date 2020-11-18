//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSError, NSMutableDictionary, NSString, _MTLCommandQueue;
@protocol MTLCommandEncoder, MTLCommandQueue;

@interface _MTLCommandBuffer : NSObject
{
    id<MTLCommandEncoder> _currentCommandEncoder;
    _MTLCommandQueue<MTLCommandQueue> *_queue;
    struct MTLDispatch *_scheduledDispatchList;
    struct MTLDispatch *_scheduledDispatchListTail;
    struct MTLDispatch *_completedDispatchList;
    struct MTLDispatch *_completedDispatchListTail;
    struct _opaque_pthread_mutex_t _mutex;
    struct _opaque_pthread_cond_t {
        long long __sig;
        char __opaque[40];
    } _cond;
    unsigned long long _creationTime;
    unsigned long long _enqueueTime;
    unsigned long long _commitTime;
    unsigned long long _submitToKernelTime;
    unsigned long long _submitToHardwareTime;
    unsigned long long _completionInterruptTime;
    unsigned long long _completionHandlerEnqueueTime;
    unsigned long long _completionHandlerExecutionTime;
    unsigned long long _status;
    NSError *_error;
    NSString *_label;
    BOOL _skipRender;
    BOOL _profilingEnabled;
    BOOL _scheduledCallbacksDone;
    BOOL _completedCallbacksDone;
    BOOL _strongObjectReferences;
    NSDictionary *_profilingResults;
    BOOL _retainedReferences;
    BOOL _synchronousDebugMode;
    NSMutableDictionary *_userDictionary;
    unsigned long long _kernelStartTime;
    unsigned long long _kernelEndTime;
    unsigned long long _gpuStartTime;
    unsigned long long _gpuEndTime;
    unsigned long long _numEncoders;
    unsigned long long _numThisCommandBuffer;
    unsigned long long _listIndex;
    unsigned long long _globalTraceObjectID;
    unsigned long long _labelTraceID;
    BOOL _StatEnabled;
    CDUnknownBlockType _perfSampleHandlerBlock;
}

@property (readonly, nonatomic) double GPUEndTime;
@property (readonly, nonatomic) double GPUStartTime;
@property (nonatomic, getter=isStatEnabled) BOOL StatEnabled; // @synthesize StatEnabled=_StatEnabled;
@property (readonly) id<MTLCommandQueue> commandQueue; // @synthesize commandQueue=_queue;
@property (readonly) NSError *error;
@property (readonly) unsigned long long globalTraceObjectID; // @synthesize globalTraceObjectID=_globalTraceObjectID;
@property (readonly, nonatomic) double kernelEndTime;
@property (readonly, nonatomic) double kernelStartTime;
@property (copy) NSString *label; // @synthesize label=_label;
@property (nonatomic, getter=getListIndex) unsigned long long listIndex; // @synthesize listIndex=_listIndex;
@property (nonatomic) unsigned long long numEncoders; // @synthesize numEncoders=_numEncoders;
@property (nonatomic) unsigned long long numThisCommandBuffer; // @synthesize numThisCommandBuffer=_numThisCommandBuffer;
@property (getter=isProfilingEnabled) BOOL profilingEnabled;
@property (readonly) NSDictionary *profilingResults;
@property (readonly) BOOL retainedReferences; // @synthesize retainedReferences=_retainedReferences;
@property (readonly) unsigned long long status; // @synthesize status=_status;
@property (readonly) BOOL synchronousDebugMode; // @synthesize synchronousDebugMode=_synchronousDebugMode;
@property (readonly, nonatomic) NSMutableDictionary *userDictionary;

+ (void)initialize;
- (void)addCompletedHandler:(CDUnknownBlockType)arg1;
- (void)addScheduledHandler:(CDUnknownBlockType)arg1;
- (void)commit;
- (void)commitAndHold;
- (void)commitAndReset;
- (void)dealloc;
- (id)description;
- (void)didCompleteWithStartTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2 error:(id)arg3;
- (void)didSchedule:(unsigned long long)arg1 error:(id)arg2;
- (void)didScheduleWithStartTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2 error:(id)arg3;
- (void)enqueue;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)getAndIncrementNumEncoders;
- (id)initWithQueue:(id)arg1 retainedReferences:(BOOL)arg2;
- (id)initWithQueue:(id)arg1 retainedReferences:(BOOL)arg2 synchronousDebugMode:(BOOL)arg3;
- (BOOL)isCommitted;
- (void)kernelSubmitTime;
- (void)presentDrawable:(id)arg1;
- (void)presentDrawable:(id)arg1 afterMinimumDuration:(double)arg2;
- (void)presentDrawable:(id)arg1 atTime:(double)arg2;
- (void)runPerfCounterCallbackWithBlock:(CDUnknownBlockType)arg1;
- (void)setCommitted:(BOOL)arg1;
- (void)setCurrentCommandEncoder:(id)arg1;
- (BOOL)skipRender;
- (void)waitUntilCompleted;
- (void)waitUntilScheduled;

@end

