//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

__attribute__((visibility("hidden")))
@interface CITemperatureAndTint : CIFilter
{
    CIImage *inputImage;
    CIVector *inputNeutral;
    CIVector *inputTargetNeutral;
}

@property (strong, nonatomic) CIImage *inputImage; // @synthesize inputImage;
@property (strong, nonatomic) CIVector *inputNeutral; // @dynamic inputNeutral;
@property (strong, nonatomic) CIVector *inputTargetNeutral; // @synthesize inputTargetNeutral;

+ (id)customAttributes;
- (id)outputImage;

@end
