//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIVortexDistortion : CIFilter
{
    CIImage *inputImage;
    CIVector *inputCenter;
    NSNumber *inputRadius;
    NSNumber *inputAngle;
}

@property (strong, nonatomic) NSNumber *inputAngle; // @synthesize inputAngle;
@property (strong, nonatomic) CIVector *inputCenter; // @synthesize inputCenter;
@property (strong, nonatomic) CIImage *inputImage; // @synthesize inputImage;
@property (strong, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;

+ (id)customAttributes;
- (BOOL)_isIdentity;
- (id)_kernel;
- (id)outputImage;

@end

