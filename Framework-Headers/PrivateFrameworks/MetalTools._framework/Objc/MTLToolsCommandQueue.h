//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsObject.h>

#import <MetalTools/MTLCommandQueueSPI-Protocol.h>

@class MTLToolsPointerArray, NSObject, NSString;
@protocol MTLDevice, OS_dispatch_queue;

@interface MTLToolsCommandQueue : MTLToolsObject <MTLCommandQueueSPI>
{
    MTLToolsPointerArray *_commandBuffers;
}

@property (nonatomic, getter=isStatEnabled) BOOL StatEnabled;
@property (nonatomic, getter=getStatLocations) unsigned long long StatLocations;
@property (nonatomic, getter=getStatOptions) unsigned long long StatOptions;
@property int backgroundTrackingPID;
@property (readonly, nonatomic) MTLToolsPointerArray *commandBuffers; // @synthesize commandBuffers=_commandBuffers;
@property (readonly) NSObject<OS_dispatch_queue> *commitQueue;
@property (readonly) BOOL commitSynchronously;
@property (readonly) NSObject<OS_dispatch_queue> *completionQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) id<MTLDevice> device;
@property (readonly) BOOL disableCrossQueueHazardTracking;
@property BOOL executionEnabled;
@property (readonly) unsigned long long hash;
@property BOOL isOpenGLQueue;
@property (copy) NSString *label;
@property (readonly) unsigned long long maxCommandBufferCount;
@property (getter=isProfilingEnabled) BOOL profilingEnabled;
@property (readonly) unsigned long long qosLevel;
@property BOOL skipRender;
@property (readonly) Class superclass;

- (void)acceptVisitor:(id)arg1;
- (void)addPerfSampleHandler:(CDUnknownBlockType)arg1;
- (id)availableCounters;
- (id)commandBuffer;
- (id)commandBufferWithUnretainedReferences;
- (id)counterInfo;
- (void)dealloc;
- (void)finish;
- (unsigned long long)getBackgroundGPUPriority;
- (unsigned long long)getGPUPriority;
- (id)getRequestedCounters;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (void)insertDebugCaptureBoundary;
- (int)requestCounters:(id)arg1;
- (int)requestCounters:(id)arg1 withIndex:(unsigned long long)arg2;
- (BOOL)setBackgroundGPUPriority:(unsigned long long)arg1;
- (BOOL)setBackgroundGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2;
- (void)setCompletionQueue:(id)arg1;
- (BOOL)setGPUPriority:(unsigned long long)arg1;
- (BOOL)setGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2;
- (void)setSubmissionQueue:(id)arg1;
- (id)subdivideCounterList:(id)arg1;

@end
