//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/MPSExternalPluginBase-Protocol.h>

@protocol MTLCommandBuffer, MTLComputeCommandEncoder, MTLTexture;

@protocol MPSExternalCNNUnary <MPSExternalPluginBase>
- (unsigned long long)encodeToCommandBuffer:(id<MTLCommandBuffer>)arg1 computeCommandEncoder:(id<MTLComputeCommandEncoder>)arg2 options:(unsigned long long)arg3 pluginOptions:(unsigned long long)arg4 sourceTexture:(id<MTLTexture>)arg5 sourceInfo:(const CDStruct_15cf940b *)arg6 destinationTexture:(id<MTLTexture>)arg7 destinationInfo:(const CDStruct_3d604284 *)arg8;
- (unsigned long long)encodeToCommandBuffer:(id<MTLCommandBuffer>)arg1 computeCommandEncoder:(id<MTLComputeCommandEncoder>)arg2 options:(unsigned long long)arg3 sourceTexture:(id<MTLTexture>)arg4 sourceInfo:(const CDStruct_15cf940b *)arg5 destinationTexture:(id<MTLTexture>)arg6 destinationInfo:(const CDStruct_3d604284 *)arg7;
@end

