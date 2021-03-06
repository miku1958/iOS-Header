//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CISingleChannelColorMap : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputChannelIndex;
    NSNumber *inputShouldNormalize;
    NSNumber *inputColorMapIndex;
}

@property (strong, nonatomic) NSNumber *inputChannelIndex; // @synthesize inputChannelIndex;
@property (strong, nonatomic) NSNumber *inputColorMapIndex; // @synthesize inputColorMapIndex;
@property (strong, nonatomic) CIImage *inputImage; // @synthesize inputImage;
@property (strong, nonatomic) NSNumber *inputShouldNormalize; // @synthesize inputShouldNormalize;

+ (id)customAttributes;
- (id)outputImage;

@end

