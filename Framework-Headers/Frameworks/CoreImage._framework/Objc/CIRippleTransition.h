//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIRippleTransition : CIFilter
{
    CIImage *inputImage;
    CIImage *inputTargetImage;
    CIImage *inputShadingImage;
    CIVector *inputCenter;
    CIVector *inputExtent;
    NSNumber *inputTime;
    NSNumber *inputWidth;
    NSNumber *inputScale;
}

+ (id)customAttributes;
- (id)_CIRippleTransition;
- (id)outputImage;

@end

