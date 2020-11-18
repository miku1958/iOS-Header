//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIColor, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIStarShineGenerator : CIFilter
{
    CIVector *inputCenter;
    CIColor *inputColor;
    NSNumber *inputRadius;
    NSNumber *inputCrossScale;
    NSNumber *inputCrossAngle;
    NSNumber *inputCrossOpacity;
    NSNumber *inputCrossWidth;
    NSNumber *inputEpsilon;
}

@property (strong, nonatomic) CIVector *inputCenter; // @synthesize inputCenter;
@property (strong, nonatomic) CIColor *inputColor; // @synthesize inputColor;
@property (strong, nonatomic) NSNumber *inputCrossAngle; // @synthesize inputCrossAngle;
@property (strong, nonatomic) NSNumber *inputCrossOpacity; // @synthesize inputCrossOpacity;
@property (strong, nonatomic) NSNumber *inputCrossScale; // @synthesize inputCrossScale;
@property (strong, nonatomic) NSNumber *inputCrossWidth; // @synthesize inputCrossWidth;
@property (strong, nonatomic) NSNumber *inputEpsilon; // @synthesize inputEpsilon;
@property (strong, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;

+ (id)customAttributes;
- (id)_kernel;
- (id)outputImage;

@end

