//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CITileFilter : CIFilter
{
    CIImage *inputImage;
    CIVector *inputCenter;
    NSNumber *inputAngle;
    NSNumber *inputWidth;
}

@property (strong, nonatomic) NSNumber *inputAngle; // @synthesize inputAngle;
@property (strong, nonatomic) CIVector *inputCenter; // @synthesize inputCenter;
@property (strong, nonatomic) CIImage *inputImage; // @synthesize inputImage;
@property (strong, nonatomic) NSNumber *inputWidth; // @synthesize inputWidth;

+ (id)customAttributes;
- (id)_croppedCenterPixelImage;
- (id)_kernel;
- (id)_kernel_name;
- (id)_kernel_source;

@end

