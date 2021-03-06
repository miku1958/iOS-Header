//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage;

__attribute__((visibility("hidden")))
@interface CILensModelApply : CIFilter
{
    CIImage *inputImage;
    CIImage *inputLensModelParams;
}

@property (strong, nonatomic) CIImage *inputImage; // @synthesize inputImage;
@property (strong, nonatomic) CIImage *inputLensModelParams; // @synthesize inputLensModelParams;

- (id)kernel;
- (id)outputImage;

@end

