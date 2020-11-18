//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MTLStageInputOutputDescriptor, SCNMTLComputePipeline;
@protocol MTLBuffer;

__attribute__((visibility("hidden")))
@interface SCNMTLSkin : NSObject
{
    unsigned int _vertexCount;
    BOOL _needNormal;
    BOOL _needTangent;
    id<MTLBuffer> _vertexWeightIndicesBuffer;
    id<MTLBuffer> _boneIndicesBuffer;
    id<MTLBuffer> _boneWeightsBuffer;
    SCNMTLComputePipeline *_computePS;
    MTLStageInputOutputDescriptor *_computeStageDesc;
}

- (void)dealloc;
- (id)initWithSkinner:(struct __C3DSkinner *)arg1 baseMesh:(struct __C3DMesh *)arg2 baseGeometry:(struct __C3DGeometry *)arg3 resourceManager:(id)arg4;
- (void)skinMesh:(id)arg1 with:(id)arg2 skinner:(struct __C3DSkinner *)arg3 renderContext:(id)arg4;

@end
