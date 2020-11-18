//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Metal/MTLComputePipelineState-Protocol.h>

@class MTLDebugInstrumentationData, MTLIndirectArgumentBufferEmulationData, NSString;
@protocol MTLDevice;

@interface _MTLComputePipelineState : NSObject <MTLComputePipelineState>
{
    NSString *_label;
    id<MTLDevice> _device;
    MTLIndirectArgumentBufferEmulationData *_iabEmulationData;
    MTLDebugInstrumentationData *_debugInstrumentationData;
    BOOL _supportIndirectCommandBuffers;
    long long _textureWriteRoundingMode;
    unsigned long long _resourceIndex;
    unsigned long long _gpuAddress;
}

@property (strong, nonatomic) MTLIndirectArgumentBufferEmulationData *IABEmulationData; // @synthesize IABEmulationData=_iabEmulationData;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) MTLDebugInstrumentationData *debugInstrumentationData; // @synthesize debugInstrumentationData=_debugInstrumentationData;
@property (readonly, copy) NSString *description;
@property (readonly) id<MTLDevice> device; // @synthesize device=_device;
@property (readonly, nonatomic) unsigned long long gpuAddress; // @synthesize gpuAddress=_gpuAddress;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *label; // @synthesize label=_label;
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup; // @dynamic maxTotalThreadsPerThreadgroup;
@property (readonly, nonatomic) unsigned long long resourceIndex; // @synthesize resourceIndex=_resourceIndex;
@property (readonly) unsigned long long staticThreadgroupMemoryLength; // @dynamic staticThreadgroupMemoryLength;
@property (readonly) Class superclass;
@property (readonly) BOOL supportIndirectCommandBuffers;
@property (readonly) long long textureWriteRoundingMode;
@property (readonly) unsigned long long threadExecutionWidth; // @dynamic threadExecutionWidth;
@property (readonly) unsigned long long uniqueIdentifier;

- (void)dealloc;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)functionHandleWithFunction:(id)arg1;
- (id)functionPointerHandleWithFunction:(id)arg1;
- (id)functionPointerHandlesWithFunctions:(id)arg1 range:(struct _NSRange)arg2;
- (unsigned long long)imageblockMemoryLengthForDimensions:(CDStruct_da2e99ad)arg1;
- (id)initWithDevice:(id)arg1 pipelineStateDescriptor:(id)arg2;
- (id)initWithParent:(id)arg1;
- (id)newComputePipelineStateWithAdditionalBinaryFunctions:(id)arg1 error:(id *)arg2;
- (id)newIntersectionFunctionTableWithDescriptor:(id)arg1;
- (id)newVisibleFunctionTableWithDescriptor:(id)arg1;
- (long long)textureWriteFPRoundingMode;

@end
