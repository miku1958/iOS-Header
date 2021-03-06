//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSDictionary;

__attribute__((visibility("hidden")))
@interface CIPortraitBlurCombiner : CIFilter
{
    CIImage *inputImage;
    CIImage *inputBlurImage;
    CIImage *inputMatteImage;
    NSDictionary *inputTuningParameters;
}

@property (strong) CIImage *inputBlurImage; // @synthesize inputBlurImage;
@property (strong) CIImage *inputImage; // @synthesize inputImage;
@property (strong) CIImage *inputMatteImage; // @synthesize inputMatteImage;
@property (strong) NSDictionary *inputTuningParameters; // @synthesize inputTuningParameters;

- (id)_blendKernel:(BOOL)arg1;
- (id)_ourBlendKernelMetal;
- (id)nonMetalKernel;
- (id)nonMetalKernelYCC;
- (id)outputImage;

@end

