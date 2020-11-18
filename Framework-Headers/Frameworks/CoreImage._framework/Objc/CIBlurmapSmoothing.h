//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage;

__attribute__((visibility("hidden")))
@interface CIBlurmapSmoothing : CIFilter
{
    CIImage *inputImage;
}

@property (strong) CIImage *inputImage; // @synthesize inputImage;

- (id)_kernelH;
- (id)_kernelV;
- (id)outputImage;
- (id)performPass:(id)arg1 reference:(id)arg2 values:(id)arg3 rect:(struct CGRect)arg4;

@end
