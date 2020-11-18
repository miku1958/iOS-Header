//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/MPSExternalPluginBase-Protocol.h>

@class NSArray;
@protocol MTLBuffer, MTLCommandBuffer, MTLComputeCommandEncoder;

@protocol MPSExternalCNNBinary <MPSExternalPluginBase>

@optional
- (unsigned long long)encodeBatchToCommandBuffer:(id<MTLCommandBuffer>)arg1 computeCommandEncoder:(id<MTLComputeCommandEncoder>)arg2 options:(unsigned long long)arg3 pluginOptions:(unsigned long long)arg4 primaryTextures:(NSArray *)arg5 primaryInfo:(const CDStruct_12100558 *)arg6 secondaryTextures:(NSArray *)arg7 secondaryInfo:(const CDStruct_12100558 *)arg8 destinationTextures:(NSArray *)arg9 destinationInfo:(const CDStruct_5948169e *)arg10 predicationBuffer:(id<MTLBuffer>)arg11 predicationOffset:(unsigned long long)arg12;
@end
