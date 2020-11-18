//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@class MTLComputePipelineDescriptor;

@interface MPSNNSimpleCustomNode : MPSNNFilterNode
{
    MTLComputePipelineDescriptor *_desc;
    MTLComputePipelineDescriptor *_arrayDesc;
    CDStruct_da2e99ad _kernelSize;
    CDStruct_da2e99ad _dilationRate;
    CDStruct_da2e99ad _stride;
    BOOL _isBackward;
}

@property (nonatomic) CDStruct_14f26992 dilationRate; // @synthesize dilationRate=_dilationRate;
@property (nonatomic) BOOL isBackwards; // @synthesize isBackwards=_isBackward;
@property (nonatomic) CDStruct_14f26992 kernelSize; // @synthesize kernelSize=_kernelSize;
@property (nonatomic) CDStruct_14f26992 stride; // @synthesize stride=_stride;

+ (id)nodeWithSourceImage:(id)arg1 descriptor:(id)arg2 arrayDescriptor:(id)arg3;
- (id)initWithSourceImage:(id)arg1 descriptor:(id)arg2 arrayDescriptor:(id)arg3;
- (struct FilterGraphNode *)newFilterNode;

@end
