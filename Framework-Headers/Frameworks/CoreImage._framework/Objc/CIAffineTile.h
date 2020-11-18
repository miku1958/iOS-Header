//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSValue;

__attribute__((visibility("hidden")))
@interface CIAffineTile : CIFilter
{
    CIImage *inputImage;
    NSValue *inputTransform;
}

@property (strong, nonatomic) CIImage *inputImage; // @synthesize inputImage;
@property (strong, nonatomic) NSValue *inputTransform; // @synthesize inputTransform;

+ (id)customAttributes;
- (id)_kernel;
- (id)outputImage;

@end

