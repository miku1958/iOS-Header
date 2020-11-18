//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPortraitLightingNeckContour : CIFilter
{
    CIImage *inputImage;
    CIVector *inputCenter;
    CIVector *inputChin;
    NSNumber *inputWidth;
    NSNumber *inputHeight;
    NSNumber *inputStrength;
    NSNumber *inputOrientation;
    NSNumber *inputFaceOrientation;
    NSNumber *inputScale;
}

@property (strong, nonatomic) CIVector *inputCenter; // @synthesize inputCenter;
@property (strong, nonatomic) CIVector *inputChin; // @synthesize inputChin;
@property (strong, nonatomic) NSNumber *inputFaceOrientation; // @synthesize inputFaceOrientation;
@property (strong, nonatomic) NSNumber *inputHeight; // @synthesize inputHeight;
@property (strong, nonatomic) CIImage *inputImage; // @synthesize inputImage;
@property (strong, nonatomic) NSNumber *inputOrientation; // @synthesize inputOrientation;
@property (strong, nonatomic) NSNumber *inputScale; // @synthesize inputScale;
@property (strong, nonatomic) NSNumber *inputStrength; // @synthesize inputStrength;
@property (strong, nonatomic) NSNumber *inputWidth; // @synthesize inputWidth;

+ (id)customAttributes;
- (id)_neckContourKernel;
- (id)outputImage;

@end

