//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIColor, CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CUIShapeEffectBlur1 : CIFilter
{
    CIImage *inputImage;
    CIImage *inputFill;
    CIVector *inputOffset;
    NSNumber *inputRadius;
    CIColor *inputGlowColorInner;
    CIColor *inputGlowColorOuter;
    CIColor *inputShadowColorInner;
    CIColor *inputShadowColorOuter;
    NSNumber *inputShadowBlurInner;
    NSNumber *inputShadowBlurOuter;
}

@property (strong, nonatomic) CIImage *inputFill; // @synthesize inputFill;
@property (strong, nonatomic) CIColor *inputGlowColorInner; // @synthesize inputGlowColorInner;
@property (strong, nonatomic) CIColor *inputGlowColorOuter; // @synthesize inputGlowColorOuter;
@property (strong, nonatomic) CIImage *inputImage; // @synthesize inputImage;
@property (strong, nonatomic) CIVector *inputOffset; // @synthesize inputOffset;
@property (strong, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;
@property (strong, nonatomic) NSNumber *inputShadowBlurInner; // @synthesize inputShadowBlurInner;
@property (strong, nonatomic) NSNumber *inputShadowBlurOuter; // @synthesize inputShadowBlurOuter;
@property (strong, nonatomic) CIColor *inputShadowColorInner; // @synthesize inputShadowColorInner;
@property (strong, nonatomic) CIColor *inputShadowColorOuter; // @synthesize inputShadowColorOuter;

+ (id)customAttributes;
- (id)_kernel;
- (id)outputImage;

@end

