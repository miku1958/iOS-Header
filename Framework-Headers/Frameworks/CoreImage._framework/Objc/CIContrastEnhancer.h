//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIContrastEnhancer : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputIntensity;
    NSNumber *inputScale;
    NSNumber *inputLocal;
    NSNumber *inputPerceptual;
}

@property (strong, nonatomic) NSNumber *inputIntensity; // @synthesize inputIntensity;
@property (strong, nonatomic) NSNumber *inputLocal; // @synthesize inputLocal;
@property (strong, nonatomic) NSNumber *inputPerceptual; // @synthesize inputPerceptual;
@property (strong, nonatomic) NSNumber *inputScale; // @synthesize inputScale;

+ (id)customAttributes;
- (id)outputImage;

@end
