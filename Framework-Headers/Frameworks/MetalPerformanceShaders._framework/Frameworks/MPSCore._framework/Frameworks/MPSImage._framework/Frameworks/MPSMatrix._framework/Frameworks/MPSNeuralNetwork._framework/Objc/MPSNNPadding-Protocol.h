//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/NSObject-Protocol.h>
#import <MPSNeuralNetwork/NSSecureCoding-Protocol.h>

@class MPSImageDescriptor, MPSKernel, NSArray, NSString;

@protocol MPSNNPadding <NSObject, NSSecureCoding>
- (unsigned long long)paddingMethod;

@optional
- (MPSImageDescriptor *)destinationImageDescriptorForSourceImages:(NSArray *)arg1 sourceStates:(NSArray *)arg2 forKernel:(MPSKernel *)arg3 suggestedDescriptor:(MPSImageDescriptor *)arg4;
- (id)inverse;
- (NSString *)label;
@end
