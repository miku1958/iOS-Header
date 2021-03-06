//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDroste : CIFilter
{
    CIImage *inputImage;
    CIVector *inputInsetPoint0;
    CIVector *inputInsetPoint1;
    NSNumber *inputStrands;
    NSNumber *inputPeriodicity;
    NSNumber *inputRotation;
    NSNumber *inputZoom;
}

+ (id)customAttributes;
- (id)_CIDroste;
- (id)outputImage;

@end

