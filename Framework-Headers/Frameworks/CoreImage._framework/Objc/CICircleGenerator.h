//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIColor, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CICircleGenerator : CIFilter
{
    CIColor *inputColor;
    CIVector *inputCenter;
    NSNumber *inputRadius;
    NSNumber *inputEdgeBlur;
}

+ (id)customAttributes;
- (id)_CICircle;
- (id)outputImage;

@end

