//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MTLCapture/MTLCommandBuffer-Protocol.h>

@class MTLComputePassDescriptor, MTLRenderPassDescriptor, NSDictionary, NSMutableDictionary;
@protocol MTLComputeCommandEncoder, MTLDebugCommandEncoder, MTLEvent, MTLHeap, MTLRenderCommandEncoder, MTLResource;

@protocol MTLCommandBufferSPI <MTLCommandBuffer>

@property (readonly) unsigned long long globalTraceObjectID;
@property (readonly, nonatomic, getter=getListIndex) unsigned long long listIndex;
@property (getter=isProfilingEnabled) BOOL profilingEnabled;
@property (readonly) NSDictionary *profilingResults;
@property (readonly, nonatomic) NSMutableDictionary *userDictionary;

- (void)addPurgedHeap:(id<MTLHeap>)arg1;
- (void)addPurgedResource:(id<MTLResource>)arg1;

@optional
- (void)commitAndHold;
- (BOOL)commitAndWaitUntilSubmitted;
- (void *)debugBufferContentsWithLength:(unsigned long long *)arg1;
- (id<MTLDebugCommandEncoder>)debugCommandEncoder;
- (void)dropResourceGroups:(const id *)arg1 count:(unsigned long long)arg2;
- (void)encodeCacheHintFinalize:(unsigned long long)arg1 resourceGroups:(const id *)arg2 count:(unsigned long long)arg3;
- (void)encodeCacheHintTag:(unsigned long long)arg1 resourceGroups:(const id *)arg2 count:(unsigned long long)arg3;
- (void)encodeWaitForEvent:(id<MTLEvent>)arg1 value:(unsigned long long)arg2 timeout:(unsigned int)arg3;
- (unsigned long long)protectionOptions;
- (id<MTLComputeCommandEncoder>)sampledComputeCommandEncoderWithDescriptor:(MTLComputePassDescriptor *)arg1 programInfoBuffer:(CDUnion_c6e49ed4 *)arg2 capacity:(unsigned long long)arg3;
- (id<MTLComputeCommandEncoder>)sampledComputeCommandEncoderWithDispatchType:(unsigned long long)arg1 programInfoBuffer:(CDUnion_c6e49ed4 *)arg2 capacity:(unsigned long long)arg3;
- (id<MTLComputeCommandEncoder>)sampledComputeCommandEncoderWithProgramInfoBuffer:(CDUnion_c6e49ed4 *)arg1 capacity:(unsigned long long)arg2;
- (id<MTLRenderCommandEncoder>)sampledRenderCommandEncoderWithDescriptor:(MTLRenderPassDescriptor *)arg1 programInfoBuffer:(CDUnion_c6e49ed4 *)arg2 capacity:(unsigned long long)arg3;
- (void)setProtectionOptions:(unsigned long long)arg1;
- (void)setResourceGroups:(const id *)arg1 count:(unsigned long long)arg2;
@end
