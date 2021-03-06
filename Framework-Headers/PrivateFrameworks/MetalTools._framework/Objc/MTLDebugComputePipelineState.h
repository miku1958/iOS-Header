//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsComputePipelineState.h>

@class MTLComputePipelineDescriptor, MTLComputePipelineReflection;
@protocol MTLFunction;

@interface MTLDebugComputePipelineState : MTLToolsComputePipelineState
{
    unsigned long long _maxThreadPositionInGrid[3];
    unsigned long long _maxThreadsPerGrid[3];
    unsigned long long _maxThreadPositionInThreadgroup[3];
    unsigned long long _maxThreadIndexInThreadgroup[3];
    unsigned long long _maxThreadsPerThreadgroup[3];
    unsigned long long _maxThreadgroupPositionInGrid[3];
    unsigned long long _maxThreadgroupsPerGrid[3];
    unsigned long long _maxStageInGridSize[3];
    unsigned long long _maxStageInGridOrigin[3];
    id<MTLFunction> _function;
    MTLComputePipelineDescriptor *_descriptor;
    MTLComputePipelineReflection *_reflection;
}

@property (readonly, nonatomic) MTLComputePipelineDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property (readonly, nonatomic) id<MTLFunction> function; // @synthesize function=_function;
@property (readonly, nonatomic) MTLComputePipelineReflection *reflection; // @synthesize reflection=_reflection;

- (void)dealloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)functionHandleToDebugFunctionHandle:(id)arg1 parentFunction:(id)arg2;
- (id)functionHandleWithFunction:(id)arg1;
- (id)getParameter:(id)arg1;
- (id)initWithComputePipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 descriptor:(id)arg4;
- (BOOL)isAncestorOf:(id)arg1;
- (id)newComputePipelineStateWithAdditionalBinaryFunctions:(id)arg1;
- (id)newComputePipelineStateWithAdditionalBinaryFunctions:(id)arg1 error:(id *)arg2;
- (id)newIntersectionFunctionTableWithDescriptor:(id)arg1;
- (id)newVisibleFunctionTableWithDescriptor:(id)arg1;
- (void)validateHandleForSetFunction:(id)arg1;

@end

