//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPaperWash : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputSaturation;
}

@property (copy, nonatomic) NSNumber *inputSaturation; // @synthesize inputSaturation;

+ (id)customAttributes;
- (id)outputImage;

@end

