//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIColor, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CISunbeamsGenerator : CIFilter
{
    CIVector *inputCenter;
    CIColor *inputColor;
    NSNumber *inputSunRadius;
    NSNumber *inputMaxStriationRadius;
    NSNumber *inputStriationStrength;
    NSNumber *inputStriationContrast;
    NSNumber *inputTime;
}

+ (id)customAttributes;
- (id)_CISunbeams;
- (id)outputImage;

@end

