//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDesaturateShadows : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputIntensity;
    NSNumber *inputThreshold;
    NSNumber *inputSoftness;
}

@property (strong, nonatomic) NSNumber *inputIntensity; // @synthesize inputIntensity;
@property (strong, nonatomic) NSNumber *inputSoftness; // @synthesize inputSoftness;
@property (strong, nonatomic) NSNumber *inputThreshold; // @synthesize inputThreshold;

+ (id)customAttributes;
- (id)outputImage;

@end

