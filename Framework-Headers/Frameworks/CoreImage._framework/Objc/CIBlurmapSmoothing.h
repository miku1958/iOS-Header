//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface CIBlurmapSmoothing : CIFilter
{
    CIImage *inputImage;
    NSDictionary *inputTuningParameters;
    NSNumber *inputScale;
    NSNumber *inputDraftMode;
}

@property (strong, nonatomic) NSNumber *inputDraftMode; // @synthesize inputDraftMode;
@property (strong) CIImage *inputImage; // @synthesize inputImage;
@property (strong) NSNumber *inputScale; // @synthesize inputScale;
@property (strong) NSDictionary *inputTuningParameters; // @synthesize inputTuningParameters;

+ (id)customAttributes;
- (id)_kernelH;
- (id)_kernelV;
- (id)outputImage;
- (id)performPass:(id)arg1 reference:(id)arg2 values:(id)arg3 rect:(struct CGRect)arg4;

@end

