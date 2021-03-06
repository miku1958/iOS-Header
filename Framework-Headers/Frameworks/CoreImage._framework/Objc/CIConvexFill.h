//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIConvexFill : CIFilter
{
    CIImage *inputImage;
    CIImage *inputCenter;
    NSNumber *inputThreshold;
    CIVector *inputAreaThresholdLoHi;
    NSNumber *inputSplat;
}

@property (strong, nonatomic) CIVector *inputAreaThresholdLoHi; // @synthesize inputAreaThresholdLoHi;
@property (strong, nonatomic) CIImage *inputCenter; // @synthesize inputCenter;
@property (strong, nonatomic) NSNumber *inputSplat; // @synthesize inputSplat;
@property (strong, nonatomic) NSNumber *inputThreshold; // @synthesize inputThreshold;

- (id)outputImage;

@end

