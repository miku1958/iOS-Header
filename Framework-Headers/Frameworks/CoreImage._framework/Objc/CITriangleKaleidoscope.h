//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CITriangleKaleidoscope : CIFilter
{
    CIImage *inputImage;
    CIVector *inputPoint;
    NSNumber *inputSize;
    NSNumber *inputRotation;
    NSNumber *inputDecay;
}

@property (strong, nonatomic) NSNumber *inputDecay; // @synthesize inputDecay;
@property (strong, nonatomic) CIImage *inputImage; // @synthesize inputImage;
@property (strong, nonatomic) CIVector *inputPoint; // @synthesize inputPoint;
@property (strong, nonatomic) NSNumber *inputRotation; // @synthesize inputRotation;
@property (strong, nonatomic) NSNumber *inputSize; // @synthesize inputSize;

+ (id)customAttributes;
- (id)_colorKernel;
- (id)_geomKernel;
- (id)outputImage;

@end

