//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUTransformNode.h>

@class NUImageTransformAffine;

@interface NUCropNode : NUTransformNode
{
    BOOL _resetCleanAperture;
    NUImageTransformAffine *_transform;
    CDStruct_996ac03c _cropRect;
}

@property CDStruct_996ac03c cropRect; // @synthesize cropRect=_cropRect;
@property (readonly) BOOL resetCleanAperture; // @synthesize resetCleanAperture=_resetCleanAperture;
@property (strong) NUImageTransformAffine *transform; // @synthesize transform=_transform;

- (void).cxx_destruct;
- (id)_evaluateDepthData:(out id *)arg1;
- (id)_evaluateImage:(out id *)arg1;
- (id)_evaluateImageGeometry:(out id *)arg1;
- (id)_evaluateVideoProperties:(out id *)arg1;
- (id)_transformWithError:(out id *)arg1;
- (BOOL)canPropagateOriginalDepthData;
- (id)initWithRect:(CDStruct_996ac03c)arg1 input:(id)arg2;
- (id)initWithRect:(CDStruct_996ac03c)arg1 input:(id)arg2 resetCleanAperture:(BOOL)arg3;
- (id)initWithSettings:(id)arg1 inputs:(struct NSDictionary *)arg2;
- (id)resolvedNodeWithCachedInputs:(struct NSDictionary *)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;

@end

