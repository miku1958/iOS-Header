//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MTLCapture/CaptureMTLObject-Protocol.h>
#import <MTLCapture/MTLIntersectionFunctionTable-Protocol.h>
#import <MTLCapture/MTLResourceSPI-Protocol.h>

@class NSString;
@protocol MTLBuffer, MTLComputePipelineState, MTLDevice, MTLHeap, MTLIntersectionFunctionTable, MTLIntersectionFunctionTableSPI><MTLResourceSPI;

@interface CaptureMTLIntersectionFunctionTable : NSObject <MTLIntersectionFunctionTable, MTLResourceSPI, CaptureMTLObject>
{
    id<MTLIntersectionFunctionTableSPI><MTLResourceSPI> _baseObject;
    id<MTLDevice> _captureDevice;
    id<MTLBuffer> _captureBuffer;
    id<MTLHeap> _captureHeap;
    id<MTLComputePipelineState> _captureComputePipelineState;
    struct GTTraceContext *_traceContext;
    struct GTTraceStream *_traceStream;
}

@property (readonly) unsigned long long allocatedSize;
@property (readonly) unsigned long long allocationID;
@property (readonly) id<MTLIntersectionFunctionTable> baseObject;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) id<MTLHeap> heap;
@property (readonly) unsigned long long heapOffset;
@property (copy) NSString *label;
@property (readonly) unsigned long long protectionOptions;
@property (readonly) unsigned long long resourceOptions;
@property int responsibleProcess;
@property (readonly) unsigned long long storageMode;
@property (readonly) unsigned long long streamReference;
@property (readonly) Class superclass;
@property (readonly) struct GTTraceContext *traceContext;
@property (readonly) struct GTTraceStream *traceStream;
@property (readonly) unsigned long long unfilteredResourceOptions;

- (void).cxx_destruct;
- (BOOL)conformsToProtocol:(id)arg1;
- (void)dealloc;
- (BOOL)doesAliasAllResources:(const id *)arg1 count:(unsigned long long)arg2;
- (BOOL)doesAliasAnyResources:(const id *)arg1 count:(unsigned long long)arg2;
- (BOOL)doesAliasResource:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)globalBuffer;
- (unsigned long long)globalBufferOffset;
- (id)initWithBaseObject:(id)arg1 captureBuffer:(id)arg2;
- (id)initWithBaseObject:(id)arg1 captureComputePipelineState:(id)arg2;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;
- (id)initWithBaseObject:(id)arg1 captureHeap:(id)arg2;
- (BOOL)isAliasable;
- (BOOL)isComplete;
- (BOOL)isPurgeable;
- (void)makeAliasable;
- (id)originalObject;
- (unsigned long long)resourceIndex;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;
- (void)setFunction:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setFunctions:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setGlobalBuffer:(id)arg1;
- (void)setGlobalBufferOffset:(unsigned long long)arg1;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (void)setVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setVisibleFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;
- (void)touch;
- (unsigned long long)uniqueIdentifier;
- (void)waitUntilComplete;

@end
