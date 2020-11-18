//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CISharpenLuminance : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputSharpness;
    NSNumber *inputRadius;
}

@property (strong, nonatomic) CIImage *inputImage; // @synthesize inputImage;
@property (strong, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;
@property (strong, nonatomic) NSNumber *inputSharpness; // @synthesize inputSharpness;

+ (id)customAttributes;
- (BOOL)_isIdentity;
- (id)_kernel;
- (id)outputImage;

@end

