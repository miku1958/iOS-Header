//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CINoiseReduction : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputNoiseLevel;
    NSNumber *inputSharpness;
}

+ (id)customAttributes;
- (id)_CINoiseReduction;
- (id)outputImage;

@end

