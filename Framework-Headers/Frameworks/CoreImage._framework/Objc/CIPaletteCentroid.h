//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPaletteCentroid : CIFilter
{
    CIImage *inputImage;
    CIImage *inputPaletteImage;
    NSNumber *inputPerceptual;
}

@property (strong, nonatomic) CIImage *inputImage; // @synthesize inputImage;
@property (strong, nonatomic) CIImage *inputPaletteImage; // @synthesize inputPaletteImage;
@property (strong, nonatomic) NSNumber *inputPerceptual; // @synthesize inputPerceptual;

+ (id)customAttributes;
- (id)_kernelClusterMask;
- (id)outputImage;

@end
