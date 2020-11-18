//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/MPSNNGradientState.h>

@protocol MTLBuffer;

@interface MPSCNNDropoutGradientState : MPSNNGradientState
{
    CDStruct_da2e99ad _maskStrideInPixels;
    float _keepProbability;
    unsigned long long _resourcePixelFormat;
    CDStruct_da2e99ad _resourceSize;
    unsigned long long _commonBufferOffsetBytes;
    id<MTLBuffer> _commonMaskBuffer;
}

- (void)dealloc;
- (id)init;
- (id)maskData;
- (void)synchronizeOnCommandBuffer:(id)arg1;

@end
