//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNDArray/MPSNDArrayUnaryGradientKernel.h>

@interface MPSNDArrayStridedSliceGradient : MPSNDArrayUnaryGradientKernel
{
}

+ (const struct MPSLibraryInfo *)libraryInfo;
- (id)destinationArrayDescriptorForSourceArrays:(id)arg1 sourceState:(id)arg2;
- (void)encodeToCommandBuffer:(id)arg1 sourceArray:(id)arg2 sourceGradient:(id)arg3 gradientState:(id)arg4 destinationArray:(id)arg5;
- (id)initWithDevice:(id)arg1;
- (unsigned long long)kernelDimensionalityForSourceArrays:(id)arg1;

@end
