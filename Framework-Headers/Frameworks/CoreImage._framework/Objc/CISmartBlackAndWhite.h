//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CISmartBlackAndWhite : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputStrength;
    NSNumber *inputNeutralGamma;
    NSNumber *inputTone;
    NSNumber *inputHue;
    NSNumber *inputGrain;
    NSNumber *inputScaleFactor;
}

@property (copy, nonatomic) NSNumber *inputGrain; // @synthesize inputGrain;
@property (copy, nonatomic) NSNumber *inputHue; // @synthesize inputHue;
@property (strong, nonatomic) CIImage *inputImage; // @synthesize inputImage;
@property (copy, nonatomic) NSNumber *inputNeutralGamma; // @synthesize inputNeutralGamma;
@property (copy, nonatomic) NSNumber *inputScaleFactor; // @synthesize inputScaleFactor;
@property (copy, nonatomic) NSNumber *inputStrength; // @synthesize inputStrength;
@property (copy, nonatomic) NSNumber *inputTone; // @synthesize inputTone;

+ (id)customAttributes;
- (id)_kernel;
- (float *)createHueArray;
- (void)getNonNormalizedSettings:(CDStruct_31328b19 *)arg1;
- (id)hueArrayImage:(float *)arg1;
- (id)outputImage;

@end

