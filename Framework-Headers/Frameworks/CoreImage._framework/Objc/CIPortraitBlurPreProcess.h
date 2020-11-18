//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPortraitBlurPreProcess : CIFilter
{
    CIImage *inputImage;
    CIImage *inputBlurmapImage;
    NSNumber *inputUseMetal;
}

@property (strong) CIImage *inputBlurmapImage; // @synthesize inputBlurmapImage;
@property (strong) CIImage *inputImage; // @synthesize inputImage;
@property (copy, nonatomic) NSNumber *inputUseMetal; // @synthesize inputUseMetal;

- (id)_kernel;
- (id)_kernelMetal;
- (id)outputImage;

@end

