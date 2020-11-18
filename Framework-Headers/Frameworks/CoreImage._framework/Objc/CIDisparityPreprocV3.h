//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage;

__attribute__((visibility("hidden")))
@interface CIDisparityPreprocV3 : CIFilter
{
    CIImage *inputImage;
    CIImage *inputAlphaImage;
}

@property (strong) CIImage *inputAlphaImage; // @synthesize inputAlphaImage;
@property (strong) CIImage *inputImage; // @synthesize inputImage;

- (id)outputImage;
- (id)preprocKernel;
- (id)preprocKernelNoAlpha;

@end

