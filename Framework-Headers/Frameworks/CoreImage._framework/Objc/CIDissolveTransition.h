//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDissolveTransition : CIFilter
{
    CIImage *inputImage;
    CIImage *inputTargetImage;
    NSNumber *inputTime;
}

@property (strong, nonatomic) CIImage *inputImage; // @synthesize inputImage;
@property (strong, nonatomic) CIImage *inputTargetImage; // @synthesize inputTargetImage;
@property (strong, nonatomic) NSNumber *inputTime; // @synthesize inputTime;

+ (id)customAttributes;
- (id)_fadeKernel;
- (id)_kernel;
- (id)outputImage;

@end
