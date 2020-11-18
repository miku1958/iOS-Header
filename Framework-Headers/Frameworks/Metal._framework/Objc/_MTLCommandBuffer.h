//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MTLError, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSString, _MTLCommandQueue;
@protocol MTLCommandBuffer, MTLCommandEncoder, MTLCommandQueue;

@interface _MTLCommandBuffer : NSObject
{
    id<MTLCommandEncoder> _currentCommandEncoder;
    _MTLCommandQueue<MTLCommandQueue> *_queue;
    struct MTLDispatch *_scheduledDispatchList;
    struct MTLDispatch *_completedDispatchList;
    struct _opaque_pthread_mutex_t _mutex;
    struct _opaque_pthread_cond_t {
        long long __sig;
        char __opaque[40];
    } _cond;
    unsigned long long _creationTime;
    unsigned long long _enqueueTime;
    unsigned long long _commitTime;
    unsigned long long _submitToKernelTime;
    unsigned long long _kernelScheduledTime;
    unsigned long long _submitToHardwareTime;
    unsigned long long _completionInterruptTime;
    unsigned long long _kernelCompleteTime;
    unsigned long long _completionHandlerEnqueueTime;
    unsigned long long _completionHandlerExecutionTime;
    unsigned long long _status;
    MTLError *_error;
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
    unsigned long long _numRequestedCounters;
    unsigned long long _numInternalSampleCounters;
    unsigned long long _numEncoders;
    unsigned long long _numThisCommandBuffer;
    _MTLCommandBuffer<MTLCommandBuffer> *_statCommandBuffer;
    int _sampleLock;
    BOOL _StatEnabled;
    unsigned long long _StatOptions;
    unsigned long long _StatLocations;
    unsigned long long _samplesPerStorageBlock;
    unsigned long long _totalNumStatSamples;
    NSMutableArray *_sampleStorage;
    struct MTLStatSampleRec *_samples;
    struct MTLStatSampleRec *_currentSample;
    CDUnknownBlockType _perfSampleHandlerBlock;
    unsigned long long _globalTraceObjectID;
    unsigned long long _labelTraceID;
}

@property (nonatomic, getter=isStatEnabled) BOOL StatEnabled; // @synthesize StatEnabled=_StatEnabled;
@property (nonatomic, getter=getStatLocations) unsigned long long StatLocations; // @synthesize StatLocations=_StatLocations;
@property (nonatomic, getter=getStatOptions) unsigned long long StatOptions; // @synthesize StatOptions=_StatOptions;
@property (readonly) id<MTLCommandQueue> commandQueue; // @synthesize commandQueue=_queue;
@property (readonly) NSError *error;
@property (readonly) unsigned long long globalTraceObjectID; // @synthesize globalTraceObjectID=_globalTraceObjectID;
@property (copy) NSString *label; // @synthesize label=_label;
@property (nonatomic) unsigned long long numEncoders; // @synthesize numEncoders=_numEncoders;
@property (nonatomic) unsigned long long numThisCommandBuffer; // @synthesize numThisCommandBuffer=_numThisCommandBuffer;
@property (getter=isProfilingEnabled) BOOL profilingEnabled;
@property (readonly) NSDictionary *profilingResults;
@property (readonly) BOOL retainedReferences; // @synthesize retainedReferences=_retainedReferences;
@property (strong, nonatomic) _MTLCommandBuffer<MTLCommandBuffer> *statCommandBuffer; // @synthesize statCommandBuffer=_statCommandBuffer;
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
- (void)didComplete:(unsigned long long)arg1 error:(unsigned int)arg2;
- (void)didCompletePreDealloc:(unsigned long long)arg1 error:(unsigned int)arg2;
- (void)didSchedule:(unsigned long long)arg1 error:(unsigned int)arg2;
- (void)enqueue;
- (unsigned long long)getAndIncrementNumEncoders;
- (id)initWithQueue:(id)arg1 retainedReferences:(BOOL)arg2;
- (id)initWithQueue:(id)arg1 retainedReferences:(BOOL)arg2 synchronousDebugMode:(BOOL)arg3;
- (BOOL)isCommitted;
- (void)kernelSubmitTime;
- (struct MTLStatSampleRec *)newSample;
- (void)postProcessCommandbuffer;
- (void)postProcessSamples:(struct MTLStatSampleRec *)arg1 toUserDst:(unsigned long long *)arg2 numSamples:(unsigned long long)arg3;
- (void)presentDrawable:(id)arg1;
- (void)presentDrawable:(id)arg1 atTime:(double)arg2;
- (void)setCommitted:(BOOL)arg1;
- (void)setCurrentCommandEncoder:(id)arg1;
- (BOOL)skipRender;
- (void)waitUntilCompleted;
- (void)waitUntilScheduled;

@end

