//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage;

__attribute__((visibility("hidden")))
@interface _CICompositeFilter : CIFilter
{
    CIImage *inputImage;
    CIImage *inputBackgroundImage;
}

@property (strong, nonatomic) CIImage *inputBackgroundImage; // @synthesize inputBackgroundImage;
@property (strong, nonatomic) CIImage *inputImage; // @synthesize inputImage;

+ (id)_kernel;
+ (id)_kernel_source;
+ (id)customAttributes;
- (struct CGRect)_extentForInputExtent:(struct CGRect)arg1 backgroundExtent:(struct CGRect)arg2;
- (id)outputImage;

@end
