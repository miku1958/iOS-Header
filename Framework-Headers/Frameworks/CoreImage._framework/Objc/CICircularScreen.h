//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CICircularScreen : CIFilter
{
    CIImage *inputImage;
    CIVector *inputCenter;
    NSNumber *inputWidth;
    NSNumber *inputSharpness;
}

@property (strong, nonatomic) CIVector *inputCenter; // @synthesize inputCenter;
@property (strong, nonatomic) CIImage *inputImage; // @synthesize inputImage;
@property (strong, nonatomic) NSNumber *inputSharpness; // @synthesize inputSharpness;
@property (strong, nonatomic) NSNumber *inputWidth; // @synthesize inputWidth;

+ (id)customAttributes;
- (id)_kernel;
- (id)outputImage;

@end

