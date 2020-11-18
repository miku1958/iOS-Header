//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIProSharpenEdges : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputFalloff;
    NSNumber *inputSharpness;
    NSNumber *inputEdgeScale;
}

+ (id)customAttributes;
- (id)_CIBlur1;
- (id)_CIBlur2;
- (id)_CIBlur4;
- (id)_CIConvertRGBtoY;
- (id)_CIEdgesPrep;
- (id)_CIFindEdges;
- (id)_CISharpenCombineEdges;
- (id)outputImage;

@end

