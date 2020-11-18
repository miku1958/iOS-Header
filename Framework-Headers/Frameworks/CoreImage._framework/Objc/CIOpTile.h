//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIOpTile : CIFilter
{
    CIImage *inputImage;
    CIVector *inputCenter;
    NSNumber *inputScale;
    NSNumber *inputAngle;
    NSNumber *inputWidth;
}

+ (id)customAttributes;
- (id)_CIOpTile;
- (id)outputImage;

@end
