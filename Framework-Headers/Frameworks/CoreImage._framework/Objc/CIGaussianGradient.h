//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIColor, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIGaussianGradient : CIFilter
{
    CIVector *inputCenter;
    CIColor *inputColor0;
    CIColor *inputColor1;
    NSNumber *inputRadius;
}

@property (strong, nonatomic) CIVector *inputCenter; // @synthesize inputCenter;
@property (strong, nonatomic) CIColor *inputColor0; // @synthesize inputColor0;
@property (strong, nonatomic) CIColor *inputColor1; // @synthesize inputColor1;
@property (strong, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;

+ (id)customAttributes;
- (id)_kernel;
- (id)outputImage;

@end

