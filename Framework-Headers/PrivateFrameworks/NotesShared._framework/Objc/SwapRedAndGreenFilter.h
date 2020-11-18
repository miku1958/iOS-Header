//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface SwapRedAndGreenFilter : CIFilter
{
    CIImage *_inputImage;
    NSNumber *_inputAmount;
}

@property (copy, nonatomic) NSNumber *inputAmount; // @synthesize inputAmount=_inputAmount;
@property (strong, nonatomic) CIImage *inputImage; // @synthesize inputImage=_inputImage;

+ (id)customAttributes;
- (void).cxx_destruct;
- (id)myKernel;
- (id)outputImage;

@end

