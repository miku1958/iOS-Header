//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPerspectiveCorrection : CIFilter
{
    CIImage *inputImage;
    CIVector *inputTopLeft;
    CIVector *inputTopRight;
    CIVector *inputBottomRight;
    CIVector *inputBottomLeft;
    NSNumber *inputCrop;
}

@property (strong, nonatomic) CIVector *inputBottomLeft; // @synthesize inputBottomLeft;
@property (strong, nonatomic) CIVector *inputBottomRight; // @synthesize inputBottomRight;
@property (strong, nonatomic) NSNumber *inputCrop; // @synthesize inputCrop;
@property (strong, nonatomic) CIImage *inputImage; // @synthesize inputImage;
@property (strong, nonatomic) CIVector *inputTopLeft; // @synthesize inputTopLeft;
@property (strong, nonatomic) CIVector *inputTopRight; // @synthesize inputTopRight;

+ (id)customAttributes;
- (id)_kernel;
- (id)outputImage;

@end

