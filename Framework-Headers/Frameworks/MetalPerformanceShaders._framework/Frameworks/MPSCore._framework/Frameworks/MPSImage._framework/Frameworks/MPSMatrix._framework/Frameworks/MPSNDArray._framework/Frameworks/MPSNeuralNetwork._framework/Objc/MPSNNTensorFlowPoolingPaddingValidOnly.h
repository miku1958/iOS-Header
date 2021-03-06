//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/MPSNNDefaultPadding.h>

#import <MPSNeuralNetwork/MPSNNPadding-Protocol.h>

@class NSString;

@interface MPSNNTensorFlowPoolingPaddingValidOnly : MPSNNDefaultPadding <MPSNNPadding>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 forKernel:(id)arg3 suggestedDescriptor:(id)arg4;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)label;

@end

