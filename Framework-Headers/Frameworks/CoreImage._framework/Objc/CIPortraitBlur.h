//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface CIPortraitBlur : CIFilter
{
    CIImage *inputImage;
    CIImage *inputBlurmapImage;
    NSNumber *inputLumaNoiseScale;
    NSNumber *inputScale;
    NSDictionary *inputTuningParameters;
    NSString *inputShape;
}

@property (strong) CIImage *inputBlurmapImage; // @synthesize inputBlurmapImage;
@property (strong) CIImage *inputImage; // @synthesize inputImage;
@property (copy, nonatomic) NSNumber *inputLumaNoiseScale; // @synthesize inputLumaNoiseScale;
@property (copy, nonatomic) NSNumber *inputScale; // @synthesize inputScale;
@property (strong, nonatomic) NSString *inputShape; // @synthesize inputShape;
@property (strong, nonatomic) NSDictionary *inputTuningParameters; // @synthesize inputTuningParameters;

+ (id)customAttributes;
- (id)_kernel;
- (id)_kernelMetal;
- (id)_kernelWithShapesMetal;
- (id)_kernelsWithShapes;
- (id)_ourBlendKernel;
- (id)_ourBlendKernelMetal;
- (id)outputImage;
- (id)outputImage:(BOOL)arg1;

@end

