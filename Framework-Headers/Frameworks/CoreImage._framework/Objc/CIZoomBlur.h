//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIZoomBlur : CIFilter
{
    CIImage *inputImage;
    CIVector *inputCenter;
    NSNumber *inputAmount;
}

@property (strong, nonatomic) NSNumber *inputAmount; // @synthesize inputAmount;
@property (strong, nonatomic) CIVector *inputCenter; // @synthesize inputCenter;
@property (strong, nonatomic) CIImage *inputImage; // @synthesize inputImage;

+ (id)customAttributes;
- (id)_blur:(id)arg1 pass:(int)arg2 weightsFactor:(float)arg3;
- (BOOL)_isIdentity;
- (id)_kernel;
- (id)outputImage;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;

@end

