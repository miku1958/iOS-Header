//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage;

__attribute__((visibility("hidden")))
@interface CIMedianFilter : CIFilter
{
    CIImage *inputImage;
}

@property (strong, nonatomic) CIImage *inputImage; // @synthesize inputImage;

+ (id)customAttributes;
- (id)_kernel3x3;
- (id)outputImage;

@end

