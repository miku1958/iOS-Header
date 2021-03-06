//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDisparityRefinement : CIFilter
{
    CIImage *inputDisparityImage;
    CIImage *inputImage;
    NSNumber *inputPropagateKernel;
    NSNumber *inputSmoothSigma;
    NSNumber *inputPropagateMinWeightSum;
    NSNumber *inputPropagateSigmaLuma;
    NSNumber *inputPropagateSigmaChma;
    NSNumber *inputScale;
    CIVector *inputOriginalSize;
}

@property (strong) CIImage *inputDisparityImage; // @synthesize inputDisparityImage;
@property (strong) CIImage *inputImage; // @synthesize inputImage;
@property (copy) CIVector *inputOriginalSize; // @synthesize inputOriginalSize;
@property (copy) NSNumber *inputPropagateKernel; // @synthesize inputPropagateKernel;
@property (copy) NSNumber *inputPropagateMinWeightSum; // @synthesize inputPropagateMinWeightSum;
@property (copy) NSNumber *inputPropagateSigmaChma; // @synthesize inputPropagateSigmaChma;
@property (copy) NSNumber *inputPropagateSigmaLuma; // @synthesize inputPropagateSigmaLuma;
@property (copy) NSNumber *inputScale; // @synthesize inputScale;
@property (copy) NSNumber *inputSmoothSigma; // @synthesize inputSmoothSigma;

+ (id)customAttributes;
- (id)_combineImages;
- (id)_initialConversionRGB;
- (id)_propagateDisparity;
- (id)_propagateDisparityCombined;
- (id)_propagateDisparityR1;
- (id)_propagateDisparityR1Combined;
- (id)_pyramidGenerateLevel;
- (id)_smoothDisparity;
- (id)generatePyramidLevel:(id)arg1 useMetal:(BOOL)arg2;
- (id)initialConversionForSize:(struct CGSize)arg1 useMetal:(BOOL)arg2;
- (id)outputImage;
- (id)outputImageUsingMetal:(BOOL)arg1;
- (id)propagateDisparity:(id)arg1 pyramids:(id *)arg2 useMetal:(BOOL)arg3 computedPyramidLevels:(int)arg4;
- (id)shiftmapLevelZeroWithSize:(struct CGSize)arg1 useMetal:(BOOL)arg2;
- (id)smoothDisparityImage:(id)arg1 useMetal:(BOOL)arg2;

@end

