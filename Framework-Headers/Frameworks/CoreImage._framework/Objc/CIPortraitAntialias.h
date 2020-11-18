//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPortraitAntialias : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputMaxBlurInPixels;
    NSNumber *inputAntiAliasRadius;
    NSNumber *inputLumaNoiseAmpl;
    NSNumber *inputLumaNoiseModelCoeff;
    NSNumber *inputScale;
    CIVector *inputRect;
    CIVector *inputSensorSize;
}

@property (copy, nonatomic) NSNumber *inputAntiAliasRadius; // @synthesize inputAntiAliasRadius;
@property (strong) CIImage *inputImage; // @synthesize inputImage;
@property (copy, nonatomic) NSNumber *inputLumaNoiseAmpl; // @synthesize inputLumaNoiseAmpl;
@property (copy, nonatomic) NSNumber *inputLumaNoiseModelCoeff; // @synthesize inputLumaNoiseModelCoeff;
@property (copy, nonatomic) NSNumber *inputMaxBlurInPixels; // @synthesize inputMaxBlurInPixels;
@property (copy, nonatomic) CIVector *inputRect; // @synthesize inputRect;
@property (copy, nonatomic) NSNumber *inputScale; // @synthesize inputScale;
@property (copy, nonatomic) CIVector *inputSensorSize; // @synthesize inputSensorSize;

- (id)_kernel:(BOOL)arg1 withAddedNoise:(BOOL)arg2;
- (id)_noiseGeneratorKernel;
- (id)noiseColorKernel;
- (id)outputImage;
- (id)outputImage:(id)arg1 horizontal:(BOOL)arg2;

@end
