//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIColor, CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CUIOuterGlowOrShadowFilter : CIFilter
{
    CIImage *inputImage;
    CIVector *inputOffset;
    NSNumber *inputRange;
    NSNumber *inputRadius;
    NSNumber *inputSize;
    NSNumber *inputSpread;
    CIColor *inputColor;
}

@property (strong, nonatomic) CIColor *inputColor; // @synthesize inputColor;
@property (strong, nonatomic) CIImage *inputImage; // @synthesize inputImage;
@property (strong, nonatomic) CIVector *inputOffset; // @synthesize inputOffset;
@property (strong, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;
@property (strong, nonatomic) NSNumber *inputRange; // @synthesize inputRange;
@property (strong, nonatomic) NSNumber *inputSize; // @synthesize inputSize;
@property (strong, nonatomic) NSNumber *inputSpread; // @synthesize inputSpread;

+ (id)customAttributes;
- (id)_kernel;
- (id)outputImage;

@end

