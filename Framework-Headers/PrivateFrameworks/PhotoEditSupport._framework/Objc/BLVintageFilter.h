//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface BLVintageFilter : CIFilter
{
    BOOL _needsReprocess;
    int _lastAmount;
    float _lastStrength;
    CIImage *_inputImage;
    NSNumber *_inputAmount;
    NSNumber *_inputStrength;
    CIFilter *_colorCubeFilter;
    CIFilter *_maskFilter;
}

@property (strong, nonatomic) CIFilter *colorCubeFilter; // @synthesize colorCubeFilter=_colorCubeFilter;
@property (copy, nonatomic) NSNumber *inputAmount; // @synthesize inputAmount=_inputAmount;
@property (strong, nonatomic) CIImage *inputImage; // @synthesize inputImage=_inputImage;
@property (copy, nonatomic) NSNumber *inputStrength; // @synthesize inputStrength=_inputStrength;
@property (strong, nonatomic) CIFilter *maskFilter; // @synthesize maskFilter=_maskFilter;

- (void).cxx_destruct;
- (id)init;
- (id)outputImage;
- (void)setDefaults;

@end

