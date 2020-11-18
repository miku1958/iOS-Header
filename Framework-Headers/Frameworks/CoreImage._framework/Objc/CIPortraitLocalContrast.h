//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPortraitLocalContrast : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputStrength;
    CIVector *inputScale;
}

+ (id)customAttributes;
- (id)_convertToGrayscale;
- (id)_kernelLocalContrast;
- (id)outputImage;

@end

