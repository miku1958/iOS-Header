//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface PVStretchLevelsFilter : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputLow;
    NSNumber *inputMid;
    NSNumber *inputHigh;
}

+ (id)customAttributes;
+ (id)filterWithName:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (id)init;
- (id)outputImage;

@end

