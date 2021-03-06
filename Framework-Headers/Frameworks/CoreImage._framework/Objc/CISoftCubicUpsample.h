//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CISoftCubicUpsample : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputScale;
}

@property (strong, nonatomic) CIImage *inputImage; // @synthesize inputImage;
@property (strong, nonatomic) NSNumber *inputScale; // @synthesize inputScale;

+ (id)customAttributes;
- (BOOL)_isIdentity;
- (struct vec2)_scale;
- (id)outputImage;

@end

