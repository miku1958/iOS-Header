//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSArray, NSNumber;

@interface GUBWBilateralConvolution : CIFilter
{
    CIImage *_inputImage;
    NSArray *_inputPoints;
    NSArray *_inputWeights;
    NSNumber *_inputEdgeDetail;
    NSNumber *_inputBorder;
}

@property (strong) NSNumber *inputBorder; // @synthesize inputBorder=_inputBorder;
@property (strong) NSNumber *inputEdgeDetail; // @synthesize inputEdgeDetail=_inputEdgeDetail;
@property (strong) CIImage *inputImage; // @synthesize inputImage=_inputImage;
@property (strong) NSArray *inputPoints; // @synthesize inputPoints=_inputPoints;
@property (strong) NSArray *inputWeights; // @synthesize inputWeights=_inputWeights;

+ (id)BWBilateralKernels;
+ (id)bilateralLoop11Kernel;
+ (id)bilateralLoop2Kernel;
+ (id)bilateralLoop5Kernel;
- (void).cxx_destruct;
- (struct CGRect)bilateralROI:(long long)arg1 destRect:(struct CGRect)arg2 userInfo:(id)arg3;
- (id)doBilateralLoop:(id)arg1 points:(id)arg2 weights:(id)arg3 slope:(id)arg4;
- (id)outputImage;

@end

