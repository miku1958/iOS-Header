//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface CISparseRendererPreFiltering : CIFilter
{
    CIImage *inputImage;
    NSDictionary *inputTuningParameters;
    NSNumber *inputApertureScaling;
    NSNumber *inputScale;
}

@property (copy) NSNumber *inputApertureScaling; // @synthesize inputApertureScaling;
@property (strong) CIImage *inputImage; // @synthesize inputImage;
@property (strong) NSNumber *inputScale; // @synthesize inputScale;
@property (strong) NSDictionary *inputTuningParameters; // @synthesize inputTuningParameters;

- (id)_kernel:(BOOL)arg1;
- (void)dumpImage:(id)arg1 extent:(struct CGRect)arg2 prefixFilename:(id)arg3;
- (id)outputImage;
- (id)outputImage:(id)arg1 horizontal:(BOOL)arg2 width:(double)arg3;

@end
