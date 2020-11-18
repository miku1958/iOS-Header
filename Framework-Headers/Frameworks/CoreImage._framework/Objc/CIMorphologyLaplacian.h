//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIMorphologyLaplacian : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputRadius;
}

@property (strong, nonatomic) CIImage *inputImage; // @synthesize inputImage;
@property (strong, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;

+ (id)customAttributes;
- (id)outputImage;

@end

