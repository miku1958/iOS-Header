//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSArray, NSNumber;

__attribute__((visibility("hidden")))
@interface CIConvolution : CIFilter
{
    CIImage *inputImage;
    NSArray *inputPoints;
    NSArray *inputWeights;
    NSNumber *inputLinearFilterModeEnabled;
}

- (id)_CIConvolutionAdd_1;
- (id)_CIConvolutionAdd_2;
- (id)_CIConvolutionAdd_3;
- (id)_CIConvolutionAdd_4;
- (id)_CIConvolutionAdd_5;
- (id)_CIConvolutionAdd_6;
- (id)_CIConvolutionAdd_7;
- (id)_CIConvolutionAdd_8;
- (id)doConvolutionPass:(id)arg1 weights:(id)arg2 sums:(id)arg3;
- (id)outputImage;
- (int)samplesPerPass;

@end

