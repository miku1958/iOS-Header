//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPercentileRed : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputPercentile;
    NSNumber *inputCount;
    NSNumber *inputScale;
    NSNumber *inputNormalize;
    NSNumber *inputClip;
    NSNumber *inputHard;
}

@property (strong, nonatomic) NSNumber *inputClip; // @synthesize inputClip;
@property (strong, nonatomic) NSNumber *inputCount; // @synthesize inputCount;
@property (strong, nonatomic) NSNumber *inputHard; // @synthesize inputHard;
@property (strong, nonatomic) NSNumber *inputNormalize; // @synthesize inputNormalize;
@property (strong, nonatomic) NSNumber *inputPercentile; // @synthesize inputPercentile;
@property (strong, nonatomic) NSNumber *inputScale; // @synthesize inputScale;

+ (id)customAttributes;
- (id)outputImage;

@end
