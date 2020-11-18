//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSCore/MPSExternalPluginBase.h>

#import <MPSNeuralNetwork/MPSExternalCNNUnary-Protocol.h>

@class NSString;

@interface MPSExternalCNNUnary : MPSExternalPluginBase <MPSExternalCNNUnary>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (unsigned long long)encodeToCommandBuffer:(id)arg1 computeCommandEncoder:(id)arg2 options:(unsigned long long)arg3 sourceTexture:(id)arg4 sourceInfo:(const CDStruct_15cf940b *)arg5 destinationTexture:(id)arg6 destinationInfo:(const CDStruct_3d604284 *)arg7;
- (unsigned long long)encodeWithFilter:(id)arg1 encoder:(id)arg2 commandBuffer:(id)arg3 callInfo:(const CDStruct_192e26fb *)arg4;

@end

